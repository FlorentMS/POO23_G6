#include "pch.h"
#include "CLemployees.h"

NS_svc::CLemployees::CLemployees(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oEmp = gcnew NS_Comp::CLmapEMP();
}

System::Data::DataSet^ NS_svc::CLemployees::displayEmployees(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oEmp->selectEmployees();

	return this->oCad-> getRows(sql, dataTableName);
}

void NS_svc::CLemployees::addEmployee(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode)
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

	sql = this->oEmp->insertEmployee();

	this->oCad->actionRows(sql);
}

void NS_svc::CLemployees::eraseEmployee(System::String^ firstName, System::String^ lastName, System::String^ hireDate)
{
	System::String^ sql;

	this->oEmp->setFirstName(firstName);
	this->oEmp->setLastName(lastName);
	this->oEmp->setHireDate(hireDate);

	sql = this->oEmp->deleteEmployee();

	this->oCad->actionRows(sql);
}

void NS_svc::CLemployees::updateEmployee(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode)
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