#include "CLFacturationService.h"



NS_Comp_Svc::CLFacturationService::CLFacturationService(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLFacturation();
}
System::Data::DataSet^ NS_Comp_Svc::CLFacturationService::selectionnerToutesLesFactures(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectFacturation();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLFacturationService::ajouterUneFacture(String^ nomSociete, String^ adresseSociete, String^ numSociete, String^ logoSociete, String^ nomClient, String^ adresseFacturation, String^ adresseLivraison)
{
	System::String^ sql;


	this->oMappTB->setNomSociete(nomSociete);
	this->oMappTB->setAdresseSociete(adresseSociete);
	this->oMappTB->setNumSociete(numSociete);
	this->oMappTB->setLogoSociete(logoSociete);
	this->oMappTB->setNomClient(nomClient);
	this->oMappTB->setAdresseFacturation(adresseFacturation);
	this->oMappTB->setAdresseLivraison(adresseLivraison);

	sql = this->oMappTB->InsertFacturation();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLFacturationService::modifierUneFacture(int idFacturation, String^ nomSociete, String^ adresseSociete, String^ numSociete, String^ logoSociete, String^ nomClient, String^ adresseFacturation, String^ adresseLivraison)
{
	this->oMappTB->setIdFacturation(idFacturation);
	this->oMappTB->setNomSociete(nomSociete);
	this->oMappTB->setAdresseSociete(adresseSociete);
	this->oMappTB->setNumSociete(numSociete);
	this->oMappTB->setLogoSociete(logoSociete);
	this->oMappTB->setNomClient(nomClient);
	this->oMappTB->setAdresseFacturation(adresseFacturation);
	this->oMappTB->setAdresseLivraison(adresseLivraison);



	this->oCad->actionRows(this->oMappTB->UpdateFacturation());
}
void NS_Comp_Svc::CLFacturationService::supprimerUneFacture(int^ idFacture)
{
	System::String^ sql;

	this->oMappTB->setIdFacturation(idFacture);
	sql = this->oMappTB->DeleteFacturation();

	this->oCad->actionRows(sql);
}