﻿
// 4.20.1Dlg.h: 头文件
//

#pragma once


// CMy4201Dlg 对话框
class CMy4201Dlg : public CDialogEx
{
// 构造
public:
	CMy4201Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY4201_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	int a;
	int b;
	int c;
	double d;
	double e;
	double f;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	CString g;
	CString h;
	CString q;
	CString w;
};
