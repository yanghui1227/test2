
// Week14.�ۺ�ʵ����View.h : CWeek14�ۺ�ʵ����View ��Ľӿ�
//

#pragma once

class CWeek14�ۺ�ʵ����Set;

class CWeek14�ۺ�ʵ����View : public CRecordView
{
protected: // �������л�����
	CWeek14�ۺ�ʵ����View();
	DECLARE_DYNCREATE(CWeek14�ۺ�ʵ����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14_FORM };
#endif
	CWeek14�ۺ�ʵ����Set* m_pSet;

// ����
public:
	CWeek14�ۺ�ʵ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek14�ۺ�ʵ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString num;
	CString major;
	CString sex;
	double birth;
	CString tel;
	CString home;
	CString pic;
	afx_msg void OnSort();
	afx_msg void OnSearch();
	afx_msg void OnTraversal();
};

#ifndef _DEBUG  // Week14.�ۺ�ʵ����View.cpp �еĵ��԰汾
inline CWeek14�ۺ�ʵ����Doc* CWeek14�ۺ�ʵ����View::GetDocument() const
   { return reinterpret_cast<CWeek14�ۺ�ʵ����Doc*>(m_pDocument); }
#endif

