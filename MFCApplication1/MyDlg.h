#pragma once


// MyDlg dialog

class MyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~MyDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// add parameters
	CButton OKButton;
	CButton CancelButton;
	COLORREF c1;
	COLORREF c2;

private:

public:
	double aParam;
	double bParam;
	double sParam;
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
};
