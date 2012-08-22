//
// Machine generated by gen_usrp_dbid.py from usrp_dbid.dat
// Do not edit by hand.  All edits will be overwritten.
//

/*
 * Copyright 2005 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include <usrp/usrp/prims.h>
#include <usrp/usrp/dbid.h>
#include <stdio.h>

#define NELEM(x) sizeof(x)/sizeof(x[0])

static struct {
  unsigned short	dbid;
  const char	       *name;
} dbid_map[] = {
  { USRP_DBID_BASIC_TX,         "Basic Tx" },
  { USRP_DBID_BASIC_RX,         "Basic Rx" },
  { USRP_DBID_DBS_RX,           "DBS Rx" },
  { USRP_DBID_TV_RX,            "TV Rx" },
  { USRP_DBID_FLEX_400_RX,      "Flex 400 Rx" },
  { USRP_DBID_FLEX_900_RX,      "Flex 900 Rx" },
  { USRP_DBID_FLEX_1200_RX,     "Flex 1200 Rx" },
  { USRP_DBID_FLEX_2400_RX,     "Flex 2400 Rx" },
  { USRP_DBID_FLEX_400_TX,      "Flex 400 Tx" },
  { USRP_DBID_FLEX_900_TX,      "Flex 900 Tx" },
  { USRP_DBID_FLEX_1200_TX,     "Flex 1200 Tx" },
  { USRP_DBID_FLEX_2400_TX,     "Flex 2400 Tx" },
  { USRP_DBID_TV_RX_REV_2,      "TV Rx Rev 2" },
  { USRP_DBID_DBS_RX_CLKMOD,    "DBS Rx ClkMod" },
  { USRP_DBID_LF_TX,            "LF Tx" },
  { USRP_DBID_LF_RX,            "LF Rx" },
  { USRP_DBID_FLEX_400_RX_MIMO_A, "Flex 400 Rx MIMO A" },
  { USRP_DBID_FLEX_900_RX_MIMO_A, "Flex 900 Rx MIMO A" },
  { USRP_DBID_FLEX_1200_RX_MIMO_A, "Flex 1200 Rx MIMO A" },
  { USRP_DBID_FLEX_2400_RX_MIMO_A, "Flex 2400 Rx MIMO A" },
  { USRP_DBID_FLEX_400_TX_MIMO_A, "Flex 400 Tx MIMO A" },
  { USRP_DBID_FLEX_900_TX_MIMO_A, "Flex 900 Tx MIMO A" },
  { USRP_DBID_FLEX_1200_TX_MIMO_A, "Flex 1200 Tx MIMO A" },
  { USRP_DBID_FLEX_2400_TX_MIMO_A, "Flex 2400 Tx MIMO A" },
  { USRP_DBID_FLEX_400_RX_MIMO_B, "Flex 400 Rx MIMO B" },
  { USRP_DBID_FLEX_900_RX_MIMO_B, "Flex 900 Rx MIMO B" },
  { USRP_DBID_FLEX_1200_RX_MIMO_B, "Flex 1200 Rx MIMO B" },
  { USRP_DBID_FLEX_2400_RX_MIMO_B, "Flex 2400 Rx MIMO B" },
  { USRP_DBID_FLEX_400_TX_MIMO_B, "Flex 400 Tx MIMO B" },
  { USRP_DBID_FLEX_900_TX_MIMO_B, "Flex 900 Tx MIMO B" },
  { USRP_DBID_FLEX_1200_TX_MIMO_B, "Flex 1200 Tx MIMO B" },
  { USRP_DBID_FLEX_2400_TX_MIMO_B, "Flex 2400 Tx MIMO B" },
  { USRP_DBID_FLEX_2200_RX_MIMO_B, "Flex 2200 Rx MIMO B" },
  { USRP_DBID_FLEX_2200_TX_MIMO_B, "Flex 2200 Tx MIMO B" },
  { USRP_DBID_FLEX_1800_RX,     "Flex 1800 Rx" },
  { USRP_DBID_FLEX_1800_TX,     "Flex 1800 Tx" },
  { USRP_DBID_FLEX_1800_RX_MIMO_A, "Flex 1800 Rx MIMO A" },
  { USRP_DBID_FLEX_1800_TX_MIMO_A, "Flex 1800 Tx MIMO A" },
  { USRP_DBID_FLEX_1800_RX_MIMO_B, "Flex 1800 Rx MIMO B" },
  { USRP_DBID_FLEX_1800_TX_MIMO_B, "Flex 1800 Tx MIMO B" },
  { USRP_DBID_TV_RX_REV_3,      "TV Rx Rev 3" },
  { USRP_DBID_DTT754,           "DTT754" },
  { USRP_DBID_DTT768,           "DTT768" },
  { USRP_DBID_TV_RX_MIMO,       "TV Rx MIMO" },
  { USRP_DBID_TV_RX_REV_2_MIMO, "TV Rx Rev 2 MIMO" },
  { USRP_DBID_TV_RX_REV_3_MIMO, "TV Rx Rev 3 MIMO" },
  { USRP_DBID_WBX_LO_TX,        "WBX LO TX" },
  { USRP_DBID_WBX_LO_RX,        "WBX LO RX" },
  { USRP_DBID_WBX_NG_TX,        "WBX NG TX" },
  { USRP_DBID_WBX_NG_RX,        "WBX NG RX" },
  { USRP_DBID_XCVR2450_TX,      "XCVR2450 Tx" },
  { USRP_DBID_XCVR2450_RX,      "XCVR2450 Rx" },
  { USRP_DBID_BITSHARK_RX,      "Bitshark Rx" },
  { USRP_DBID_EXPERIMENTAL_TX,  "Experimental Tx" },
  { USRP_DBID_EXPERIMENTAL_RX,  "Experimental Rx" },
};

const std::string
usrp_dbid_to_string (int dbid)
{
  if (dbid == -1)
    return "<none>";

  if (dbid == -2)
    return "<invalid EEPROM contents>";

  for (unsigned i = 0; i < NELEM (dbid_map); i++)
    if (dbid == dbid_map[i].dbid)
      return dbid_map[i].name;

  char tmp[64];
  snprintf (tmp, sizeof (tmp), "Unknown (0x%04x)", dbid);
  return tmp;
}
