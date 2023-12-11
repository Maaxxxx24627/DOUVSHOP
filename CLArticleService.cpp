#include "CLArticleService.h"



NS_Comp_Svc::CLArticleService::CLArticleService(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLArticle();
}


System::Data::DataSet^ NS_Comp_Svc::CLArticleService::selectionnerToutsLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLArticleService::ajouterUnArticle(String^ nom, String^ nature, String^ couleur, String^ quantiteArticle, String^ quantiteAchete, String^ idCommande, String^ idCatalogue)
{
	System::String^ sql;


	this->oMappTB->setNom(nom);
	this->oMappTB->setNature(nature);
	this->oMappTB->setCouleur(couleur);
	this->oMappTB->setQuantiteArticle(quantiteArticle);
	this->oMappTB->setQuantiteAchete(quantiteAchete);
	this->oMappTB->setIdCommande(idCommande);
	this->oMappTB->setIdCatalogue(idCatalogue);

	sql = this->oMappTB->InsertArticle();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLArticleService::modifierUnArticle(int^ idArticle, String^ nom, String^ nature, String^ couleur, String^ quantiteArticle, String^ quantiteAchete, String^ idCommande, String^ idCatalogue)
{
	this->oMappTB->setIdArticle(idArticle);
	this->oMappTB->setNom(nom);
	this->oMappTB->setNature(nature);
	this->oMappTB->setCouleur(couleur);
	this->oMappTB->setQuantiteArticle(quantiteAchete);
	this->oMappTB->setQuantiteAchete(quantiteAchete);
	this->oMappTB->setIdCommande(idCommande);
	this->oMappTB->setIdCatalogue(idCatalogue);

	this->oCad->actionRows(this->oMappTB->UpdateArticle());
}
void NS_Comp_Svc::CLArticleService::supprimerUnArticle(int^ idArticle)
{
	System::String^ sql;

	this->oMappTB->setIdArticle(idArticle);
	sql = this->oMappTB->DeleteArticle();

	this->oCad->actionRows(sql);



}