
// Week11.classDoc.h : CWeek11classDoc ��Ľӿ�
//


#pragma once
#include "Week11.classSet.h"


class CWeek11classDoc : public CDocument
{
protected: // �������л�����
	CWeek11classDoc();
	DECLARE_DYNCREATE(CWeek11classDoc)

// ����
public:
	CWeek11classSet m_Week11classSet;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeek11classDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
