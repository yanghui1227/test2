
// Week1-ex-1View.h : CWeek1ex1View ��Ľӿ�
//

#pragma once


class CWeek1ex1View : public CView
{
protected: // �������л�����
	CWeek1ex1View();
	DECLARE_DYNCREATE(CWeek1ex1View)

// ����
public:
	CWeek1ex1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek1ex1View();
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
};

#ifndef _DEBUG  // Week1-ex-1View.cpp �еĵ��԰汾
inline CWeek1ex1Doc* CWeek1ex1View::GetDocument() const
   { return reinterpret_cast<CWeek1ex1Doc*>(m_pDocument); }
#endif

