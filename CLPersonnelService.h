#pragma once
#include "CLPersonnel.h"
#include "CAD.h"
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
	ref class CLPersonnelService
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::CLPersonnel^ oMappTB;

	public:
		CLPersonnelService(void);

		System::Data::DataSet^ selectionnerToutsLesPersonnels(System::String^ dataTableName);
		void ajouterUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, System::String^ superieur);
		void modifierUnPersonnel(int^ idPersonnel, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, System::String^ superieur);
		void supprimerUnPersonnel(int^ idPersonnel);
	};
}