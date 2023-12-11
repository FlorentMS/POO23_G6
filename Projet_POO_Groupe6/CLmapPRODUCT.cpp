#include "pch.h"
#include "CLmapPRODUCT.h"

System::String^ NS_Comp::CLmapPRODUCT::selectProduct(void)
{
    return "SELECT [Projet_POO_G6].[dbo].[Products].[productRef], [productName], \
            [Projet_POO_G6].[dbo].[characteristicsProd].[color], [colorProductID] AS specificID, [stockQuantity],\
            [Projet_POO_G6].[dbo].[Products].[reorderThreshold], [VATrate], [priceET]\
            FROM[Projet_POO_G6].[dbo].[Products]\
            RIGHT JOIN[Projet_POO_G6].[dbo].[characteristicsProd]\
            ON[Projet_POO_G6].[dbo].[Products].[productRef] = [Projet_POO_G6].[dbo].[characteristicsProd].[productRef]\
            WHERE[Projet_POO_G6].[dbo].[Products].[productRef] = " + this->productRef + "; "; //Compléter avec la bonne requete SQL
}

System::String^ NS_Comp::CLmapPRODUCT::selectProducts(void)
{
    return "SELECT [Projet_POO_G6].[dbo].[Products].[productRef], [productName], \
            [Projet_POO_G6].[dbo].[characteristicsProd].[color], [colorProductID] AS specificID, [stockQuantity],\
            [Projet_POO_G6].[dbo].[Products].[reorderThreshold], [VATrate], [priceET]\
            FROM[Projet_POO_G6].[dbo].[Products]\
            RIGHT JOIN[Projet_POO_G6].[dbo].[characteristicsProd]\
            ON[Projet_POO_G6].[dbo].[Products].[productRef] = [Projet_POO_G6].[dbo].[characteristicsProd].[productRef]; ";
}

System::String^ NS_Comp::CLmapPRODUCT::insertProduct(void)
{
    return "DECLARE @productRef INT;\
        \
            IF EXISTS(SELECT 1 FROM Products WHERE productName = '" + this->productName + "')\
            BEGIN\
                SET @productRef = (SELECT productRef FROM Products WHERE productName = '" + this->productName + "');\
            END\
            ELSE\
            BEGIN\
                INSERT INTO Products(productName, priceET, VATrate, reorderThreshold)\
                VALUES('" + this->productName + "', '" + this->PriceET + "', '" + this->VATrate + "', '" + this->reorderThreshold + "');\
                SET @productRef = SCOPE_IDENTITY();\
            END\
                \
            INSERT INTO characteristicsProd(stockQuantity, color, productRef)\
            VALUES('" + this->stockQuantity + "', '" + this->color + "', @productRef); "; //Compléter avec la bonne requete SQL
}

System::String^ NS_Comp::CLmapPRODUCT::deleteProduct(void)
{
    return "DECLARE @pRefToDelete INT = (SELECT productRef FROM characteristicsProd WHERE colorProductID = " + this->colorProductID + ");\
            DELETE FROM characteristicsProd WHERE colorProductID = " + this->colorProductID + ";\
            IF NOT EXISTS(SELECT 1 FROM characteristicsProd WHERE productRef = @pRefToDelete)\
            BEGIN\
            DELETE FROM Products WHERE productRef = @pRefToDelete;\
            END"; //Compléter avec la bonne requete SQL
}

System::String^ NS_Comp::CLmapPRODUCT::updateProduct(void)
{
    return "UPDATE characteristicsProd\
            SET\
            stockQuantity = " + this->stockQuantity + ",\
            color = '" + this->color + "'\
            WHERE\
            colorProductID = " + this->colorProductID + ";\
    \
            UPDATE Products\
            SET\
            productName = '" + this->productName + "',\
            priceET = " + this->PriceET + ",\
            VATrate = " + this->VATrate + ",\
            reorderThreshold = " + this->reorderThreshold + "\
            WHERE\
            productRef = (SELECT productRef FROM characteristicsProd WHERE colorProductID = " + this->colorProductID + "); "; //Compléter avec la bonne requete SQL
}

void NS_Comp::CLmapPRODUCT::setProductRef(int pref)
{
    this->productRef = pref;
}

void NS_Comp::CLmapPRODUCT::setcolorProductID(int cpID)
{
    this->colorProductID = cpID;
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

int NS_Comp::CLmapPRODUCT::getcolorProductID(void) {  return this->colorProductID; }

System::String^ NS_Comp::CLmapPRODUCT::getProductName(void) { return this->productName; }

float NS_Comp::CLmapPRODUCT::getPriceET(void) { return this->PriceET; }

int NS_Comp::CLmapPRODUCT::getStockQuantity(void) { return this->stockQuantity; }

int NS_Comp::CLmapPRODUCT::getReorderThreshold(void) { return this->reorderThreshold; }

float NS_Comp::CLmapPRODUCT::getVATrate(void) { return this->VATrate; }

System::String^ NS_Comp::CLmapPRODUCT::getColor(void) { return this->color; }