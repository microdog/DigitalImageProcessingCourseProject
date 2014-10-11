// ImageProcessingDoc.cpp : implementation of the CImageProcessingDoc class
//

#include "stdafx.h"
#include "ImageProcessing.h"

#include "ImageProcessingDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc

IMPLEMENT_DYNCREATE(CImageProcessingDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageProcessingDoc, CDocument)
	//{{AFX_MSG_MAP(CImageProcessingDoc)
	ON_COMMAND(ID_FILE_OPEN_A, OnFileOpenA)
	ON_COMMAND(ID_FILE_OPEN_B, OnFileOpenB)
	ON_COMMAND(ID_FILE_OPEN_C, OnFileOpenC)
	ON_COMMAND(ID_FILE_OPEN_D, OnFileOpenD)
	ON_COMMAND(ID_FILE_SAVE_A, OnFileSaveA)
	ON_COMMAND(ID_FILE_SAVE_B, OnFileSaveB)
	ON_COMMAND(ID_FILE_SAVE_C, OnFileSaveC)
	ON_COMMAND(ID_FILE_SAVE_D, OnFileSaveD)
	ON_COMMAND(ID_MENU_RANDOMPIXELS_100, OnMenuRandompixels100)
	ON_COMMAND(ID_MENU_RANDOMPIXELS_1000, OnMenuRandompixels1000)
	ON_COMMAND(ID_MENU_RANDOMPIXELS_200, OnMenuRandompixels200)
	ON_COMMAND(ID_MENU_RANDOMPIXELS_500, OnMenuRandompixels500)
	ON_COMMAND(ID_MENU_COPYRECT, OnMenuCopyrect)
	ON_COMMAND(ID_MENU_GRAYING, OnMenuGraying)
	ON_COMMAND(ID_MENU_BINARYZATION, OnMenuBinaryzation)
	ON_COMMAND(ID_MENU_SUBTRACT, OnMenuSubtract)
	ON_COMMAND(ID_MENU_TRANSLATION, OnMenuTranslation)
	ON_COMMAND(ID_MENU_ROTATION, OnMenuRotation)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc construction/destruction

CImageProcessingDoc::CImageProcessingDoc()
{
	// TODO: add one-time construction code here

}

CImageProcessingDoc::~CImageProcessingDoc()
{
}

BOOL CImageProcessingDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc serialization

void CImageProcessingDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc diagnostics

#ifdef _DEBUG
void CImageProcessingDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImageProcessingDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc commands

void CImageProcessingDoc::LoadImage(CDib& bmp)
{
	CFileDialog fileDlg(TRUE, _T("*.bmp"), "",OFN_FILEMUSTEXIST|OFN_PATHMUSTEXIST|OFN_HIDEREADONLY,"image files (*.bmp; *.jpg) |*.bmp|",NULL);
	char title[] = {"Open Image"};
	fileDlg.m_ofn.lpstrTitle = title;
	
	CFile file;
	if(fileDlg.DoModal() == IDOK) 
	{
		if(!CDibUtil::ReadImage(fileDlg.GetPathName(), bmp))
		{
			AfxMessageBox("Cannot read image file!");
			return;
		}
		UpdateAllViews(NULL, NULL, NULL);
	}
}

void CImageProcessingDoc::SaveImage(CDib& bmp)
{
	CFileDialog fileDlg(FALSE, _T("*.bmp"), "",OFN_FILEMUSTEXIST|OFN_PATHMUSTEXIST|OFN_HIDEREADONLY,"image files (*.bmp) |*.bmp|",NULL);
	char title[]= {"Open Image"};
	fileDlg.m_ofn.lpstrTitle= title;
	
	CFile file;
	if(fileDlg.DoModal() == IDOK) 
	{
		if(!file.Open(fileDlg.GetPathName(), CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
		{
			AfxMessageBox("Cannot open the file");
			return;
		}
		else
			bmp.Write(&file);
	}
}

void CImageProcessingDoc::OnFileOpenA() 
{
	LoadImage(m_BitmapA);
}

void CImageProcessingDoc::OnFileOpenB() 
{
	LoadImage(m_BitmapB);
}

void CImageProcessingDoc::OnFileOpenC() 
{
	LoadImage(m_BitmapC);
}

void CImageProcessingDoc::OnFileOpenD() 
{
	LoadImage(m_BitmapD);
}

void CImageProcessingDoc::OnFileSaveA() 
{
	SaveImage(m_BitmapA);
}

void CImageProcessingDoc::OnFileSaveB() 
{
	SaveImage(m_BitmapB);
}

void CImageProcessingDoc::OnFileSaveC() 
{
	SaveImage(m_BitmapC);
}

void CImageProcessingDoc::OnFileSaveD() 
{
	SaveImage(m_BitmapD);
}

void CImageProcessingDoc::OnMenuRandompixels100() 
{
	DrawRandom(100);
}

void CImageProcessingDoc::OnMenuRandompixels1000() 
{
	DrawRandom(1000);
}

void CImageProcessingDoc::OnMenuRandompixels200() 
{
	DrawRandom(200);
}

void CImageProcessingDoc::OnMenuRandompixels500() 
{
	DrawRandom(500);
}

void CImageProcessingDoc::DrawRandom(long count)
{
	if (m_BitmapA.IsEmpty())
	{
		InvalidInput();
		return;
	}

	CDibUtil::RandomPixels(m_BitmapA, m_BitmapB, count);

	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuCopyrect() 
{
	if (m_BitmapA.IsEmpty() || m_BitmapB.IsEmpty()
		|| (m_BitmapA.GetDimensions() != m_BitmapB.GetDimensions()))
	{
		InvalidInput();
		return;
	}
	
	CDibUtil::CopyRect(m_BitmapA, m_BitmapB, CRect(50, 40, 180, 170));
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuGraying() 
{
	if (m_BitmapA.IsEmpty())
	{
		InvalidInput();
		return;
	}
	
	CDibUtil::Graying(m_BitmapA, m_BitmapB);
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuBinaryzation() 
{
	if (m_BitmapA.IsEmpty())
	{
		InvalidInput();
		return;
	}
	
	CDibUtil::Binaryzation(m_BitmapA, m_BitmapB, 128);
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuSubtract() 
{
	if (m_BitmapA.IsEmpty() || m_BitmapB.IsEmpty())
	{
		InvalidInput();
		return;
	}

	CDibUtil::Subtract(m_BitmapA, m_BitmapB, m_BitmapC);
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuTranslation() 
{
	if (m_BitmapA.IsEmpty())
	{
		InvalidInput();
		return;
	}
	
	CDibUtil::Translation(m_BitmapA, m_BitmapB, CPoint(20, 20));
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::OnMenuRotation() 
{
	if (m_BitmapA.IsEmpty())
	{
		InvalidInput();
		return;
	}
	
	CDibUtil::Rotation(m_BitmapA, m_BitmapB, 30);
	
	UpdateAllViews(NULL, NULL, NULL);
}

void CImageProcessingDoc::InvalidInput()
{
	AfxMessageBox(IDS_INVALID_INPUT, MB_OK);
}