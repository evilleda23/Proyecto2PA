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
		System::String^ usuario;
		System::String^ fecha;
		System::String^ tasks;
	public:
		AgregarTarea(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//




		}
		AgregarTarea(System::String^ usu, System::String^ fe, System::String^ task)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			fecha = fe;
			usuario = usu;
			tasks = task;
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
	private: System::Windows::Forms::CheckBox^ checkbAlarma;
	protected:
	private: System::Windows::Forms::CheckBox^ checkbRecor;
	private: System::Windows::Forms::CheckBox^ checkbAct;
	private: System::Windows::Forms::TextBox^ txtinicio;
	private: System::Windows::Forms::TextBox^ txtfin;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtdescrip;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtid;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ listPrioridad;
	private: System::Windows::Forms::Label^ label6;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->checkbAlarma = (gcnew System::Windows::Forms::CheckBox());
			this->checkbRecor = (gcnew System::Windows::Forms::CheckBox());
			this->checkbAct = (gcnew System::Windows::Forms::CheckBox());
			this->txtinicio = (gcnew System::Windows::Forms::TextBox());
			this->txtfin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtdescrip = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listPrioridad = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkbAlarma
			// 
			this->checkbAlarma->AutoSize = true;
			this->checkbAlarma->Location = System::Drawing::Point(242, 12);
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
			this->checkbRecor->Location = System::Drawing::Point(129, 12);
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
			this->checkbAct->Location = System::Drawing::Point(27, 12);
			this->checkbAct->Name = L"checkbAct";
			this->checkbAct->Size = System::Drawing::Size(81, 17);
			this->checkbAct->TabIndex = 9;
			this->checkbAct->Text = L"Actividades";
			this->checkbAct->UseVisualStyleBackColor = true;
			this->checkbAct->CheckedChanged += gcnew System::EventHandler(this, &AgregarTarea::checkbAct_CheckedChanged);
			// 
			// txtinicio
			// 
			this->txtinicio->Enabled = false;
			this->txtinicio->Location = System::Drawing::Point(76, 64);
			this->txtinicio->Name = L"txtinicio";
			this->txtinicio->Size = System::Drawing::Size(55, 20);
			this->txtinicio->TabIndex = 12;
			// 
			// txtfin
			// 
			this->txtfin->Enabled = false;
			this->txtfin->Location = System::Drawing::Point(76, 95);
			this->txtfin->Name = L"txtfin";
			this->txtfin->Size = System::Drawing::Size(55, 20);
			this->txtfin->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Hora inicio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Hora final";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &AgregarTarea::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ingrese horas en punto";
			// 
			// txtdescrip
			// 
			this->txtdescrip->Location = System::Drawing::Point(16, 142);
			this->txtdescrip->Multiline = true;
			this->txtdescrip->Name = L"txtdescrip";
			this->txtdescrip->Size = System::Drawing::Size(294, 107);
			this->txtdescrip->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Descripcion:";
			// 
			// txtid
			// 
			this->txtid->Enabled = false;
			this->txtid->Location = System::Drawing::Point(210, 60);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(183, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"ID ";
			// 
			// listPrioridad
			// 
			this->listPrioridad->Enabled = false;
			this->listPrioridad->FormattingEnabled = true;
			this->listPrioridad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Alto", L"Medio", L"Bajo" });
			this->listPrioridad->Location = System::Drawing::Point(210, 98);
			this->listPrioridad->Name = L"listPrioridad";
			this->listPrioridad->Size = System::Drawing::Size(100, 21);
			this->listPrioridad->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(156, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Prioridad";
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listPrioridad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtdescrip);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtfin);
			this->Controls->Add(this->txtinicio);
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
			txtfin->Enabled = true;
			txtinicio->Enabled = true;
			listPrioridad->Enabled = true;
		}
		else {
			txtfin->Enabled = false;
			txtinicio->Enabled = false;
			checkbRecor->Enabled = true;
			checkbAlarma->Enabled = true;
		}
	}
	private: System::Void checkbRecor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkbRecor->Checked) {
			checkbAct->Enabled = false;
			checkbAlarma->Enabled = false;
			txtinicio->Enabled = true;
			listPrioridad->Enabled = true;

		}
		else {
			txtinicio->Enabled = false;
			listPrioridad->Enabled = false;
			checkbAct->Enabled = true;
			checkbAlarma->Enabled = true;
		}
	}
	private: System::Void checkbAlarma_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkbAlarma->Checked) {
			checkbAct->Enabled = false;
			checkbRecor->Enabled = false;
			txtinicio->Enabled = true;
			listPrioridad->Enabled = true;

		}
		else {
			txtinicio->Enabled = false;
			listPrioridad->Enabled = false;
			checkbAct->Enabled = true;
			checkbRecor->Enabled = true;
		}

		{

		}
		//MessageBox::Show(numero.ToString());
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (DateTime::Now.ToString("hh:mm")->Equals(txtinicio + ":00") && DateTime::Now.ToString("dd/MM/yyyy")->Equals(fecha))
		{
			//	ArrayList color = ->Split(",");
			//	for each (ArrayList puestos in color)
			//	{

			//		switch (cont)
			//		{
			//		case 0: //Presidente


			//		case 1: //Alcalde

			//			break;

			//		case 2: //Diputados en listado nacional

			//			break;

			//		case 3: //Diputados en listado distrital

			//			break;

			//		case 4: //Diputados al parlacen 

			//			break;
			//		}
			//		cont++;
			//	}
			//}
			//MessageBox::Show("Hey, tienes una actividad pendiente");
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ streamwriter = gcnew StreamWriter("..//" + usuario + ".txt");
	if (checkbAlarma->Checked || checkbAct->Checked || checkbRecor->Checked  && txtid->Text != "" && txtdescrip->Text != "") {
		if (checkbAct->Checked && txtinicio->Text != "" && txtinicio->Text != " " && txtfin->Text != "" && txtfin->Text != " " && listPrioridad->SelectedItem != "") {
			tasks+="\n Fecha:" + fecha + " " + " Hora inicio:" + txtinicio->Text + ":00" + " Hora final: " + txtfin->Text + ":00" + " Prioridad:" + listPrioridad->SelectedItem->ToString() + "Actividad: " + txtdescrip->Text + " ID" + txtid->Text;
			streamwriter->Write(tasks );
		}else		if (checkbRecor->Checked && txtinicio->Text != "" && txtinicio->Text != " " && listPrioridad->SelectedItem != "") {
			tasks += "\n Fecha:" + fecha + " " + " Hora inicio:" + txtinicio->Text + ":00" + " Prioridad:" + listPrioridad->SelectedItem->ToString() + "Recordatorio: " + txtdescrip->Text;
			streamwriter->Write(tasks);
			

		}else if (checkbAlarma->Checked && txtinicio->Text != "" && txtinicio->Text != " " && listPrioridad->SelectedItem != "") {
			tasks += "\n Fecha:" + fecha->ToString() + " " + " Hora inicio:" + txtinicio->Text + ":00" + "Alarma: " + txtdescrip->Text;
			streamwriter->Write(tasks);
		}
		else {
			MessageBox::Show("Llena todos los campos");
		}
		MessageBox::Show("Se han guardado los datos");
		this->Hide();
	}
	else {
		MessageBox::Show("No has seleccionado ningun  tipo de evento");
	}
	
	
	
	streamwriter->Close();
}
};
}
