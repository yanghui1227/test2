
// Week11.1View.h : CWeek111View ��Ľӿ�
//

#pragma once

class CWeek111Set;

class CWeek111View : public CRecordView
{
protected: // �������л�����
	CWeek111View();
	DECLARE_DYNCREATE(CWeek111View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK111_FORM };
#endif
	CWeek111Set* m_pSet;

// ����
public:
	CWeek111Doc* GetDocument() const;

// ����
public:
	CString path, filename;
	CRect rect;
	int n = 0;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek111View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString number;
	CString sex;
	afx_msg void OnBnClickedButton1();
	virtual void foo(CImage&img, int&sx, int&sy, int&w, int&h);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	virtual void OnDraw(CDC* /*pDC*/);
};

#ifndef _DEBUG  // Week11.1View.cpp �еĵ��԰汾
inline CWeek111Doc* CWeek111View::GetDocument() const
   { return reinterpret_cast<CWeek111Doc*>(m_pDocument); }
#endif

