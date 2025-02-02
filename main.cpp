#include "main.h"
#include "tsnsoft.xpm" // Подключаем иконку

wxIMPLEMENT_APP(MyApp); // Используем макрос для запуска приложения

// Реализуем функцию инициализации приложения
bool MyApp::OnInit() {
	MyMainFrame* mainFrame = new MyMainFrame(NULL); // Создаём основное окно
	SetTopWindow(mainFrame); // Устанавливаем основное окно главным
	mainFrame->Show(); // Отображаем основное окно
	mainFrame->Fit(); // Подгонка размеров основного окна
	mainFrame->Center(); // Центрируем основное окно
	return true; // Возвращаем true для продолжения запуска приложения
}

// Реализуем конструктор основного окна
MyMainFrame::MyMainFrame(wxWindow* parent)
	: MainFrame(parent) {
	wxInitAllImageHandlers(); // Инициализируем все обработчики изображений
	this->SetIcon(wxIcon(tsnsoft_xpm)); // Устанавливаем иконку для окна

	 // Привязываем событие закрытия окна к функции OnClose
	Bind(wxEVT_CLOSE_WINDOW, &MyMainFrame::OnClose, this);
}

// Реализуем деструктор основного окна
MyMainFrame::~MyMainFrame() {}

// Реализуем конструктор диалогового окна с передачей ему текста
MyEditDialog::MyEditDialog(wxWindow* parent, wxString& text)
	: EditDialog(parent), m_text(text) {
	editorTextCtrl->SetValue(m_text); // Устанавливаем значение текстового поля

	// Привязываем событие нажатия кнопки к функции OnSave
	Bind(wxEVT_BUTTON, &MyEditDialog::OnSave, this, saveBtn->GetId());
}

// Реализуем деструктор диалогового окна
MyEditDialog::~MyEditDialog() {}

