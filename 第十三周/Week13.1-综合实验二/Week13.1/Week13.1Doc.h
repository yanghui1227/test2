
// Week13.1Doc.h : CWeek131Doc ��Ľӿ�
//


#pragma once
#include "Week13.1Set.h"


class CWeek131Doc : public CDocument
{
protected: // �������л�����
	CWeek131Doc();
	DECLARE_DYNCREATE(CWeek131Doc)

// ����
public:
	CWeek131Set m_Week131Set;

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
	virtual ~CWeek131Doc();
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
