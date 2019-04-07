#pragma once

#ifdef DLL_IMPORT
#define DLL  _declspec(dllimport)
#else
#define DLL  _declspec(dllexport)
#endif

class DLL IMessage
{
protected:
	GUID m_guid;
	int m_nMessageType;
public:
	IMessage();
	virtual ~IMessage();

	const GUID& GetGuid() { return m_guid; }
	virtual EMessageType GetType() { return (EMessageType)m_nMessageType; }
	virtual int Size() = 0;
	virtual bool ToBuffer(char* pBufer, int nLength);
	virtual bool FromBuffer(char* pBuffer, int nLength);
};

