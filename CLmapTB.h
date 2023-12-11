#pragma once

namespace NS_Comp_Mappage {
    ref class CLmapTB {
    private:
        System::String^ sSql;

    public:
        System::String^ SelectPanierMoyen();
        System::String^ SelectChiffreAffaire();
        System::String^ SelectStockAReapprovisionner();
        System::String^ SelectMontantTotalClient();
        System::String^ SelectTop10ArticlePlusVendu();
        System::String^ SelectTop10ArticleLeMoinsVendu();
        System::String^ SelectValeurAchatStock();
        System::String^ SelectValeurCommercialeStock();
    };
}