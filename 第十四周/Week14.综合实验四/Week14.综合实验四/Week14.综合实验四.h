
// Week14.�ۺ�ʵ����.h : Week14.�ۺ�ʵ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek14�ۺ�ʵ����App:
// �йش����ʵ�֣������ Week14.�ۺ�ʵ����.cpp
//

class CWeek14�ۺ�ʵ����App : public CWinApp
{
public:
	CWeek14�ۺ�ʵ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek14�ۺ�ʵ����App theApp;
