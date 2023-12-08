#include "pch.h"
#include "CLemployees.h"

NS_Svc::CLemployees::CLemployees(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oEmp = gcnew NS_Comp::CLmapEMP();
}

System::Data::DataSet^ NS_Svc::CLemployees::displayEmp(System::String^ dataTableName, System::String^ hireDate)
{
	System::String^ sql;

	this->oEmp->setHireDate(hireDate);
	sql = this->oEmp->selectEmployees();

	return this->oCad-> getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Svc::CLemployees::displayAllEmp(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oEmp->selectAllEmployees();

	return this->oCad->getRows(sql, dataTableName);
}

void NS_Svc::CLemployees::addEmp(System::String^ chiefID, System::String^ firstName, System::String^ lastName, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode)
{
	System::String^ sql;

	this->oEmp->setChiefId(chiefID);
	this->oEmp->setFirstName(firstName);
	this->oEmp->setLastName(lastName);
	this->oEmp->setStreetNumber(streetNumber);
	this->oEmp->setStreetName(streetName);
	this->oEmp->setCityName(cityName);
	this->oEmp->setZipCode(ZipCode);

	sql = this->oEmp->insertEmployee();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLemployees::eraseEmp(System::String^ firstName, System::String^ lastName, System::String^ hireDate)
{
	System::String^ sql;

	this->oEmp->setFirstName(firstName);
	this->oEmp->setLastName(lastName);
	this->oEmp->setHireDate(hireDate);

	sql = this->oEmp->deleteEmployee();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLemployees::updateEmp(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode)
{
	System::String^ sql;

	this->oEmp->setId(employeeID);
	this->oEmp->setChiefId(chiefID);
	this->oEmp->setFirstName(firstName);
	this->oEmp->setLastName(lastName);
	this->oEmp->setHireDate(hireDate);
	this->oEmp->setStreetNumber(streetNumber);
	this->oEmp->setStreetName(streetName);
	this->oEmp->setCityName(cityName);
	this->oEmp->setZipCode(ZipCode);

	sql = this->oEmp->updateEmployee();

	this->oCad->actionRows(sql);
}