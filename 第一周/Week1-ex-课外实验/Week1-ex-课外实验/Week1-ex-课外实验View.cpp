
// Week1-ex-����ʵ��View.cpp : CWeek1ex����ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1-ex-����ʵ��.h"
#endif

#include "Week1-ex-����ʵ��Doc.h"
#include "Week1-ex-����ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1ex����ʵ��View

IMPLEMENT_DYNCREATE(CWeek1ex����ʵ��View, CView)

BEGIN_MESSAGE_MAP(CWeek1ex����ʵ��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1ex����ʵ��View ����/����

CWeek1ex����ʵ��View::CWeek1ex����ʵ��View()
{
	// TODO: �ڴ˴���ӹ������
	name2 = "��";

}

CWeek1ex����ʵ��View::~CWeek1ex����ʵ��View()
{
}

BOOL CWeek1ex����ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1ex����ʵ��View ����

void CWeek1ex����ʵ��View::OnDraw(CDC* /*pDC*/)
{
	CWeek1ex����ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1ex����ʵ��View ���

#ifdef _DEBUG
void CWeek1ex����ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1ex����ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1ex����ʵ��Doc* CWeek1ex����ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1ex����ʵ��Doc)));
	return (CWeek1ex����ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1ex����ʵ��View ��Ϣ�������


void CWeek1ex����ʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CWeek1ex����ʵ��Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (nFlags)
	{
		dc.TextOutW(200, 200, pDoc->name1 + name2);
	}
}
