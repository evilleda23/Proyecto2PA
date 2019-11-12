#pragma once

namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::CheckBox^ checkbAct;
	private: System::Windows::Forms::CheckBox^ checkbRecor;
	private: System::Windows::Forms::CheckBox^ checkbAlarma;
	private: System::Windows::Forms::Button^ btnAgregarT;






	protected:

	protected:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkbAct = (gcnew System::Windows::Forms::CheckBox());
			this->checkbRecor = (gcnew System::Windows::Forms::CheckBox());
			this->checkbAlarma = (gcnew System::Windows::Forms::CheckBox());
			this->btnAgregarT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(14, 100);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ningún día seleccionado";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(295, 57);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 205);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(324, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Datos acerca del Día";
			// 
			// checkbAct
			// 
			this->checkbAct->AutoSize = true;
			this->checkbAct->Location = System::Drawing::Point(14, 22);
			this->checkbAct->Name = L"checkbAct";
			this->checkbAct->Size = System::Drawing::Size(81, 17);
			this->checkbAct->TabIndex = 6;
			this->checkbAct->Text = L"Actividades";
			this->checkbAct->UseVisualStyleBackColor = true;
			this->checkbAct->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbAct_CheckedChanged);
			// 
			// checkbRecor
			// 
			this->checkbRecor->AutoSize = true;
			this->checkbRecor->Location = System::Drawing::Point(100, 22);
			this->checkbRecor->Name = L"checkbRecor";
			this->checkbRecor->Size = System::Drawing::Size(92, 17);
			this->checkbRecor->TabIndex = 7;
			this->checkbRecor->Text = L"Recordatorios";
			this->checkbRecor->UseVisualStyleBackColor = true;
			this->checkbRecor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbRecor_CheckedChanged);
			// 
			// checkbAlarma
			// 
			this->checkbAlarma->AutoSize = true;
			this->checkbAlarma->Location = System::Drawing::Point(198, 22);
			this->checkbAlarma->Name = L"checkbAlarma";
			this->checkbAlarma->Size = System::Drawing::Size(58, 17);
			this->checkbAlarma->TabIndex = 8;
			this->checkbAlarma->Text = L"Alarma";
			this->checkbAlarma->UseVisualStyleBackColor = true;
			this->checkbAlarma->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbAlarma_CheckedChanged);
			// 
			// btnAgregarT
			// 
			this->btnAgregarT->Location = System::Drawing::Point(157, 57);
			this->btnAgregarT->Name = L"btnAgregarT";
			this->btnAgregarT->Size = System::Drawing::Size(99, 31);
			this->btnAgregarT->TabIndex = 9;
			this->btnAgregarT->Text = L"Agregar Tarea";
			this->btnAgregarT->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 271);
			this->Controls->Add(this->btnAgregarT);
			this->Controls->Add(this->checkbAlarma);
			this->Controls->Add(this->checkbRecor);
			this->Controls->Add(this->checkbAct);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		//Display the dates for selected range
		label1->Text = "Día seleccionado : " + (monthCalendar1->SelectionRange->Start);

		//To display single selected of date
		monthCalendar1->MaxSelectionCount = 1;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void checkbAct_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkbAct->Checked) {
		checkbRecor->Enabled = false;
		checkbAlarma->Enabled = false;
	}
	else {
		checkbRecor->Enabled = true;
		checkbAlarma->Enabled = true;
	}
}
private: System::Void checkbRecor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkbRecor->Checked) {
		checkbAct->Enabled = false;
		checkbAlarma->Enabled = false;
	}
	else {
		checkbAct->Enabled = true;
		checkbAlarma->Enabled = true;
	}
}
private: System::Void checkbAlarma_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkbAlarma->Checked) {
		checkbAct->Enabled = false;
		checkbRecor->Enabled = false;
	}
	else {
		checkbAct->Enabled = true;
		checkbRecor->Enabled = true;
	}
}
};
	}

