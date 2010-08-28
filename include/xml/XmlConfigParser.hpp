// Copyright (c) 2010 Ryan Seal <rlseal -at- gmail.com>
//
// This file is part of GnuRadar Software.
//
// GnuRadar is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//  
// GnuRadar is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with GnuRadar.  If not, see <http://www.gnu.org/licenses/>.
#ifndef XML_CONFIG_PARSER_HPP
#define XML_CONFIG_PARSER_HPP

#include <iostream>
#include <stdexcept>
#include <ticpp/ticpp.h>
#include <map>
#include <boost/lexical_cast.hpp>

class XmlConfigParser
{

   public:

      XmlConfigParser( const std::string& fileName ) {

         ticpp::Document doc( fileName );
         ticpp::Element* elementPtr;
         
         try{
            doc.LoadFile();
            elementPtr = doc.FirstChildElement()->FirstChildElement();

            std::cout << elementPtr->Value() << std::endl;

            ticpp::Iterator< ticpp::Element > iter = 
               elementPtr->FirstChildElement();
            
            while( iter != iter.end() )
            {
               std::cout << iter->Value() << std::endl;
               if( iter->Value() == "window" || iter->Value() == "channel" ) {
                  ParseChild(iter.Get());
               }
               else {
                  tokens_.insert( ValueType( iter->Value() , iter->GetText() ) );
               }

               ++iter;
            }
            std::cout << "ending ctor" << std::endl;
         }
         catch( ticpp::Exception& e ) {
            std::cout << e.what();
         }

      }

      template <typename T> 
         const T Get( const std::string& name ){

            T result = T();

            TokenIter iter = tokens_.find( name );

            if( iter == tokens_.end() )
            {
               throw std::runtime_error( 
                     "XmlConfigParser exception. Could not find element " + 
                     name
                     );
            }
            
            try{
               result = boost::lexical_cast<T>( iter->second );
            }
            catch( boost::exception& e )
            {
               std::cout << "XmlConfigParser.Get() failed to convert " 
                  << iter->first << " to " << iter->second << std::endl;
            }

            return result;
         }

   private:

      typedef std::map< std::string, std::string > Tokens;
      typedef Tokens::iterator TokenIter;
      typedef Tokens::value_type ValueType;

      Tokens tokens_;

      void ParseChild( ticpp::Element* iter )
      {
         std::string number = iter->FirstAttribute()->Value();
         std::string name;

         ticpp::Iterator< ticpp::Element > child = iter->FirstChildElement();
         
         while( child != child.end() )
         {
            name = child->Value() + "_" + number;
            tokens_.insert( ValueType( name, child->GetText() ) );
            ++child;
         }
      }
};

#endif