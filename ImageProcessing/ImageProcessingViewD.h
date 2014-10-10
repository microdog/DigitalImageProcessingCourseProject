#if !defined(AFX_IMAGEPROCESSINGVIEWD_H__0D434956_BA07_4E40_9C7E_EEF48EE24CD5__INCLUDED_)
#define AFX_IMAGEPROCESSINGVIEWD_H__0D434956_BA07_4E40_9C7E_EEF48EE24CD5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImageProcessingViewD.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewD view

#include "ImageProcessingDoc.h"

class CImageProcessingViewD : public CView
{
protected:
	CImageProcessingViewD();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CImageProcessingViewD)

// Attributes
public:
	CImageProcessingDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingViewD)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CImageProcessingViewD();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingViewD)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGVIEWD_H__0D434956_BA07_4E40_9C7E_EEF48EE24CD5__INCLUDED_)
