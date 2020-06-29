
// Week11View.h : CWeek11View ��Ľӿ�
//

#pragma once

class CWeek11Set;

class CWeek11View : public CRecordView
{
protected: // �������л�����
	CWeek11View();
	DECLARE_DYNCREATE(CWeek11View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_FORM };
#endif
	CWeek11Set* m_pSet;

// ����
public:
	CWeek11Doc* GetDocument() const;

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
	virtual ~CWeek11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString id;
	CString name;
	CString num;
	CString majpr;
	CString sex;
	CString birth;
	CString tel;
	CString home;
	CString jpeg;
};

#ifndef _DEBUG  // Week11View.cpp �еĵ��԰汾
inline CWeek11Doc* CWeek11View::GetDocument() const
   { return reinterpret_cast<CWeek11Doc*>(m_pDocument); }
#endif

