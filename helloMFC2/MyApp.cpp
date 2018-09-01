#include "MyApp.h"

BOOL MyApp::InitInstance()
{
	this->m_pMainWnd = new MyMainWindow();
	this->m_pMainWnd->ShowWindow(this->m_nCmdShow);
	this->m_pMainWnd->UpdateWindow();

	return true;
}

MyMainWindow::MyMainWindow()
{
	Create(NULL, TEXT("hello,this is my second MFC"));
}