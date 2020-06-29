
// week11.1.1View.cpp : Cweek1111View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week11.1.1.h"
#endif

#include "week11.1.1Set.h"
#include "week11.1.1Doc.h"
#include "week11.1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek1111View

IMPLEMENT_DYNCREATE(Cweek1111View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek1111View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek1111View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek1111View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek1111View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek1111View::OnRecordLast)
END_MESSAGE_MAP()

// Cweek1111View ����/����

Cweek1111View::Cweek1111View()
	: CRecordView(IDD_WEEK1111_FORM)
	, id(_T(""))
	, name(_T(""))
	, num(_T(""))
	, sex(_T(""))
	, jprg(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\Picture\\");
}

Cweek1111View::~Cweek1111View()
{
}

void Cweek1111View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	Invalidate();
}

BOOL Cweek1111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek1111View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week1111Set;
	CRecordView::OnInitialUpdate();
	
}


// Cweek1111View ���

#ifdef _DEBUG
void Cweek1111View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek1111View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek1111Doc* Cweek1111View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek1111Doc)));
	return (Cweek1111Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek1111View ���ݿ�֧��
CRecordset* Cweek1111View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek1111View ��Ϣ�������


void Cweek1111View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);

	/*CString s;
	GetDlgItemText(IDC_EDIT5, s);
	CString file;
	file = path + s;
	foo(file);*/
	
	
}


void Cweek1111View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	
	UpdateData(false);
	

	
}


void Cweek1111View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);

	
	
}


void Cweek1111View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	/*CString s;
	GetDlgItemText(IDC_EDIT5, s);
	CString file;
	file = path + s;
	foo(file);*/
	
}

/*void  Cweek1111View::foo(CString filename)
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
	img.Draw(pDC->m_hDC,sx,sy,w,h);
	ReleaseDC(pDC);
	
}*/

void Cweek1111View::drawPicture(CImage&img, int&sx, int&sy, int&w, int&h)
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



void Cweek1111View::OnDraw(CDC* pDC)
{
	// TODO: �ڴ����ר�ô����/����û���
	CImage img;
	img.Load(path+m_pSet->m_4);
	pDC = GetDlgItem(IDC_STATIC)->GetDC();
	pDC->SetStretchBltMode(HALFTONE);
	int sx, sy, w, h;
	drawPicture(img, sx, sy, w, h);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
