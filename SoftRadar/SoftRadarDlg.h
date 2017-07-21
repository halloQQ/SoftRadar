
// SoftRadarDlg.h : ͷ�ļ�
//

#pragma once
#include"ViewDlg.h"
#include"ParamDlg.h"
#include"SignalDlg.h"

// CSoftRadarDlg �Ի���
class CSoftRadarDlg : public CDialogEx
{
// ����
public:
	CSoftRadarDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SOFTRADAR_DIALOG };
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
public:
	afx_msg void OnBnClickedButtonView();
	afx_msg void OnBnClickedButtonParam();
	afx_msg void OnBnClickedButtonSignal();
};
