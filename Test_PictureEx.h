
// Test_PictureEx.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTest_PictureExApp:
// �� Ŭ������ ������ ���ؼ��� Test_PictureEx.cpp�� �����Ͻʽÿ�.
//

class CTest_PictureExApp : public CWinApp
{
public:
	CTest_PictureExApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTest_PictureExApp theApp;