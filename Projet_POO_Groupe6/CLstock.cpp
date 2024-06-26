#include "pch.h"
#include "CLstock.h"

NS_Svc::CLstock::CLstock(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oProd = gcnew NS_Comp::CLmapPRODUCT();
}

System::Data::DataSet^ NS_Svc::CLstock::displayProducts(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oProd->selectProducts();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Svc::CLstock::displayProduct(System::String^ dataTableName, int ID)
{
	System::String^ sql;

	this->oProd->setProductRef(ID);

	sql = this->oProd->selectProduct();

	return this->oCad->getRows(sql, dataTableName);
}

void NS_Svc::CLstock::addProduct(System::String^ name, System::String^ color, float priceET, int reorderThreshold, float VATrate, int quantity)
{
	System::String^ sql;

	this->oProd->setProductName(name);
	this->oProd->setColor(color);
	this->oProd->setPriceET(priceET);
	this->oProd->setReorderThreshold(reorderThreshold);
	this->oProd->setVATrate(VATrate);
	this->oProd->setStockQuantity(quantity);

	sql = this->oProd->insertProduct();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLstock::eraseProduct(int ID)
{
	System::String^ sql;

	this->oProd->setcolorProductID(ID);

	sql = this->oProd->deleteProduct();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLstock::changeProduct(int ID, System::String^ name, System::String^ color, float priceET, int reorderThreshold, float VATrate, int quantity)
{
	System::String^ sql;

	this->oProd->setcolorProductID(ID);
	this->oProd->setProductName(name);
	this->oProd->setColor(color);
	this->oProd->setPriceET(priceET);
	this->oProd->setReorderThreshold(reorderThreshold);
	this->oProd->setVATrate(VATrate);
	this->oProd->setStockQuantity(quantity);

	sql = this->oProd->updateProduct();

	this->oCad->actionRows(sql);
}