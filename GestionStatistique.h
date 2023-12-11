#pragma once
#include "CLmapTB.h"
#include "CAD.h"
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Svc
{
    ref class GestionStatistique {
    private:
        NS_Comp_Data::CAD^ oCad;
        NS_Comp_Mappage::CLmapTB^ oMappTB;


    public:
        GestionStatistique();

        System::Data::DataSet^ selectionnerPanierMoyen(System::String^ dataTableName);
        System::Data::DataSet^ selectionnerChiffreAffaire(System::String^ dataTableName);
        System::Data::DataSet^ SelectStockAReapprovisionner(System::String^ dataTableName);
        System::Data::DataSet^ SelectMontantTotalClient(System::String^ dataTableName);
        System::Data::DataSet^ SelectTop10ArticlePlusVendu(System::String^ dataTableName);
        System::Data::DataSet^ SelectTop10ArticleLeMoinsVendu(System::String^ dataTableName);
        System::Data::DataSet^ SelectValeurAchatStock(System::String^ dataTableName);
        System::Data::DataSet^ SelectValeurCommercialeStock(System::String^ dataTableName);
    };
}