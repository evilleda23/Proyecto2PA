#pragma once
#include "MyForm.h"
#include "Registrarse.h"

using namespace std;
namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsuario;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCargarUsuario;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLRegis;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCon;

	protected:

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
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCargarUsuario = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLRegis = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCon = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(65, 53);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(114, 20);
			this->txtUsuario->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario:";
			// 
			// btnCargarUsuario
			// 
			this->btnCargarUsuario->Location = System::Drawing::Point(68, 125);
			this->btnCargarUsuario->Name = L"btnCargarUsuario";
			this->btnCargarUsuario->Size = System::Drawing::Size(71, 23);
			this->btnCargarUsuario->TabIndex = 2;
			this->btnCargarUsuario->Text = L"Login";
			this->btnCargarUsuario->UseVisualStyleBackColor = true;
			this->btnCargarUsuario->Click += gcnew System::EventHandler(this, &Main::btnCargarUsuario_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"No estas registrado\?";
			// 
			// linkLRegis
			// 
			this->linkLRegis->AutoSize = true;
			this->linkLRegis->Location = System::Drawing::Point(164, 168);
			this->linkLRegis->Name = L"linkLRegis";
			this->linkLRegis->Size = System::Drawing::Size(56, 13);
			this->linkLRegis->TabIndex = 5;
			this->linkLRegis->TabStop = true;
			this->linkLRegis->Text = L"Pulsa aqui";
			this->linkLRegis->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::linkLRegis_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Contraseña:";
			// 
			// txtCon
			// 
			this->txtCon->Location = System::Drawing::Point(65, 99);
			this->txtCon->Name = L"txtCon";
			this->txtCon->Size = System::Drawing::Size(114, 20);
			this->txtCon->TabIndex = 6;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 201);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCon);
			this->Controls->Add(this->linkLRegis);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnCargarUsuario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtUsuario);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCargarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			
			
			StreamReader^ usuario = gcnew StreamReader("..//" + txtUsuario->Text + ".txt");
			if (txtCon->Text->Equals(usuario->ReadLine())) {
				String^ textoDelArchivo = usuario->ReadToEnd();
				usuario->Close();
				MessageBox::Show("Carga de datos exitosa");
				MyForm^ form = gcnew MyForm(txtUsuario->Text, textoDelArchivo);
				form->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Contraseña incorrecta");
			}
		}
		catch (System::IO::FileNotFoundException^ ae) {
			MessageBox::Show("Usuario no encontrado, Regístrate");
		}
		catch (System::NotSupportedException ^ ae) {
			MessageBox::Show("Error en la carga del usuario");
		}
	}
private: System::Void linkLRegis_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Registrarse^ form = gcnew Registrarse();
	form->Show();
	this->Hide();
}
};
}
