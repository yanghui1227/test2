﻿
// 4.20.1Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "4.20.1.h"
#include "4.20.1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMy4201Dlg 对话框



CMy4201Dlg::CMy4201Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY4201_DIALOG, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
	, c(0)
	, d(0)
	, e(0)
	, f(0)
	, g(_T(""))
	, h(_T(""))
	, q(_T(""))
	, w(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy4201Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, -2147483647, 2147483647);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, -2147483647, 2147483647);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDV_MinMaxInt(pDX, a, -2147483647, 2147483647);
	DDX_Text(pDX, IDC_EDIT4, b);
	DDV_MinMaxInt(pDX, b, -2147483647, 2147483647);
	DDX_Text(pDX, IDC_EDIT5, c);
	DDV_MinMaxInt(pDX, c, -2147483647, 2147483647);
	DDX_Text(pDX, IDC_EDIT6, d);
	DDX_Text(pDX, IDC_EDIT7, e);
	DDX_Text(pDX, IDC_EDIT8, f);
	DDX_Text(pDX, IDC_EDIT9, g);
	DDX_Text(pDX, IDC_EDIT10, h);
	DDX_Text(pDX, IDC_EDIT12, q);
	DDX_Text(pDX, IDC_EDIT13, w);
}

BEGIN_MESSAGE_MAP(CMy4201Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMy4201Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy4201Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy4201Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMy4201Dlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT6, &CMy4201Dlg::OnEnChangeEdit6)
	ON_BN_CLICKED(IDC_BUTTON5, &CMy4201Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMy4201Dlg::OnBnClickedButton6)
END_MESSAGE_MAP()


// CMy4201Dlg 消息处理程序

BOOL CMy4201Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMy4201Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMy4201Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMy4201Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMy4201Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	UpdateData(true);
	a = x + y;
	UpdateData(false);
}


void CMy4201Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	b = x - y;
	UpdateData(false);
	
}


void CMy4201Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	c = x * y;
	UpdateData(false);
}


void CMy4201Dlg::OnBnClickedButton4()
{CString s = _T("除数不可为0");
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	
	if (y == 0)
	{
		q = s;
	}
	else
	{
		d = (double)x / y;
	}
	UpdateData(false);
}


void CMy4201Dlg::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	
	
}


void CMy4201Dlg::OnBnClickedButton5()
{
	CString s = _T("除数不可为0");
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (x == 0 || y == 0)
	{
		w = s;
	}
	else
	{
		e = sqrt(x);
		f = sqrt(y);
	}
	UpdateData(false);
}


void CMy4201Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (x == 0 )
	{
		g = "请输入非零整数";
		h= "请输入非零整数";
	}

	else
	{
		g.Format(_T("1/%d"), x);
		h.Format(_T("1/%d"), y);
	}
	UpdateData(false);
}
