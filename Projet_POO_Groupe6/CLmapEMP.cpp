#include "pch.h"
#include "CLmapEMP.h"

System::String^ NS_Comp::CLmapEMP::selectEmployees(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

System::String^ NS_Comp::CLmapEMP::insertEmployee(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

System::String^ NS_Comp::CLmapEMP::deleteEmployee(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

System::String^ NS_Comp::CLmapEMP::updateEmployee(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

void NS_Comp::CLmapEMP::setId(int id)
{
	this->Id = id;
}

void NS_Comp::CLmapEMP::setLastName(System::String^ lastName)
{
	this->lastName = lastName;
}

void NS_Comp::CLmapEMP::setFirstName(System::String^ firstName)
{
	this->firstName = firstName;
}

void NS_Comp::CLmapEMP::setStreetNumber(int streetNumber)
{
	this->streetNumber = streetNumber;
}

void NS_Comp::CLmapEMP::setStreetName(System::String^ streetName)
{
	this ->streetName = streetName;
}

void NS_Comp::CLmapEMP::setZipCode(System::String^ ZipCode)
{
	this->ZipCode = ZipCode;
}

void NS_Comp::CLmapEMP::setCityName(System::String^ CityName)
{
	this->cityName = CityName;
}

void NS_Comp::CLmapEMP::setHireDate(System::String^ HireDate)
{
	this->hireDate = HireDate;
}

void NS_Comp::CLmapEMP::setChiefId(System::String^ ChiefId)
{
	this->ChiefID = ChiefId;
}

int NS_Comp::CLmapEMP::getId(void)
{
	return this-> Id;
}

System::String^ NS_Comp::CLmapEMP::getLastName(void)
{
	return this-> lastName;
}

System::String^ NS_Comp::CLmapEMP::getFirstName(void)
{
	return this-> firstName;
}

int NS_Comp::CLmapEMP::getStreetNumber(void)
{
	return this-> streetNumber;
}

System::String^ NS_Comp::CLmapEMP::getStreetName(void)
{
	return this-> streetName;
}

System::String^ NS_Comp::CLmapEMP::getZipCode(void)
{
	return this-> ZipCode;
}

System::String^ NS_Comp::CLmapEMP::getCityName(void)
{
	return this-> cityName;
}

System::String^ NS_Comp::CLmapEMP::getHireDate(void)
{
	return this->hireDate;
}

System::String^ NS_Comp::CLmapEMP::getChiefId(void)
{
	return this->ChiefID;
}
