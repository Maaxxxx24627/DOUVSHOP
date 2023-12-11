#include "CLPersonnelService.h"


NS_Comp_Svc::CLPersonnelService::CLPersonnelService(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLPersonnel();
}
System::Data::DataSet^ NS_Comp_Svc::CLPersonnelService::selectionnerToutsLesPersonnels(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLPersonnelService::ajouterUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, System::String^ superieur)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(dateEmbauche);
	this->oMappTB->setSuperieur(superieur);


	sql = this->oMappTB->InsertPersonnel();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLPersonnelService::modifierUnPersonnel(int^ idPersonnel, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ dateEmbauche, System::String^ superieur)
{
	this->oMappTB->setIdPersonnel(idPersonnel);

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(dateEmbauche);
	this->oMappTB->setSuperieur(superieur);
	this->oCad->actionRows(this->oMappTB->UpdatePersonnel());
}
void NS_Comp_Svc::CLPersonnelService::supprimerUnPersonnel(int^ idPersonnel)
{
	System::String^ sql;

	this->oMappTB->setIdPersonnel(idPersonnel);
	sql = this->oMappTB->DeletePersonnel();

	this->oCad->actionRows(sql);



}