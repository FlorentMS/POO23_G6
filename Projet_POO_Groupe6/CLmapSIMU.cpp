#include "pch.h"
#include "CLmapSIMU.h"

System::String^ NS_Comp::CLmapSIMU::selectTotalPriceATI(void)
{
    return "Select SUM(p.priceET*cp.stockQuantity)*"+ this->UnknowMarkdown +"*"+ this->TradDiscount +"*"+ this->TVArate +"*"+ this->Margin +" as stock_market_value         \
        From Projet_POO_G6.dbo.Products as p inner join Projet_POO_G6.dbo.characteristicsProd  as cp                                                                        \
        on(p.productRef = cp.productRef); ";
}

void NS_Comp::CLmapSIMU::setTVArate(float TVA)
{
    this->TVArate = TVA;
}

void NS_Comp::CLmapSIMU::setMargin(float Margin)
{
    this->Margin = Margin;
}

void NS_Comp::CLmapSIMU::setUnknowMarkdown(float UM)
{
    this->UnknowMarkdown = UM;
}

void NS_Comp::CLmapSIMU::setTradDiscount(float TD)
{
    this->TradDiscount = TD;
}

float NS_Comp::CLmapSIMU::getTVArate()
{
    return this->TVArate;
}

float NS_Comp::CLmapSIMU::getMargin()
{
    return this->Margin;
}

float NS_Comp::CLmapSIMU::getUnknowMarkdown()
{
    return this->UnknowMarkdown;
}

float NS_Comp::CLmapSIMU::getTradDiscount()
{
    return this->TradDiscount;
}
