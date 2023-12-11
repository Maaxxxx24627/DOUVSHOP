#pragma once
#include "GestionStatistique.h"

namespace Project7
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>

	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			oSvc = gcnew NS_Comp_Svc::GestionStatistique();
			oDs = nullptr; // Initialisation de oDs à nullptr
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::GestionStatistique^ oSvc;
	private: System::Data::DataSet^ oDs;

		   

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1108, 34);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 703);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1108, 78);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 143);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 31);
			this->button1->TabIndex = 33;
			this->button1->Text = L"PanierMoyen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(136, 192);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 31);
			this->button2->TabIndex = 34;
			this->button2->Text = L"ChiffreAffaireMois";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(136, 248);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 31);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Produit<seuilRéa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(136, 396);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 31);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Top10Article<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(136, 345);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 31);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Top10Article>";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(136, 297);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 31);
			this->button6->TabIndex = 36;
			this->button6->Text = L"TotalAchatClient";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(136, 549);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 31);
			this->button7->TabIndex = 41;
			this->button7->Text = L"VariationStock";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(136, 498);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 31);
			this->button8->TabIndex = 40;
			this->button8->Text = L"ValeurStockVente";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(136, 449);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(115, 31);
			this->button9->TabIndex = 39;
			this->button9->Text = L"ValeurStockAchat";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm4::button9_Click);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(351, 180);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(513, 349);
			this->panel4->TabIndex = 42;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel4_Paint);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(977, 68);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 50);
			this->button10->TabIndex = 43;
			this->button10->Text = L"< RETOUR";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm4::button10_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1108, 781);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm4";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load_1);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm4_Load_1(System::Object ^ sender, System::EventArgs ^ e) {
		oSvc = gcnew NS_Comp_Svc::GestionStatistique();
	}

		   // ...

	private:
		// Méthode pour afficher la moyenne des prix des commandes
		void AfficherMoyennePrixCommandes() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->selectionnerPanierMoyen("Commande");

				if (oDs != nullptr && oDs->Tables->Contains("Commande") && oDs->Tables["Commande"]->Rows->Count > 0) {
					System::String^ moyennePrix = oDs->Tables["Commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher la moyenne des prix des commandes
					System::Windows::Forms::Label^ labelPanierMoyen = gcnew System::Windows::Forms::Label();
					labelPanierMoyen->AutoSize = true;
					labelPanierMoyen->Location = System::Drawing::Point(30, 30); // Position du Label dans le Panel
					labelPanierMoyen->Text = "Moyenne des prix des commandes : " + moyennePrix;

					// Ajout du label au panel4
					panel4->Controls->Add(labelPanierMoyen);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}

		// Méthode pour afficher le chiffre d'affaires
		void AfficherChiffreAffaire() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->selectionnerChiffreAffaire("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ chiffreAffaire = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le chiffre d'affaires
					System::Windows::Forms::Label^ labelChiffreAffaire = gcnew System::Windows::Forms::Label();
					labelChiffreAffaire->AutoSize = true;
					labelChiffreAffaire->Location = System::Drawing::Point(50, 50); // Position du Label dans le Panel
					labelChiffreAffaire->Text = "Chiffre d'affaires : " + chiffreAffaire;

					// Ajout du label au panel4
					panel4->Controls->Add(labelChiffreAffaire);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherStockAReapprovisionner() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectStockAReapprovisionner("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ stockAReapprovisionner = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelStockAReapprovisionner = gcnew System::Windows::Forms::Label();
					labelStockAReapprovisionner->AutoSize = true;
					labelStockAReapprovisionner->Location = System::Drawing::Point(70, 70); // Position du Label dans le Panel
					labelStockAReapprovisionner->Text = "Article à réapprovisionner : " + stockAReapprovisionner;

					// Ajout du label au panel4
					panel4->Controls->Add(labelStockAReapprovisionner);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherMontantTotalClient() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectMontantTotalClient("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ MontantTotalClient = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelMontantTotalClient = gcnew System::Windows::Forms::Label();
					labelMontantTotalClient->AutoSize = true;
					labelMontantTotalClient->Location = System::Drawing::Point(90, 90); // Position du Label dans le Panel
					labelMontantTotalClient->Text = "Article à réapprovisionner : " + MontantTotalClient;

					// Ajout du label au panel4
					panel4->Controls->Add(labelMontantTotalClient);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherTop10ArticlePlusVendu() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectTop10ArticlePlusVendu("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ Top10ArticlePlusVendu = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelTop10ArticlePlusVendu = gcnew System::Windows::Forms::Label();
					labelTop10ArticlePlusVendu->AutoSize = true;
					labelTop10ArticlePlusVendu->Location = System::Drawing::Point(90, 90); // Position du Label dans le Panel
					labelTop10ArticlePlusVendu->Text = "Article à réapprovisionner : " + Top10ArticlePlusVendu;

					// Ajout du label au panel4
					panel4->Controls->Add(labelTop10ArticlePlusVendu);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherTop10ArticleLeMoinsVendu() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectTop10ArticleLeMoinsVendu("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ Top10ArticleLeMoinsVendu = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelTop10ArticleLeMoinsVendu = gcnew System::Windows::Forms::Label();
					labelTop10ArticleLeMoinsVendu->AutoSize = true;
					labelTop10ArticleLeMoinsVendu->Location = System::Drawing::Point(90, 90); // Position du Label dans le Panel
					labelTop10ArticleLeMoinsVendu->Text = "Article à réapprovisionner : " + Top10ArticleLeMoinsVendu;

					// Ajout du label au panel4
					panel4->Controls->Add(labelTop10ArticleLeMoinsVendu);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherValeurAchatStock() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectValeurAchatStock("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ ValeurAchatStock = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelValeurAchatStock = gcnew System::Windows::Forms::Label();
					labelValeurAchatStock->AutoSize = true;
					labelValeurAchatStock->Location = System::Drawing::Point(90, 90); // Position du Label dans le Panel
					labelValeurAchatStock->Text = "Article à réapprovisionner : " + ValeurAchatStock;

					// Ajout du label au panel4
					panel4->Controls->Add(labelValeurAchatStock);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}
		void AfficherValeurCommercialeStock() {
			// Effacer les contrôles existants dans panel4
			panel4->Controls->Clear();

			if (oSvc != nullptr) {
				oDs = oSvc->SelectValeurCommercialeStock("commande");

				if (oDs != nullptr && oDs->Tables->Contains("commande") && oDs->Tables["commande"]->Rows->Count > 0) {
					System::String^ ValeurCommercialeStock = oDs->Tables["commande"]->Rows[0]->ItemArray[0]->ToString();

					// Création d'un label pour afficher le stock à réapprovisionner
					System::Windows::Forms::Label^ labelValeurCommercialeStock = gcnew System::Windows::Forms::Label();
					labelValeurCommercialeStock->AutoSize = true;
					labelValeurCommercialeStock->Location = System::Drawing::Point(90, 90); // Position du Label dans le Panel
					labelValeurCommercialeStock->Text = "Article à réapprovisionner : " + ValeurCommercialeStock;

					// Ajout du label au panel4
					panel4->Controls->Add(labelValeurCommercialeStock);
				}
				else {
					// Gérer le cas où oDs est null ou la table "commande" n'existe pas ou est vide
					// Afficher un message d'erreur ou effectuer une action appropriée
				}
			}
			else {
				// Gérer le cas où oSvc est null
				// Afficher un message d'erreur ou effectuer une action appropriée
			}
		}



		// Event handler pour le clic sur le premier bouton
		


private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherMoyennePrixCommandes();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherChiffreAffaire();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherStockAReapprovisionner();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherMontantTotalClient();
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherTop10ArticlePlusVendu();
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherTop10ArticleLeMoinsVendu();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	AfficherValeurAchatStock();
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AfficherValeurCommercialeStock();
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {



}
};
}