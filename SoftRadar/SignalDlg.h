#pragma once


// CSignalDlg 对话框

class CSignalDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSignalDlg)

public:
	CSignalDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSignalDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SIGNAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButtonSignalExit();
};
