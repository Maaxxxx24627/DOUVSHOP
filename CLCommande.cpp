#include "CLCommande.h"

namespace NS_Comp_Mappage {
	CLCommande::CLCommande(void) {

		this->idCommande = 0;
		this->referenceCommande = "RIEN";
		this->dateLivraison = 0;
		this->dateEmission = 0;
		this->datesPaiements = 0;
		this->moyensPaiements = "RIEN";
		this->totalPrixHT = 0;
		this->totalPrixTVA = 0;
		this->dateEnregistrement = 0;
		this->numeroClient = 0;
		this->idPersonnel = 0;

	}

	CLCommande::~CLCommande() {}
}
System::String^ NS_Comp_Mappage::CLCommande::SelectCommande(void)
{
	return "SELECT [idCommande], [referenceCommande], [dateLivraison], [dateEmission],[datesPaiements],[moyensPaiement], [PrixTotalHT],[PrixTotalTVA], [dateEnregistrement],  [numeroCLient], [idPersonnel] FROM [POO].[dbo].[Commande]";


}
System::String^ NS_Comp_Mappage::CLCommande::InsertCommande(void)
{
	return "INSERT INTO Commande (referenceCommande,dateLivraison, dateEmission, datesPaiements, moyensPaiement, PrixTotalHT, PrixTotalTVA, dateEnregistrement, numeroClient, idPersonnel) VALUES('" + this->getReferenceCommande() + "', '" + this->getDateLivraison() + "', '" + this->getDateEmission() + "', '" + this->getDatesPaiements() + "', '" + this->getMoyensPaiements() + "', '" + this->getTotalPrixHT() + "', '" + this->getTotalPrixTVA() + "', '" + this->getDateEnregistrement() + "', '" + this->getNumeroClient() + "', '" + this->getIdPersonnel() + "');";
}
System::String^ NS_Comp_Mappage::CLCommande::UpdateCommande(void)
{
	return "UPDATE Commande SET referenceCommande = '" + this->getReferenceCommande() + "', dateLivraison = '" + this->getDateLivraison() + "', dateEmission = '" + this->getDateEmission() + "', datesPaiements = '" + this->getDatesPaiements() + "', moyensPaiement = '" + this->getMoyensPaiements() + "', PrixTotalHT = '" + this->getTotalPrixHT() + "', PrixTotalTVA = '" + this->getTotalPrixTVA() + "', dateEnregistrement = '" + this->getDateEnregistrement() + "', numeroClient = '" + this->getNumeroClient() + "', idPersonnel = '" + this->getIdPersonnel() + "' WHERE(idCommande = " + this->getIdCommande() + ");";

}
System::String^ NS_Comp_Mappage::CLCommande::DeleteCommande(void)
{
	return "DELETE FROM Commande WHERE idCommande = " + this->getIdCommande() + ";";

}
void NS_Comp_Mappage::CLCommande::setReferenceCommande(String^ referenceCommande)
{
	if (referenceCommande != "")
	{
		this->referenceCommande = referenceCommande;
	}
}
void NS_Comp_Mappage::CLCommande::setDateLivraison(int^ dateLivraison)
{
	if (dateLivraison != 0)
	{
		this->dateLivraison = dateLivraison;
	}
}

void NS_Comp_Mappage::CLCommande::setIdCommande(int^ idCommande)
{
	if (idCommande != 0)
	{
		this->idCommande = idCommande;
	}
}
void NS_Comp_Mappage::CLCommande::setNumeroClient(int^ idClient)
{
	if (numeroClient != 0)
	{
		this->numeroClient = numeroClient;
	}
}
void NS_Comp_Mappage::CLCommande::setIdPersonnel(int^ idPersonnel)
{
	if (idPersonnel != 0)
	{
		this->idPersonnel = idPersonnel;
	}
}








void NS_Comp_Mappage::CLCommande::setDateEmission(int^ dateEmission)
{
	if (dateEmission != 0)
	{
		this->dateEmission = dateEmission;
	}
}
void NS_Comp_Mappage::CLCommande::setTotalPrixHT(int^ totalPrixHT)
{
	if (totalPrixHT != 0)
	{
		this->totalPrixHT = totalPrixHT;
	}
}
void NS_Comp_Mappage::CLCommande::setTotalPrixTVA(int^ totalPrixTVA)
{
	if (totalPrixTVA != 0)
	{
		this->totalPrixTVA = totalPrixTVA;
	}
}


void NS_Comp_Mappage::CLCommande::setDateEnregistrement(int^ dateEnregistrement)
{
	if (dateEnregistrement != 0)
	{
		this->dateEnregistrement = dateEnregistrement;
	}
}


void NS_Comp_Mappage::CLCommande::setDatesPaiements(int^ datesPaiements)
{
	if (datesPaiements != 0)
	{
		this->datesPaiements = datesPaiements;
	}
}


void NS_Comp_Mappage::CLCommande::setMoyensPaiements(String^ moyensPaiements)
{
	if (moyensPaiements != "")
	{
		this->moyensPaiements = moyensPaiements;
	}
}



String^ NS_Comp_Mappage::CLCommande::getReferenceCommande(void)
{
	return this->referenceCommande;
}


int^ NS_Comp_Mappage::CLCommande::getDateLivraison(void)
{
	return this->dateLivraison;
}
int^ NS_Comp_Mappage::CLCommande::getDateEmission(void)
{
	return this->dateEmission;
}
int^ NS_Comp_Mappage::CLCommande::getTotalPrixHT(void)
{
	return this->totalPrixHT;
}
int^ NS_Comp_Mappage::CLCommande::getTotalPrixTVA(void)
{
	return this->totalPrixTVA;
}

int^ NS_Comp_Mappage::CLCommande::getDateEnregistrement(void)
{
	return this->dateEnregistrement;
}

int^ NS_Comp_Mappage::CLCommande::getDatesPaiements(void)
{
	return this->datesPaiements;
}
String^ NS_Comp_Mappage::CLCommande::getMoyensPaiements(void)
{
	return this->moyensPaiements;
}
int^ NS_Comp_Mappage::CLCommande::getIdCommande(void)
{
	return this->idCommande;
}
int^ NS_Comp_Mappage::CLCommande::getNumeroClient(void)
{
	return this->numeroClient;
}
int^ NS_Comp_Mappage::CLCommande::getIdPersonnel(void)
{
	return this->idPersonnel;
}