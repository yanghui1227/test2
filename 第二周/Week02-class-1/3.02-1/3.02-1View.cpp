﻿
// 3.02-1View.cpp: CMy3021View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.02-1.h"
#endif

#include "3.02-1Doc.h"
#include "3.02-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3021View

IMPLEMENT_DYNCREATE(CMy3021View, CView)

BEGIN_MESSAGE_MAP(CMy3021View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3021View 构造/析构

CMy3021View::CMy3021View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy3021View::~CMy3021View()
{
}

BOOL CMy3021View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3021View 绘图

void CMy3021View::OnDraw(CDC* pDC)
{
	CMy3021Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	

}


// CMy3021View 诊断

#ifdef _DEBUG
void CMy3021View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3021View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3021Doc* CMy3021View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3021Doc)));
	return (CMy3021Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3021View 消息处理程序


void CMy3021View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 50 + 10;
	CClientDC dc(this);
	CRect cr(point.x - r,point.y - r, point.x + r, point.y + r);
	dc.Ellipse(cr);

}
