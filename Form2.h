#pragma once
//#include "Form1.h"
namespace my_Editor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		String^ search_text;
		Form^ obj;
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
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
			this->search_input->TextChanged += gcnew System::EventHandler(this, &Form2::search_input_TextChanged);
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
#pragma endregion
	private: System::Void search_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
