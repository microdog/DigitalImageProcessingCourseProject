; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAboutDlg
LastTemplate=CView
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ImageProcessing.h"
LastPage=0

ClassCount=8
Class1=CImageProcessingApp
Class2=CImageProcessingDoc
Class3=CImageProcessingViewA
Class4=CMainFrame

ResourceCount=2
Resource1=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CImageProcessingViewB
Class7=CImageProcessingViewC
Class8=CImageProcessingViewD
Resource2=IDR_MAINFRAME

[CLS:CImageProcessingApp]
Type=0
HeaderFile=ImageProcessing.h
ImplementationFile=ImageProcessing.cpp
Filter=N
LastObject=CImageProcessingApp

[CLS:CImageProcessingDoc]
Type=0
HeaderFile=ImageProcessingDoc.h
ImplementationFile=ImageProcessingDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=ID_MENU_ROTATION

[CLS:CImageProcessingViewA]
Type=0
HeaderFile=ImageProcessingViewA.h
ImplementationFile=ImageProcessingViewA.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=ImageProcessing.cpp
ImplementationFile=ImageProcessing.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_EDIT_HELP,edit,1352730692

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_APP_ABOUT
Command2=ID_APP_EXIT
Command3=ID_MENU_RANDOMPIXELS_100
Command4=ID_MENU_RANDOMPIXELS_200
Command5=ID_MENU_RANDOMPIXELS_500
Command6=ID_MENU_RANDOMPIXELS_1000
Command7=ID_MENU_COPYRECT
Command8=ID_MENU_GRAYING
Command9=ID_MENU_BINARYZATION
Command10=ID_MENU_SUBTRACT
Command11=ID_MENU_TRANSLATION
Command12=ID_MENU_ROTATION
CommandCount=12

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_OPEN_A
Command2=ID_FILE_OPEN_B
Command3=ID_FILE_OPEN_C
Command4=ID_FILE_OPEN_D
Command5=ID_FILE_SAVE_A
Command6=ID_FILE_SAVE_B
Command7=ID_FILE_SAVE_C
Command8=ID_FILE_SAVE_D
Command9=ID_APP_ABOUT
CommandCount=9

[CLS:CImageProcessingViewB]
Type=0
HeaderFile=ImageProcessingViewB.h
ImplementationFile=ImageProcessingViewB.cpp
BaseClass=CView
Filter=C

[CLS:CImageProcessingViewC]
Type=0
HeaderFile=ImageProcessingViewC.h
ImplementationFile=ImageProcessingViewC.cpp
BaseClass=CView
Filter=C

[CLS:CImageProcessingViewD]
Type=0
HeaderFile=ImageProcessingViewD.h
ImplementationFile=ImageProcessingViewD.cpp
BaseClass=CView
Filter=C
LastObject=CImageProcessingViewD

