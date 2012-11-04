/** 
 * @file  PropColors.cpp
 *
 * @brief Implementation of PropMergeColors propertysheet
 */
// ID line follows -- this is updated by SVN
// $Id: PropColors.cpp 6908 2009-07-11 08:29:49Z kimmov $

#include "stdafx.h"
#include "merge.h"
#include "PropColors.h"
#include "CustomColors.h"
#include "OptionsDef.h"
#include "OptionsMgr.h"
#include "OptionsPanel.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/** 
 * @brief Default constructor.
 */
PropMergeColors::PropMergeColors(COptionsMgr *optionsMgr)
 : OptionsPanel(optionsMgr, PropMergeColors::IDD)
{
}

void PropMergeColors::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(PropMergeColors)
	DDX_Control(pDX, IDC_TRIVIAL_DIFF_DELETED_COLOR, m_cTrivialDeleted);
	DDX_Control(pDX, IDC_TRIVIAL_DIFF_COLOR, m_cTrivial);
	DDX_Control(pDX, IDC_SEL_DIFFERENCE_TEXT_COLOR, m_cSelDiffText);
	DDX_Control(pDX, IDC_DIFFERENCE_TEXT_COLOR, m_cDiffText);
	DDX_Control(pDX, IDC_SEL_DIFFERENCE_DELETED_COLOR, m_cSelDiffDeleted);
	DDX_Control(pDX, IDC_DIFFERENCE_DELETED_COLOR, m_cDiffDeleted);
	DDX_Control(pDX, IDC_SEL_DIFFERENCE_COLOR, m_cSelDiff);
	DDX_Control(pDX, IDC_DIFFERENCE_COLOR, m_cDiff);
	DDX_Control(pDX, IDC_TRIVIAL_DIFF_TEXT_COLOR, m_cTrivialText);
	DDX_Control(pDX, IDC_MOVEDBLOCK_COLOR, m_cMoved);
	DDX_Control(pDX, IDC_MOVEDBLOCK_DELETED_COLOR, m_cMovedDeleted);
	DDX_Control(pDX, IDC_MOVEDBLOCK_TEXT_COLOR, m_cMovedText);
	DDX_Control(pDX, IDC_SEL_MOVEDBLOCK_COLOR, m_cSelMoved);
	DDX_Control(pDX, IDC_SEL_MOVEDBLOCK_DELETED_COLOR, m_cSelMovedDeleted);
	DDX_Control(pDX, IDC_SEL_MOVEDBLOCK_TEXT_COLOR, m_cSelMovedText);
	DDX_Control(pDX, IDC_SNP_COLOR, m_cSNP);
	DDX_Control(pDX, IDC_SNP_DELETED_COLOR, m_cSNPDeleted);
	DDX_Control(pDX, IDC_SNP_TEXT_COLOR, m_cSNPText);
	DDX_Control(pDX, IDC_SEL_SNP_COLOR, m_cSelSNP);
	DDX_Control(pDX, IDC_SEL_SNP_DELETED_COLOR, m_cSelSNPDeleted);
	DDX_Control(pDX, IDC_SEL_SNP_TEXT_COLOR, m_cSelSNPText);
	DDX_Control(pDX, IDC_WORDDIFF_COLOR, m_cWordDiff);
	DDX_Control(pDX, IDC_WORDDIFF_DELETED_COLOR, m_cWordDiffDeleted);
	DDX_Control(pDX, IDC_WORDDIFF_TEXT_COLOR, m_cWordDiffText);
	DDX_Control(pDX, IDC_SEL_WORDDIFF_COLOR, m_cSelWordDiff);
	DDX_Control(pDX, IDC_SEL_WORDDIFF_DELETED_COLOR, m_cSelWordDiffDeleted);
	DDX_Control(pDX, IDC_SEL_WORDDIFF_TEXT_COLOR, m_cSelWordDiffText);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(PropMergeColors, CDialog)
	//{{AFX_MSG_MAP(PropMergeColors)
	ON_BN_CLICKED(IDC_DIFFERENCE_COLOR, OnDifferenceColor)
	ON_BN_CLICKED(IDC_DIFFERENCE_DELETED_COLOR, OnDifferenceDeletedColor)
	ON_BN_CLICKED(IDC_SEL_DIFFERENCE_DELETED_COLOR, OnSelDifferenceDeletedColor)
	ON_BN_CLICKED(IDC_SEL_DIFFERENCE_COLOR, OnSelDifferenceColor)
	ON_BN_CLICKED(IDC_DIFFERENCE_TEXT_COLOR, OnDifferenceTextColor)
	ON_BN_CLICKED(IDC_SEL_DIFFERENCE_TEXT_COLOR, OnSelDifferenceTextColor)
	ON_BN_CLICKED(IDC_TRIVIAL_DIFF_COLOR, OnTrivialDiffColor)
	ON_BN_CLICKED(IDC_TRIVIAL_DIFF_DELETED_COLOR, OnTrivialDiffDeletedColor)
	ON_BN_CLICKED(IDC_COLORDEFAULTS_BTN, OnDefaults)
	ON_BN_CLICKED(IDC_TRIVIAL_DIFF_TEXT_COLOR, OnTrivialDiffTextColor)
	ON_BN_CLICKED(IDC_MOVEDBLOCK_COLOR, OnMovedColor)
	ON_BN_CLICKED(IDC_MOVEDBLOCK_DELETED_COLOR, OnMovedDeletedColor)
	ON_BN_CLICKED(IDC_MOVEDBLOCK_TEXT_COLOR, OnMovedTextColor)
	ON_BN_CLICKED(IDC_SEL_MOVEDBLOCK_COLOR, OnSelMovedColor)
	ON_BN_CLICKED(IDC_SEL_MOVEDBLOCK_DELETED_COLOR, OnSelMovedDeletedColor)
	ON_BN_CLICKED(IDC_SEL_MOVEDBLOCK_TEXT_COLOR, OnSelMovedTextColor)
	ON_BN_CLICKED(IDC_SNP_COLOR, OnSNPColor)
	ON_BN_CLICKED(IDC_SNP_DELETED_COLOR, OnSNPDeletedColor)
	ON_BN_CLICKED(IDC_SNP_TEXT_COLOR, OnSNPTextColor)
	ON_BN_CLICKED(IDC_SEL_SNP_COLOR, OnSelSNPColor)
	ON_BN_CLICKED(IDC_SEL_SNP_DELETED_COLOR, OnSelSNPDeletedColor)
	ON_BN_CLICKED(IDC_SEL_SNP_TEXT_COLOR, OnSelSNPTextColor)
	ON_BN_CLICKED(IDC_WORDDIFF_COLOR, OnWordDiffColor)
	ON_BN_CLICKED(IDC_WORDDIFF_DELETED_COLOR, OnWordDiffDeletedColor)
	ON_BN_CLICKED(IDC_WORDDIFF_TEXT_COLOR, OnWordDiffTextColor)
	ON_BN_CLICKED(IDC_SEL_WORDDIFF_COLOR, OnSelWordDiffColor)
	ON_BN_CLICKED(IDC_SEL_WORDDIFF_DELETED_COLOR, OnSelWordDiffDeletedColor)
	ON_BN_CLICKED(IDC_SEL_WORDDIFF_TEXT_COLOR, OnSelWordDiffTextColor)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/** 
 * @brief Called before propertysheet is drawn.
 */
BOOL PropMergeColors::OnInitDialog()
{
	theApp.TranslateDialog(m_hWnd);
	return CPropertyPage::OnInitDialog();
}

/** 
 * @brief Reads options values from storage to UI.
 * (Property sheet calls this before displaying all property pages)
 */
void PropMergeColors::ReadOptions()
{
	SerializeColors(READ_OPTIONS);
}

/** 
 * @brief Writes options values from UI to storage.
 * (Property sheet calls this after displaying all property pages)
 */
void PropMergeColors::WriteOptions()
{
	SerializeColors(WRITE_OPTIONS);
}

/** 
 * @brief Let user browse common color dialog, and select a color
 */
void PropMergeColors::BrowseColor(CColorButton & colorButton, COLORREF & currentColor)
{
	CColorDialog dialog(currentColor);
	CustomColors::Load(m_cCustColors);
	dialog.m_cc.lpCustColors = m_cCustColors;
	
	if (dialog.DoModal() == IDOK)
	{
		currentColor = dialog.GetColor();
		colorButton.SetColor(currentColor);
	}
	CustomColors::Save(m_cCustColors);
}

/** 
 * @brief User wants to change difference color
 */
void PropMergeColors::OnDifferenceColor() 
{
	BrowseColor(m_cDiff, m_clrDiff);
}

/** 
 * @brief User wants to change selected difference color
 */
void PropMergeColors::OnSelDifferenceColor() 
{
	BrowseColor(m_cSelDiff, m_clrSelDiff);
}

/** 
 * @brief User wants to change deleted difference color
 */
void PropMergeColors::OnDifferenceDeletedColor() 
{
	BrowseColor(m_cDiffDeleted, m_clrDiffDeleted);
}

/** 
 * @brief User wants to change selected & deleted difference color
 */
void PropMergeColors::OnSelDifferenceDeletedColor() 
{
	BrowseColor(m_cSelDiffDeleted, m_clrSelDiffDeleted);
}

/** 
 * @brief User wants to change difference text color
 */
void PropMergeColors::OnDifferenceTextColor() 
{
	BrowseColor(m_cDiffText, m_clrDiffText);
}

/** 
 * @brief User wants to change selected difference text color
 */
void PropMergeColors::OnSelDifferenceTextColor() 
{
	BrowseColor(m_cSelDiffText, m_clrSelDiffText);
}

/** 
 * @brief User wants to change trivial difference color
 */
void PropMergeColors::OnTrivialDiffColor() 
{
	BrowseColor(m_cTrivial, m_clrTrivial);
}

/** 
 * @brief User wants to change deleted trivial difference color
 */
void PropMergeColors::OnTrivialDiffDeletedColor() 
{
	BrowseColor(m_cTrivialDeleted, m_clrTrivialDeleted);
}

void PropMergeColors::OnTrivialDiffTextColor()
{
	BrowseColor(m_cTrivialText, m_clrTrivialText);
}

void PropMergeColors::OnMovedColor()
{
	BrowseColor(m_cMoved, m_clrMoved);
}

void PropMergeColors::OnMovedDeletedColor()
{
	BrowseColor(m_cMovedDeleted, m_clrMovedDeleted);
}

void PropMergeColors::OnMovedTextColor()
{
	BrowseColor(m_cMovedText, m_clrMovedText);
}

void PropMergeColors::OnSelMovedColor()
{
	BrowseColor(m_cSelMoved, m_clrSelMoved);
}

void PropMergeColors::OnSelMovedDeletedColor()
{
	BrowseColor(m_cSelMovedDeleted, m_clrSelMovedDeleted);
}

void PropMergeColors::OnSelMovedTextColor()
{
	BrowseColor(m_cSelMovedText, m_clrSelMovedText);
}

void PropMergeColors::OnSNPColor()
{
	BrowseColor(m_cSNP, m_clrSNP);
}

void PropMergeColors::OnSNPDeletedColor()
{
	BrowseColor(m_cSNPDeleted, m_clrSNPDeleted);
}

void PropMergeColors::OnSNPTextColor()
{
	BrowseColor(m_cSNPText, m_clrSNPText);
}

void PropMergeColors::OnSelSNPColor()
{
	BrowseColor(m_cSelSNP, m_clrSelSNP);
}

void PropMergeColors::OnSelSNPDeletedColor()
{
	BrowseColor(m_cSelSNPDeleted, m_clrSelSNPDeleted);
}

void PropMergeColors::OnSelSNPTextColor()
{
	BrowseColor(m_cSelSNPText, m_clrSelSNPText);
}

/** 
 * @brief User wants to change word difference color
 */
void PropMergeColors::OnWordDiffColor() 
{
	BrowseColor(m_cWordDiff, m_clrWordDiff);
}
/** 
 * @brief User wants to change word difference deleted color
 */
void PropMergeColors::OnWordDiffDeletedColor() 
{
	BrowseColor(m_cWordDiffDeleted, m_clrWordDiffDeleted);
}

/** 
 * @brief User wants to change selected word difference color
 */
void PropMergeColors::OnSelWordDiffColor() 
{
	BrowseColor(m_cSelWordDiff, m_clrSelWordDiff);
}

/** 
 * @brief User wants to change word difference deleted color
 */
void PropMergeColors::OnSelWordDiffDeletedColor()
{
	BrowseColor(m_cSelWordDiffDeleted, m_clrSelWordDiffDeleted);
}

/** 
 * @brief User wants to change word difference text color
 */
void PropMergeColors::OnWordDiffTextColor() 
{
	BrowseColor(m_cWordDiffText, m_clrWordDiffText);
}

/** 
 * @brief User wants to change selected word difference text color
 */
void PropMergeColors::OnSelWordDiffTextColor() 
{
	BrowseColor(m_cSelWordDiffText, m_clrSelWordDiffText);
}

void PropMergeColors::SerializeColors(OPERATION op)
{
	SerializeColor(op, m_cDiff, OPT_CLR_DIFF, m_clrDiff);
	SerializeColor(op, m_cDiffDeleted, OPT_CLR_DIFF_DELETED, m_clrDiffDeleted);
	SerializeColor(op, m_cSelDiff, OPT_CLR_SELECTED_DIFF, m_clrSelDiff);

	SerializeColor(op, m_cDiffText, OPT_CLR_DIFF_TEXT, m_clrDiffText);
	SerializeColor(op, m_cSelDiffDeleted, OPT_CLR_SELECTED_DIFF_DELETED, m_clrSelDiffDeleted);
	SerializeColor(op, m_cSelDiffText, OPT_CLR_SELECTED_DIFF_TEXT, m_clrSelDiffText);

	SerializeColor(op, m_cTrivial, OPT_CLR_TRIVIAL_DIFF, m_clrTrivial);
	SerializeColor(op, m_cTrivialDeleted, OPT_CLR_TRIVIAL_DIFF_DELETED, m_clrTrivialDeleted);
	SerializeColor(op, m_cTrivialText, OPT_CLR_TRIVIAL_DIFF_TEXT, m_clrTrivialText);
	
	SerializeColor(op, m_cMoved, OPT_CLR_MOVEDBLOCK, m_clrMoved);
	SerializeColor(op, m_cMovedDeleted, OPT_CLR_MOVEDBLOCK_DELETED, m_clrMovedDeleted);
	SerializeColor(op, m_cMovedText, OPT_CLR_MOVEDBLOCK_TEXT, m_clrMovedText);
	
	SerializeColor(op, m_cSNP, OPT_CLR_SNP, m_clrSNP);
	SerializeColor(op, m_cSNPDeleted, OPT_CLR_SNP_DELETED, m_clrSNPDeleted);
	SerializeColor(op, m_cSNPText, OPT_CLR_SNP_TEXT, m_clrSNPText);

	SerializeColor(op, m_cSelMoved, OPT_CLR_SELECTED_MOVEDBLOCK, m_clrSelMoved);
	SerializeColor(op, m_cSelMovedDeleted, OPT_CLR_SELECTED_MOVEDBLOCK_DELETED, m_clrSelMovedDeleted);
	SerializeColor(op, m_cSelMovedText, OPT_CLR_SELECTED_MOVEDBLOCK_TEXT, m_clrSelMovedText);
	
	SerializeColor(op, m_cSelSNP, OPT_CLR_SELECTED_SNP, m_clrSelSNP);
	SerializeColor(op, m_cSelSNPDeleted, OPT_CLR_SELECTED_SNP_DELETED, m_clrSelSNPDeleted);
	SerializeColor(op, m_cSelSNPText, OPT_CLR_SELECTED_SNP_TEXT, m_clrSelSNPText);

	SerializeColor(op, m_cWordDiff, OPT_CLR_WORDDIFF, m_clrWordDiff);
	SerializeColor(op, m_cWordDiffDeleted, OPT_CLR_WORDDIFF_DELETED, m_clrWordDiffDeleted);
	SerializeColor(op, m_cWordDiffText, OPT_CLR_WORDDIFF_TEXT, m_clrWordDiffText);

	SerializeColor(op, m_cSelWordDiff, OPT_CLR_SELECTED_WORDDIFF, m_clrSelWordDiff);
	SerializeColor(op, m_cSelWordDiffDeleted, OPT_CLR_SELECTED_WORDDIFF_DELETED, m_clrSelWordDiffDeleted);
	SerializeColor(op, m_cSelWordDiffText, OPT_CLR_SELECTED_WORDDIFF_TEXT, m_clrSelWordDiffText);
}

void PropMergeColors::SerializeColor(OPERATION op, CColorButton & btn, LPCTSTR optionName, COLORREF & color)
{
	switch (op)
	{
	case SET_DEFAULTS:
		unsigned uicolor;
		GetOptionsMgr()->GetDefault(optionName, uicolor);
		color = uicolor;
		btn.SetColor(color);
		return;

	case WRITE_OPTIONS:
		GetOptionsMgr()->SaveOption(optionName, (unsigned)color);
		return;

	case READ_OPTIONS:
		color = GetOptionsMgr()->GetInt(optionName);
		// Set colors for buttons, do NOT invalidate
		btn.SetColor(color, FALSE);
		return;
	}
}

/** 
 * @brief Resets colors to defaults
 */
void PropMergeColors::OnDefaults()
{
	SerializeColors(SET_DEFAULTS);
}
