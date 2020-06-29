
// Week11.classSet.cpp : CWeek11classSet ���ʵ��
//

#include "stdafx.h"
#include "Week11.class.h"
#include "Week11.classSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11classSet ʵ��

// ���������� 2020��5��12��, 15:16

IMPLEMENT_DYNAMIC(CWeek11classSet, CRecordset)

CWeek11classSet::CWeek11classSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = dynaset;
}

// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek11classSet::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\MFC\x6570\x636e\x5e93\\Week11.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek11classSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CWeek11classSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek11classSet ���

#ifdef _DEBUG
void CWeek11classSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek11classSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

