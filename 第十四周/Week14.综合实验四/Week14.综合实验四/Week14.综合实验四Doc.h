
// Week14.�ۺ�ʵ����Doc.h : CWeek14�ۺ�ʵ����Doc ��Ľӿ�
//


#pragma once
#include "Week14.�ۺ�ʵ����Set.h"


class CWeek14�ۺ�ʵ����Doc : public CDocument
{
protected: // �������л�����
	CWeek14�ۺ�ʵ����Doc();
	DECLARE_DYNCREATE(CWeek14�ۺ�ʵ����Doc)

// ����
public:
	CWeek14�ۺ�ʵ����Set m_Week14�ۺ�ʵ����Set;

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
	virtual ~CWeek14�ۺ�ʵ����Doc();
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
