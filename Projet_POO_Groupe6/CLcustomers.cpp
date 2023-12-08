#include "pch.h"
#include "CLcustomers.h"

NS_Svc::CLcustomers::CLcustomers(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oCUST = gcnew NS_Comp::CLmapCUST();
}

System::Data::DataSet^ NS_Svc::CLcustomers::displayCustomers(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCUST->selectCustomers();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Svc::CLcustomers::addCustomers(System::String^ lastname, System::String^ firstname, System::String^ birthdate, int SnuBil, int SnuDel, System::String^ SnaBil, System::String^ SnaDel, System::String^ CnBil, System::String^ CnDel, System::String^ ZcBil, System::String^ ZcDel)
{
	System::String^ sql;

	this->oCUST->setLastName(lastname);
	this->oCUST->setFirstName(firstname);
	this->oCUST->setBirthDate(birthdate);
	this->oCUST->setstreetNumberBil(SnuBil);
	this->oCUST->setstreetNumberDel(SnuDel);
	this->oCUST->setStreetNameBil(SnaBil);
	this->oCUST->setStreetNameDel(SnaDel);
	this->oCUST->setCityNameBil(CnBil);
	this->oCUST->setCityNameDel(CnDel);
	this->oCUST->setZipCodeBil(ZcBil);
	this->oCUST->setZipCodeDel(ZcDel);
	sql = this->oCUST->insertCustomer();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLcustomers::eraseCustomers(System::String^ lastname, System::String^ firstname, System::String^ birthdate)
{
	System::String^ sql;

	this->oCUST->setLastName(lastname);
	this->oCUST->setFirstName(firstname);
	//this->oCUST->setBirthDate(birthdate);
	sql = this->oCUST->deleteCustomer();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLcustomers::updateCustomers(System::String^ lastname, System::String^ firstname, System::String^ birthdate, int SnuBil, int SnuDel, System::String^ SnaBil, System::String^ SnaDel, System::String^ CnBil, System::String^ CnDel, System::String^ ZcBil, System::String^ ZcDel)
{
	throw gcnew System::NotImplementedException();
}
