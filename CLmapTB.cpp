#include "CLmapTB.h"
#include <iostream>
using namespace std;

namespace NS_Comp_Mappage {

    System::String^ NS_Comp_Mappage::CLmapTB::SelectPanierMoyen() {
        return "SELECT AVG(PrixTotalHT + PrixTotalTVA) AS MoyennePrixCommande FROM [POO].[dbo].[Commande]";
    }
    System::String^ NS_Comp_Mappage::CLmapTB::SelectChiffreAffaire() {
        return "SELECT SUM(PrixTotalHT + PrixTotalTVA) AS totalTTC "
            "FROM [POO].[dbo].[Commande] "
            "WHERE datesPaiements BETWEEN '01102023' AND '31102023'";
    }

    System::String^ NS_Comp_Mappage::CLmapTB::SelectStockAReapprovisionner() {
        return "SELECT quantiteArticle, seuilReappro "
            "FROM [POO].[dbo].[Article] "
            "INNER JOIN [Catalogue] ON Catalogue.idCatalogue = Article.idCatalogue "
            "WHERE quantiteArticle < seuilReappro";
    }

    System::String^ NS_Comp_Mappage::CLmapTB::SelectMontantTotalClient() {
        return "SELECT SUM(PrixTotalHT + PrixTotalTVA) AS totalTTC "
            "FROM [POO].[dbo].[Commande] "
            "INNER JOIN Client ON Client.numeroClient = Commande.numeroClient "
            "WHERE Client.numeroClient = 1";
    }
    System::String^ NS_Comp_Mappage::CLmapTB::SelectTop10ArticlePlusVendu() {
        return "SELECT TOP(10) nom "
            "FROM [POO].[dbo].[Article] "
            "ORDER BY quantiteAchete DESC, nom";  // Tri en ordre croissant pour obtenir les moins vendus en premier
    }
    System::String^ NS_Comp_Mappage::CLmapTB::SelectTop10ArticleLeMoinsVendu() {
		return "SELECT TOP(10) quantiteAchete, nom "
			"FROM [POO].[dbo].[Article] "
			"ORDER BY quantiteAchete ASC";
    }
    System::String^ NS_Comp_Mappage::CLmapTB::SelectValeurAchatStock() {
        return "SELECT SUM((prixHT * (1 + tauxTVA / 100)) * quantiteStock) "
            "FROM [POO].[dbo].[Catalogue]";
    }
    System::String^ NS_Comp_Mappage::CLmapTB::SelectValeurCommercialeStock() {
        return "SELECT SUM(prixHT * quantiteStock) "
            "FROM [POO].[dbo].[Catalogue]";
    }

}