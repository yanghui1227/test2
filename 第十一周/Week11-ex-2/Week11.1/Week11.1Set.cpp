
// Week11.1Set.cpp : CWeek111Set ���ʵ��
//

#include "stdafx.h"
#include "Week11.1.h"
#include "Week11.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek111Set ʵ��

// ���������� 2020��5��17��, 13:06

IMPLEMENT_DYNAMIC(CWeek111Set, CRecordset)

CWeek111Set::CWeek111Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = dynaset;
}

// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek111Set::GetDefaultConnect()
{
	return _T("DSN=p_student;DBQ=D:\\MFC\\S_Picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CWeek111Set::GetDefaultSQL()
{
	return _T("[s_student]");
}

void CWeek111Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek111Set ���

#ifdef _DEBUG
void CWeek111Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek111Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

