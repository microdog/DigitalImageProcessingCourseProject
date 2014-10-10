// ImageProcessingViewD.cpp : implementation file
//

#include "stdafx.h"
#include "ImageProcessing.h"
#include "ImageProcessingViewD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewD

IMPLEMENT_DYNCREATE(CImageProcessingViewD, CView)

CImageProcessingViewD::CImageProcessingViewD()
{
}

CImageProcessingViewD::~CImageProcessingViewD()
{
}


BEGIN_MESSAGE_MAP(CImageProcessingViewD, CView)
	//{{AFX_MSG_MAP(CImageProcessingViewD)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewD drawing

void CImageProcessingViewD::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewD diagnostics

#ifdef _DEBUG
void CImageProcessingViewD::AssertValid() const
{
	CView::AssertValid();
}

void CImageProcessingViewD::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageProcessingDoc* CImageProcessingViewD::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageProcessingDoc)));
	return (CImageProcessingDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingViewD message handlers
