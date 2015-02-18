/**
 * @file  ProjectFilePathsDlg.cpp
 *
 * @brief Implementation file for ProjectFilePaths dialog
 */

#include "stdafx.h"
#include "ProjectFilePathsDlg.h"
#include "UnicodeString.h"
#include "Merge.h"
#include "MainFrm.h"
#include "paths.h"
#include "OptionsDef.h"
#include "OptionsMgr.h"
#include "ProjectFile.h"
#include "FileOrFolderSelect.h"
#include "FileFilterHelper.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

IMPLEMENT_DYNCREATE(ProjectFilePathsDlg, CPropertyPage)

/** 
 * @brief Standard constructor.
 */
ProjectFilePathsDlg::ProjectFilePathsDlg() : CPropertyPage(ProjectFilePathsDlg::IDD)
, m_bLeftPathReadOnly(FALSE)
, m_bRightPathReadOnly(FALSE)
, m_bIncludeSubfolders(FALSE)
{
	//{{AFX_DATA_INIT(ProjectFilePathsDlg)
	//}}AFX_DATA_INIT
	m_strCaption = theApp.LoadDialogCaption(m_lpszTemplateName).c_str();
	m_psp.pszTitle = m_strCaption;
	m_psp.dwFlags |= PSP_USETITLE;
}

void ProjectFilePathsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ProjectFilePathsDlg)
	DDX_Text(pDX, IDC_PROJ_LFILE_EDIT, m_sLeftFile);
	DDX_Text(pDX, IDC_PROJ_RFILE_EDIT, m_sRightFile);
	DDX_Text(pDX, IDC_PROJ_FILTER_EDIT, m_sFilter);
	DDX_Check(pDX, IDC_PROJ_INC_SUBFOLDERS, m_bIncludeSubfolders);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_PROJFILE_LREADONLY, m_bLeftPathReadOnly);
	DDX_Check(pDX, IDC_PROJFILE_RREADONLY, m_bRightPathReadOnly);
}

BEGIN_MESSAGE_MAP(ProjectFilePathsDlg, CDialog)
	//{{AFX_MSG_MAP(ProjectFilePathsDlg)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_PROJ_LFILE_BROWSE, OnBnClickedProjLfileBrowse)
	ON_BN_CLICKED(IDC_PROJ_RFILE_BROWSE, OnBnClickedProjRfileBrowse)
	ON_BN_CLICKED(IDC_PROJ_FILTER_SELECT, OnBnClickedProjFilterSelect)
	ON_BN_CLICKED(IDC_PROJ_OPEN, OnBnClickedProjOpen)
	ON_BN_CLICKED(IDC_PROJ_SAVE, OnBnClickedProjSave)
END_MESSAGE_MAP()

/** 
 * @brief Initialize dialog.
 */
BOOL ProjectFilePathsDlg::OnInitDialog() 
{
	theApp.TranslateDialog(m_hWnd);
	CDialog::OnInitDialog();
	return FALSE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

/** 
 * @brief Called when Browse-button for left path is selected.
 */
void ProjectFilePathsDlg::OnBnClickedProjLfileBrowse()
{
	UpdateData(TRUE);
	String s;
	if (::SelectFileOrFolder(GetSafeHwnd(), s, m_sLeftFile))
	{
		m_sLeftFile = s.c_str();
		UpdateData(FALSE);
	}
}

/** 
 * @brief Called when Browse-button for right path is selected.
 */
void ProjectFilePathsDlg::OnBnClickedProjRfileBrowse()
{
	UpdateData(TRUE);
	String s;
	if (::SelectFileOrFolder(GetSafeHwnd(), s, m_sRightFile))
	{
		m_sRightFile = s.c_str();
		UpdateData(FALSE);
	}
}

/** 
 * @brief Called when Selec-button for filter is selected.
 */
void ProjectFilePathsDlg::OnBnClickedProjFilterSelect()
{
	String filterPrefix = theApp.LoadString(IDS_FILTER_PREFIX);
	CString curFilter;

	const BOOL bUseMask = theApp.m_pGlobalFileFilter->IsUsingMask();
	GetDlgItemText(IDC_PROJ_FILTER_EDIT, curFilter);
	curFilter.TrimLeft();
	curFilter.TrimRight();

	GetMainFrame()->SelectFilter();
	
	String filterNameOrMask = theApp.m_pGlobalFileFilter->GetFilterNameOrMask();
	if (theApp.m_pGlobalFileFilter->IsUsingMask())
	{
		// If we had filter chosen and now has mask we can overwrite filter
		if (!bUseMask || curFilter[0] != '*')
		{
			SetDlgItemText(IDC_PROJ_FILTER_EDIT, filterNameOrMask.c_str());
		}
	}
	else
	{
		filterNameOrMask = filterPrefix + filterNameOrMask;
		SetDlgItemText(IDC_PROJ_FILTER_EDIT, filterNameOrMask.c_str());
	}
}

/** 
 * @brief Callled when Open-button for project file is selected.
 */
void ProjectFilePathsDlg::OnBnClickedProjOpen()
{
	String fileName = AskProjectFileName(TRUE);
	if (fileName.empty())
		return;

	ProjectFile project;
	if (!theApp.LoadProjectFile(fileName, project))
		return;

	bool left_ro, right_ro;
	m_sLeftFile = project.GetLeft(&left_ro).c_str();
	m_sRightFile = project.GetRight(&right_ro).c_str();
	m_bLeftPathReadOnly = left_ro;
	m_bRightPathReadOnly = right_ro;
	m_sFilter = project.GetFilter().c_str();
	m_bIncludeSubfolders = project.GetSubfolders();

	UpdateData(FALSE);
	LangMessageBox(IDS_PROJFILE_LOAD_SUCCESS, MB_ICONINFORMATION);
}

/** 
 * @brief Called when Save-button for project file is selected.
 */
void ProjectFilePathsDlg::OnBnClickedProjSave()
{
	UpdateData(TRUE);

	m_sLeftFile.TrimLeft();
	m_sLeftFile.TrimRight();
	m_sLeftFile.TrimLeft();
	m_sLeftFile.TrimRight();
	m_sFilter.TrimLeft();
	m_sFilter.TrimRight();

	String fileName = AskProjectFileName(FALSE);
	if (fileName.empty())
		return;

	ProjectFile project;

	bool left_ro = !!m_bLeftPathReadOnly, right_ro = !!m_bRightPathReadOnly;
	if (!m_sLeftFile.IsEmpty())
		project.SetLeft((LPCTSTR)m_sLeftFile, &left_ro);
	if (!m_sRightFile.IsEmpty())
		project.SetRight((LPCTSTR)m_sRightFile, &right_ro);
	if (!m_sFilter.IsEmpty())
	{
		// Remove possbile prefix from the filter name
		String prefix = theApp.LoadString(IDS_FILTER_PREFIX);
		int ind = m_sFilter.Find(prefix.c_str(), 0);
		if (ind == 0)
		{
			m_sFilter.Delete(0, static_cast<int>(prefix.length()));
		}
		m_sFilter.TrimLeft();
		project.SetFilter((LPCTSTR)m_sFilter);
	}
	project.SetSubfolders(m_bIncludeSubfolders);

	if (!theApp.SaveProjectFile(fileName, project))
		return;

	LangMessageBox(IDS_PROJFILE_SAVE_SUCCESS, MB_ICONINFORMATION);
}

/** 
 * @brief Set paths for dialog.
 * This function is used to set paths from outside the dialog. The dialog
 * only accepts existing paths, as we expect paths coming from existing
 * compare windows.
 * @param [in] left Left path.
 * @param [in] right Right path.
 */
void ProjectFilePathsDlg::SetPaths(LPCTSTR left, LPCTSTR right)
{
	if (left != NULL)
	{
		PATH_EXISTENCE pe = paths_DoesPathExist(left);
		if (pe != DOES_NOT_EXIST)
		{
			m_sLeftFile = left;
		}
	}
	if (right != NULL)
	{
		PATH_EXISTENCE pe = paths_DoesPathExist(right);
		if (pe != DOES_NOT_EXIST)
		{
			m_sRightFile = right;
		}
	}
}

/** 
 * @brief Allow user to select a file to open/save.
 */
CString ProjectFilePathsDlg::AskProjectFileName(BOOL bOpen)
{
	// get the default projects path
	String strProjectFileName;
	String strProjectPath = GetOptionsMgr()->GetString(OPT_PROJECTS_PATH);

	if (!::SelectFile(GetSafeHwnd(), strProjectFileName, strProjectPath.c_str(),
			NULL, IDS_PROJECTFILES, bOpen))
		return _T("");

	if (strProjectFileName.empty())
		return _T("");

	// Add projectfile extension if it is missing
	// So we allow 'filename.otherext' but add extension for 'filename'
	String extension;
	paths_SplitFilename(strProjectFileName, NULL, NULL, &extension);
	if (extension.empty())
	{
		strProjectFileName += _T(".");
		strProjectFileName += theApp.LoadString(IDS_PROJECTFILES_EXT).c_str();
	}

	// get the path part from the filename
	strProjectPath = paths_GetParentPath(strProjectFileName);
	// store this as the new project path
	GetOptionsMgr()->SaveOption(OPT_PROJECTS_PATH, strProjectPath);
	return strProjectFileName.c_str();
}

