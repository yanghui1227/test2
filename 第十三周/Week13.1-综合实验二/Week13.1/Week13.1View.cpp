
// Week13.1View.cpp : CWeek131View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week13.1.h"
#endif

#include "Week13.1Set.h"
#include "Week13.1Doc.h"
#include "Week13.1View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek131View

IMPLEMENT_DYNCREATE(CWeek131View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek131View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek131View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &CWeek131View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek131View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek131View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek131View::OnRecordLast)
END_MESSAGE_MAP()

// CWeek131View ����/����

CWeek131View::CWeek131View()
	: CRecordView(IDD_WEEK131_FORM)
	, id(0)
	, name(_T(""))
	, num(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, tel(_T(""))
	, home(_T(""))
	, jpeg(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\Picture\\");

}

CWeek131View::~CWeek131View()
{
}

void CWeek131View::DoDataExchange(CDataExchange* pDX)
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
	Invalidate();
}

BOOL CWeek131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek131View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week131Set;
	CRecordView::OnInitialUpdate();

}


// CWeek131View ���

#ifdef _DEBUG
void CWeek131View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek131View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek131Doc* CWeek131View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek131Doc)));
	return (CWeek131Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek131View ���ݿ�֧��
CRecordset* CWeek131View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek131View ��Ϣ�������


void CWeek131View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyDlg dlg;
	dlg.fil = path+m_pSet->column8;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		
	}
	
}


void CWeek131View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CWeek131View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CWeek131View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	
	
}


void CWeek131View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}
void  CWeek131View::drawPicture(CString filename)
{
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int w, h, sx, sy;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_radio = 1.0 * rect.Width() / rect.Height();
	float image_radio = 1.0 * img.GetWidth() / img.GetHeight();

	if (rect_radio > image_radio)
	{
		h = rect.Height();
		w = image_radio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / image_radio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}

void CWeek131View::OnDraw(CDC* pDC)
{
	// TODO: �ڴ����ר�ô����/����û���
	file = path + m_pSet->column8;
	drawPicture(file);
}
