#pragma once

using namespace System;


namespace NS_Comp_Mappage {

	ref class CLCommande
	{
	private:
		CLCommande(void);

		int^ idCommande;
		String^ referenceCommande;
		int^ dateLivraison;
		int^ dateEmission;
		int^ datesPaiements;
		String^ moyensPaiements;
		int^ totalPrixHT;
		int^ totalPrixTVA;

		int^ dateEnregistrement;
		int^ numeroClient;
		int^ idPersonnel;


	public:
		CLCommande(void);
		String^ SelectCommande(void);
		String^ InsertCommande(void);
		String^ UpdateCommande(void);
		String^ DeleteCommande(void);
		void setIdCommande(int^);
		void setReferenceCommande(String^);
		void setDateLivraison(int^);
		void setDateEmission(int^);
		void setTotalPrixHT(int^);
		void setTotalPrixTVA(int^);
		void setDateEnregistrement(int^);
		
		void setDatesPaiements(int^);
		void setMoyensPaiements(String^);
		void setNumeroClient(int^);
		void setIdPersonnel(int^);

		int^ getIdCommande(void);
		String^ getReferenceCommande(void);
		int^ getDateLivraison(void);
		int^ getDateEmission(void);
		
		int^ getTotalPrixHT(void);
		int^ getTotalPrixTVA(void);
		int^ getDateEnregistrement(void);
		int^ getDatesPaiements(void);
		String^ getMoyensPaiements(void);
		int^ getNumeroClient(void);
		int^ getIdPersonnel(void);

	};


}
