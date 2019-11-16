#pragma once

namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de AgregarTarea
	/// </summary>

	public ref class AgregarTarea : public System::Windows::Forms::Form
	{
		
		System::String^ tasks;
		System::String^ usuario;
	public:
		AgregarTarea(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//




		}
		AgregarTarea(System::String^ task, System::String^ usu)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
			tasks = task;
			usuario = usu;
		}

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

	protected:










	private: System::Windows::Forms::TextBox^ txtdescrip;

	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtdescrip = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtdescrip
			// 
			this->txtdescrip->Location = System::Drawing::Point(16, 34);
			this->txtdescrip->Multiline = true;
			this->txtdescrip->Name = L"txtdescrip";
			this->txtdescrip->Size = System::Drawing::Size(294, 215);
			this->txtdescrip->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Descripcion:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarTarea::button1_Click);
			// 
			// AgregarTarea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(326, 285);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtdescrip);
			this->Name = L"AgregarTarea";
			this->Text = L"AgregarTarea";
			this->Load += gcnew System::EventHandler(this, &AgregarTarea::AgregarTarea_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ streamwriter = gcnew StreamWriter("..//" + usuario + ".txt");
	streamwriter->Write(txtdescrip->Text);
	streamwriter->Close();
	
}
private: System::Void AgregarTarea_Load(System::Object^ sender, System::EventArgs^ e) {
	txtdescrip->Text = tasks;
	MessageBox::Show("Edite el texto de manera responsable");
	
}
};
}
