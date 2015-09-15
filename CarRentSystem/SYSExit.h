#pragma once


// SYSExit 对话框

class SYSExit : public CDialogEx
{
	DECLARE_DYNAMIC(SYSExit)

public:
	SYSExit(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SYSExit();

// 对话框数据
	enum { IDD = IDD_CHOSEN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
};
