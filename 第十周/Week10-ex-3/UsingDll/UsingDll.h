
// UsingDll.h : UsingDll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingDllApp:
// �йش����ʵ�֣������ UsingDll.cpp
//

class CUsingDllApp : public CWinApp
{
public:
	CUsingDllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingDllApp theApp;
