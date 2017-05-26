#pragma once
#include <wx/wx.h>
#include <wx/tglbtn.h>
#include <wx/spinctrl.h>

#include "TAS/PadData.h"

class VirtualPad : public wxFrame
{
public:
	VirtualPad(wxWindow *parent);

	bool Show(bool show = true) override;

protected:
	wxToggleButton *buttons[16];
	wxButton *reset;

	wxSlider *sticks[4];
	wxSpinCtrl *sticksText[4];

protected:
	void OnClose(wxCloseEvent &event);

	void OnClick(wxCommandEvent &event);
	void OnResetButton(wxCommandEvent &event);
	void OnTextCtrlChange(wxSpinEvent &event);
	void OnSliderMove(wxCommandEvent &event);

	wxDECLARE_EVENT_TABLE();
};

