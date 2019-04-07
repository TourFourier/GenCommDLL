#pragma once

#ifdef DLL_IMPORT
#define DLL  _declspec(dllimport)
#else
#define DLL  _declspec(dllexport)
#endif

class DLL CSafeMessageQueue
{
	CRITICAL_SECTION m_cs;
	std::queue<IMessage&> m_qMessageQueue;
public:
	CSafeMessageQueue();
	~CSafeMessageQueue();

	void Push(IMessage& message);
	IMessage& Pop();
};

