/*
** Copyright (C) 2014 Cisco and/or its affiliates. All rights reserved.
 * Copyright (C) 2002-2013 Sourcefire, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License Version 2 as
 * published by the Free Software Foundation.  You may not use, modify or
 * distribute this program under any other version of the GNU General
 * Public License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
// preprocessor_api.cc author Josh Rosenbaum <jorosenba@cisco.com>

#include "preprocessor_states/preprocessor_api.h"


extern const ConvertMap *arpspoof_map;
extern const ConvertMap *arpspoof_host_map;
extern const ConvertMap *bo_map;
extern const ConvertMap *ftptelnet_map;
extern const ConvertMap *ftptelnet_protocol_map;
extern const ConvertMap *httpinspect_map;
extern const ConvertMap *httpinspect_server_map;
extern const ConvertMap *normalizer_icmp4_map;
extern const ConvertMap *normalizer_icmp6_map;
extern const ConvertMap *normalizer_ip4_map;
extern const ConvertMap *normalizer_ip6_map;
extern const ConvertMap *normalizer_tcp_map;
extern const ConvertMap *sfportscan_map;
extern const ConvertMap *smtp_map;
extern const ConvertMap *stream_global_map;
extern const ConvertMap *stream_tcp_map;
extern const ConvertMap *stream_udp_map;

const std::vector<const ConvertMap*> preprocessor_api = 
{
    arpspoof_map,
    arpspoof_host_map,
    bo_map,
    ftptelnet_map,
    httpinspect_map,
    httpinspect_server_map,
    ftptelnet_protocol_map,
    normalizer_icmp4_map,
    normalizer_icmp6_map,
    normalizer_ip4_map,
    normalizer_ip6_map,
    normalizer_tcp_map,
    sfportscan_map,
    smtp_map,
    stream_global_map,
    stream_tcp_map,
    stream_udp_map,
//    nullptr,
};