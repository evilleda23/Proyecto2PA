#pragma once

namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarTarea
	/// </summary>
	
	public ref class AgregarTarea : public System::Windows::Forms::Form
	{
		int numero;
	public:
		AgregarTarea(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			

			

		}/*
		AgregarTarea(int x)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			numero = x;



		}*/

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarTarea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkbAlarma;
	protected:
	private: System::Windows::Forms::CheckBox^ checkbRecor;
	private: System::Windows::Forms::CheckBox^ checkbAct;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkbAlarma = (gcnew System::Windows::Forms::CheckBox());
			this->checkbRecor = (gcnew System::Windows::Forms::CheckBox());
			this->checkbAct = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// checkbAlarma
			// 
			this->checkbAlarma->AutoSize = true;
			this->checkbAlarma->Location = System::Drawing::Point(194, 12);
			this->checkbAlarma->Name = L"checkbAlarma";
			this->checkbAlarma->Size = System::Drawing::Size(58, 17);
			this->checkbAlarma->TabIndex = 11;
			this->checkbAlarma->Text = L"Alarma";
			this->checkbAlarma->UseVisualStyleBackColor = true;
			this->checkbAlarma->CheckedChanged += gcnew System::EventHandler(this, &AgregarTarea::checkbAlarma_CheckedChanged);
			// 
			// checkbRecor
			// 
			this->checkbRecor->AutoSize = true;
			this->checkbRecor->Location = System::Drawing::Point(96, 12);
			this->checkbRecor->Name = L"checkbRecor";
			this->checkbRecor->Size = System::Drawing::Size(92, 17);
			this->checkbRecor->TabIndex = 10;
			this->checkbRecor->Text = L"Recordatorios";
			this->checkbRecor->UseVisualStyleBackColor = true;
			this->checkbRecor->CheckedChanged += gcnew System::EventHandler(this, &AgregarTarea::checkbRecor_CheckedChanged);
			// 
			// checkbAct
			// 
			this->checkbAct->AutoSize = true;
			this->checkbAct->Location = System::Drawing::Point(10, 12);
			this->checkbAct->Name = L"checkbAct";
			this->checkbAct->Size = System::Drawing::Size(81, 17);
			this->checkbAct->TabIndex = 9;
			this->checkbAct->Text = L"Actividades";
			this->checkbAct->UseVisualStyleBackColor = true;
			this->checkbAct->CheckedChanged += gcnew System::EventHandler(this, &AgregarTarea::checkbAct_CheckedChanged);
			// 
			// AgregarTarea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->checkbAlarma);
			this->Controls->Add(this->checkbRecor);
			this->Controls->Add(this->checkbAct);
			this->Name = L"AgregarTarea";
			this->Text = L"AgregarTarea";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
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
		//MessageBox::Show(numero.ToString());
	}
	};
}
