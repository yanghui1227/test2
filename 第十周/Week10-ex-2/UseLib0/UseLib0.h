
// UseLib0.h : UseLib0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUseLib0App:
// �йش����ʵ�֣������ UseLib0.cpp
//

class CUseLib0App : public CWinApp
{
public:
	CUseLib0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUseLib0App theApp;
