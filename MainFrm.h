// MainFrm.h : CMainFrame 类的接口
//


#pragma once
#include "FHMainFrm.h"

class CMainFrame : public CFHMainFrm
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

	COutputBar			m_wndDataFlow;		
	COutputBar			m_wndDataLinker;	

	bool m_bOutBarShowing;
	bool m_bDataFlowShowing;
	bool m_bDataLinkerShowing;

	int m_iShowOneWindow;




// 属性
public:
	
// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CMainFrame();
	void ReShowInfoWnd();


#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdataflowhistory();
	afx_msg void OnUpdateShowdataflowhistory(CCmdUI *pCmdUI);
	afx_msg void OnShowLinker();
	afx_msg void OnUpdateShowLinker(CCmdUI *pCmdUI);
	afx_msg void OnOutputBar();
	afx_msg void OnUpdateOutputBar(CCmdUI* pCmdUI);

protected:
	virtual void OnUpdateFrameTitle(BOOL bAddToTitle);
};


