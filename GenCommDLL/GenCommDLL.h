// GenCommDLL.h : main header file for the GenCommDLL DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CGenCommDLLApp
// See GenCommDLL.cpp for the implementation of this class
//

class CGenCommDLLApp : public CWinApp
{
public:
	CGenCommDLLApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
