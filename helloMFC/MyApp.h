#pragma once
#define _WIN32_WINNT 0x0502
#include <afxwin.h>

class MyApp :public CWinApp
{
public:
	BOOL InitInstance()//程序入口点
	{
		//创建框架窗口对象
		CFrameWnd *f = new CFrameWnd();

		this->m_pMainWnd = f;

		//创建窗口
		f->Create(NULL, TEXT("Hello,this is my first MFC"));
		f->ShowWindow(SW_SHOW);

		return true;
	}
};