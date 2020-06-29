
// Week11.1View.cpp : CWeek111View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week11.1.h"
#endif

#include "Week11.1Set.h"
#include "Week11.1Doc.h"
#include "Week11.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek111View

IMPLEMENT_DYNCREATE(CWeek111View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek111View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek111View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &CWeek111View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek111View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek111View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek111View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CWeek111View ����/����

CWeek111View::CWeek111View()
	: CRecordView(IDD_WEEK111_FORM)
	, id(0)
	, name(_T(""))
	, number(_T(""))
	, sex(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\picture\\");
	
}

CWeek111View::~CWeek111View()
{
}

void CWeek111View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	Invalidate();
}

BOOL CWeek111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek111View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week111Set;
	CRecordView::OnInitialUpdate();
	

}


// CWeek111View ���

#ifdef _DEBUG
void CWeek111View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek111View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek111Doc* CWeek111View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek111Doc)));
	return (CWeek111Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek111View ���ݿ�֧��
CRecordset* CWeek111View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek111View ��Ϣ�������


void CWeek111View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CImage img;
	n = 1;
	CDC *pDC = GetDC();
	
	
}
void CWeek111View::foo(CImage&img, int&sx, int&sy, int&w, int&h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sy = (rect.Height() - h) / 2;
		sx = 0;
	}
}

void CWeek111View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CWeek111View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	
}


void CWeek111View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	
}


void CWeek111View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}


void CWeek111View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
	CRecordView::OnPaint();
	
	
}


void CWeek111View::OnDraw(CDC* pDC)
{
	// TODO: �ڴ����ר�ô����/����û���
	if (n == 1)
	{

		CImage img;
		CString s = m_pSet->m_4;
		filename = path + s;
		img.Load(filename);
		pDC = GetDlgItem(IDC_STATIC)->GetDC();
		pDC->SetStretchBltMode(HALFTONE);
		int sx, sy, w, h;
		foo(img, sx, sy, w, h);
		img.Draw(pDC->m_hDC, sx, sy, w, h);
		ReleaseDC(pDC);
	}
	
}
