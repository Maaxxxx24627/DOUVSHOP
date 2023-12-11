#pragma once
using namespace System;

namespace NS_Comp_Mappage {

	ref class CLCLient
	{
	private:
		CLCLient(void);
		
		int^ numeroClient;
		String^ nom;
		String^ prenom;
		String^ adresseFacturation;
		String^ adresseLivraison;
		String^ dateNaissance;

	public:
		CLCLient(void);
		String^ SelectCLient(void);
		String^ InsertCLient(void);
		String^ UpdateCLient(void);
		String^ DeleteCLient(void);
		//String^ remiseAnniv(void);
		//String^ remisePremierAchat(void);

		void setNumeroClient(int^);
		void setPrenom(String^);
		void setNom(String^);
		void setAdresseFacturation(String^);
		void setAdresseLivraison(String^);
		void setDateNaissance(String^);


		int^ getNumeroClient(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getAdresseFacturation(void);
		String^ getAdresseLivraison(void);
		String^ getDateNaissance(void);


	};

}
