
// week11.1.1Set.cpp : Cweek1111Set ���ʵ��
//

#include "stdafx.h"
#include "week11.1.1.h"
#include "week11.1.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek1111Set ʵ��

// ���������� 2020��5��17��, 18:33

IMPLEMENT_DYNAMIC(Cweek1111Set, CRecordset)

Cweek1111Set::Cweek1111Set(CDatabase* pdb)
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
CString Cweek1111Set::GetDefaultConnect()
{
	return _T("DSN=picture;DBQ=D:\\MFC\\picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek1111Set::GetDefaultSQL()
{
	return _T("[pic]");
}

void Cweek1111Set::DoFieldExchange(CFieldExchange* pFX)
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
// Cweek1111Set ���

#ifdef _DEBUG
void Cweek1111Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek1111Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

