
// Week10View.cpp : CWeek10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week10.h"
#endif

#include "Week10Doc.h"
#include "Week10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"fac.h"

// CWeek10View

IMPLEMENT_DYNCREATE(CWeek10View, CView)

BEGIN_MESSAGE_MAP(CWeek10View, CView)
END_MESSAGE_MAP()

// CWeek10View ����/����

CWeek10View::CWeek10View()
{
	// TODO:  �ڴ˴���ӹ������

}

CWeek10View::~CWeek10View()
{
}

BOOL CWeek10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek10View ����

void CWeek10View::OnDraw(CDC* pDC)
{
	CWeek10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	int n = 5;
	int a = Factorial(5);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n��ֵ�������0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n�Ľ׳˽�����"));
	}
	if (a!=0 && a!=-1)
	{
		s.Format(_T("%d�Ľ׳�Ϊ%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}
}


// CWeek10View ���

#ifdef _DEBUG
void CWeek10View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Doc* CWeek10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Doc)));
	return (CWeek10Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10View ��Ϣ�������
