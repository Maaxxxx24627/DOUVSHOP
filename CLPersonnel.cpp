#include "CLPersonnel.h"


namespace NS_Comp_Mappage {
	CLPersonnel::CLPersonnel(void) {
		this->idPersonnel = 0;
		this->nom = "RIEN";
		this->prenom = "RIEN";
		this->adresse = "RIEN";
		this->dateEmbauche = "RIEN";
		this->superieur = "RIEN";
	}

	String^ CLPersonnel::SelectPersonnel(void)
	{
		return "SELECT [idPersonnel], [nom], [prenom], [adresse], [dateEmbauche], [superieur] FROM [POO].[dbo].[Personnel]";

	}
	String^ CLPersonnel::InsertPersonnel(void)
	{
		return "INSERT INTO Personnel (nom, prenom, adresse, dateEmbauche, superieur) VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getAdresse() + "', '" + this->getDateEmbauche() + "', '" + this->getSuperieur() + "');";
	}
	String^ CLPersonnel::UpdatePersonnel(void)
	{
		return "UPDATE Personnel SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "', adresse = '" + this->getAdresse() + "', dateEmbauche = '" + this->getDateEmbauche() + "', superieur = '" + this->getSuperieur() + "' WHERE(idPersonnel = " + this->getIdPersonnel() + ");";
	}
	String^ CLPersonnel::DeletePersonnel(void)
	{

		return "DELETE FROM Personnel WHERE idPersonnel = " + this->getIdPersonnel() + ";";
	}
	void CLPersonnel::setIdPersonnel(int^ idPersonnel)
	{
		if (idPersonnel != 0)
		{
			this->idPersonnel = idPersonnel;
		}
	}
	void CLPersonnel::setPrenom(String^ prenom)
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}
	void CLPersonnel::setNom(String^ nom)
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}
	void CLPersonnel::setAdresse(String^ adresse)
	{
		if (adresse != "")
		{
			this->adresse = adresse;
		}
	}
	void CLPersonnel::setDateEmbauche(String^ dateEmbauche)
	{
		if (dateEmbauche != "")
		{
			this->dateEmbauche = dateEmbauche;
		}
	}
	void CLPersonnel::setSuperieur(String^ superieur)
	{
		if (superieur != "")
		{
			this->superieur = superieur;
		}
	}

	int^ CLPersonnel::getIdPersonnel(void)
	{
		return this->idPersonnel;
	}
	String^ CLPersonnel::getNom(void)
	{
		return this->nom;
	}
	String^ CLPersonnel::getPrenom(void)
	{
		return this->prenom;
	}
	String^ CLPersonnel::getAdresse(void)
	{
		return this->adresse;
	}
	String^ CLPersonnel::getDateEmbauche(void)
	{
		return this->dateEmbauche;
	}
	String^ CLPersonnel::getSuperieur(void)
	{
		return this->superieur;
	}

}
