// ImageProcessingViewA.h : interface of the CImageProcessingViewA class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMAGEPROCESSINGVIEWA_H__054DA1B5_38D7_47DE_A446_DDF2E3C7ED63__INCLUDED_)
#define AFX_IMAGEPROCESSINGVIEWA_H__054DA1B5_38D7_47DE_A446_DDF2E3C7ED63__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ImageProcessingDoc.h"

class CImageProcessingViewA : public CView
{
protected: // create from serialization only
	CImageProcessingViewA();
	DECLARE_DYNCREATE(CImageProcessingViewA)

// Attributes
public:
	CImageProcessingDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingViewA)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CImageProcessingViewA();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingViewA)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ImageProcessingViewA.cpp
inline CImageProcessingDoc* CImageProcessingViewA::GetDocument()
   { return (CImageProcessingDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGVIEWA_H__054DA1B5_38D7_47DE_A446_DDF2E3C7ED63__INCLUDED_)
