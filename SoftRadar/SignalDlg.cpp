// SignalDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "SignalDlg.h"
#include "afxdialogex.h"


// CSignalDlg 对话框

IMPLEMENT_DYNAMIC(CSignalDlg, CDialogEx)

CSignalDlg::CSignalDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_SIGNAL, pParent)
{

}

CSignalDlg::~CSignalDlg()
{
}

void CSignalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSignalDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SIGNAL_EXIT, &CSignalDlg::OnBnClickedButtonSignalExit)
END_MESSAGE_MAP()


// CSignalDlg 消息处理程序




void CSignalDlg::OnBnClickedButtonSignalExit()
{
	// TODO: 在此添加控件通知处理程序代码
	SendMessage(WM_CLOSE);
}
