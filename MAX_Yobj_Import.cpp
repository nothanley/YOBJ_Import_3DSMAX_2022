//**************************************************************************/
// Copyright (c) 1998-2020 Autodesk, Inc.
// All rights reserved.
// 
// Use of this software is subject to the terms of the Autodesk license 
// agreement provided at the time of installation or download, or which 
// otherwise accompanies this software in either electronic or hard copy form.
//**************************************************************************/
// DESCRIPTION: Plugin Wizard generated plugin
// AUTHOR: 
//***************************************************************************/

#include "MAX_Yobj_Import.h"

#define MAX_Yobj_Import_CLASS_ID Class_ID(0x9033bb53, 0x55b54c30)

class MAX_Yobj_Import : public SceneImport
{
public:
	// Constructor/Destructor
	MAX_Yobj_Import();
	virtual ~MAX_Yobj_Import();

	int ExtCount() override; // Number of extensions supported
	const TCHAR* Ext(int n) override; // Extension #n (i.e. "3DS")
	const TCHAR* LongDesc() override; // Long ASCII description (i.e. "Autodesk 3D Studio File")
	const TCHAR* ShortDesc() override; // Short ASCII description (i.e. "3D Studio")
	const TCHAR* AuthorName() override; // ASCII Author name
	const TCHAR* CopyrightMessage() override; // ASCII Copyright message
	const TCHAR* OtherMessage1() override; // Other message #1
	const TCHAR* OtherMessage2() override; // Other message #2
	unsigned int Version() override; // Version number * 100 (i.e. v3.01 = 301)
	void ShowAbout(HWND hWnd) override; // Show DLL's "About..." box
	int DoImport(const TCHAR* name, ImpInterface* i, Interface* gi, BOOL suppressPrompts = FALSE) override; // Import file
};


class MAX_Yobj_ImportClassDesc : public ClassDesc2 
{
public:
	int           IsPublic() override                               { return TRUE; }
	void*         Create(BOOL /*loading = FALSE*/) override         { return new MAX_Yobj_Import(); }
	const TCHAR*  ClassName() override                              { return GetString(IDS_CLASS_NAME); }
	const TCHAR*  NonLocalizedClassName() override                  { return _T("MAX_Yobj_Import"); }
	SClass_ID     SuperClassID() override                           { return SCENE_IMPORT_CLASS_ID; }
	Class_ID      ClassID() override                                { return MAX_Yobj_Import_CLASS_ID; }
	const TCHAR*  Category() override                               { return GetString(IDS_CATEGORY); }

	const TCHAR*  InternalName() override                           { return _T("MAX_Yobj_Import"); } // Returns fixed parsable name (scripter-visible name)
	HINSTANCE     HInstance() override                              { return hInstance; } // Returns owning module handle


};

ClassDesc2* GetMAX_Yobj_ImportDesc()
{
	static MAX_Yobj_ImportClassDesc MAX_Yobj_ImportDesc;
	return &MAX_Yobj_ImportDesc; 
}




INT_PTR CALLBACK MAX_Yobj_ImportOptionsDlgProc(HWND hWnd, UINT message, WPARAM, LPARAM lParam)
{
	static MAX_Yobj_Import* imp = nullptr;

	switch (message)
	{
	case WM_INITDIALOG:
		imp = (MAX_Yobj_Import*)lParam;
		CenterWindow(hWnd, GetParent(hWnd));
		return TRUE;

	case WM_CLOSE:
		EndDialog(hWnd, 0);
		return 1;
	}

	return 0;
}

//--- MAX_Yobj_Import -------------------------------------------------------
MAX_Yobj_Import::MAX_Yobj_Import()
{

}

MAX_Yobj_Import::~MAX_Yobj_Import()
{

}

int MAX_Yobj_Import::ExtCount()
{
#pragma message(TODO("Returns the number of file name extensions supported by the plug-in."))
	return 1;
}

const TCHAR* MAX_Yobj_Import::Ext(int /*n*/)
{
#pragma message(TODO("Return the 'i-th' file name extension (i.e. \"3DS\")."))
	return _T("");
}

const TCHAR* MAX_Yobj_Import::LongDesc()
{
#pragma message(TODO("Return long ASCII description (i.e. \"Targa 2.0 Image File\")"))
	return _T("");
}

const TCHAR* MAX_Yobj_Import::ShortDesc()
{
#pragma message(TODO("Return short ASCII description (i.e. \"Targa\")"))
	return _T("");
}

const TCHAR* MAX_Yobj_Import::AuthorName()
{
#pragma message(TODO("Return ASCII Author name"))
	return _T("");
}

const TCHAR* MAX_Yobj_Import::CopyrightMessage()
{
#pragma message(TODO("Return ASCII Copyright message"))
	return _T("");
}

const TCHAR* MAX_Yobj_Import::OtherMessage1()
{
	// TODO: Return Other message #1 if any
	return _T("");
}

const TCHAR* MAX_Yobj_Import::OtherMessage2()
{
	// TODO: Return other message #2 in any
	return _T("");
}

unsigned int MAX_Yobj_Import::Version()
{
#pragma message(TODO("Return Version number * 100 (i.e. v3.01 = 301)"))
	return 100;
}

void MAX_Yobj_Import::ShowAbout(HWND /*hWnd*/)
{
	// Optional
}

int MAX_Yobj_Import::DoImport(const TCHAR* /*filename*/, ImpInterface* /*importerInt*/, Interface* /*ip*/, BOOL suppressPrompts)
{
#pragma message(TODO("Implement the actual file import here and"))

	if (!suppressPrompts)
		DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_PANEL), GetActiveWindow(), MAX_Yobj_ImportOptionsDlgProc, (LPARAM)this);

#pragma message(TODO("return TRUE If the file is imported properly"))

	return FALSE;
}
