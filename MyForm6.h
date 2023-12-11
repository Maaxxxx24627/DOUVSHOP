#pragma once
#include "CLFacturationService.h"

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: NS_Comp_Svc::CLFacturationService^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(320, 28);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(831, 281);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm6::dgv_enr_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(34, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"< RETOUR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(320, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Insérer une nouvelle ligne";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 443);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modifier une ligne";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(320, 509);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Supprimer une ligne";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(988, 345);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(988, 397);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(988, 438);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(163, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(988, 518);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(163, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(988, 560);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(988, 610);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(163, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(988, 649);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(163, 20);
			this->textBox7->TabIndex = 11;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox7_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(715, 352);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Entrez un idFacturation (seulement pour modifier)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(715, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Entrez un nom de societe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(715, 438);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Entrez une adresse de societe";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(715, 521);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Entrez un logo de societe";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(715, 563);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Entrez un nom de client";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(715, 610);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Entrez une adresse de facturation";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(715, 652);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(158, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Entrez une adresse de Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(715, 477);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Entrez un numero de societe";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(988, 477);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(163, 20);
			this->textBox8->TabIndex = 23;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox8_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1275, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 771);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1469, 29);
			this->panel1->TabIndex = 25;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1469, 800);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgv_enr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm6";
			this->Text = L"Facture";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}
		private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
			oSvc = gcnew NS_Comp_Svc::CLFacturationService();
			oDs = gcnew System::Data::DataSet();
			oDs = oSvc->selectionnerToutesLesFactures("Facturation");
			dgv_enr->DataSource = oDs->Tables["Facturation"];
			oDs->Tables["Facturation"]->PrimaryKey = gcnew array<System::Data::DataColumn^>{ oDs->Tables["Facturation"]->Columns["idFacturation"] };


		}




	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUneFacture(this->textBox2->Text, this->textBox3->Text, this->textBox8->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->textBox7->Text);
	}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifierUneFacture(System::Convert::ToInt32(this->textBox1->Text), this->textBox2->Text, this->textBox3->Text, this->textBox8->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->textBox7->Text);
}




private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Vérifier si une ligne est sélectionnée dans le DataGridView
	if (dgv_enr->SelectedRows->Count > 0) {
		// Récupérer l'index de la ligne sélectionnée
		int selectedIndex = dgv_enr->SelectedRows[0]->Index;

		// Récupérer l'ID de la facture à supprimer
		int idToDelete = (int)dgv_enr->Rows[selectedIndex]->Cells["idFacturation"]->Value;

		// Supprimer la ligne du DataSet
		oDs->Tables["Facturation"]->Rows->RemoveAt(selectedIndex);

		// Supprimer la ligne de la base de données
		oSvc->supprimerUneFacture(idToDelete);

		// Mettre à jour le DataGridView
		dgv_enr->DataSource = oDs->Tables["Facturation"];
	}
	else {
		// Avertir que l'utilisateur n'a pas sélectionné de ligne
	}
}





private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



};
}
