
// Week1-ex-2View.h : CWeek1ex2View ��Ľӿ�
//

#pragma once


class CWeek1ex2View : public CView
{
protected: // �������л�����
	CWeek1ex2View();
	DECLARE_DYNCREATE(CWeek1ex2View)

// ����
public:
	CWeek1ex2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek1ex2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week1-ex-2View.cpp �еĵ��԰汾
inline CWeek1ex2Doc* CWeek1ex2View::GetDocument() const
   { return reinterpret_cast<CWeek1ex2Doc*>(m_pDocument); }
#endif

