
// Week11.1Doc.h : CWeek111Doc ��Ľӿ�
//


#pragma once
#include "Week11.1Set.h"


class CWeek111Doc : public CDocument
{
protected: // �������л�����
	CWeek111Doc();
	DECLARE_DYNCREATE(CWeek111Doc)

// ����
public:
	CWeek111Set m_Week111Set;

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
	virtual ~CWeek111Doc();
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
