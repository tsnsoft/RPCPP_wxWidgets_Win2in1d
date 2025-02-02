#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>
#include "forms.h"

// Определение класса приложения
class MyApp : public wxApp {
public:
	// Метод инициализации приложения
	virtual bool OnInit();
};

// Определение класса основного окна
class MyMainFrame : public MainFrame {
public:
	// Конструктор основного окна
	MyMainFrame(wxWindow* parent);
	// Деструктор основного окна
	~MyMainFrame();
	
protected:
	// Метод для открытия редактора текста
	void OnOpenEditor(wxCommandEvent& event) override;
	// Метод для закрытия основного окна
	void OnClose(wxCloseEvent& event);
};

// Определение класса диалогового окна редактирования текста
class MyEditDialog : public EditDialog {
public:
	// Конструктор диалогового окна
	MyEditDialog(wxWindow* parent, wxString& text);
	// Деструктор диалогового окна
	~MyEditDialog();
	
	// Метод для получения текста из диалогового окна
	wxString GetText() const;
	
protected:
	// Метод для сохранения текста
	void OnSave(wxCommandEvent& event) override;
	
private:
	// Ссылка на редактируемый текст
	wxString& m_text;
};

#endif // MAIN_H
