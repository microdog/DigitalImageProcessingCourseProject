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
	CImageProcessingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	// Draw image
	pDoc->m_BitmapC.Draw(pDC, CPoint(0, 0), pDoc->m_BitmapC.GetDimensions());
	
	// Draw view id
	RECT rect;
	GetClientRect(&rect);
	rect.bottom = rect.top + 20;
	rect.left = rect.right - 60;
	pDC->SetBkMode(TRANSPARENT);
	pDC->DrawText(TEXT("View C"), &rect, DT_CENTER);
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
