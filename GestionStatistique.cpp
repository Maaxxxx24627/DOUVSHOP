#include "GestionStatistique.h"

NS_Comp_Svc::GestionStatistique::GestionStatistique()
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::selectionnerPanierMoyen(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectPanierMoyen(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::selectionnerChiffreAffaire(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectChiffreAffaire(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectStockAReapprovisionner(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectStockAReapprovisionner(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectMontantTotalClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectMontantTotalClient(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectTop10ArticlePlusVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectTop10ArticlePlusVendu(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectTop10ArticleLeMoinsVendu(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectTop10ArticleLeMoinsVendu(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectValeurAchatStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectValeurAchatStock(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::GestionStatistique::SelectValeurCommercialeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectValeurCommercialeStock(); // L'exception se produit probablement ici
	return this->oCad->getRows(sql, dataTableName);
}