
// UseLib0View.h : CUseLib0View ��Ľӿ�
//

#pragma once


class CUseLib0View : public CView
{
protected: // �������л�����
	CUseLib0View();
	DECLARE_DYNCREATE(CUseLib0View)

// ����
public:
	CUseLib0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUseLib0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UseLib0View.cpp �еĵ��԰汾
inline CUseLib0Doc* CUseLib0View::GetDocument() const
   { return reinterpret_cast<CUseLib0Doc*>(m_pDocument); }
#endif

