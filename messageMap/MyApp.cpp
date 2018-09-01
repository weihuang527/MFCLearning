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
		CRect(100,100,680,300));//���ƴ��ڴ�С����ʼλ�õ�����λ��
	
}

void CMainWindow::OnPaint()//���������Ϣ��Paint��Ϣ
{
	CPaintDC dc(this);
	//dc.Ellipse(100, 100, 200, 300);//����һ����Բ
	CRect rect;
	this->GetClientRect(&rect);
	dc.DrawText(TEXT("Hello, MFC!"), -1, &rect,
		DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}

void CMainWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	this->MessageBox(TEXT("The left mouse button is pressed!"));
}