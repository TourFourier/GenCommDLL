#pragma once

#ifdef DLL_IMPORT
#define DLL  _declspec(dllimport)
#else
#define DLL  _declspec(dllexport)
#endif

#include "ICommunication.h"
class DLL CCommunication_TCP :
	public ICommunication
{
public:
	CCommunication_TCP();
	~CCommunication_TCP();
};

