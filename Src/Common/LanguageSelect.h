/** 
 * @file  LanguageSelect.h
 *
 * @brief Declaration file for CLanguageSelect dialog.
 */
#pragma once

#include "CMoveConstraint.h"

#include <vector>
#include <string>

/////////////////////////////////////////////////////////////////////////////
// CLanguageSelect dialog

/**
 * @brief Dialog for selecting GUI language.
 *
 * Language select dialog shows list of installed GUI languages and
 * allows user to select one for use.
 */
class CLanguageSelect : public CDialog
{
// Construction
public:
	void SetModuleHandle(HMODULE hModule) { m_hModule = hModule; }
	CLanguageSelect(UINT idMainMenu, UINT idDocMenu, BOOL bReloadMenu =TRUE, BOOL bUpdateTitle =TRUE, CWnd* pParent = NULL);   // standard constructor
	BOOL AreLangsInstalled() const;
	WORD GetLangId() const { return m_wCurLanguage; }
	void InitializeLanguage();
	void UpdateDocTitle();
	void ReloadMenu();

	bool TranslateString(size_t line, std::string &) const;
	bool TranslateString(size_t line, std::wstring &) const;
	void SetIndicators(CStatusBar &, const UINT *, int) const;
	void TranslateMenu(HMENU) const;
	void TranslateDialog(HWND) const;
	String LoadString(UINT) const;
	std::wstring LoadDialogCaption(LPCTSTR lpDialogTemplateID) const;

// Implementation data
private:
	prdlg::CMoveConstraint m_constraint; 
	BOOL m_bReloadMenu;
	BOOL m_bUpdateTitle;
	HMODULE m_hModule;
	UINT m_idMainMenu;
	UINT m_idDocMenu;
	HINSTANCE m_hCurrentDll;
	LANGID m_wCurLanguage;
	std::vector<std::string> m_strarray;
	unsigned m_codepage;
// Implementation methods
private:
	String GetFileName(LANGID) const;
	BOOL LoadLanguageFile(LANGID);
	BOOL SetLanguage(LANGID);
	UINT GetDocResId() const;
	void LoadAndDisplayLanguages();

// Dialog Data
	//{{AFX_DATA(CLanguageSelect)
	enum { IDD = IDD_LANGUAGE_SELECT };
	CListBox	m_ctlLangList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLanguageSelect)
	public:
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL


	// Generated message map functions
	//{{AFX_MSG(CLanguageSelect)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};




//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.
