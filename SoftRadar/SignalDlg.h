#pragma once


// CSignalDlg �Ի���

class CSignalDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSignalDlg)

public:
	CSignalDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSignalDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SIGNAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButtonSignalExit();
};
