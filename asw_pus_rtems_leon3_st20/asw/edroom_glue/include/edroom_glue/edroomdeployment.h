//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
#ifndef EDROOMDEPLOYMENT_H_
#define EDROOMDEPLOYMENT_H_
 
#include <edroom_glue/edroomdf.h>
#include <public/edroomsl_iface_v1.h>
 
 
//******************************************************************************
// include deployment edroom components
 
#include <public/uah_asw_iface_v1.h>
#include <public/cctcmanager_iface_v1.h>
#include <public/cchk_fdirmng_iface_v1.h>
#include <public/ccbkgtcexec_iface_v1.h>
// ***********************************************************************
// class CEDROOMSystemMemory
// ***********************************************************************
 
class CEDROOMSystemMemory{
 
	//!Messages Memory of component comp1
	CEDROOMMessage	comp1Messages[10];
	bool	comp1MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp1QueueNodes[13];
	bool	comp1QueueNodesMarks[13];
 
	//!Messages Memory of component comp2
	CEDROOMMessage	comp2Messages[10];
	bool	comp2MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp2QueueNodes[10];
	bool	comp2QueueNodesMarks[10];
 
	//!Messages Memory of component comp3
	CEDROOMMessage	comp3Messages[10];
	bool	comp3MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp3QueueNodes[13];
	bool	comp3QueueNodesMarks[13];
 
	//!Messages Memory of component comp4
	CEDROOMMessage	comp4Messages[10];
	bool	comp4MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp4QueueNodes[10];
	bool	comp4QueueNodesMarks[10];
 
	public:
 
	UAH_ASW::CEDROOMMemory comp1Memory;
	CCTCManager::CEDROOMMemory comp2Memory;
	CCHK_FDIRMng::CEDROOMMemory comp3Memory;
	CCBKGTCExec::CEDROOMMemory comp4Memory;
 
//!Set Memory
	void SetMemory();
};
 
class CEDROOMSystemCommSAP{
 
	 friend class CEDROOMSystemDeployment;
//!Communication Service Access Point
 
	CEDROOMLocalCommSAP m_localCommSAP;
 
 
//!Conections
 
	CEDROOMLocalConnection connections[2];
 
	UAH_ASW   * mp_comp1;
	CCTCManager   * mp_comp2;
	CCHK_FDIRMng   * mp_comp3;
	CCBKGTCExec   * mp_comp4;
 
 
//!Set Components
 
	void SetComponents(UAH_ASW   *p_comp1,
							CCTCManager   *p_comp2,
							CCHK_FDIRMng   *p_comp3,
							CCBKGTCExec   *p_comp4);
 
 
//Signal Conversion
 
	static TEDROOMSignal C4BKGTCExec_PBKGExecCtrl__C2TCManager_PBKGExecCtrl(TEDROOMSignal signal);
	static TEDROOMSignal C2TCManager_PBKGExecCtrl__C4BKGTCExec_PBKGExecCtrl(TEDROOMSignal signal);
 
//Signal Conversion
 
	static TEDROOMSignal C3HK_FDIRMng_PHK_FDIRCtrl__C2TCManager_PHK_FDIRCtrl(TEDROOMSignal signal);
	static TEDROOMSignal C2TCManager_PHK_FDIRCtrl__C3HK_FDIRMng_PHK_FDIRCtrl(TEDROOMSignal signal);
 
 
//!Register Interfaces
	void RegisterInterfaces();
 
//!Set Local Connections
	void SetLocalConnections();
 
//!Set Remote Connections
	void SetRemoteConnections();
 
//!Set Connections
	void SetConnections();
 
};
 
class CEDROOMSystemDeployment{
 
//!Kernel
	Pr_Kernel	kernel;
 
#ifdef CONFIG_EDROOMDEPLOYMENT_NEED_TASK
 
//!Main Task
static Pr_TaskRV_t main_task(Pr_TaskP_t);
 
#endif
	CEDROOMSystemMemory   systemMemory;
	CEDROOMSystemCommSAP  systemCommSAP;
 
	UAH_ASW   * mp_comp1;
	CCTCManager   * mp_comp2;
	CCHK_FDIRMng   * mp_comp3;
	CCBKGTCExec   * mp_comp4;
 
	public:
 
	CEDROOMSystemDeployment();
 
//!Deployment Configuration
	void Config(UAH_ASW   *p_comp1,
					CCTCManager   *p_comp2,
					CCHK_FDIRMng   *p_comp3,
					CCBKGTCExec   *p_comp4);
 
//!Deployment Start
	void Start();
 
//!StartComponents
	void StartComponents();
//!Config Components
 
	UAH_ASW::CEDROOMMemory 		* GetComp1Memory(){return &systemMemory.comp1Memory;}
	CCTCManager::CEDROOMMemory 		* GetComp2Memory(){return &systemMemory.comp2Memory;}
	CCHK_FDIRMng::CEDROOMMemory 		* GetComp3Memory(){return &systemMemory.comp3Memory;}
	CCBKGTCExec::CEDROOMMemory 		* GetComp4Memory(){return &systemMemory.comp4Memory;}
 
};
#endif
