#pragma once
#include "EditarTarea.h"
#include "Lista.h"
#include "Eventos.h"
#include "Actividad.h"
#include "Alarma.h"
#include "Recordatorio.h"
#include <msclr\marshal_cppstd.h>
namespace Proyecto2PA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		System::String^ usuario = "";

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ btnac;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ listPrioridad;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtdescrip;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtfin;
	private: System::Windows::Forms::TextBox^ txtinicio;
	private: System::Windows::Forms::CheckBox^ checkbAlarma;
	private: System::Windows::Forms::CheckBox^ checkbRecor;
	private: System::Windows::Forms::CheckBox^ checkbAct;

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
	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:



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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtdia = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarT = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnac = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listPrioridad = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtdescrip = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtfin = (gcnew System::Windows::Forms::TextBox());
			this->txtinicio = (gcnew System::Windows::Forms::TextBox());
			this->checkbAlarma = (gcnew System::Windows::Forms::CheckBox());
			this->checkbRecor = (gcnew System::Windows::Forms::CheckBox());
			this->checkbAct = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(11, 95);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ningún día seleccionado";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// txtdia
			// 
			this->txtdia->Enabled = false;
			this->txtdia->Location = System::Drawing::Point(297, 58);
			this->txtdia->Multiline = true;
			this->txtdia->Name = L"txtdia";
			this->txtdia->ReadOnly = true;
			this->txtdia->Size = System::Drawing::Size(182, 199);
			this->txtdia->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(326, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Eventos pendientes";
			// 
			// btnAgregarT
			// 
			this->btnAgregarT->Location = System::Drawing::Point(297, 8);
			this->btnAgregarT->Name = L"btnAgregarT";
			this->btnAgregarT->Size = System::Drawing::Size(100, 24);
			this->btnAgregarT->TabIndex = 9;
			this->btnAgregarT->Text = L"Agregar Tarea";
			this->btnAgregarT->UseVisualStyleBackColor = true;
			this->btnAgregarT->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarT_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Buscar ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 25);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(403, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Actualizar/Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 6000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// btnac
			// 
			this->btnac->Enabled = false;
			this->btnac->Location = System::Drawing::Point(627, 242);
			this->btnac->Name = L"btnac";
			this->btnac->Size = System::Drawing::Size(75, 23);
			this->btnac->TabIndex = 38;
			this->btnac->Text = L"Aceptar";
			this->btnac->UseVisualStyleBackColor = true;
			this->btnac->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Location = System::Drawing::Point(665, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Prioridad";
			// 
			// listPrioridad
			// 
			this->listPrioridad->Enabled = false;
			this->listPrioridad->FormattingEnabled = true;
			this->listPrioridad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Alto", L"Medio", L"Bajo" });
			this->listPrioridad->Location = System::Drawing::Point(719, 96);
			this->listPrioridad->Name = L"listPrioridad";
			this->listPrioridad->Size = System::Drawing::Size(100, 21);
			this->listPrioridad->TabIndex = 36;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Location = System::Drawing::Point(692, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"ID ";
			// 
			// txtid
			// 
			this->txtid->Enabled = false;
			this->txtid->Location = System::Drawing::Point(719, 58);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->Location = System::Drawing::Point(525, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Descripcion:";
			// 
			// txtdescrip
			// 
			this->txtdescrip->Enabled = false;
			this->txtdescrip->Location = System::Drawing::Point(525, 140);
			this->txtdescrip->Multiline = true;
			this->txtdescrip->Name = L"txtdescrip";
			this->txtdescrip->Size = System::Drawing::Size(294, 96);
			this->txtdescrip->TabIndex = 32;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->Location = System::Drawing::Point(522, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Ingrese horas en punto";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Enabled = false;
			this->label9->Location = System::Drawing::Point(521, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Hora final";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Location = System::Drawing::Point(522, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Hora inicio";
			// 
			// txtfin
			// 
			this->txtfin->Enabled = false;
			this->txtfin->Location = System::Drawing::Point(585, 93);
			this->txtfin->Name = L"txtfin";
			this->txtfin->Size = System::Drawing::Size(55, 20);
			this->txtfin->TabIndex = 28;
			// 
			// txtinicio
			// 
			this->txtinicio->Enabled = false;
			this->txtinicio->Location = System::Drawing::Point(585, 62);
			this->txtinicio->Name = L"txtinicio";
			this->txtinicio->Size = System::Drawing::Size(55, 20);
			this->txtinicio->TabIndex = 27;
			// 
			// checkbAlarma
			// 
			this->checkbAlarma->AutoSize = true;
			this->checkbAlarma->Enabled = false;
			this->checkbAlarma->Location = System::Drawing::Point(751, 10);
			this->checkbAlarma->Name = L"checkbAlarma";
			this->checkbAlarma->Size = System::Drawing::Size(58, 17);
			this->checkbAlarma->TabIndex = 26;
			this->checkbAlarma->Text = L"Alarma";
			this->checkbAlarma->UseVisualStyleBackColor = true;
			this->checkbAlarma->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbAlarma_CheckedChanged);
			// 
			// checkbRecor
			// 
			this->checkbRecor->AutoSize = true;
			this->checkbRecor->Enabled = false;
			this->checkbRecor->Location = System::Drawing::Point(638, 10);
			this->checkbRecor->Name = L"checkbRecor";
			this->checkbRecor->Size = System::Drawing::Size(92, 17);
			this->checkbRecor->TabIndex = 25;
			this->checkbRecor->Text = L"Recordatorios";
			this->checkbRecor->UseVisualStyleBackColor = true;
			this->checkbRecor->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbRecor_CheckedChanged);
			// 
			// checkbAct
			// 
			this->checkbAct->AutoSize = true;
			this->checkbAct->Enabled = false;
			this->checkbAct->Location = System::Drawing::Point(536, 10);
			this->checkbAct->Name = L"checkbAct";
			this->checkbAct->Size = System::Drawing::Size(81, 17);
			this->checkbAct->TabIndex = 24;
			this->checkbAct->Text = L"Actividades";
			this->checkbAct->UseVisualStyleBackColor = true;
			this->checkbAct->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkbAct_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 273);
			this->Controls->Add(this->btnac);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listPrioridad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtdescrip);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtfin);
			this->Controls->Add(this->txtinicio);
			this->Controls->Add(this->checkbAlarma);
			this->Controls->Add(this->checkbRecor);
			this->Controls->Add(this->checkbAct);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
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
	timer1->Enabled = false;
	checkbAct->Enabled = true;
	checkbRecor->Enabled = true;
	checkbAlarma->Enabled = true;
	txtinicio->Enabled = true;
	txtfin->Enabled = true;
	listPrioridad->Enabled = true;
	txtid->Enabled = true;
	txtdescrip->Enabled = true;
	btnac->Enabled = true;
	//lista->insertarlista(5);
}
	   
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Lista* lista = new Lista();
	
	txtdia->Text = datos;

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   String^ textoDelArchivo;
	   
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ texto = gcnew StreamReader("..//" + usuario + ".txt");
	
	textoDelArchivo = texto->ReadToEnd();
	texto->Close();
	txtdia->Text = textoDelArchivo;
	
	if (txtinicio->Text == DateTime::Now.ToString("H:mm")) {
		if (alarm) {
			SoundPlayer^ Player = gcnew SoundPlayer();
			Player->SoundLocation = "..//alarma.wav";
			Player->Play();
			if (MessageBox::Show("Alarma", "Recordatorio", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				MessageBox::Show("Detener");
				Player->Stop();
			}
			else
			{
				MessageBox::Show("Aplazar");
				Player->Stop();
				
			}
		}
		else if(recor) {
			MessageBox::Show("Recordatorio: "+txtdescrip->Text);
		}
		else if (act) {
			MessageBox::Show("Actividad"+txtdescrip->Text);
		}
		//timer1->Enabled = false;
	}
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//Lista *l;
	//l->obtenerdato(txtid->Text);
}
	   bool act = false, recor = false, alarm = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ streamwriter = gcnew StreamWriter("..//" + usuario + ".txt");
	
	if (checkbAlarma->Checked || checkbAct->Checked || checkbRecor->Checked && txtid->Text != "" && txtdescrip->Text != "") {
		if (checkbAct->Checked && txtinicio->Text != "" && txtinicio->Text != " " && txtfin->Text != "" && txtfin->Text != " " && listPrioridad->SelectedItem != "") {
			//String^ nombre= "Actividad" + txtid->Text;
			//Eventos*  nomb  = new Eventos();
			//nomb->ID = System::Convert::ToInt16(txtid->Text);
			//nomb->hora = System::Convert::ToInt16(txtinicio->Text);
			//nomb->descripcion = msclr::interop::marshal_as<std::string>(txtdescrip->Text->ToString());
			////nomb ->horafin = System::Convert::ToInt16(txtfin->Text);
			//Lista* l = new Lista();
			//l->insertarlista(nomb);
			act = true;
			textoDelArchivo += "\n Fecha:" + label1->Text + " " + " Hora inicio:" + txtinicio->Text + ":00" + " Hora final: " + txtfin->Text + ":00" + " Prioridad:" + listPrioridad->SelectedItem->ToString() + "Actividad: " + txtdescrip->Text + " ID" + txtid->Text;
			streamwriter->Write(textoDelArchivo);
		}
		else if (checkbRecor->Checked && txtinicio->Text != "" && txtinicio->Text != " " && listPrioridad->SelectedItem != "") {
			recor = true;
			//Eventos* nomb = new Eventos();
			//nomb->ID = System::Convert::ToInt16(txtid->Text);
			//nomb->hora = System::Convert::ToInt16(txtinicio->Text);
			//nomb->descripcion = msclr::interop::marshal_as<std::string>(txtdescrip->Text->ToString());
			////nomb ->horafin = System::Convert::ToInt16(txtfin->Text);
			//Lista* l = new Lista();
			//l->insertarlista(nomb); 
			textoDelArchivo += "\n Fecha:" + label1->Text + " " + " Hora inicio:" + txtinicio->Text + ":00" + " Prioridad:" + listPrioridad->SelectedItem->ToString() + "Recordatorio: " + txtdescrip->Text;
			streamwriter->Write(textoDelArchivo);


		}
		else if (checkbAlarma->Checked && txtinicio->Text != "" && txtinicio->Text != " " && listPrioridad->SelectedItem != "") {
			Eventos* nomb = new Eventos();
			alarm = true;
			//nomb->ID = System::Convert::ToInt16(txtid->Text);
			//nomb->hora = System::Convert::ToInt16(txtinicio->Text);
			//nomb->descripcion = msclr::interop::marshal_as<std::string>(txtdescrip->Text->ToString());
			////nomb ->horafin = System::Convert::ToInt16(txtfin->Text);
			//Lista* l = new Lista();
			//l->insertarlista(nomb);
			textoDelArchivo += "\n Fecha:" + label1->Text + " " + " Hora inicio:" + txtinicio->Text + ":00" + "Alarma: " + txtdescrip->Text;
			streamwriter->Write(textoDelArchivo);
		}
		else {
			MessageBox::Show("Llena todos los campos");
		}
		MessageBox::Show("Se han guardado los datos");
		
	}
	else {
		MessageBox::Show("No has seleccionado ningun  tipo de evento");
	}



	streamwriter->Close();
	timer1->Enabled = true;
	checkbAct->Enabled = false;
	checkbRecor->Enabled = false;
	checkbAlarma->Enabled = false;
	txtinicio->Enabled = false;
	txtfin->Enabled = false;
	listPrioridad->Enabled = false;
	txtid->Enabled = false;
	txtdescrip->Enabled = false;
	btnac->Enabled = false;
}
private: System::Void checkbAct_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkbAct->Checked) {
		checkbRecor->Enabled = false;
		checkbAlarma->Enabled = false;
		txtfin->Enabled = true;
		txtinicio->Enabled = true;
		listPrioridad->Enabled = true;
	}
	else {
		listPrioridad->Enabled = false;
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
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarTarea^ task = gcnew AgregarTarea(textoDelArchivo, usuario);
	task->Show();
}
};
	}

