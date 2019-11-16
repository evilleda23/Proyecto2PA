#pragma once
#include "MyForm.h"
namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de Registrarse
	/// </summary>
	public ref class Registrarse : public System::Windows::Forms::Form
	{
	public:
		Registrarse(void)
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
		~Registrarse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtCon;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtusuario;

	private: System::Windows::Forms::Button^ btnRegistrar;
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
			this->txtCon = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtCon
			// 
			this->txtCon->Location = System::Drawing::Point(80, 122);
			this->txtCon->Name = L"txtCon";
			this->txtCon->Size = System::Drawing::Size(100, 20);
			this->txtCon->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Registrar Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(80, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Usuario:";
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(80, 75);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(100, 20);
			this->txtusuario->TabIndex = 3;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(80, 148);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(75, 23);
			this->btnRegistrar->TabIndex = 5;
			this->btnRegistrar->Text = L"Registrarse";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &Registrarse::btnRegistrar_Click);
			// 
			// Registrarse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(247, 210);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCon);
			this->Name = L"Registrarse";
			this->Text = L"Registrarse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			StreamReader^ usuario = gcnew StreamReader("..//" + txtusuario->Text + ".txt");
			
			if (txtCon->Text->Equals(usuario->ReadLine())) {
				String^ textoDelArchivo = usuario->ReadToEnd();
				MessageBox::Show("Usuario ya existente\n Se cargaran los datos del usuario ingresado" + usuario->ReadLine());
				MyForm^ form = gcnew MyForm(txtusuario->Text, textoDelArchivo);
				form->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Contraseña incorrecta");
			}
			

		}
		catch (System::IO::FileNotFoundException ^ ae) {
			if (txtusuario->Text->Equals("") || txtusuario->Text->Equals(" ") || txtCon->Text->Equals("") || txtCon->Text->Equals("")) {
				MessageBox::Show("Campos Vacíos, vuelve a intentarlo", "Advertencia");
			}
			else {
				TextWriter^ archivo = gcnew StreamWriter("..//" + txtusuario->Text + ".txt");
				
				archivo->Close();
				StreamWriter^ streamwriter = gcnew StreamWriter("..//" + txtusuario->Text + ".txt");
				streamwriter->Write(txtCon->Text);
				streamwriter->Close();
				MyForm^ form = gcnew MyForm(txtusuario->Text, txtCon->Text);
				form->Show();
				this->Hide();
			}
			
		}
		catch (System::NotSupportedException ^ ae) {
			MessageBox::Show("Error en la carga del usuario");
		}

	
		
	}
};
}
