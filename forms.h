///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxButton* openEditorBtn;
		wxTextCtrl* mainTextCtrl;

		// Virtual event handlers, override them in your derived class
		virtual void OnOpenEditor( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Основное окно"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,200 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditDialog
///////////////////////////////////////////////////////////////////////////////
class EditDialog : public wxDialog
{
	private:

	protected:
		wxTextCtrl* editorTextCtrl;
		wxButton* saveBtn;

		// Virtual event handlers, override them in your derived class
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Редактор текста"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );

		~EditDialog();

};

