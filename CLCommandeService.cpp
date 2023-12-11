#include "CLCommandeService.h"


NS_Comp_Svc::CLCommandeService::CLCommandeService(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLCommande();
}
System::Data::DataSet^ NS_Comp_Svc::CLCommandeService::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectCommande();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLCommandeService::ajouterUneCommande(String^ referenceCommande, int^ dateLivraison, int^ dateEmission, int^ totalPrixHT, int^ totalPrixTVA, int^ dateEnregistrement, int^ datesPaiements, String^ moyensPaiements, int^ numeroClient, int^ idPersonnel)
{
	System::String^ sql;

	this->oMappTB->setReferenceCommande(referenceCommande);
	this->oMappTB->setDateLivraison(dateLivraison);
	this->oMappTB->setDateEmission(dateEmission);
	this->oMappTB->setTotalPrixHT(totalPrixHT);
	this->oMappTB->setTotalPrixTVA(totalPrixTVA);
	this->oMappTB->setDateEnregistrement(dateEnregistrement);

	this->oMappTB->setDatesPaiements(datesPaiements);
	this->oMappTB->setMoyensPaiements(moyensPaiements);
	this->oMappTB->setNumeroClient(numeroClient);
	this->oMappTB->setIdPersonnel(idPersonnel);

	sql = this->oMappTB->InsertCommande();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLCommandeService::modifierUneCommande(int^ idCommande, String^ referenceCommande, int^ dateLivraison, int^ dateEmission, int^ totalPrixHT, int^ totalPrixTVA, int^ dateEnregistrement, int^ datesPaiements, String^ moyensPaiements, int^ numeroClient, int^ idPersonnel)
{
	this->oMappTB->setIdCommande(idCommande);
	this->oMappTB->setReferenceCommande(referenceCommande);
	this->oMappTB->setDateLivraison(dateLivraison);
	this->oMappTB->setDateEmission(dateEmission);
	this->oMappTB->setTotalPrixHT(totalPrixHT);
	this->oMappTB->setTotalPrixTVA(totalPrixTVA);
	this->oMappTB->setDateEnregistrement(dateEnregistrement);

	this->oMappTB->setDatesPaiements(datesPaiements);
	this->oMappTB->setMoyensPaiements(moyensPaiements);
	this->oMappTB->setNumeroClient(numeroClient);
	this->oMappTB->setIdPersonnel(idPersonnel);


	this->oCad->actionRows(this->oMappTB->UpdateCommande());
}
void NS_Comp_Svc::CLCommandeService::supprimerUneCommande(int^ idCommande)
{
	System::String^ sql;

	this->oMappTB->setIdCommande(idCommande);
	sql = this->oMappTB->DeleteCommande();

	this->oCad->actionRows(sql);



}