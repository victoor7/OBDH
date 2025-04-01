/*
 * pus_services_iface_v1.h
 *
 *  Created on: Oct 26, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/


#ifndef PUBLIC__ICUASW_PUS_SERVICES_IFACE_V1_H
#define PUBLIC__ICUASW_PUS_SERVICES_IFACE_V1_H


#include "public/config.h"
#include "public/basic_types.h"
#include "public/serialize.h"
#include "public/cdtchandler_iface_v1.h"
#include "public/cdtcmemdescriptor_iface_v1.h"


#include "public/tc_rate_ctrl.h"

#include "public/pus_service1.h"
#include "public/pus_service3.h"
#include "public/pus_service17.h"
//TODO 01   #include "public/pus_service20.h"


#ifdef __cplusplus
extern "C" {
#endif

//Start up
void pus_services_startup();

//Reboot
void pus_services_mng_reboot();


//Do FDIR
void pus_services_do_FDIR();

//Update Params
void pus_services_update_params();

#ifdef __cplusplus
}
#endif
#endif // PUBLIC__ICUASW_PUS_SERVICES_IFACE_V1_H
