// W2D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W2D.h"
#include"math.h"

// ���ǵ���������һ��ʾ��
W2D_API int nW2D=0;

// ���ǵ���������һ��ʾ����
W2D_API int fnW2D(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W2D.h
CW2D::CW2D()
{
	return;
}
float Rad_to_deg = 45.0 / atan(1.0);

W2D_API float FAC::convert(float deg)
{

	return   deg / Rad_to_deg;
}