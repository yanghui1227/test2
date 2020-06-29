﻿
// 3.02-4View.h: CMy3024View 类的接口
//

#pragma once


class CMy3024View : public CView
{
protected: // 仅从序列化创建
	CMy3024View() noexcept;
	DECLARE_DYNCREATE(CMy3024View)

// 特性
public:
	CMy3024Doc* GetDocument() const;

// 操作
public:
	CRect cr;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy3024View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3.02-4View.cpp 中的调试版本
inline CMy3024Doc* CMy3024View::GetDocument() const
   { return reinterpret_cast<CMy3024Doc*>(m_pDocument); }
#endif

