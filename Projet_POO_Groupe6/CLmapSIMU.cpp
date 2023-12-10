#include "pch.h"
#include "CLmapSIMU.h"
#include <string>

System::String^ NS_Comp::CLmapSIMU::selectTotalPriceATI(void)
{
    System::String^ sqlQuery = "Select ( SUM(p.priceET*cp.stockQuantity)";
    
    System::String^ s1 = System::Convert::ToString(this->UnknowMarkdown);
    sqlQuery += "*(" + s1->Substring(0, s1->IndexOf(",")) + "." + s1->Substring(s1->IndexOf(",")+1,  (s1->Length-1) - s1->IndexOf(","));
    
    s1 = System::Convert::ToString(this->TradDiscount);
    sqlQuery += ")*(" + s1->Substring(0, s1->IndexOf(",")) + "." + s1->Substring(s1->IndexOf(",")+1, (s1->Length - 1) - s1->IndexOf(","));

    s1 = System::Convert::ToString(this->TVArate);
    sqlQuery += ")*(" + s1->Substring(0, s1->IndexOf(",")) + "." + s1->Substring(s1->IndexOf(",")+1, (s1->Length - 1) - s1->IndexOf(","));

    s1 = System::Convert::ToString(this->Margin); 
    sqlQuery += ")*(" + s1->Substring(0, s1->IndexOf(",")) + "." + s1->Substring(s1->IndexOf(",")+1, (s1->Length - 1) - s1->IndexOf(","));

    sqlQuery += ") ) as stock_market_value                                                                                                                           \
                  From Projet_POO_G6.dbo.Products as p inner join Projet_POO_G6.dbo.characteristicsProd  as cp                                                                        \
                    on(p.productRef = cp.productRef); ";
    System::Console::WriteLine(sqlQuery);
    return sqlQuery;
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
