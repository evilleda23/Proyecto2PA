#pragma once
#include "AgregarTarea.h"
#include "Lista.h"
namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		System::String^ usuario = "";
	private: System::Windows::Forms::Button^ button1;
		   System::String^ datos = "";
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm(System::String^ usu, System::String^ dat)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			usuario = usu;
			datos = dat;
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
	private: System::Windows::Forms::TextBox^ txtdia;

	private: System::Windows::Forms::Label^ label2;




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
			this->txtdia = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarT = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(14, 55);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ningún día seleccionado";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// txtdia
			// 
			this->txtdia->Location = System::Drawing::Point(300, 18);
			this->txtdia->Multiline = true;
			this->txtdia->Name = L"txtdia";
			this->txtdia->Size = System::Drawing::Size(182, 199);
			this->txtdia->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(329, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Datos acerca del Día";
			// 
			// btnAgregarT
			// 
			this->btnAgregarT->Location = System::Drawing::Point(176, 12);
			this->btnAgregarT->Name = L"btnAgregarT";
			this->btnAgregarT->Size = System::Drawing::Size(86, 31);
			this->btnAgregarT->TabIndex = 9;
			this->btnAgregarT->Text = L"Agregar Tarea";
			this->btnAgregarT->UseVisualStyleBackColor = true;
			this->btnAgregarT->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarT_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 199);
			this->button1->TabIndex = 10;
			this->button1->Text = L"ACTUALIZAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 232);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnAgregarT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtdia);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		//Display the dates for selected range
		label1->Text = "Día seleccionado : " + (monthCalendar1->SelectionRange->Start.ToString("dd / MM /yyyy"));

		//To display single selected of date
		monthCalendar1->MaxSelectionCount = 1;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btnAgregarT_Click(System::Object^ sender, System::EventArgs^ e) {
	Lista* lista = new Lista();
	StreamReader^ texto = gcnew StreamReader("..//" + usuario + ".txt");
	String^ textoDelArchivo = texto->ReadToEnd();
	texto->Close();
	AgregarTarea^ task = gcnew AgregarTarea(usuario, label1->Text, textoDelArchivo);
	task->Show();
	//lista->insertarlista(5);
}
	   
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Lista* lista = new Lista();
	
	txtdia->Text = datos;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ texto = gcnew StreamReader("..//" + usuario+ ".txt");
	String^ textoDelArchivo = texto->ReadToEnd();
	texto->Close();
	txtdia->Text = textoDelArchivo;
}
};
	}

