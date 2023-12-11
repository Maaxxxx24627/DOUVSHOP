#pragma once
#include "CLFacturation.h"
#include "CAD.h"
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
	ref class CLFacturationService
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::CLFacturation^ oMappTB;

	public:
		CLFacturationService(void);

		System::Data::DataSet^ selectionnerToutesLesFactures(System::String^ dataTableName);
		void ajouterUneFacture(String^ nomSociete, String^ adresseSociete, String^ numSociete, String^ logoSociete, String^ nomClient, String^ adresseFacturation, String^ adresseLivraison);
		void modifierUneFacture(int idFacturation, String^ nomSociete, String^ adresseSociete, String^ numSociete, String^ logoSociete, String^ nomClient, String^ adresseFacturation, String^ adresseLivraison);
		void supprimerUneFacture(int^ idFacturation);
	};
}