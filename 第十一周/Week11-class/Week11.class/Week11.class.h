
// Week11.class.h : Week11.class Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek11classApp:
// �йش����ʵ�֣������ Week11.class.cpp
//

class CWeek11classApp : public CWinAppEx
{
public:
	CWeek11classApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek11classApp theApp;
