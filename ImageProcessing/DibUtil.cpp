// DibUtil.cpp: implementation of the CDibUtil class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "DibUtil.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

// gray = red * 0.299 + green * 0.587 + blue * 0.114
#define GRAYING(R, G, B) (BYTE)(((UINT)B * 29 + (UINT)G * 150 + (UINT)R * 77 + 128) >> 8)

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CDibUtil::CDibUtil()
{

}

CDibUtil::~CDibUtil()
{

}

BOOL CDibUtil::ReadImage(const CString& filename, CDib& cdib)
{
	CFile file;
	if (!file.Open(filename, CFile::modeRead))
		return FALSE;

	return ReadImage(file, cdib);
}

BOOL CDibUtil::ReadImage(CFile& file, CDib& cdib)
{
	if(!cdib.Read(&file))
		return FALSE;

	if (cdib.m_lpBMIH->biCompression != BI_RGB)
		return FALSE;

	return TRUE;
}

VOID CDibUtil::CopyRect(CDib& src, CDib& dest, const CRect rect)
{
	// TODO: The validation of rect in source and destination
	// images should be checked
	for (long y = rect.top; y <= rect.bottom; ++y)
		for (long x = rect.left; x <= rect.right; ++x)
			dest.WritePixel(x, y, src.GetPixel(x, y));
}

VOID CDibUtil::Graying(CDib& src, CDib& dest)
{
	dest.CopyDib(&dest);
	CSize imageSize = src.GetDimensions();

	RGBQUAD color;
	for (long y = 0; y != imageSize.cy; ++y)
		for (long x = 0; x != imageSize.cx; ++x)
		{
			color = src.GetPixel(x, y);
			color.rgbRed = color.rgbGreen = color.rgbBlue
				= GRAYING(color.rgbRed, color.rgbGreen, color.rgbBlue);
			dest.WritePixel(x, y, color);
		}
}

VOID CDibUtil::Binaryzation(CDib& src, CDib& dest, BYTE threshold)
{
	dest.CopyDib(&dest);
	CSize imageSize = src.GetDimensions();
	
	RGBQUAD color;
	for (long y = 0; y != imageSize.cy; ++y)
		for (long x = 0; x != imageSize.cx; ++x)
		{
			color = src.GetPixel(x, y);
			color.rgbRed = color.rgbGreen = color.rgbBlue
				= (GRAYING(color.rgbRed, color.rgbGreen, color.rgbBlue) < threshold) ? 0x00 : 0xFF;
			dest.WritePixel(x, y, color);
		}
}

VOID CDibUtil::Subtract(CDib& imgA, CDib& imgB, CDib& dest)
{
	// TODO: The equality of two images' size should be validated
}