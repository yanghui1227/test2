// W1D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W1D.h"


// ���ǵ���������һ��ʾ��
W1D_API int nW1D=0;

// ���ǵ���������һ��ʾ����
W1D_API int fnW1D(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W1D.h
CW1D::CW1D()
{
	return;
}

W1D_API int Factorial(int n){
	
	int num = 1;
	if (n <= 0)  return 0;
	if (n >= 17) return -1;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
	}
	return num;
}