#include "CLCLient.h"




namespace NS_Comp_Mappage {
	CLCLient::CLCLient(void) {
		this->numeroClient = 0;
		this->nom = "RIEN";
		this->prenom = "RIEN";
		this->adresseFacturation = "RIEN";
		this->adresseLivraison = "RIEN";
		this->dateNaissance = "RIEN";


	}




}
System::String^ NS_Comp_Mappage::CLCLient::SelectCLient(void)
{

	return "SELECT [numeroClient], [nom], [prenom], [adresseFacturation], [adresseLivraison], [dateNaissance] FROM [POO].[dbo].[CLient]";

}
System::String^ NS_Comp_Mappage::CLCLient::InsertCLient(void)
{

	return "INSERT INTO CLient (nom, prenom, adresseFacturation, adresseLivraison, dateNaissance) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getAdresseFacturation() + "', '" + this->getAdresseLivraison() + "', '" + this->getDateNaissance() + "');";
}
System::String^ NS_Comp_Mappage::CLCLient::UpdateCLient(void)
{

	return "UPDATE CLient SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "', adresseFacturation = '" + this->getAdresseFacturation() + "', adresseLivraison = '" + this->getAdresseLivraison() + "', dateNaissance = '" + this->getDateNaissance() + "', datePremierAchat = '" + "' WHERE(numeroClient = " + this->getNumeroClient() + ");";
}
System::String^ NS_Comp_Mappage::CLCLient::DeleteCLient(void)
{

	return "DELETE FROM CLient WHERE numeroClient = " + this->getNumeroClient() + ";";

}

void NS_Comp_Mappage::CLCLient::setNumeroClient(int^ numeroClient)
{
	if (numeroClient != 0)
	{
		this->numeroClient = numeroClient;
	}
}

void NS_Comp_Mappage::CLCLient::setPrenom(String^ prenom)
{
	if (prenom != "")
	{
		this->prenom = prenom;
	}
}

void NS_Comp_Mappage::CLCLient::setNom(String^ nom)
{
	if (nom != "")
	{
		this->nom = nom;
	}
}

void NS_Comp_Mappage::CLCLient::setAdresseFacturation(String^ adresseFacturation)
{
	if (adresseFacturation != "")
	{
		this->adresseFacturation = adresseFacturation;
	}
}

void NS_Comp_Mappage::CLCLient::setAdresseLivraison(String^ adresseLivraison)
{
	if (adresseLivraison != "")
	{
		this->adresseLivraison = adresseLivraison;
	}
}

void NS_Comp_Mappage::CLCLient::setDateNaissance(String^ dateNaissance)
{
	if (dateNaissance != "")
	{
		this->dateNaissance = dateNaissance;
	}
}



int^ NS_Comp_Mappage::CLCLient::getNumeroClient(void) { return this->numeroClient; }
String^ NS_Comp_Mappage::CLCLient::getNom(void) { return this->nom; }
String^ NS_Comp_Mappage::CLCLient::getPrenom(void) { return this->prenom; }
String^ NS_Comp_Mappage::CLCLient::getAdresseFacturation(void) { return this->adresseFacturation; }
String^ NS_Comp_Mappage::CLCLient::getAdresseLivraison(void) { return this->adresseLivraison; }
String^ NS_Comp_Mappage::CLCLient::getDateNaissance(void) { return this->dateNaissance; }
