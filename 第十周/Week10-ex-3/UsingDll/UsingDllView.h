
// UsingDllView.h : CUsingDllView ��Ľӿ�
//

#pragma once


class CUsingDllView : public CView
{
protected: // �������л�����
	CUsingDllView();
	DECLARE_DYNCREATE(CUsingDllView)

// ����
public:
	CUsingDllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingDllView.cpp �еĵ��԰汾
inline CUsingDllDoc* CUsingDllView::GetDocument() const
   { return reinterpret_cast<CUsingDllDoc*>(m_pDocument); }
#endif

