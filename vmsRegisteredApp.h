/*
  Free Download Manager Copyright (c) 2003-2016 FreeDownloadManager.ORG
*/

#if !defined(AFX_VMSREGISTEREDAPP_H__95D9BC8D_1289_4F07_B20B_6400B056C21C__INCLUDED_)
#define AFX_VMSREGISTEREDAPP_H__95D9BC8D_1289_4F07_B20B_6400B056C21C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif 

class vmsRegisteredApp  
{
public:
	
	
	static CString GetFullPath (LPCTSTR pszExeName, bool bUser = false);	
	static CString GetFullPath2 (LPCTSTR pszExeName);

	vmsRegisteredApp();
	virtual ~vmsRegisteredApp();

};

#endif 
