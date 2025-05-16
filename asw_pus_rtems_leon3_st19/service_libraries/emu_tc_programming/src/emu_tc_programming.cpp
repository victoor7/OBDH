/*
 * emu_tc_programming.cpp
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

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//#define FT_UAH_ASW_Event_Action_0130

//#define FT_UAH_ASW_Ev_Disabled_0140

//#define FT_UAH_ASW_Ev_Action_Disabled_0150

#define FT_UAH_ASW_Event_Action_Delete_Action_Error_0160

#ifdef FT_UAH_ASW_Event_Action_0130

#define FT_0130_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_0130_TIME_step1 (OBT_AFTER_POWER_ON + 4)
#define FT_0130_TIME_step2 (OBT_AFTER_POWER_ON + 9)
#define FT_0130_TIME_step3 (OBT_AFTER_POWER_ON + 20)
#define FT_0130_TIME_step4 (OBT_AFTER_POWER_ON + 30)
#define FT_0130_TIME_step5 (OBT_AFTER_POWER_ON + 40)


//DONE 17 Complete Test in order to force the DeviceCommandOff execution
//as recovery action After step 5.

EmuGSS_TCProgram20_3_uint8 prog_FT_0130_step_0A(FT_0130_TIME_step0,
		"FT_UAH_ASW_ICU_Monitoring_0130 step 0, Set PID 15 to 5",15,5); //ponemos a 5 el PID 15

EmuGSS_TCProgram12_5_Limit_UINT8 prog_FT_0130_step_1(FT_0130_TIME_step1,
		"FT_UAH_ASW_ICU_Monitoring_0130 step 0B, Config PMODID 0 for monitoring PID 15",
		0, 15, 1, 2, 1, 0x4001, 20, 0x4002); //configuramos el monitor

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0130_step_2(FT_0130_TIME_step2,
					"FT_UAH_ASW_Event_Action_0130 step 1, 0x4002 Action is Device  Off",
					0x4002, DeviceCommandOff); //asociamos el evento 4002 a que se apague el dispositivo

//lo que haría ahora sería activar el monitor y despues activar que se haga la acción definida
//con los comandos hemos hecho las configuracione sy ahora hay que activarlas para que funcionen en el test

//[12,1] habilitamos monitoreo
EmuGSS_TCProgram12_1 prog_FT_0130_step3(FT_0130_TIME_step3,
		"FT_UAH_ASW_Event_Action_0130 step 3, Habilita PMONID 0 " , 0);


//[19,4] habilitamos asociación
EmuGSS_TCProgram19_4 prog_FT_0130_step4(FT_0130_TIME_step4, "FT_UAH_ASW_Event_Action_0130 "
		"Step 4,Enable Event: 0x4002 Action:Device Off", 0x4002);


EmuGSS_TCProgram20_3_uint8 prog_FT_0130_step_5(FT_0130_TIME_step5,
		"FT_UAH_ASW_Monitoring_0130 step 5, Update PID 15 to 99",15,99); //aquí sacamos el parámetro del intervalo válido


#endif


#ifdef FT_UAH_ASW_Ev_Disabled_0140

#define FT_0140_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_0140_TIME_step1 (OBT_AFTER_POWER_ON + 4)
#define FT_0140_TIME_step2 (OBT_AFTER_POWER_ON + 9)
#define FT_0140_TIME_step3 (OBT_AFTER_POWER_ON + 10)
#define FT_0140_TIME_step4 (OBT_AFTER_POWER_ON + 12)
#define FT_0140_TIME_step5 (OBT_AFTER_POWER_ON + 14)
#define FT_0140_TIME_step6 (OBT_AFTER_POWER_ON + 16)
#define FT_0140_TIME_step7 (OBT_AFTER_POWER_ON + 20)
#define FT_0140_TIME_step8 (OBT_AFTER_POWER_ON + 40)

//DONE 18 Create the test as a modification of the 0130 test, but disabling the event
//, so the action is not executed (nor the event is reported)

EmuGSS_TCProgram20_3_uint8 prog_FT_0140_step_0A(FT_0140_TIME_step0,
		"FT_UAH_ASW_ICU_Monitoring_0140 step 0, Set PID 15 to 5",15,5); //ponemos a 5 el PID 15

EmuGSS_TCProgram12_5_Limit_UINT8 prog_FT_0140_step_1(FT_0140_TIME_step1,
		"FT_UAH_ASW_ICU_Monitoring_0140 step 0B, Config PMODID 0 for monitoring PID 15",
		0, 15, 1, 2, 1, 0x4001, 20, 0x4002); //configuramos el monitor

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0140_step_2(FT_0140_TIME_step2,
					"FT_UAH_ASW_Event_Action_0140 step 1, 0x4002 Action is Device  Off",
					0x4002, DeviceCommandOff); //asociamos el evento 4002 a que se apague el dispositivo

//[12,1] habilitamos monitoreo
EmuGSS_TCProgram12_1 prog_FT_0140_step3(FT_0140_TIME_step3,
		"FT_UAH_ASW_Event_Action_0140 step 3, Habilita PMONID 0 " , 0);


//[19,4] habilitamos asociación
EmuGSS_TCProgram19_4 prog_FT_0140_step4(FT_0140_TIME_step4, "FT_UAH_ASW_Event_Action_0140 "
		"Step 4,Enable Event: 0x4002 Action:Device Off", 0x4002);

//[5,6] deshabilitamos el evento 4002 para que no se reporte ni se haga la acción asignada

EmuGSS_TCProgram5_6 prog_FT_0140_step5(FT_0140_TIME_step5,"FT_UAH_ASW_Event_Action_0130 "
		"Step 5, Deshabilita EvID 4002", 0x4002);


EmuGSS_TCProgram20_3_uint8 prog_FT_0140_step6(FT_0140_TIME_step8,
		"FT_UAH_ASW_Monitoring_0140 step 6, Update PID 15 to 99",15,99);

//en este test, a la vista de lo que piden, solo se reporta la transición, el evento
//no se reporta ni la acción asociada se lleva a cabo. No se para que son los
//otros dos steps ya que no nos piden deshabilitar el monitoreo

//en otras palabras, no recibimos la TM[5,4] porque no está activado el evento y por tanto
//tampoco se lleva a cabo la acción asociada al evento. Sin embargo la TM[12,12] sí que
//llega pues no hemos deshabilitado el monitor (no nos lo pedían)

#endif



#ifdef FT_UAH_ASW_Ev_Action_Disabled_0150

#define FT_0150_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_0150_TIME_step1 (OBT_AFTER_POWER_ON + 4)
#define FT_0150_TIME_step2 (OBT_AFTER_POWER_ON + 9)
#define FT_0150_TIME_step3 (OBT_AFTER_POWER_ON + 10)
#define FT_0150_TIME_step4 (OBT_AFTER_POWER_ON + 12)
#define FT_0150_TIME_step5 (OBT_AFTER_POWER_ON + 14)
#define FT_0150_TIME_step6 (OBT_AFTER_POWER_ON + 16)
#define FT_0150_TIME_step7 (OBT_AFTER_POWER_ON + 20)
#define FT_0150_TIME_step8 (OBT_AFTER_POWER_ON + 40)

//DONE 19 Create a test as a modification of the 0140 test, but disabling the
//event-action, so the action is not executed but the event is reported

//Aquí digo lo mismo que antes, aunque haya todos esos pasos definidos, voy a
//utilizar únicamente los necesarios para cumplir con el test

//Lo que vamos a hacer es deshabilitar lo que configura el [19,1], aunque lo habilite
// y despues lo deshabilite es solo para que se vea en el test lo que hay que quitar

//Con esto, esperamos una [5,4] que reporte el evento pero NO un report de Device Off

EmuGSS_TCProgram20_3_uint8 prog_FT_0150_step_0A(FT_0150_TIME_step0,
		"FT_UAH_ASW_ICU_Monitoring_0150 step 0, Set PID 15 to 5",15,5); //ponemos a 5 el PID 15

EmuGSS_TCProgram12_5_Limit_UINT8 prog_FT_0150_step_1(FT_0150_TIME_step1,
		"FT_UAH_ASW_ICU_Monitoring_0150 step 0B, Config PMODID 0 for monitoring PID 15",
		0, 15, 1, 2, 1, 0x4001, 20, 0x4002); //configuramos el monitor

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0150_step_2(FT_0150_TIME_step2,
					"FT_UAH_ASW_Event_Action_0150 step 1, 0x4002 Action is Device  Off",
					0x4002, DeviceCommandOff); //asociamos el evento 4002 a que se apague el dispositivo

//[12,1] habilitamos monitoreo
EmuGSS_TCProgram12_1 prog_FT_0150_step3(FT_0150_TIME_step3,
		"FT_UAH_ASW_Event_Action_0150 step 3, Habilita PMONID 0 " , 0);


//[19,4] habilitamos asociación
EmuGSS_TCProgram19_4 prog_FT_0150_step4(FT_0150_TIME_step4, "FT_UAH_ASW_Event_Action_0150 "
		"Step 4,Enable Event: 0x4002 Action:Device Off", 0x4002);

// [19,5] deshabilitamos la asociación acción-evento 4002 para que no se realice
// la acción pero se reporte el evento

EmuGSS_TCProgram19_5 prog_FT_0150_step5(FT_0150_TIME_step7, "FT_UAH_ASW_Event_Action_0150 "
		"Step 5,Disable Event: 0x4002 Action:Device Off", 0x4002);


EmuGSS_TCProgram20_3_uint8 prog_FT_0150_step6(FT_0150_TIME_step8,
		"FT_UAH_ASW_Monitoring_0150 step 6, Update PID 15 to 99",15,99);

#endif




#ifdef FT_UAH_ASW_Event_Action_Delete_Action_Error_0160

#define FT_0160_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_0160_TIME_step1 (OBT_AFTER_POWER_ON + 4)
#define FT_0160_TIME_step2 (OBT_AFTER_POWER_ON + 9)
#define FT_0160_TIME_step3 (OBT_AFTER_POWER_ON + 10)
#define FT_0160_TIME_step4 (OBT_AFTER_POWER_ON + 12)
#define FT_0160_TIME_step5 (OBT_AFTER_POWER_ON + 14)
#define FT_0160_TIME_step6 (OBT_AFTER_POWER_ON + 16)
#define FT_0160_TIME_step7 (OBT_AFTER_POWER_ON + 20)
#define FT_0160_TIME_step8 (OBT_AFTER_POWER_ON + 40)

//DONE 20 Create a test to force the failure when a TC tries to delete an Ev-Action
// that has been added previously

//yo creo que si intentamos lanzar una 19,2 para borrar la asociación sin que esta
//esté deshabilitada, va a dar error

EmuGSS_TCProgram20_3_uint8 prog_FT_0160_step_0A(FT_0160_TIME_step0,
		"FT_UAH_ASW_ICU_Monitoring_0160 step 0, Set PID 15 to 5",15,5); //ponemos a 5 el PID 15

EmuGSS_TCProgram12_5_Limit_UINT8 prog_FT_0160_step_1(FT_0160_TIME_step1,
		"FT_UAH_ASW_ICU_Monitoring_0160 step 0B, Config PMODID 0 for monitoring PID 15",
		0, 15, 1, 2, 1, 0x4001, 20, 0x4002); //configuramos el monitor

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0160_step_2(FT_0160_TIME_step2,
					"FT_UAH_ASW_Event_Action_0160 step 1, 0x4002 Action is Device  Off",
					0x4002, DeviceCommandOff); //asociamos el evento 4002 a que se apague el dispositivo

//[12,1] habilitamos monitoreo
EmuGSS_TCProgram12_1 prog_FT_0160_step3(FT_0160_TIME_step3,
		"FT_UAH_ASW_Event_Action_0160 step 3, Habilita PMONID 0 " , 0);


//[19,4] habilitamos asociación
EmuGSS_TCProgram19_4 prog_FT_0160_step4(FT_0160_TIME_step4, "FT_UAH_ASW_Event_Action_0160 "
		"Step 4,Enable Event: 0x4002 Action:Device Off", 0x4002);

// [19,2] vamos a ver que pasa si intentamos borrar la asociación activa
EmuGSS_TCProgram19_2 prog_FT_0160_step5(FT_0160_TIME_step7, "FT_UAH_ASW_Event_Action_0160 "
		"Step 5,Delete Event: 0x4002 Action:Device Off", 0x4002);


EmuGSS_TCProgram20_3_uint8 prog_FT_0160_step6(FT_0160_TIME_step8,
		"FT_UAH_ASW_Monitoring_0160 step 6, Update PID 15 to 99",15,99);

//efectivamente, al mandar el 19,2, nos llega una 1,4 que dice que la asocición está
//habilitada y por tanto no se puede borrar.

#endif
