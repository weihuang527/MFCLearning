#pragma once
#define _WIN32_WINNT 0x0502
#include <afxwin.h>

class MyApp :public CWinApp
{
public:
	BOOL InitInstance()//������ڵ�
	{
		//������ܴ��ڶ���
		CFrameWnd *f = new CFrameWnd();

		this->m_pMainWnd = f;

		//��������
		f->Create(NULL, TEXT("Hello,this is my first MFC"));
		f->ShowWindow(SW_SHOW);

		return true;
	}
};