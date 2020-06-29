
// Week11.classView.cpp : CWeek11classView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week11.class.h"
#endif

#include "Week11.classSet.h"
#include "Week11.classDoc.h"
#include "Week11.classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11classView

IMPLEMENT_DYNCREATE(CWeek11classView, CRecordView)

BEGIN_MESSAGE_MAP(CWeek11classView, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CWeek11classView ����/����

CWeek11classView::CWeek11classView()
	: CRecordView(IDD_WEEK11CLASS_FORM)
	, ID(0)
	, name(_T(""))
	, num(_T(""))
	, age(_T(""))
	, tel(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek11classView::~CWeek11classView()
{
}

void CWeek11classView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1,m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CWeek11classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek11classView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week11classSet;
	CRecordView::OnInitialUpdate();

}


// CWeek11classView ��ӡ

BOOL CWeek11classView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek11classView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek11classView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek11classView ���

#ifdef _DEBUG
void CWeek11classView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek11classView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek11classDoc* CWeek11classView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11classDoc)));
	return (CWeek11classDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11classView ���ݿ�֧��
CRecordset* CWeek11classView::OnGetRecordset()
{
	return m_pSet;
}



// CWeek11classView ��Ϣ�������
