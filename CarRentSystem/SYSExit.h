#pragma once


// SYSExit �Ի���

class SYSExit : public CDialogEx
{
	DECLARE_DYNAMIC(SYSExit)

public:
	SYSExit(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SYSExit();

// �Ի�������
	enum { IDD = IDD_CHOSEN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
};
