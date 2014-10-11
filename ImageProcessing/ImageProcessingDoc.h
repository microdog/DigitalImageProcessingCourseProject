// ImageProcessingDoc.h : interface of the CImageProcessingDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMAGEPROCESSINGDOC_H__A112B3C3_8D05_4707_8001_DB4FB6D70E05__INCLUDED_)
#define AFX_IMAGEPROCESSINGDOC_H__A112B3C3_8D05_4707_8001_DB4FB6D70E05__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "CDib.h"
#include "DibUtil.h"

class CImageProcessingDoc : public CDocument
{
protected: // create from serialization only
	CImageProcessingDoc();
	DECLARE_DYNCREATE(CImageProcessingDoc)

// Attributes
public:
	CDib m_BitmapA;
	CDib m_BitmapB;
	CDib m_BitmapC;
	CDib m_BitmapD;

// Operations
public:
	// Basic operations
	void LoadImage(CDib& bmp);
	void SaveImage(CDib& bmp);

	// Image processing
	void CopyPixel();
	void DrawRandom(long count);

	// Notification
	void InvalidInput();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CImageProcessingDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingDoc)
	afx_msg void OnFileOpenA();
	afx_msg void OnFileOpenB();
	afx_msg void OnFileOpenC();
	afx_msg void OnFileOpenD();
	afx_msg void OnFileSaveA();
	afx_msg void OnFileSaveB();
	afx_msg void OnFileSaveC();
	afx_msg void OnFileSaveD();
	afx_msg void OnMenuRandompixels100();
	afx_msg void OnMenuRandompixels1000();
	afx_msg void OnMenuRandompixels200();
	afx_msg void OnMenuRandompixels500();
	afx_msg void OnMenuCopyrect();
	afx_msg void OnMenuGraying();
	afx_msg void OnMenuBinaryzation();
	afx_msg void OnMenuSubtract();
	afx_msg void OnMenuTranslation();
	afx_msg void OnMenuRotation();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGDOC_H__A112B3C3_8D05_4707_8001_DB4FB6D70E05__INCLUDED_)
