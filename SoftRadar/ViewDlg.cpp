// ViewDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "ViewDlg.h"
#include "afxdialogex.h"


// CViewDlg 对话框

IMPLEMENT_DYNAMIC(CViewDlg, CDialogEx)

CViewDlg::CViewDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_VIEW, pParent)
{

}

CViewDlg::~CViewDlg()
{
}

void CViewDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CViewDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_VIEW_EXIT, &CViewDlg::OnBnClickedButtonViewExit)
END_MESSAGE_MAP()


// CViewDlg 消息处理程序


void CViewDlg::OnBnClickedButtonViewExit()
{
	// TODO: 在此添加控件通知处理程序代码
	SendMessage(WM_CLOSE);
}
