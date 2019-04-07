#pragma once

#ifdef DLL_IMPORT
#define DLL  _declspec(dllimport)
#else
#define DLL  _declspec(dllexport)
#endif

class DLL IMessageFactory
{
public:
	IMessageFactory();
	virtual ~IMessageFactory();

	virtual IMessage* CreateMessage(EMessageType type) = 0;
};

