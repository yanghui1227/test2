
// Week1-ex-2View.cpp : CWeek1ex2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1-ex-2.h"
#endif

#include "Week1-ex-2Doc.h"
#include "Week1-ex-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1ex2View

IMPLEMENT_DYNCREATE(CWeek1ex2View, CView)

BEGIN_MESSAGE_MAP(CWeek1ex2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1ex2View ����/����

CWeek1ex2View::CWeek1ex2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek1ex2View::~CWeek1ex2View()
{
}

BOOL CWeek1ex2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1ex2View ����

void CWeek1ex2View::OnDraw(CDC* /*pDC*/)
{
	CWeek1ex2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1ex2View ���

#ifdef _DEBUG
void CWeek1ex2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1ex2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1ex2Doc* CWeek1ex2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1ex2Doc)));
	return (CWeek1ex2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1ex2View ��Ϣ�������


void CWeek1ex2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek1ex2Doc* pDoc = GetDocument();
	CView::OnLButtonDown(nFlags, point);
	if (nFlags)
	{
		pDoc->count++;
	}
}


void CWeek1ex2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnRButtonDown(nFlags, point);
	CWeek1ex2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("�������:%d"), pDoc->count);
	dc.TextOutW(200, 300, s);


}
