// SYSExit.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CarRentSystem.h"
#include "SYSExit.h"
#include "afxdialogex.h"


// SYSExit �Ի���

IMPLEMENT_DYNAMIC(SYSExit, CDialogEx)

SYSExit::SYSExit(CWnd* pParent /*=NULL*/)
	: CDialogEx(SYSExit::IDD, pParent)
{

}

SYSExit::~SYSExit()
{
}

void SYSExit::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SYSExit, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON4, &SYSExit::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &SYSExit::OnBnClickedButton1)
END_MESSAGE_MAP()


// SYSExit ��Ϣ�������


void SYSExit::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(6==MessageBox("ȷ���˳�",NULL,MB_YESNO))
{
    PostMessage(WM_CLOSE,0,0);
}
}


void SYSExit::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
