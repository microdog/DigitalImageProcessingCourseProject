// ImageProcessingViewB.cpp : implementation file
//

#include "stdafx.h"
#include "ImageProcessing.h"
#include "ImageProcessingViewB.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewB

IMPLEMENT_DYNCREATE(CImageProcessingViewB, CView)

CImageProcessingViewB::CImageProcessingViewB()
{
}

CImageProcessingViewB::~CImageProcessingViewB()
{
}


BEGIN_MESSAGE_MAP(CImageProcessingViewB, CView)
	//{{AFX_MSG_MAP(CImageProcessingViewB)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewB drawing

void CImageProcessingViewB::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewB diagnostics

#ifdef _DEBUG
void CImageProcessingViewB::AssertValid() const
{
	CView::AssertValid();
}

void CImageProcessingViewB::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageProcessingDoc* CImageProcessingViewB::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageProcessingDoc)));
	return (CImageProcessingDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewB message handlers
