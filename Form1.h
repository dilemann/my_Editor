#pragma once
#include "Form2.h"

namespace my_Editor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		//
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ data_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ edit_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ exstras_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ info_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ open_data_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ save_data_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAs_data_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_data_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ allEdit_edit_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ copy_edit_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ cut_edit_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ add_edit_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ search_search_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ info_info_menu;
	private: System::Windows::Forms::RichTextBox^ textBox;

	// wird vor dem Speichern der Datei �berpr�ft, ob es �nderungen gibt
	private: bool hasUnsavedChanges;
	// Initialisierung einer Variablen "selectedFilePath" zur �berpr�fung, ob die Datei erstellt wurde
	private: String^ selectedFilePath;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->data_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open_data_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->save_data_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAs_data_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_data_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edit_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allEdit_edit_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copy_edit_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cut_edit_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add_edit_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exstras_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_search_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->info_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->info_info_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->data_menu, this->edit_menu,
					this->exstras_menu, this->info_menu
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(419, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// data_menu
			// 
			this->data_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->open_data_menu,
					this->save_data_menu, this->saveAs_data_menu, this->exit_data_menu
			});
			this->data_menu->Name = L"data_menu";
			this->data_menu->Size = System::Drawing::Size(59, 24);
			this->data_menu->Text = L"Datei";
			this->data_menu->Click += gcnew System::EventHandler(this, &Form1::data_menu_Click);
			// 
			// open_data_menu
			// 
			this->open_data_menu->Name = L"open_data_menu";
			this->open_data_menu->Size = System::Drawing::Size(233, 26);
			this->open_data_menu->Text = L"Datei �ffnen";
			this->open_data_menu->Click += gcnew System::EventHandler(this, &Form1::open_data_menu_Click);
			// 
			// save_data_menu
			// 
			this->save_data_menu->Name = L"save_data_menu";
			this->save_data_menu->Size = System::Drawing::Size(233, 26);
			this->save_data_menu->Text = L"Datei speichern";
			this->save_data_menu->Click += gcnew System::EventHandler(this, &Form1::save_data_menu_Click);
			// 
			// saveAs_data_menu
			// 
			this->saveAs_data_menu->Name = L"saveAs_data_menu";
			this->saveAs_data_menu->Size = System::Drawing::Size(233, 26);
			this->saveAs_data_menu->Text = L"Datei speichern unter";
			this->saveAs_data_menu->Click += gcnew System::EventHandler(this, &Form1::saveAs_data_menu_Click);
			// 
			// exit_data_menu
			// 
			this->exit_data_menu->Name = L"exit_data_menu";
			this->exit_data_menu->Size = System::Drawing::Size(233, 26);
			this->exit_data_menu->Text = L"Datei beenden";
			this->exit_data_menu->Click += gcnew System::EventHandler(this, &Form1::exit_data_menu_Click);
			// 
			// edit_menu
			// 
			this->edit_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->allEdit_edit_menu,
					this->copy_edit_menu, this->cut_edit_menu, this->add_edit_menu
			});
			this->edit_menu->Name = L"edit_menu";
			this->edit_menu->Size = System::Drawing::Size(95, 24);
			this->edit_menu->Text = L"Bearbeiten";
			this->edit_menu->Click += gcnew System::EventHandler(this, &Form1::edit_menu_Click);
			// 
			// allEdit_edit_menu
			// 
			this->allEdit_edit_menu->Name = L"allEdit_edit_menu";
			this->allEdit_edit_menu->Size = System::Drawing::Size(194, 26);
			this->allEdit_edit_menu->Text = L"Alles markieren";
			this->allEdit_edit_menu->Click += gcnew System::EventHandler(this, &Form1::allEdit_edit_menu_Click);
			// 
			// copy_edit_menu
			// 
			this->copy_edit_menu->Name = L"copy_edit_menu";
			this->copy_edit_menu->Size = System::Drawing::Size(194, 26);
			this->copy_edit_menu->Text = L"Kopieren";
			this->copy_edit_menu->Click += gcnew System::EventHandler(this, &Form1::copy_edit_menu_Click);
			// 
			// cut_edit_menu
			// 
			this->cut_edit_menu->Name = L"cut_edit_menu";
			this->cut_edit_menu->Size = System::Drawing::Size(194, 26);
			this->cut_edit_menu->Text = L"Ausschhneiden";
			this->cut_edit_menu->Click += gcnew System::EventHandler(this, &Form1::cut_edit_menu_Click);
			// 
			// add_edit_menu
			// 
			this->add_edit_menu->Name = L"add_edit_menu";
			this->add_edit_menu->Size = System::Drawing::Size(194, 26);
			this->add_edit_menu->Text = L"Einf�gen";
			this->add_edit_menu->Click += gcnew System::EventHandler(this, &Form1::add_edit_menu_Click);
			// 
			// exstras_menu
			// 
			this->exstras_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->search_search_menu });
			this->exstras_menu->Name = L"exstras_menu";
			this->exstras_menu->Size = System::Drawing::Size(62, 24);
			this->exstras_menu->Text = L"Extras";
			// 
			// search_search_menu
			// 
			this->search_search_menu->Name = L"search_search_menu";
			this->search_search_menu->Size = System::Drawing::Size(139, 26);
			this->search_search_menu->Text = L"Suchen";
			this->search_search_menu->Click += gcnew System::EventHandler(this, &Form1::search_search_menu_Click);
			// 
			// info_menu
			// 
			this->info_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->info_info_menu });
			this->info_menu->Name = L"info_menu";
			this->info_menu->Size = System::Drawing::Size(30, 24);
			this->info_menu->Text = L"\?";
			// 
			// info_info_menu
			// 
			this->info_info_menu->Name = L"info_info_menu";
			this->info_info_menu->Size = System::Drawing::Size(118, 26);
			this->info_info_menu->Text = L"Info";
			this->info_info_menu->Click += gcnew System::EventHandler(this, &Form1::info_info_menu_Click);
			// 
			// textBox
			// 
			this->textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox->Location = System::Drawing::Point(10, 36);
			this->textBox->Margin = System::Windows::Forms::Padding(11, 100, 4, 4);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(396, 378);
			this->textBox->TabIndex = 1;
			this->textBox->Text = L"";
			this->textBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(419, 422);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Editor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//-------------------------My--Methoden--------------------------------------------------------------------------------------
		// Verfahre zum Speichern einer neuen Datei
	private: void saveNewFile() {
		// wird  �berpr�ft, ob es �nderungen im Text gibt
		if (hasUnsavedChanges) {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();	// Speichern-Dialogfeld
			saveFileDialog->Filter = " text files (*.txt*)|*.txt*|all files (*.*)|*.*"; // Formatfilter
			saveFileDialog->Title = "save as";

			//wenn die Dialogbox auf OK geklickt wird
			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ textToSave = textBox->Text; // wird unser gesamter Text der Variablen "textToSave" zugewiesen.
				// weist den absoluten Pfad der gespeicherten Datei der Variablen
				selectedFilePath = saveFileDialog->FileName; 
					try { // Versuch, Text in eine bestimmte Datei zu schreiben
						System::IO::File::WriteAllText(selectedFilePath, textToSave);
						MessageBox::Show("The file is saved at: " + selectedFilePath);
						// wenn der Datensatz erfolgreich ist, setzen Sie das Flag auf false, was bedeutet, dass es keine �nderungen f�r den Datensatz gibt
						hasUnsavedChanges = false; 

					}
					catch (System::Exception^ ex) {
						MessageBox::Show("Error while saving the file: " + ex->Message); // sonst Fehler
					}

			}
		} // Wenn es keine �nderungen im Text gibt, wird eine Meldung angezeigt:
		else MessageBox::Show("No changes to save.");

		}

		   // Datei �berschreiben
	private: void saveFile(String^ filePath, String^ textToSave) {
		if (hasUnsavedChanges) { // wird  �berpr�ft, ob es �nderungen im Text gibt
			try {// Versuch, die aktuelle Datei zu �berschreiben 
				System::IO::File::WriteAllText(filePath, textToSave);
				MessageBox::Show("Datei wurde �berschrieben ");
				// wenn der Datensatz erfolgreich ist, setzen Sie das Flag auf false, was bedeutet, dass es keine �nderungen f�r den Datensatz gibt
				hasUnsavedChanges = false;	
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error while saving the file: " + ex->Message); // sonst Fehler
			}
			// Wenn es keine �nderungen im Text gibt, wird eine Meldung angezeigt:
		} else MessageBox::Show("No changes to save.");
		}
	// Datei �ffnen
	private: String^ openFile() {
			// ein geeignetes Dialogfeld erstellen  
			OpenFileDialog^ openfileDialog = gcnew OpenFileDialog();
			openfileDialog->Filter = " text files (*.txt*)|*.txt*|all files (*.*)|*.*"; // Formatfilter
			//wenn die Dialogbox auf OK geklickt wird
			if (openfileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				//  setzen Sie das Flag auf false, was bedeutet, dass es keine �nderungen f�r den Datensatz gibt
				hasUnsavedChanges = false;
				selectedFilePath = openfileDialog->FileName; // weist den absoluten Pfad der gespeicherten Datei der Variablen
				return openfileDialog->FileName;  // R�ckgabe der Datei zur weiteren Aufzeichnung
			}
			else {
				return nullptr; // sonst null
			}
		}
		   // Datei lesen
	private: void readFile(String^ filePath) {
		// wenn die Datei existiert
			if (filePath != nullptr) {
				try { // Versuch, Daten zu lesen
					System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath); // Erstellung einer Leseklasse
					String^ fileContent = reader->ReadToEnd();  // Ende-zu-Ende-Lesen
					reader->Close(); // Leseverschluss

					this->textBox->Text = fileContent; // Zuweisung der gelesenen Daten zu unserem Textcontainer
				}
				catch (Exception^ ex) {
					MessageBox::Show("Fehler beim Upload einer Datei: " + ex->Message); // sonst Fehler
				}
			}
		}
		   // Formschluss
	private: void formClosing() {
		// wenn das Textfeld nicht leer ist und es ungespeicherte Daten gibt
		if (hasUnsavedChanges && this->textBox->Text->Length != 0) { 
			// Nachrichtenbox erstellen
			System::Windows::Forms::DialogResult result = MessageBox::Show("vor dem Schlie�en zu speichern?", "Confirm", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) { // wenn OK gedr�ckt wird 
				if (selectedFilePath != nullptr) { // wenn die Datei bereits erstellt wurde
					saveFile(selectedFilePath, textBox->Text); // dann �berschreiben die Datei
				}
				else {
					saveNewFile(); // sonst speichern der neuen Datei
				}
			}
			else if (result == System::Windows::Forms::DialogResult::Cancel) { // wenn Cancel gedr�ckt wird 
				return; // Verhindern Sie das Schlie�en des Forms
			}
		}
	}
//--------------------------------Ende----Methoden-----------------------------------------------------------------

//----------------------------------------EVENTS------------------------------------------------------------------
#pragma endregion 
		   // Klick auf die Navigation "Datei"
	private: System::Void data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		// Je nachdem, ob das Textfeld leer ist oder nicht, werden die Buttons auf aktiv oder inaktiv gesetzt.
		bool isTextNoEmpty = this->textBox->Text->Length != 0; 

		this->save_data_menu->Enabled = isTextNoEmpty;
		this->saveAs_data_menu->Enabled = isTextNoEmpty;

	}
		   // Klick auf die Navigation "Datei->�ffen"
	private: System::Void open_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = openFile();  // Datei-�ffnungsmethode
		readFile(filePath); // Zuweisung des Inhalts einer ge�ffneten Datei an unser Textfeld
	}
		   // Klick auf die Navigation "Datei->speichern"
private: System::Void save_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->Text->Length != 0) { // wenn das Textfeld nicht leer ist
		// wenn die Datei bereits erstellt wurde , Datei �berschreiben
		if (selectedFilePath != nullptr) saveFile(selectedFilePath, textBox->Text); 
		else { // entsprechende Nachricht und speichern der neuen Datei
			MessageBox::Show("Die Datei wurde noch nicht erstellt. File Erstellung");
			saveNewFile(); 
		} 
	}
}
	   // Klick auf die Navigation "Datei->speichern unter"
private: System::Void saveAs_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->Text->Length != 0) saveNewFile();  // wenn das Textfeld nicht leer ist, speichern der neuen Datei
	else saveFile(selectedFilePath, textBox->Text); // sonst Datei�berschreibung
}
	   // Klick auf die Navigation "Datei->beenden"
private: System::Void exit_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();  // Das Schlie�en des Forms l�st das Event "FormClosing" aus.
}

	   // Klick auf die Navigation "Bearbeiten"
private: System::Void edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	// Je nachdem, ob das Textfeld leer ist oder nicht, werden die Buttons auf aktiv oder inaktiv gesetzt.
	bool textSelected = this->textBox->SelectionLength > 0;
	this->copy_edit_menu->Enabled = textSelected;
	this->cut_edit_menu->Enabled = textSelected;
	//Je nachdem, ob der Text hervorgehoben ist oder nicht, wird Button "Alles markieren" auf aktiv oder inaktiv gesetzt.
	bool allTextSelected = this->textBox->SelectionLength == this->textBox->Text->Length;
	this->allEdit_edit_menu->Enabled = !allTextSelected;

}
	   // Klick auf die Navigation "Bearbeiten->Alles markieren"
private: System::Void allEdit_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	// Je nachdem, ob das Textfeld leer ist oder nicht, wird Button "Alles markieren" auf aktiv oder inaktiv gesetzt.
	allEdit_edit_menu->Enabled = this->textBox->Text->Length != 0;
	if (allEdit_edit_menu->Enabled) this->textBox->SelectAll(); // wenn aktiv, markiert den gesamten Text

}

	   // Klick auf die Navigation "Bearbeiten->kopieren"
private: System::Void copy_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->SelectionLength > 0) { //  wenn etwas hervorgehoben ist
		this->textBox->Copy();	 // kopieren
		this->add_edit_menu->Enabled = true; // Button "Einf�gen" aktiv
	}
}
	   // Klick auf die Navigation "Bearbeiten->ausschneiden"
private: System::Void cut_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->SelectionLength > 0) { // das Textfeld niht leer ist
		this->textBox->Cut(); // Text ausschneiden
		this->add_edit_menu->Enabled = true; //Button  "Einf�gen" aktiv
	}
}
	   // Klick auf die Navigation "Bearbeiten->Einf�gen"
private: System::Void add_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Clipboard::ContainsText()) this->textBox->Paste(); //  Wenn Daten im Cache gespeichert sind, dann einf�gen.
}
	   // Ereignisse beim �ndern von Text in dem Textfeld
private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Je nachdem, ob das Feld leer ist oder nicht, �ndert sich das Flagg f�r 
	// die �berpr�fung der Daten und die Button->Enabled "Kopieren" �ndert sich
	bool textNotEmpty = this->textBox->Text->Length > 0; 
	this->copy_edit_menu->Enabled = textNotEmpty;
	hasUnsavedChanges = textNotEmpty; 

}

	   // Ereignis zum Schlie�en des Forms
private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	formClosing(); // die Methode zum Speichern oder �berschreiben der Datei verwendet wird
}
	   // Klick auf die Navigation "Extras->Suchen"
private: System::Void search_search_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	// eine Instanz der  Klasse des zweiten Forms erstellen und ihr ein eigenes Textfeld als Argument �bergeben
	Form2^ second_Form = gcnew Form2(this->textBox);
	second_Form->Show();  //zweites Form �ffnen
}
	   // Klick auf die Navigation "?"
private: System::Void info_info_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Version 2.0"); // Version anzeigen
}
};
}
