
// Week13.2Dlg.h : ͷ�ļ�
//

#pragma once


// CWeek132Dlg �Ի���
class CWeek132Dlg : public CDialogEx
{
// ����
public:
	CString filename;
	CRect rect;
	CWeek132Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual void DrawPicture(CString filename);
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK132_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
