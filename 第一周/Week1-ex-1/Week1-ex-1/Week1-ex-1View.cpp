
// Week1-ex-1View.cpp : CWeek1ex1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1-ex-1.h"
#endif

#include "Week1-ex-1Doc.h"
#include "Week1-ex-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1ex1View

IMPLEMENT_DYNCREATE(CWeek1ex1View, CView)

BEGIN_MESSAGE_MAP(CWeek1ex1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1ex1View ����/����

CWeek1ex1View::CWeek1ex1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek1ex1View::~CWeek1ex1View()
{
}

BOOL CWeek1ex1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1ex1View ����

void CWeek1ex1View::OnDraw(CDC* /*pDC*/)
{
	CWeek1ex1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1ex1View ���

#ifdef _DEBUG
void CWeek1ex1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1ex1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1ex1Doc* CWeek1ex1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1ex1Doc)));
	return (CWeek1ex1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1ex1View ��Ϣ�������


void CWeek1ex1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CWeek1ex1Doc* pDoc = GetDocument();
	dc.TextOutW(200, 200, pDoc->name);
	CView::OnLButtonDown(nFlags, point);
}
