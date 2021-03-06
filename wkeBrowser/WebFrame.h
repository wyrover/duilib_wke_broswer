#pragma once
#include "WkeWebkit.h"
#include "resource.h"  
class CWebFrame : public DuiLib::WindowImplBase
{
public:
	CWebFrame();

private:
	virtual void OnClose();
	virtual void InitWindow();
	virtual DuiLib::CDuiString GetSkinFile();
	virtual DuiLib::CDuiString GetSkinFolder();
	virtual LPCTSTR GetResourceID() const{return MAKEINTRESOURCE(IDR_ZIP_SKIN);};
	virtual DuiLib::UILIB_RESOURCETYPE GetResourceType() const{ return DuiLib::UILIB_ZIPRESOURCE; };
	virtual LPCTSTR GetWindowClassName(void) const;
	virtual DuiLib::CControlUI* CreateControl(LPCTSTR pstrClassName);
	virtual void OnClick(DuiLib::TNotifyUI& msg);
	virtual void OnReturn(DuiLib::TNotifyUI& msg);
	virtual void OnUrlChanged(DuiLib::TNotifyUI& msg);
	virtual void OnTitleChanged(DuiLib::TNotifyUI& msg);

	
	CWkeWebkitUI	*m_pWkeWebkit;
};

