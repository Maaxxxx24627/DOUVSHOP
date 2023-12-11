
#pragma once
#include "CLCommande.h"
#include "CLCLient.h"
using namespace System;


namespace NS_Comp_Mappage {

	ref class CLFacturation : public CLCommande
	{
	private:
		CLFacturation(void);
		~CLFacturation();

		int^ idFacturation;
		String^ nomSociete;
		String^ adresseSociete;
		String^ numSociete;
		String^ logoSociete;
		String^ nomClient;
		String^ adresseFacturation;
		String^ adresseLivraison;


	public:
		CLFacturation(void);
		String^ SelectFacturation(void);
		String^ InsertFacturation(void);
		String^ UpdateFacturation(void);
		String^ DeleteFacturation(void);

		Void setNomSociete(String^);
		Void setAdresseSociete(String^);
		Void setIdFacturation(int^);
		Void setNumSociete(String^);
		Void setNomClient(String^);
		Void setAdresseFacturation(String^);
		Void setAdresseLivraison(String^);
		Void setLogoSociete(String^);

		String^ getNomSociete(void);
		String^ getAdresseSociete(void);
		int^ getIdFacturation(void);
		String^ getNumSociete(void);
		String^ getNomClient(void);
		String^ getAdresseFacturation(void);
		String^ getAdresseLivraison(void);
		String^ getLogoSociete(void);



	};
}