
// UseLib0View.cpp : CUseLib0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UseLib0.h"
#endif

#include "UseLib0Doc.h"
#include "UseLib0View.h"
#include"W32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUseLib0View

IMPLEMENT_DYNCREATE(CUseLib0View, CView)

BEGIN_MESSAGE_MAP(CUseLib0View, CView)
END_MESSAGE_MAP()

// CUseLib0View ����/����

CUseLib0View::CUseLib0View()
{
	// TODO:  �ڴ˴���ӹ������

}

CUseLib0View::~CUseLib0View()
{
}

BOOL CUseLib0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUseLib0View ����

void CUseLib0View::OnDraw(CDC* pDC)
{
	CUseLib0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	float deg = 30.0;
	FAC m_FAC;
	float value = m_FAC.convert(deg);
	CString s;
	s.Format(_T("%f�Ļ���ֵΪ%f"), deg, value);
	pDC->TextOutW(200,180,s);

}


// CUseLib0View ���

#ifdef _DEBUG
void CUseLib0View::AssertValid() const
{
	CView::AssertValid();
}

void CUseLib0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUseLib0Doc* CUseLib0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUseLib0Doc)));
	return (CUseLib0Doc*)m_pDocument;
}
#endif //_DEBUG


// CUseLib0View ��Ϣ�������
