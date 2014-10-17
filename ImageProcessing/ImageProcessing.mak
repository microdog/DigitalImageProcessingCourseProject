# Microsoft Developer Studio Generated NMAKE File, Based on ImageProcessing.dsp
!IF "$(CFG)" == ""
CFG=ImageProcessing - Win32 Debug
!MESSAGE No configuration specified. Defaulting to ImageProcessing - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "ImageProcessing - Win32 Release" && "$(CFG)" != "ImageProcessing - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ImageProcessing.mak" CFG="ImageProcessing - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ImageProcessing - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "ImageProcessing - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\ImageProcessing.exe"


CLEAN :
	-@erase "$(INTDIR)\CDib.obj"
	-@erase "$(INTDIR)\DibUtil.obj"
	-@erase "$(INTDIR)\ImageProcessing.obj"
	-@erase "$(INTDIR)\ImageProcessing.pch"
	-@erase "$(INTDIR)\ImageProcessing.res"
	-@erase "$(INTDIR)\ImageProcessingDoc.obj"
	-@erase "$(INTDIR)\ImageProcessingViewA.obj"
	-@erase "$(INTDIR)\ImageProcessingViewB.obj"
	-@erase "$(INTDIR)\ImageProcessingViewC.obj"
	-@erase "$(INTDIR)\ImageProcessingViewD.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\ImageProcessing.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ImageProcessing.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x804 /fo"$(INTDIR)\ImageProcessing.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ImageProcessing.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\ImageProcessing.pdb" /machine:I386 /out:"$(OUTDIR)\ImageProcessing.exe" 
LINK32_OBJS= \
	"$(INTDIR)\CDib.obj" \
	"$(INTDIR)\DibUtil.obj" \
	"$(INTDIR)\ImageProcessing.obj" \
	"$(INTDIR)\ImageProcessingDoc.obj" \
	"$(INTDIR)\ImageProcessingViewA.obj" \
	"$(INTDIR)\ImageProcessingViewB.obj" \
	"$(INTDIR)\ImageProcessingViewC.obj" \
	"$(INTDIR)\ImageProcessingViewD.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\ImageProcessing.res"

"$(OUTDIR)\ImageProcessing.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\ImageProcessing.exe" "$(OUTDIR)\ImageProcessing.bsc"


CLEAN :
	-@erase "$(INTDIR)\CDib.obj"
	-@erase "$(INTDIR)\CDib.sbr"
	-@erase "$(INTDIR)\DibUtil.obj"
	-@erase "$(INTDIR)\DibUtil.sbr"
	-@erase "$(INTDIR)\ImageProcessing.obj"
	-@erase "$(INTDIR)\ImageProcessing.pch"
	-@erase "$(INTDIR)\ImageProcessing.res"
	-@erase "$(INTDIR)\ImageProcessing.sbr"
	-@erase "$(INTDIR)\ImageProcessingDoc.obj"
	-@erase "$(INTDIR)\ImageProcessingDoc.sbr"
	-@erase "$(INTDIR)\ImageProcessingViewA.obj"
	-@erase "$(INTDIR)\ImageProcessingViewA.sbr"
	-@erase "$(INTDIR)\ImageProcessingViewB.obj"
	-@erase "$(INTDIR)\ImageProcessingViewB.sbr"
	-@erase "$(INTDIR)\ImageProcessingViewC.obj"
	-@erase "$(INTDIR)\ImageProcessingViewC.sbr"
	-@erase "$(INTDIR)\ImageProcessingViewD.obj"
	-@erase "$(INTDIR)\ImageProcessingViewD.sbr"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\MainFrm.sbr"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\StdAfx.sbr"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\ImageProcessing.bsc"
	-@erase "$(OUTDIR)\ImageProcessing.exe"
	-@erase "$(OUTDIR)\ImageProcessing.ilk"
	-@erase "$(OUTDIR)\ImageProcessing.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR"$(INTDIR)\\" /Fp"$(INTDIR)\ImageProcessing.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x804 /fo"$(INTDIR)\ImageProcessing.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\ImageProcessing.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\CDib.sbr" \
	"$(INTDIR)\DibUtil.sbr" \
	"$(INTDIR)\ImageProcessing.sbr" \
	"$(INTDIR)\ImageProcessingDoc.sbr" \
	"$(INTDIR)\ImageProcessingViewA.sbr" \
	"$(INTDIR)\ImageProcessingViewB.sbr" \
	"$(INTDIR)\ImageProcessingViewC.sbr" \
	"$(INTDIR)\ImageProcessingViewD.sbr" \
	"$(INTDIR)\MainFrm.sbr" \
	"$(INTDIR)\StdAfx.sbr"

"$(OUTDIR)\ImageProcessing.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes /pdb:"$(OUTDIR)\ImageProcessing.pdb" /debug /machine:I386 /out:"$(OUTDIR)\ImageProcessing.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\CDib.obj" \
	"$(INTDIR)\DibUtil.obj" \
	"$(INTDIR)\ImageProcessing.obj" \
	"$(INTDIR)\ImageProcessingDoc.obj" \
	"$(INTDIR)\ImageProcessingViewA.obj" \
	"$(INTDIR)\ImageProcessingViewB.obj" \
	"$(INTDIR)\ImageProcessingViewC.obj" \
	"$(INTDIR)\ImageProcessingViewD.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\ImageProcessing.res"

"$(OUTDIR)\ImageProcessing.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("ImageProcessing.dep")
!INCLUDE "ImageProcessing.dep"
!ELSE 
!MESSAGE Warning: cannot find "ImageProcessing.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "ImageProcessing - Win32 Release" || "$(CFG)" == "ImageProcessing - Win32 Debug"
SOURCE=.\CDib.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\CDib.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\CDib.obj"	"$(INTDIR)\CDib.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\DibUtil.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\DibUtil.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\DibUtil.obj"	"$(INTDIR)\DibUtil.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessing.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessing.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessing.obj"	"$(INTDIR)\ImageProcessing.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessing.rc

"$(INTDIR)\ImageProcessing.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\ImageProcessingDoc.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessingDoc.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessingDoc.obj"	"$(INTDIR)\ImageProcessingDoc.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessingViewA.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessingViewA.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessingViewA.obj"	"$(INTDIR)\ImageProcessingViewA.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessingViewB.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessingViewB.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessingViewB.obj"	"$(INTDIR)\ImageProcessingViewB.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessingViewC.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessingViewC.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessingViewC.obj"	"$(INTDIR)\ImageProcessingViewC.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\ImageProcessingViewD.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\ImageProcessingViewD.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\ImageProcessingViewD.obj"	"$(INTDIR)\ImageProcessingViewD.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\MainFrm.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"


"$(INTDIR)\MainFrm.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"


"$(INTDIR)\MainFrm.obj"	"$(INTDIR)\MainFrm.sbr" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\ImageProcessing.pch"


!ENDIF 

SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "ImageProcessing - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\ImageProcessing.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\ImageProcessing.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "ImageProcessing - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR"$(INTDIR)\\" /Fp"$(INTDIR)\ImageProcessing.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\StdAfx.sbr"	"$(INTDIR)\ImageProcessing.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

