
// week11.1.1Doc.h : Cweek1111Doc ��Ľӿ�
//


#pragma once
#include "week11.1.1Set.h"


class Cweek1111Doc : public CDocument
{
protected: // �������л�����
	Cweek1111Doc();
	DECLARE_DYNCREATE(Cweek1111Doc)

// ����
public:
	Cweek1111Set m_week1111Set;

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
	virtual ~Cweek1111Doc();
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
