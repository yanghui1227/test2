
// Week1-ex-1.h : Week1-ex-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek1ex1App:
// �йش����ʵ�֣������ Week1-ex-1.cpp
//

class CWeek1ex1App : public CWinApp
{
public:
	CWeek1ex1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek1ex1App theApp;
