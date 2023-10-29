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
		TextBox^ my_textbox;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form1(TextBox^ textbox)
		{
			my_textbox = textbox;
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
			this->open_data_menu->Text = L"Datei öffnen";
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
			this->add_edit_menu->Text = L"Einfügen";
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

		// 
	private: String^ saveNewFile() {

			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = " text files (*.txt*)|*.txt*|all files (*.*)|*.*";
			saveFileDialog->Title = "save as";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ selectedFilePath = saveFileDialog->FileName;
				String^ textToSave = textBox->Text;

				try {
					System::IO::File::WriteAllText(selectedFilePath, textToSave);
					MessageBox::Show("The file is saved at: " + selectedFilePath);
					selectedFilePath = saveFileDialog->FileName;
				}
				catch (System::Exception^ ex) {
					MessageBox::Show("Error while saving the file: " + ex->Message);
				}
			} 
			return nullptr;

		}


	private: void saveFile(String^ filePath, String^ textToSave) {
			try {
				System::IO::File::WriteAllText(filePath, textToSave);
				MessageBox::Show("Datei wurde überschrieben ");
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error while saving the file: " + ex->Message);
			}
		}

	private: String^ openFile() {

			OpenFileDialog^ openfileDialog = gcnew OpenFileDialog();
			openfileDialog->Filter = " text files (*.txt*)|*.txt*|all files (*.*)|*.*";

			if (openfileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				selectedFilePath = openfileDialog->FileName;
				return openfileDialog->FileName;
			}
			else {
				return nullptr;
			}
		}

	private: void listenFile(String^ filePath) {

			if (filePath != nullptr) {
				try {
					System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
					String^ fileContent = reader->ReadToEnd();
					reader->Close();

					this->textBox->Text = fileContent;
				}
				catch (Exception^ ex) {
					MessageBox::Show("Fehler beim Upload einer Datei: " + ex->Message);
				}
			}
		}

	private: void formClosing() {
		if (hasUnsavedChanges && this->textBox->Text->Length != 0) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("vor dem Schließen zu speichern?", "Confirm", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				if (selectedFilePath != nullptr) {
					saveFile(selectedFilePath, textBox->Text);
				}
				else {
					saveNewFile();
				}
			}
			else if (result == System::Windows::Forms::DialogResult::Cancel) {
				return; // ????????????? ???????? ?????
			}
		}
	}


		bool hasUnsavedChanges;
		String^ selectedFilePath;



#pragma endregion
	private: System::Void data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		bool isTextNoEmpty = this->textBox->Text->Length != 0;

		this->save_data_menu->Enabled = isTextNoEmpty;
		this->saveAs_data_menu->Enabled = isTextNoEmpty;

	}
	
	private: System::Void open_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = openFile();
		listenFile(filePath);
	}

private: System::Void allEdit_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	
	allEdit_edit_menu->Enabled = this->textBox->Text->Length != 0;
		if(allEdit_edit_menu->Enabled) this->textBox->SelectAll();
	
}
private: System::Void save_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->Text->Length != 0) {
		if (selectedFilePath != nullptr) saveFile(selectedFilePath, textBox->Text);
		else {
			MessageBox::Show("Die Datei wurde noch nicht erstellt. File Erstellung");
			saveNewFile();
		} 
	}
}

private: System::Void saveAs_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->Text->Length != 0) saveNewFile();
	else saveFile(selectedFilePath, textBox->Text);
}

private: System::Void exit_data_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}


private: System::Void edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {

	bool textSelected = this->textBox->SelectionLength > 0;
	bool allTextSelected = this->textBox->SelectionLength == this->textBox->Text->Length;

	this->copy_edit_menu->Enabled = textSelected;
	this->cut_edit_menu->Enabled = textSelected;
	this->allEdit_edit_menu->Enabled = !allTextSelected;

}

private: System::Void copy_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->SelectionLength > 0) {
		this->textBox->Copy();
		this->add_edit_menu->Enabled = true;
	}
}

private: System::Void cut_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->SelectionLength > 0) {
		this->textBox->Cut();
		this->add_edit_menu->Enabled = true;
	}
}

private: System::Void add_edit_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Clipboard::ContainsText()) this->textBox->Paste();
}

private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	bool textNotEmpty = this->textBox->Text->Length > 0;
	this->copy_edit_menu->Enabled = textNotEmpty;
	hasUnsavedChanges = textNotEmpty;

}


private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	formClosing();
}

private: System::Void search_search_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	Form2^ second_Form = gcnew Form2(this->textBox);
	second_Form->Show();
}

private: System::Void info_info_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Version 2.0");
}
};
}
