#pragma once

using namespace System;


namespace NS_Comp_Mappage {

	ref class CLArticle
	{
	private:
		CLArticle(void);
		int^ idArticle;
		String^ nom;
		String^ nature;
		String^ couleur;
		String^ quantiteArticle;
		String^ quantiteAchete;
		String^ idCommande;
		String^ idCatalogue;


	public:
		CLArticle(void);
		String^ SelectArticle(void);
		String^ InsertArticle(void);
		String^ UpdateArticle(void);
		String^ DeleteArticle(void);
		void setIdArticle(int^);
		void setNom(String^);
		void setNature(String^);
		void setCouleur(String^);
		void setQuantiteArticle(String^);
		void setIdCommande(String^);
		void setIdCatalogue(String^);
		void setQuantiteAchete(String^);
		int^ getIdArticle(void);
		String^ getNom(void);
		String^ getNature(void);
		String^ getCouleur(void);
		String^ getQuantiteArticle(void);
		String^ getIdCommande(void);
		String^ getIdCatalogue(void);
		String^ getQuantiteAchete(void);

	};
}
