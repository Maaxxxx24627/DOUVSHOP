#pragma once

#include "CLArticle.h"
#include "CAD.h"
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
	ref class CLArticleService
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::CLArticle^ oMappTB;

	public:
		
	


		System::Data::DataSet^ selectionnerToutsLesArticles(System::String^ dataTableName);
		void ajouterUnArticle(String^ nom, String^ nature, String^ couleur, String^ quantiteArticle, String^ quantiteAchete, String^ idCommande, String^ idCatalogue);
		void modifierUnArticle(int^ idArticle, String^ nom, String^ nature, String^ couleur, String^ quantiteArticle, String^ quantiteAchete, String^ idCommande, String^ idCatalogue);
		void supprimerUnArticle(int^ idArticle);
	};
}