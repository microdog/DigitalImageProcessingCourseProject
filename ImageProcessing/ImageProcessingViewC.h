#if !defined(AFX_IMAGEPROCESSINGVIEWC_H__F7EEBE1A_B445_4F98_8258_1A1B1789BAA9__INCLUDED_)
#define AFX_IMAGEPROCESSINGVIEWC_H__F7EEBE1A_B445_4F98_8258_1A1B1789BAA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImageProcessingViewC.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewC view

#include "ImageProcessingDoc.h"

class CImageProcessingViewC : public CView
{
protected:
	CImageProcessingViewC();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CImageProcessingViewC)

// Attributes
public:
	CImageProcessingDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingViewC)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CImageProcessingViewC();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingViewC)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGVIEWC_H__F7EEBE1A_B445_4F98_8258_1A1B1789BAA9__INCLUDED_)
