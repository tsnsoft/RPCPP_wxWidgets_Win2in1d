#include "main.h"
#include <wx/msgdlg.h>

// Общая переменная для текста
wxString mainText;

// Реализуем метод открытия редактора текста в основном окне
void MyMainFrame::OnOpenEditor(wxCommandEvent& event) {
	wxString text = mainTextCtrl->GetValue(); // Получение текста из основного окна
	MyEditDialog dlg(this, text); // Создание диалогового окна
	if (dlg.ShowModal() == wxID_OK) { // Открытие диалогового окна и проверка результата
		mainText = dlg.GetText(); // Сохранение измененного текста
		mainTextCtrl->SetValue(mainText); // Обновление текста в основном окне
	}
}

// Реализуем метод закрытия основного окна
void MyMainFrame::OnClose(wxCloseEvent& event) {
	this->Destroy(); // Уничтожение основного окна
}

// Реализуем метод сохранения текста в диалоговом окне
void MyEditDialog::OnSave(wxCommandEvent& event) {
	m_text = editorTextCtrl->GetValue(); // Сохранение текста из диалогового окна
	EndModal(wxID_OK); // Закрытие диалогового окна с результатом wxID_OK
}

// Получение текста из диалогового окна
wxString MyEditDialog::GetText() const {
	return m_text; // Возвращение текста
}

