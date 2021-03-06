#if !defined(AFX_IMAGEPROCESSINGVIEWB_H__C970C147_572F_4AE4_9AC5_889E2D9C7DAA__INCLUDED_)
#define AFX_IMAGEPROCESSINGVIEWB_H__C970C147_572F_4AE4_9AC5_889E2D9C7DAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImageProcessingViewB.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewB view

#include "ImageProcessingDoc.h"

class CImageProcessingViewB : public CView
{
protected:
	CImageProcessingViewB();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CImageProcessingViewB)

// Attributes
public:
	CImageProcessingDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingViewB)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CImageProcessingViewB();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingViewB)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ImageProcessingViewA.cpp
inline CImageProcessingDoc* CImageProcessingViewB::GetDocument()
{ return (CImageProcessingDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGVIEWB_H__C970C147_572F_4AE4_9AC5_889E2D9C7DAA__INCLUDED_)
