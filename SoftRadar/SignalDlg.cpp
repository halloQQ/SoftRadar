// SignalDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "SignalDlg.h"
#include "afxdialogex.h"


// CSignalDlg �Ի���

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


// CSignalDlg ��Ϣ�������




void CSignalDlg::OnBnClickedButtonSignalExit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SendMessage(WM_CLOSE);
}
