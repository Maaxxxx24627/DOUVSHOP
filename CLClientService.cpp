#include "CLClientService.h"


NS_Comp_Svc::CLClientService::CLClientService(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLCLient();
}

System::Data::DataSet^ NS_Comp_Svc::CLClientService::selectionnerToutsLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectCLient();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLClientService::ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ adresseFacturation, System::String^ adresseLivraison, System::String^ dateNaissance)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresseFacturation(adresseFacturation);
	this->oMappTB->setAdresseLivraison(adresseLivraison);
	this->oMappTB->setDateNaissance(dateNaissance);
	sql = this->oMappTB->InsertCLient();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLClientService::modifierUnClient(int^ numeroClient, System::String^ nom, System::String^ prenom, System::String^ adresseFacturation, System::String^ adresseLivraison, System::String^ dateNaissance)
{
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setNumeroClient(numeroClient);
	this->oMappTB->setAdresseFacturation(adresseFacturation);
	this->oMappTB->setAdresseLivraison(adresseLivraison);
	this->oMappTB->setDateNaissance(dateNaissance);

	this->oCad->actionRows(this->oMappTB->UpdateCLient());
}

void NS_Comp_Svc::CLClientService::supprimerUnClient(int numeroClient)
{
	System::String^ sql;

	this->oMappTB->setNumeroClient(numeroClient);
	sql = this->oMappTB->DeleteCLient();

	this->oCad->actionRows(sql);
}