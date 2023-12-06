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

void NS_Svc::CLcustomers::addCustomers(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^)
{
	throw gcnew System::NotImplementedException();
}

void NS_Svc::CLcustomers::eraseCustomers()
{
	throw gcnew System::NotImplementedException();
}

void NS_Svc::CLcustomers::updateCustomers()
{
	throw gcnew System::NotImplementedException();
}
