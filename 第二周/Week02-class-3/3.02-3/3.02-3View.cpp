﻿
// 3.02-3View.cpp: CMy3023View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.02-3.h"
#endif

#include "3.02-3Doc.h"
#include "3.02-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3023View

IMPLEMENT_DYNCREATE(CMy3023View, CView)

BEGIN_MESSAGE_MAP(CMy3023View, CView)
END_MESSAGE_MAP()

// CMy3023View 构造/析构

CMy3023View::CMy3023View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy3023View::~CMy3023View()
{
}

BOOL CMy3023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3023View 绘图

void CMy3023View::OnDraw(CDC* pDC)
{
	CMy3023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
}


// CMy3023View 诊断

#ifdef _DEBUG
void CMy3023View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3023Doc* CMy3023View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3023Doc)));
	return (CMy3023Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3023View 消息处理程序
