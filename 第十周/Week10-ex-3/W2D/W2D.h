// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W2D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W2D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W2D_EXPORTS
#define W2D_API __declspec(dllexport)
#else
#define W2D_API __declspec(dllimport)
#endif

// �����Ǵ� W2D.dll ������
class W2D_API CW2D {
public:
	CW2D(void);
	// TODO:  �ڴ�������ķ�����
};

extern W2D_API int nW2D;

W2D_API int fnW2D(void);

class W2D_API FAC{
public:
	float convert(float deg);
};