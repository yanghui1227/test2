
// Week10View.h : CWeek10View ��Ľӿ�
//

#pragma once


class CWeek10View : public CView
{
protected: // �������л�����
	CWeek10View();
	DECLARE_DYNCREATE(CWeek10View)

// ����
public:
	CWeek10Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week10View.cpp �еĵ��԰汾
inline CWeek10Doc* CWeek10View::GetDocument() const
   { return reinterpret_cast<CWeek10Doc*>(m_pDocument); }
#endif

