// ViewDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftRadar.h"
#include "ViewDlg.h"
#include "afxdialogex.h"


// CViewDlg �Ի���

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


// CViewDlg ��Ϣ�������


void CViewDlg::OnBnClickedButtonViewExit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SendMessage(WM_CLOSE);
}
