﻿#pragma once


// MyDlg 对话框

class MyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~MyDlg();
void foo(CImage& img, int& sx, int& sy, int& w, int& h);
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CButton pic;
	CButton x;
	
	afx_msg void OnBnClickedButton1();
};
