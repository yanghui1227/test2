
// Week11Set.cpp : CWeek11Set ���ʵ��
//

#include "stdafx.h"
#include "Week11.h"
#include "Week11Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11Set ʵ��

// ���������� 2020��5��18��, 20:59

IMPLEMENT_DYNAMIC(CWeek11Set, CRecordset)

CWeek11Set::CWeek11Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = 0.0;
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}

// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek11Set::GetDefaultConnect()
{
	return _T("DSN=\x5168\x8def\x5f84\x7167\x7247;DBQ=D:\\MFC\\S_Picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek11Set::GetDefaultSQL()
{
	return _T("[s_student]");
}

void CWeek11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[����]"), column5);
	RFX_Double(pFX, _T("[�绰����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭȫ��ַ]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek11Set ���

#ifdef _DEBUG
void CWeek11Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek11Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

