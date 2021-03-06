// MyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include <sstream>


// MyDlg dialog

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDOK, OKButton);
	DDX_Control(pDX, IDCANCEL, CancelButton);

	DDX_Text(pDX, IDC_EDIT1, aParam);
	DDV_MinMaxDouble(pDX, aParam, 0, DBL_MAX);
	DDX_Text(pDX, IDC_EDIT2, bParam);
	DDV_MinMaxDouble(pDX, bParam, 0, DBL_MAX);
	DDX_Text(pDX, IDC_EDIT3, sParam);
	DDV_MinMaxDouble(pDX, sParam, 0, DBL_MAX);
}



BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnClickedButton1)
ON_BN_CLICKED(IDC_BUTTON2, &MyDlg::OnClickedButton2)
END_MESSAGE_MAP()


// MyDlg message handlers

BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here

	CRect rect;
	GetClientRect(&rect);
	double defaultS = (rect.right - rect.left) / 10;
	std::wstringstream wss;
	wss << defaultS;

	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"1");
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(L"1");
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(wss.str().c_str());

	this->c1 = RGB(0, 0, 0);
	this->c1 = RGB(255, 255, 255);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void MyDlg::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class
	CDialogEx::OnOK();
	std::wstringstream wss;
	wss << this->aParam;
	MessageBox(wss.str().c_str());
	wss.clear();
	wss << this->bParam;
	MessageBox(wss.str().c_str());
	wss.clear();
	wss << this->sParam;
	MessageBox(wss.str().c_str());
}


//void MyDlg::OnBnClickedButton2()
//{
//	// TODO: Add your control notification handler code here
//}



void MyDlg::OnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK)
	{
		this->c1 = dlg.GetColor();
	}
}


void MyDlg::OnClickedButton2()
{
	// TODO: Add your control notification handler code here
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK)
	{
		this->c2 = dlg.GetColor();
	}
}
