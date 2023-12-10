#include "pch.h"
#include "CLmapEMP.h"

System::String^ NS_Comp::CLmapEMP::selectEmployees(void)
{
	return "SELECT e.empID, e.lastName, e.firstName, e.hireDate, a.streetNumber, a.StreetName, c.cityName,\
			COALESCE(chief.lastName, '') AS ChieflastName,\
			COALESCE(chief.firstName, '') AS ChieffirstName\
			FROM Employees e\
			INNER JOIN Addresses a ON e.addrID = a.addrID\
			INNER JOIN Cities c ON a.cityID = c.cityID\
			LEFT JOIN Employees chief ON e.chiefID = chief.empID"; //A compléter avec la bonne requête SQL
}

System::String^ NS_Comp::CLmapEMP::selectEmployee(void)
{
	return "SELECT e.empID, e.lastName, e.firstName, e.hireDate, a.streetNumber, a.StreetName, c.cityName,\
			COALESCE(chief.lastName, '') AS ChieflastName,\
			COALESCE(chief.firstName, '') AS ChieffirstName\
			FROM Employees e\
			INNER JOIN Addresses a ON e.addrID = a.addrID\
			INNER JOIN Cities c ON a.cityID = c.cityID\
			LEFT JOIN Employees chief ON e.chiefID = chief.empID\
			WHERE e.lastName = '" + this->lastName + "' AND e.firstName = '" + this->firstName + "' AND e.hireDate = '" + this->hireDate + "'; ";
}

System::String^ NS_Comp::CLmapEMP::insertEmployee(void)
{
	System::String^ query = "DECLARE @cityID INT; "
                            "DECLARE @addrID INT; "
                            "INSERT INTO Cities (cityZipCode, cityName) VALUES ('" + this->ZipCode + "', '" + this->cityName + "'); "
                            "SET @cityID = SCOPE_IDENTITY(); "
                            "INSERT INTO Addresses (streetNumber, StreetName, cityID) VALUES (" + this->streetNumber + ", '" + this->streetName + "', @cityID); "
                            "SET @addrID = SCOPE_IDENTITY(); "
                            "INSERT INTO Employees (lastName, firstName, hireDate, chiefID, addrID) VALUES ('" + this->lastName + "', '" + this->firstName + "', '" + this->hireDate + "', " + this->ChiefID + ", @addrID);";

    return query;
}

System::String^ NS_Comp::CLmapEMP::deleteEmployee(void)
{
	return "DECLARE @IDaddr INT ;\
			SET @IDaddr = (SELECT addrID FROM Employees WHERE lastName = '" + this->lastName + "' AND firstName = '" + this->firstName + "' AND hireDate = '" + this->hireDate + "');\
			DELETE FROM Employees WHERE lastName = '" + this->lastName + "' AND firstName = '" + this->firstName + "' AND hireDate = '" + this->hireDate + "';\
			DELETE FROM Addresses WHERE addrID = @IDaddr;";
}

System::String^ NS_Comp::CLmapEMP::updateEmployee(void)
{
	return "UPDATE [Projet_POO_G6].[dbo].[Employees] SET "
		"[chiefID] = " + this->ChiefID + ", "
		"[firstName] = '" + this->firstName + "', "
		"[lastName] = '" + this->lastName + "', "
		"[hireDate] = '" + this->hireDate + "' "
		"WHERE [empID] = " + this->Id + "; "
		"UPDATE [Projet_POO_G6].[dbo].[Addresses] SET "
		"[streetNumber] = " + this->streetNumber + ", "
		"[streetName] = '" + this->streetName + "' "
		"WHERE [addrID] = (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [empID] = " + this->Id + "); "
		"UPDATE [Projet_POO_G6].[dbo].[Cities] SET "
		"[cityName] = '" + this->cityName + "', "
		"[cityZipCode] = '" + this->ZipCode + "' "
		"WHERE [cityID] = (SELECT [cityID] FROM [Projet_POO_G6].[dbo].[Addresses] WHERE [addrID] = (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [empID] = " + this->Id + "));";
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

void NS_Comp::CLmapEMP::setHireDate(System::String^ hireDate)
{
	this->hireDate = hireDate;
}

void NS_Comp::CLmapEMP::setChiefId(int ChiefId)
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

int NS_Comp::CLmapEMP::getChiefId(void)
{
	return this->ChiefID;
}
