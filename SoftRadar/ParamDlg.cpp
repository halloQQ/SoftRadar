// ParamDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "ParamDlg.h"
#include "afxdialogex.h"


// CParamDlg 对话框

IMPLEMENT_DYNAMIC(CParamDlg, CDialogEx)

CParamDlg::CParamDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_PARAM, pParent)
{

}

CParamDlg::~CParamDlg()
{
}

void CParamDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CParamDlg, CDialogEx)

	ON_BN_CLICKED(IDC_BUTTON_PARAM_EXIT, &CParamDlg::OnBnClickedButtonParamExit)
END_MESSAGE_MAP()


// CParamDlg 消息处理程序



void CParamDlg::OnBnClickedButtonParamExit()
{
	// TODO: 在此添加控件通知处理程序代码
	SendMessage(WM_CLOSE);
}
