
// Week11View.cpp : CWeek11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week11.h"
#endif

#include "Week11Set.h"
#include "Week11Doc.h"
#include "Week11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11View

IMPLEMENT_DYNCREATE(CWeek11View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek11View, CRecordView)
END_MESSAGE_MAP()

// CWeek11View ����/����

CWeek11View::CWeek11View()
	: CRecordView(IDD_WEEK11_FORM)
	, id(_T(""))
	, name(_T(""))
	, num(_T(""))
	, majpr(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, tel(_T(""))
	, home(_T(""))
	, jpeg(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek11View::~CWeek11View()
{
}

void CWeek11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->column8);
}

BOOL CWeek11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week11Set;
	CRecordView::OnInitialUpdate();

}


// CWeek11View ���

#ifdef _DEBUG
void CWeek11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek11Doc* CWeek11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11Doc)));
	return (CWeek11Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11View ���ݿ�֧��
CRecordset* CWeek11View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek11View ��Ϣ�������
