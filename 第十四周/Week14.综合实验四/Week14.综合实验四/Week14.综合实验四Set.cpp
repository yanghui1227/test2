
// Week14.�ۺ�ʵ����Set.cpp : CWeek14�ۺ�ʵ����Set ���ʵ��
//

#include "stdafx.h"
#include "Week14.�ۺ�ʵ����.h"
#include "Week14.�ۺ�ʵ����Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14�ۺ�ʵ����Set ʵ��

// ���������� 2020��5��25��, 17:09

IMPLEMENT_DYNAMIC(CWeek14�ۺ�ʵ����Set, CRecordset)

CWeek14�ۺ�ʵ����Set::CWeek14�ۺ�ʵ����Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = 0.0;
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek14�ۺ�ʵ����Set::GetDefaultConnect()
{
	return _T("DSN=Picture;DBQ=D:\\MFC\\picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek14�ۺ�ʵ����Set::GetDefaultSQL()
{
	return _T("[pic]");
}

void CWeek14�ۺ�ʵ����Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Double(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ��]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14�ۺ�ʵ����Set ���

#ifdef _DEBUG
void CWeek14�ۺ�ʵ����Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek14�ۺ�ʵ����Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

