
// Week1-ex-2.h : Week1-ex-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek1ex2App:
// �йش����ʵ�֣������ Week1-ex-2.cpp
//

class CWeek1ex2App : public CWinAppEx
{
public:
	CWeek1ex2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek1ex2App theApp;
