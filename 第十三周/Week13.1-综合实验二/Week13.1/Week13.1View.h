
// Week13.1View.h : CWeek131View ��Ľӿ�
//

#pragma once

class CWeek131Set;

class CWeek131View : public CRecordView
{
protected: // �������л�����
	CWeek131View();
	DECLARE_DYNCREATE(CWeek131View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK131_FORM };
#endif
	CWeek131Set* m_pSet;

// ����
public:
	CWeek131Doc* GetDocument() const;

// ����
public:
	CString path, s,file;
	
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek131View();
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
	CString num;
	CString major;
	CString sex;
	CString birth;
	CString tel;
	CString home;
	CString jpeg;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void drawPicture(CString filename);
	virtual void OnDraw(CDC* /*pDC*/);
};

#ifndef _DEBUG  // Week13.1View.cpp �еĵ��԰汾
inline CWeek131Doc* CWeek131View::GetDocument() const
   { return reinterpret_cast<CWeek131Doc*>(m_pDocument); }
#endif

