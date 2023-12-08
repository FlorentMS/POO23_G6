#include "pch.h"
#include "CLmapPRODUCT.h"

System::String^ NS_Comp::CLmapPRODUCT::selectProducts(void)
{
    return "SELECT [Projet_POO_G6].[dbo].[Products].[productRef], [productName], [color], [priceET], [stockQuantity], [reorderThreshold], [VATrate] from [Projet_POO_G6].[dbo].[Products] \
            full join [Projet_POO_G6].[dbo].[characteristicsProd] on ([Projet_POO_G6].[dbo].[Products].[productRef] = [Projet_POO_G6].[dbo].[characteristicsProd].[productRef]);";
}

System::String^ NS_Comp::CLmapPRODUCT::selectProduct(void)
{
    return "SELECT [Projet_POO_G6].[dbo].[Products].[productRef], [productName], [color], [priceET], [stockQuantity], [reorderThreshold], [VATrate] from [Projet_POO_G6].[dbo].[Products] \
            full join [Projet_POO_G6].[dbo].[characteristicsProd] on ([Projet_POO_G6].[dbo].[Products].[productRef] = [Projet_POO_G6].[dbo].[characteristicsProd].[productRef]) \
            WHERE [Projet_POO_G6].[dbo].[Products].[productRef] = '" + productRef + "';";
}

System::String^ NS_Comp::CLmapPRODUCT::insertProduct(void)
{
    return ""; //Compléter avec la bonne requete SQL
}

System::String^ NS_Comp::CLmapPRODUCT::deleteProduct(void)
{
    return ""; //Compléter avec la bonne requete SQL
}

System::String^ NS_Comp::CLmapPRODUCT::updateProduct(void)
{
    return ""; //Compléter avec la bonne requete SQL
}

void NS_Comp::CLmapPRODUCT::setProductRef(int pref)
{
    this->productRef = pref;
}

void NS_Comp::CLmapPRODUCT::setProductName(System::String^ pname)
{
    this->productName = pname;
}

void NS_Comp::CLmapPRODUCT::setPriceET(float pET)
{
    this->PriceET = pET;
}

void NS_Comp::CLmapPRODUCT::setStockQuantity(int sq)
{
    this->stockQuantity = sq;
}

void NS_Comp::CLmapPRODUCT::setReorderThreshold(int rTh)
{
    this->reorderThreshold = rTh;
}

void NS_Comp::CLmapPRODUCT::setVATrate(float VATr)
{
    this->VATrate = VATr;
}

void NS_Comp::CLmapPRODUCT::setColor(System::String^ color)
{
    this->color = color;
}

int NS_Comp::CLmapPRODUCT::getProductRef(void) { return this->productRef; }

System::String^ NS_Comp::CLmapPRODUCT::getProductName(void) { return this->productName; }

float NS_Comp::CLmapPRODUCT::getPriceET(void) { return this->PriceET; }

int NS_Comp::CLmapPRODUCT::getStockQuantity(void) { return this->stockQuantity; }

int NS_Comp::CLmapPRODUCT::getReorderThreshold(void) { return this->reorderThreshold; }

float NS_Comp::CLmapPRODUCT::getVATrate(void) { return this->VATrate; }

System::String^ NS_Comp::CLmapPRODUCT::getColor(void) { return this->color; }