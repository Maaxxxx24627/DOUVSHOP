#pragma once
using namespace System;

namespace NS_Comp_Mappage {

	ref class CLPersonnel
	{
	private:
		CLPersonnel(void);

		int^ idPersonnel;
		String^ nom;
		String^ prenom;
		String^ adresse;
		String^ dateEmbauche;
		String^ superieur;
	public:
		CLPersonnel(void);
		String^ SelectPersonnel(void);
		String^ InsertPersonnel(void);
		String^ UpdatePersonnel(void);
		String^ DeletePersonnel(void);
		void setIdPersonnel(int^);
		void setPrenom(String^);
		void setNom(String^);
		void setAdresse(String^);
		void setDateEmbauche(String^);
		void setSuperieur(String^);
		int^ getIdPersonnel(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getAdresse(void);
		String^ getDateEmbauche(void);
		String^ getSuperieur(void);
	};


}
