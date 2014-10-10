// ImageProcessingViewC.cpp : implementation file
//

#include "stdafx.h"
#include "ImageProcessing.h"
#include "ImageProcessingViewC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewC

IMPLEMENT_DYNCREATE(CImageProcessingViewC, CView)

CImageProcessingViewC::CImageProcessingViewC()
{
}

CImageProcessingViewC::~CImageProcessingViewC()
{
}


BEGIN_MESSAGE_MAP(CImageProcessingViewC, CView)
	//{{AFX_MSG_MAP(CImageProcessingViewC)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewC drawing

void CImageProcessingViewC::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewC diagnostics

#ifdef _DEBUG
void CImageProcessingViewC::AssertValid() const
{
	CView::AssertValid();
}

void CImageProcessingViewC::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageProcessingDoc* CImageProcessingViewC::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageProcessingDoc)));
	return (CImageProcessingDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewC message handlers
