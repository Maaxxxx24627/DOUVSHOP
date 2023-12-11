#include "CLArticle.h"




namespace NS_Comp_Mappage {
	CLArticle::CLArticle(void) {
		this->idArticle = 0;
		this->nom = "RIEN";
		this->nature = "RIEN";
		this->couleur = "RIEN";
		this->quantiteArticle = "RIEN";
		this->idCommande = "RIEN";
		this->idCatalogue = "RIEN";
		this->quantiteAchete = "RIEN";


	}

	CLArticle::~CLArticle() {}

}
System::String^ NS_Comp_Mappage::CLArticle::SelectArticle(void)
{

	return "SELECT [idArticle], [nom], [nature], [couleur], [quantiteArticle], [quantiteAchete], [idCommande], [idCatalogue] FROM [POO].[dbo].[Article]";


}
System::String^ NS_Comp_Mappage::CLArticle::InsertArticle(void)
{
	return "INSERT INTO Article (nom, nature, couleur, quantiteArticle,quantiteAchete, idCommande,idCatalogue) VALUES('" + this->getNom() + "', '" + this->getNature() + "', '" + this->getCouleur() + "', '" + this->getQuantiteArticle() + "', '" + this->getQuantiteAchete() + "','" + this->getIdCommande() + "','" + this->getIdCatalogue() + "');";
}
System::String^ NS_Comp_Mappage::CLArticle::UpdateArticle(void)
{
	return "UPDATE Article SET nom = '" + this->getNom() + "', nature = '" + this->getNature() + "', couleur = '" + this->getCouleur() + "', quantiteArticle = '" + this->getQuantiteArticle() + "', quantiteAchete = '" + this->getQuantiteAchete() + "', idCommande = '" + this->getIdCommande() + "', idCatalogue = '" + this->getIdCatalogue() + "' WHERE(idArticle = " + this->getIdArticle() + ");";

}
System::String^ NS_Comp_Mappage::CLArticle::DeleteArticle(void)
{
	return "DELETE FROM Article WHERE idArticle = " + this->getIdArticle() + ";";

}


void NS_Comp_Mappage::CLArticle::setIdArticle(int^ idArticle)
{
	if (idArticle != 0)
	{
		this->idArticle = idArticle;
	}
}
void NS_Comp_Mappage::CLArticle::setNom(String^ nom)
{
	if (nom != "")
	{
		this->nom = nom;
	}
}
void NS_Comp_Mappage::CLArticle::setNature(String^ nature)
{
	if (nature != "")
	{
		this->nature = nature;
	}
}

void NS_Comp_Mappage::CLArticle::setCouleur(String^ couleur)
{
	if (couleur != "")
	{
		this->couleur = couleur;
	}
}
void NS_Comp_Mappage::CLArticle::setQuantiteArticle(String^ quantiteArticle)
{
	if (quantiteArticle != "")
	{
		this->quantiteArticle = quantiteArticle;
	}
}
void NS_Comp_Mappage::CLArticle::setQuantiteAchete(String^ quantiteAchete)
{
	if (quantiteAchete != "")
	{
		this->quantiteAchete = quantiteAchete;
	}
}
void NS_Comp_Mappage::CLArticle::setIdCommande(String^ idCommande)
{
	if (idCommande != "")
	{
		this->idCommande = idCommande;
	}
}
void NS_Comp_Mappage::CLArticle::setIdCatalogue(String^ idCatalogue)
{
	if (idCatalogue != "")
	{
		this->idCatalogue = idCatalogue;
	}
}
int^ NS_Comp_Mappage::CLArticle::getIdArticle(void)
{
	return this->idArticle;
}

String^ NS_Comp_Mappage::CLArticle::getNom(void)
{
	return this->nom;
}
String^ NS_Comp_Mappage::CLArticle::getNature(void)
{
	return this->nature;
}

String^ NS_Comp_Mappage::CLArticle::getCouleur(void)
{
	return this->couleur;
}
String^ NS_Comp_Mappage::CLArticle::getQuantiteArticle(void)
{
	return this->quantiteArticle;
}

String^ NS_Comp_Mappage::CLArticle::getIdCommande(void)
{
	return this->idCommande;
}
String^ NS_Comp_Mappage::CLArticle::getIdCatalogue(void)
{
	return this->idCatalogue;
}
String^ NS_Comp_Mappage::CLArticle::getQuantiteAchete(void)
{
	return this->quantiteAchete;
}