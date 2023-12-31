#pragma once
//#include "Form1.h"
#include <list> 

namespace my_Editor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Zusammenfassung f�r Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		RichTextBox^ my_textbox; // Initialisierung einer Textfeldvariable
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form2(RichTextBox^ textbox)  
		{
			my_textbox = textbox; 	// Anweisung, um ein Textfeld aus dem ersten Form zu erhalten
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ search_input;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::Button^ search_btn;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->search_input = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// search_input
			// 
			this->search_input->Location = System::Drawing::Point(49, 56);
			this->search_input->Name = L"search_input";
			this->search_input->Size = System::Drawing::Size(269, 22);
			this->search_input->TabIndex = 0;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(70, 112);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(229, 20);
			this->checkBox->TabIndex = 1;
			this->checkBox->Text = L"Gross / Kleinschreibung beachten";
			this->checkBox->UseVisualStyleBackColor = true;
			// 
			// search_btn
			// 
			this->search_btn->Location = System::Drawing::Point(119, 170);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(118, 29);
			this->search_btn->TabIndex = 2;
			this->search_btn->Text = L"suchen";
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Form2::search_btn_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 263);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->search_input);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(397, 310);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(397, 310);
			this->Name = L"Form2";
			this->Text = L"Search";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
		
		void HighlightMatches(RichTextBox^ textBox, String^ searchText, bool ignoreCase)  // Methode zur Suche nach �bereinstimmungen bei Gro�- und Kleinschreibung
																							 /*Parameter: �bergebenes Textfeld, Text aus dem Eingabefeld 
																							 f�r �bereinstimmungszeichen, Flagg f�r Gro�-/Kleinschreibung*/

		{																						
			
			textBox->SelectionStart = 0;												// Nullstellung der Farbbezeichnung der gesuchten Zeichen	
			textBox->SelectionLength = textBox->Text->Length;
			textBox->SelectionBackColor = textBox->BackColor;

			String^ text; 
			if(!ignoreCase) text = textBox->Text;										// Bedingungen f�r Gro�- und Kleinschreibung
			else {
				text = textBox->Text->ToLower();										// Quelltext in Kleinbuchstaben umwandeln
				searchText = searchText->ToLower();										// Den gesuchten Text in Kleinbuchstaben umwandeln
			}
			int startIndex = 0;															// Suchindex zur�cksetzen 
			bool matchesFound = false;													// Flagge f�r die Erkennung von �bereinstimmungen

			while (startIndex < text->Length)											 // Schleife �ber die gesamte L�nge des Textes im Textfeld von Form 1
			{
				startIndex = text->IndexOf(searchText, startIndex);						// gibt den Index des ersten Vorkommens zur�ck

				if (startIndex == -1) break;											// Wenn searchText nicht gefunden wird, gibt die Methode - 1 zur�ck.
			
				textBox->Select(startIndex, searchText->Length);						// gelbe Hervorhebung von �bereinstimmungen
				textBox->SelectionBackColor = System::Drawing::Color::Yellow;

				startIndex += searchText->Length;										// wird auf die Position gesetzt, die unmittelbar auf das gefundene Element folgt
				matchesFound = true;													// Flagge setzen, wenn mindestens eine �bereinstimmung gefunden wird
			}

			
			if (!matchesFound) MessageBox::Show("keine �bereinstimmungen gefunden");	// Wenn keine �bereinstimmung gefunden wird, wird eine MessageBox angezeigt
		}
		
	
#pragma endregion
		
private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {		// Klick auf Button "Suchen" des Form2
	
    if (my_textbox->Text->Length == 0 || search_input->Text->Length == 0) {					// wenn eines der Felder leer ist 
        MessageBox::Show("Das Textfeld ist leer!"); 
        search_input->Text = "";															// L�schen des Suchfeldes
        return;
    }
	
    bool ignoreCase = !checkBox->Checked;													// sonst Flagge f�r Gro�- oder Kleinschreibung je nach Checkbox
    HighlightMatches(my_textbox, search_input->Text, ignoreCase);							// Aufruf der Suchfunktion
}
};
}
