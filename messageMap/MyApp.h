#pragma once
#define _WIN32_WINNT 0x0502
#include <afxwin.h>

class CMyApp :public CWinApp
{
public:
	virtual BOOL InitInstance();
};

class CMainWindow :public CFrameWnd
{
public:
	CMainWindow();

protected:
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP();
};