/********************************************************
** Copyright 2002 Earth Resource Mapping Ltd.
** This document contains proprietary source code of
** Earth Resource Mapping Ltd, and can only be used under
** one of the three licenses as described in the 
** license.txt file supplied with this distribution. 
** See separate license.txt file for license details 
** and conditions.
**
** This software is covered by US patent #6,442,298,
** #6,102,897 and #6,633,688.  Rights to use these patents 
** is included in the license agreements.
**
** FILE:     $Archive: /NCS/Source/include/NCSEvent.h $
** CREATED:  05/12/2002 3:27:34 PM
** AUTHOR:   Simon Cope
** PURPOSE:  NCSJPCEvent class
** EDITS:    [01] 28-02-05 RAR Shifted to NCSUtil
 *******************************************************/

#ifndef NCSEVENT_H
#define NCSEVENT_H

#include "NCSDefs.h"
#include "NCSTypes.h"
#include "NCSMutex.h"

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

typedef void * NCSEvent;
NCSEvent NCSEventCreateEx(BOOLEAN bManualReset, BOOLEAN bInitialState, char *pLockName);
NCSEvent NCSEventCreate();
BOOLEAN NCSEventSet(NCSEvent event);
BOOLEAN NCSEventReset(NCSEvent event);
BOOLEAN NCSEventWait(NCSEvent event, NCSTimeStampMs tsTimeout);
void NCSEventDestroy(NCSEvent event);

#ifdef __cplusplus
}

// Segment class
class NCS_EXPORT CNCSEvent {
public:
	CNCSEvent(bool bManualReset = false, bool bInitialState = false, char *pLockName = NULL);
	virtual ~CNCSEvent();
	bool Set();
	bool Reset();
	bool Wait(NCSTimeStampMs tsTimeout = -1);

private:
#ifdef WIN32
	HANDLE m_hEvent;
#else
	bool m_bManualReset;
	char *m_pLockName;
	CNCSMutex m_Mutex;
	bool m_bSignalled;
#endif
};

#endif //__cplusplus

#endif // NCSEVENT_H
