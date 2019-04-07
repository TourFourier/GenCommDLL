#pragma once

#ifdef DLL_IMPORT
#define DLL  _declspec(dllimport)
#else
#define DLL  _declspec(dllexport)
#endif

class DLL IMessage
{
public:
	IMessage();
	virtual ~IMessage();
};

