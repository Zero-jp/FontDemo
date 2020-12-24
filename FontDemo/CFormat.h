#pragma once
enum { JUSTIFY_LEFT, JUSTIFY_CENTER, JUSTIFY_RIGHT };
enum { PITCH_VARIABLE, PITCH_FIXED };


// Диалоговое окно CFormat

class CFormat : public CDialog
{
	DECLARE_DYNAMIC(CFormat)
protected:
	RECT m_RectSample;

public:
	CFormat(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CFormat();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_Bold;
	BOOL m_Italic;
	BOOL m_Underline;
	int m_Justify;
	int m_Pitch;
	int m_Spacing;
	CEdit m_SpacingEdit;
	afx_msg void OnPaint();
	afx_msg void OnClickedBold();
	afx_msg void OnCenter();
	afx_msg void OnFixed();
	afx_msg void OnClickedItalic();
	afx_msg void OnClickedLeft();
	afx_msg void OnRight();
	afx_msg void OnClickedUnderline();
	afx_msg void OnClickedVariable();
	afx_msg void OnClickedSpacing();
	virtual BOOL OnInitDialog();
//	afx_msg void OnDropdownVariable(NMHDR* pNMHDR, LRESULT* pResult);
};
