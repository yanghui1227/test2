﻿
// MFC14View.h: CMFC14View 类的接口
//

#pragma once


class CMFC14View : public CView
{
protected: // 仅从序列化创建
	CMFC14View() noexcept;
	DECLARE_DYNCREATE(CMFC14View)

// 特性
public:
	CMFC14Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC14View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC14View.cpp 中的调试版本
inline CMFC14Doc* CMFC14View::GetDocument() const
   { return reinterpret_cast<CMFC14Doc*>(m_pDocument); }
#endif

