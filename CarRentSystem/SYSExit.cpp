// SYSExit.cpp : 实现文件
//

#include "stdafx.h"
#include "CarRentSystem.h"
#include "SYSExit.h"
#include "afxdialogex.h"


// SYSExit 对话框

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


// SYSExit 消息处理程序


void SYSExit::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	if(6==MessageBox("确认退出",NULL,MB_YESNO))
{
    PostMessage(WM_CLOSE,0,0);
}
}


void SYSExit::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
