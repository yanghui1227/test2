
// UsingDllView.cpp : CUsingDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingDll.h"
#endif

#include "UsingDllDoc.h"
#include "UsingDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include"W1D.h"
#include"W2D.h"
// CUsingDllView

IMPLEMENT_DYNCREATE(CUsingDllView, CView)

BEGIN_MESSAGE_MAP(CUsingDllView, CView)
END_MESSAGE_MAP()

// CUsingDllView ����/����

CUsingDllView::CUsingDllView()
{
	// TODO:  �ڴ˴���ӹ������

}

CUsingDllView::~CUsingDllView()
{
}

BOOL CUsingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingDllView ����

void CUsingDllView::OnDraw(CDC* pDC)
{
	CUsingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s,s1;
	float deg = 30.0;
	FAC m_FAC;
	int n = 5;
	int a = Factorial(n);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n��ֵ�������0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n�Ľ׳˽�����"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d�Ľ׳�Ϊ%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}

	
	float value = m_FAC.convert(deg);
	s1.Format(_T("%f�Ļ���ֵΪ%f"), deg, value);
	pDC->TextOutW(200, 300, s1);
	
}


// CUsingDllView ���

#ifdef _DEBUG
void CUsingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDllDoc* CUsingDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDllDoc)));
	return (CUsingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingDllView ��Ϣ�������
