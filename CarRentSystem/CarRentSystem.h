
// CarRentSystem.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCarRentSystemApp:
// �йش����ʵ�֣������ CarRentSystem.cpp
//

class CCarRentSystemApp : public CWinApp
{
public:
	CCarRentSystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCarRentSystemApp theApp;