
// Week1-ex-����ʵ��.h : Week1-ex-����ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek1ex����ʵ��App:
// �йش����ʵ�֣������ Week1-ex-����ʵ��.cpp
//

class CWeek1ex����ʵ��App : public CWinAppEx
{
public:
	CWeek1ex����ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek1ex����ʵ��App theApp;
