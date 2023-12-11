#pragma once

#include "CLCommandeService.h"

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLCommandeService^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ retour;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;











	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;














	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->retour = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(241, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(738, 250);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// retour
			// 
			this->retour->Location = System::Drawing::Point(35, 12);
			this->retour->Name = L"retour";
			this->retour->Size = System::Drawing::Size(90, 50);
			this->retour->TabIndex = 1;
			this->retour->Text = L"< RETOUR";
			this->retour->UseVisualStyleBackColor = true;
			this->retour->Click += gcnew System::EventHandler(this, &MyForm2::retour_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insérer une nouvelle ligne";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(241, 375);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Modifier une ligne";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(241, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Supprimer une ligne";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(554, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Entrez un idCommande (seulement pour modifier)  :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(554, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Entrez une date de livraison (jjmmyyyy) :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(554, 521);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Entrez une date de paiement (jjmmyyyy)  :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(554, 551);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Entrez le moyen de paiement :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(554, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Entrez le prix total HT :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(554, 466);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Entrez le prix total TVA :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(554, 495);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Entrez la date d\'enregistrement (jjmmyyyy)  :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(554, 577);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Entrez un numero de client :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(554, 603);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Entrez un idPersonnel :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(554, 356);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(183, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Entrez la reference de la commande :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(554, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Entrez une date d\'emission (jjmmyyyy) :";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 646);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1240, 24);
			this->panel1->TabIndex = 29;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1047, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(894, 316);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 31;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(894, 349);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 32;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(894, 378);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 33;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(894, 404);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 34;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(894, 434);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 35;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(894, 459);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 36;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(894, 488);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 37;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox7_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(894, 514);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 39;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(894, 544);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 40;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(894, 570);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 41;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(894, 596);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 42;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox12_TextChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 670);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->retour);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"Commande";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		oSvc = gcnew NS_Comp_Svc::CLCommandeService();
		oDs = gcnew System::Data::DataSet();
		oDs = oSvc->selectionnerToutesLesCommandes("Commande");
		dataGridView1->DataSource = oDs->Tables["Commande"];
		oDs->Tables["Commande"]->PrimaryKey = gcnew array<System::Data::DataColumn^>{ oDs->Tables["Commande"]->Columns["idCommande"] };


	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUneCommande(
			this->textBox2->Text,
			System::Convert::ToInt32(this->textBox3->Text),
			System::Convert::ToInt32(this->textBox4->Text),
			System::Convert::ToInt32(this->textBox5->Text),
			System::Convert::ToInt32(this->textBox6->Text),
			System::Convert::ToInt32(this->textBox7->Text),
			
			System::Convert::ToInt32(this->textBox9->Text),
			this->textBox10->Text,
			System::Convert::ToInt32(this->textBox11->Text),
			System::Convert::ToInt32(this->textBox12->Text));
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifierUneCommande(
		System::Convert::ToInt32(this->textBox1->Text),
		this->textBox2->Text,
		System::Convert::ToInt32(this->textBox3->Text),
		System::Convert::ToInt32(this->textBox4->Text),
		System::Convert::ToInt32(this->textBox5->Text),
		System::Convert::ToInt32(this->textBox6->Text),
		System::Convert::ToInt32(this->textBox7->Text),
		
		System::Convert::ToInt32(this->textBox9->Text),
		this->textBox10->Text,
		System::Convert::ToInt32(this->textBox11->Text),
		System::Convert::ToInt32(this->textBox12->Text));
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Vérifier si une ligne est sélectionnée dans le DataGridView
	if (dataGridView1->SelectedRows->Count > 0) {
		// Obtenir l'ID de la ligne sélectionnée
		int selectedId = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["idCommande"]->Value);

		// Supprimer la ligne de la base de données
		oSvc->supprimerUneCommande(selectedId);

		// Mettre à jour le DataSet et le DataGridView
		oDs->Tables["Commande"]->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		dataGridView1->DataSource = oDs->Tables["Commande"];
	}
	else {
		MessageBox::Show("Veuillez sélectionner une ligne à supprimer.");
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

private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

