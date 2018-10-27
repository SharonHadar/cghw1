
// MFCApplication1View.h : interface of the CMFCApplication1View class
//
#include "MyDlg.h"

#pragma once

typedef enum
{
	VALUES,
	ZEROS
} Mode;

class CMFCApplication1View : public CView
{
protected: // create from serialization only
	CMFCApplication1View() noexcept;
	DECLARE_DYNCREATE(CMFCApplication1View)

// Attributes
public:
	CMFCApplication1Doc* GetDocument() const;

	Mode mode;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CMFCApplication1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	// activate on modal of myDialog
	void onDialog();
	afx_msg void OnButton32771();
	afx_msg void OnUpdateModeValues(CCmdUI *pCmdUI);
	afx_msg void OnUpdateModeZeros(CCmdUI *pCmdUI);
	afx_msg void OnModeValues();
	afx_msg void OnModeZeros();
};

#ifndef _DEBUG  // debug version in MFCApplication1View.cpp
inline CMFCApplication1Doc* CMFCApplication1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication1Doc*>(m_pDocument); }
#endif

