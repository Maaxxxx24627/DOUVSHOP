#include "CLFacturation.h"


namespace NS_Comp_Mappage {
	CLFacturation::CLFacturation(void) {

		this->idFacturation = 0;
		this->nomSociete = "RIEN";
		this->adresseSociete = "RIEN";
		this->numSociete = "RIEN";
		this->logoSociete = "RIEN";
		this->nomClient = "RIEN";
		this->adresseFacturation = "RIEN";
		this->adresseLivraison = "RIEN";


	}

	CLFacturation::~CLFacturation() {}

}
System::String^ NS_Comp_Mappage::CLFacturation::SelectFacturation(void)
{
	return "SELECT [idFacturation], [nomSociete], [adresseSociete], [numSociete],[logoSociete],[nomClient], [adresseFacturation], [adresseLivraison] FROM [POO].[dbo].[Facturation]";

}
System::String^ NS_Comp_Mappage::CLFacturation::InsertFacturation(void)
{
	return "INSERT INTO Facturation (nomSociete, adresseSociete, numSociete, logoSociete, nomClient, adresseFacturation, adresseLivraison) VALUES('" + this->getNomSociete() + "', '" + this->getAdresseSociete() + "', '" + this->getNumSociete() + "', '" + this->getLogoSociete() + "', '" + this->getNomClient() + "', '" + this->getAdresseFacturation() + "', '" + this->getAdresseLivraison() + "');";

}
System::String^ NS_Comp_Mappage::CLFacturation::UpdateFacturation(void)
{
	return "UPDATE Facturation SET nomSociete = '" + this->getNomSociete() + "', adresseSociete = '" + this->getAdresseSociete() + "', numSociete = '" + this->getNumSociete() + "', logoSociete = '" + this->getLogoSociete() + "', nomClient = '" + this->getNomClient() + "', adresseFacturation = '" + this->getAdresseFacturation() + "', adresseLivraison = '" + this->getAdresseLivraison() + "' WHERE(idFacturation = " + this->getIdFacturation() + ");";

}
System::String^ NS_Comp_Mappage::CLFacturation::DeleteFacturation(void)
{
	return "DELETE FROM Facturation WHERE idFacturation = " + this->getIdFacturation() + ";";

}

void NS_Comp_Mappage::CLFacturation::setIdFacturation(int^ idFacturation)
{
	if (idFacturation != 0)
	{
		this->idFacturation = idFacturation;
	}
}

void NS_Comp_Mappage::CLFacturation::setNomSociete(String^ nomSociete)
{
	if (nomSociete != "")
	{
		this->nomSociete = nomSociete;
	}
}
void NS_Comp_Mappage::CLFacturation::setAdresseSociete(String^ adresseSociete)
{
	if (adresseSociete != "")
	{
		this->adresseSociete = adresseSociete;
	}
}
void NS_Comp_Mappage::CLFacturation::setNumSociete(String^ numSociete)
{
	if (numSociete != "")
	{
		this->numSociete = numSociete;
	}
}
void NS_Comp_Mappage::CLFacturation::setLogoSociete(String^ logoSociete)
{
	if (logoSociete != "")
	{
		this->logoSociete = logoSociete;
	}
}
void NS_Comp_Mappage::CLFacturation::setNomClient(String^ nomClient)
{
	if (nomClient != "")
	{
		this->nomClient = nomClient;
	}
}
void NS_Comp_Mappage::CLFacturation::setAdresseFacturation(String^ adresseFacturation)
{
	if (adresseFacturation != "")
	{
		this->adresseFacturation = adresseFacturation;
	}
}
void NS_Comp_Mappage::CLFacturation::setAdresseLivraison(String^ adresseLivraison)
{
	if (adresseLivraison != "")
	{
		this->adresseLivraison = adresseLivraison;
	}
}


int^ NS_Comp_Mappage::CLFacturation::getIdFacturation(void)
{
	return this->idFacturation;
}
String^ NS_Comp_Mappage::CLFacturation::getNomSociete(void)
{
	return this->nomSociete;
}
String^ NS_Comp_Mappage::CLFacturation::getAdresseSociete(void)
{
	return this->adresseSociete;
}
String^ NS_Comp_Mappage::CLFacturation::getNumSociete(void)
{
	return this->numSociete;
}
String^ NS_Comp_Mappage::CLFacturation::getLogoSociete(void)
{
	return this->logoSociete;
}
String^ NS_Comp_Mappage::CLFacturation::getNomClient(void)
{
	return this->nomClient;
}
String^ NS_Comp_Mappage::CLFacturation::getAdresseFacturation(void)
{
	return this->adresseFacturation;
}
String^ NS_Comp_Mappage::CLFacturation::getAdresseLivraison(void)
{
	return this->adresseLivraison;
}