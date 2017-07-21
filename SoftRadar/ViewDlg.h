#pragma once


// CViewDlg 对话框

class CViewDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CViewDlg)

public:
	CViewDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CViewDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_VIEW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonViewExit();
};
