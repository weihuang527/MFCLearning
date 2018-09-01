#pragma once
#define _WIN32_WINNT 0x0502
#include <afxwin.h>

class MyApp :public CWinApp
{
public:
	virtual BOOL InitInstance();
};

class MyMainWindow :public CFrameWnd
{
public:
	MyMainWindow();
};