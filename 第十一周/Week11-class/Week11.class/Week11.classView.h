
// Week11.classView.h : CWeek11classView ��Ľӿ�
//

#pragma once

class CWeek11classSet;

class CWeek11classView : public CRecordView
{
protected: // �������л�����
	CWeek11classView();
	DECLARE_DYNCREATE(CWeek11classView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11CLASS_FORM };
#endif
	CWeek11classSet* m_pSet;

// ����
public:
	CWeek11classDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CWeek11classView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString num;
	CString age;
	CString tel;
};

#ifndef _DEBUG  // Week11.classView.cpp �еĵ��԰汾
inline CWeek11classDoc* CWeek11classView::GetDocument() const
   { return reinterpret_cast<CWeek11classDoc*>(m_pDocument); }
#endif

