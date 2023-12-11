#pragma once
#include "CLCommande.h"
#include "CAD.h"
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
	ref class CLCommandeService
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::CLCommande^ oMappTB;

	public:
		CLCommandeService(void);

		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^ dataTableName);
		void ajouterUneCommande(String^ referenceCommande, int^ dateLivraison, int^ dateEmission, int^ totalPrixHT, int^ totalPrixTVA, int^ dateEnregistrement, int^ datesPaiements, String^ moyensPaiements, int^ numeroClient, int^ idPersonnel);
		void modifierUneCommande(int^ idCommande, String^ referenceCommande, int^ dateLivraison, int^ dateEmission, int^ totalPrixHT, int^ totalPrixTVA, int^ dateEnregistrement, int^ datesPaiements, String^ moyensPaiements, int^ numeroClient, int^ idPersonnel);
		void supprimerUneCommande(int^ idCommande);
	};
}