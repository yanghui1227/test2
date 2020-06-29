
// Week14.�ۺ�ʵ����View.cpp : CWeek14�ۺ�ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week14.�ۺ�ʵ����.h"
#endif

#include "Week14.�ۺ�ʵ����Set.h"
#include "Week14.�ۺ�ʵ����Doc.h"
#include "Week14.�ۺ�ʵ����View.h"
#include"Search_Dlg.h"
#include"Sort_Dlg.h"
#include"Traversal_Dlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14�ۺ�ʵ����View

IMPLEMENT_DYNCREATE(CWeek14�ۺ�ʵ����View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek14�ۺ�ʵ����View, CRecordView)
	ON_COMMAND(ID_Sort, &CWeek14�ۺ�ʵ����View::OnSort)
	ON_COMMAND(ID_Search, &CWeek14�ۺ�ʵ����View::OnSearch)
	ON_COMMAND(ID_Traversal, &CWeek14�ۺ�ʵ����View::OnTraversal)
END_MESSAGE_MAP()

// CWeek14�ۺ�ʵ����View ����/����

CWeek14�ۺ�ʵ����View::CWeek14�ۺ�ʵ����View()
	: CRecordView(IDD_WEEK14_FORM)
	, name(_T(""))
	, num(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birth(0)
	, tel(_T(""))
	, home(_T(""))
	, pic(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek14�ۺ�ʵ����View::~CWeek14�ۺ�ʵ����View()
{
}

void CWeek14�ۺ�ʵ����View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1,m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
}

BOOL CWeek14�ۺ�ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14�ۺ�ʵ����View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14�ۺ�ʵ����Set;
	CRecordView::OnInitialUpdate();

}


// CWeek14�ۺ�ʵ����View ���

#ifdef _DEBUG
void CWeek14�ۺ�ʵ����View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14�ۺ�ʵ����View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14�ۺ�ʵ����Doc* CWeek14�ۺ�ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14�ۺ�ʵ����Doc)));
	return (CWeek14�ۺ�ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14�ۺ�ʵ����View ���ݿ�֧��
CRecordset* CWeek14�ۺ�ʵ����View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14�ۺ�ʵ����View ��Ϣ�������


void CWeek14�ۺ�ʵ����View::OnSort()
{
	// TODO: �ڴ���������������
	Sort_Dlg sort_dlg;
	int t = sort_dlg.DoModal();
	if (t == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), sort_dlg.sort);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CWeek14�ۺ�ʵ����View::OnSearch()
{
	// TODO: �ڴ���������������
	Search_Dlg re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CWeek14�ۺ�ʵ����View::OnTraversal()
{
	// TODO: �ڴ���������������
	Traversal_Dlg dlg;
	int n,i;
	CString str,s;
	
	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())

	{ 
		n=m_pSet->GetODBCFieldCount();
		
		
		 for (i = 1; i < n; i++)
		 {
			m_pSet->GetFieldValue((short)i, str);
			s += _T(" ")+str ;
		 }
		 s += _T("\r\n");
		 dlg.trav = s;
		 UpdateData(false);
		 m_pSet->MoveNext();
	}
	if (dlg.DoModal() == IDOK)
	{

	}
	
}
