// Traversal_Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week14.�ۺ�ʵ����.h"
#include "Traversal_Dlg.h"
#include "afxdialogex.h"


// Traversal_Dlg �Ի���

IMPLEMENT_DYNAMIC(Traversal_Dlg, CDialogEx)

Traversal_Dlg::Traversal_Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Traversal_DLG, pParent)
	, trav(_T(""))
{

}

Traversal_Dlg::~Traversal_Dlg()
{
}

void Traversal_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, trav);
}


BEGIN_MESSAGE_MAP(Traversal_Dlg, CDialogEx)
	
END_MESSAGE_MAP()


// Traversal_Dlg ��Ϣ�������






