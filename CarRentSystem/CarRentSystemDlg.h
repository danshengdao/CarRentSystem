
// CarRentSystemDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CCarRentSystemDlg �Ի���
class CCarRentSystemDlg : public CDialogEx
{
// ����
public:
	CCarRentSystemDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CARRENTSYSTEM_DIALOG };

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
//	CEdit m_ctrl;
//	CString m_msg;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
