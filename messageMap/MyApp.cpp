#include "MyApp.h"

BOOL CMyApp::InitInstance()
{
	this->m_pMainWnd = new CMainWindow();
	this->m_pMainWnd->ShowWindow(this->m_nCmdShow);
	this->m_pMainWnd->UpdateWindow();

	return true;
}

BEGIN_MESSAGE_MAP(CMainWindow,CFrameWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

CMainWindow::CMainWindow()
{
	this->Create(NULL, TEXT("MessageMap"),//_T is also ok
		WS_OVERLAPPEDWINDOW | WS_VSCROLL,
		CRect(100,100,680,300));//控制窗口大小，起始位置到结束位置
	
}

void CMainWindow::OnPaint()//处理绘制消息，Paint消息
{
	CPaintDC dc(this);
	//dc.Ellipse(100, 100, 200, 300);//绘制一个椭圆
	CRect rect;
	this->GetClientRect(&rect);
	dc.DrawText(TEXT("Hello, MFC!"), -1, &rect,
		DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}

void CMainWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	this->MessageBox(TEXT("The left mouse button is pressed!"));
}