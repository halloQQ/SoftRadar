// ParamDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "ParamDlg.h"
#include "afxdialogex.h"


// CParamDlg �Ի���

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


// CParamDlg ��Ϣ�������



void CParamDlg::OnBnClickedButtonParamExit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SendMessage(WM_CLOSE);
}
