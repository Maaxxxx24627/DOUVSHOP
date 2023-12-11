#pragma once
#include "CLCLient.h"
#include "CAD.h"

using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
	ref class CLClientService
	{

	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::CLCLient^ oMappTB;

	public:
		CLClientService(void);

		System::Data::DataSet^ selectionnerToutsLesClients(System::String^ dataTableName);
		void ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ adresseFacturation, System::String^ adresseLivraison, System::String^ dateNaissance);
		void modifierUnClient(int^ numeroClient, System::String^ nom, System::String^ prenom, System::String^ adresseFacturation, System::String^ adresseLivraison, System::String^ dateNaissance);
		void supprimerUnClient(int);
	};
}