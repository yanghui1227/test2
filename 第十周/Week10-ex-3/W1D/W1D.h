// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W1D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W1D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W1D_EXPORTS
#define W1D_API __declspec(dllexport)
#else
#define W1D_API __declspec(dllimport)
#endif

// �����Ǵ� W1D.dll ������
class W1D_API CW1D {
public:
	CW1D(void);
	// TODO:  �ڴ�������ķ�����
};

extern W1D_API int nW1D;

W1D_API int fnW1D(void);
W1D_API int Factorial(int n);