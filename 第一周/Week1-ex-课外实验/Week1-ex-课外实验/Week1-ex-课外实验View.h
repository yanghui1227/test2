
// Week1-ex-����ʵ��View.h : CWeek1ex����ʵ��View ��Ľӿ�
//

#pragma once


class CWeek1ex����ʵ��View : public CView
{
protected: // �������л�����
	CWeek1ex����ʵ��View();
	DECLARE_DYNCREATE(CWeek1ex����ʵ��View)

// ����
public:
	CWeek1ex����ʵ��Doc* GetDocument() const;

// ����
public:
	CString name2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek1ex����ʵ��View();
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

#ifndef _DEBUG  // Week1-ex-����ʵ��View.cpp �еĵ��԰汾
inline CWeek1ex����ʵ��Doc* CWeek1ex����ʵ��View::GetDocument() const
   { return reinterpret_cast<CWeek1ex����ʵ��Doc*>(m_pDocument); }
#endif

