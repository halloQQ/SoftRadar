
// SoftRadar.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSoftRadarApp: 
// �йش����ʵ�֣������ SoftRadar.cpp
//

class CSoftRadarApp : public CWinApp
{
public:
	CSoftRadarApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSoftRadarApp theApp;