#include "pch.h"
#include "CLmapEMP.h"

System::String^ NS_Comp::CLmapEMP::selectAllEmployees(void)
{
	return "SELECT [empID], [chiefID], [lastName], [firstName], [hireDate], [streetNumber], [StreetName], [cityName], [cityZipCode] FROM [Projet_POO_G6].[dbo].[Employees] LEFT JOIN [Projet_POO_G6].[dbo].[Addresses] ON [Projet_POO_G6].[dbo].[Employees].[addrID] = [Projet_POO_G6].[dbo].[Addresses].[addrID] LEFT JOIN [Projet_POO_G6].[dbo].[Cities] ON [Projet_POO_G6].[dbo].[Addresses].[cityID] = [Projet_POO_G6].[dbo].[Cities].[cityID]";
}

System::String^ NS_Comp::CLmapEMP::selectEmployees(void)
{
    return "SELECT [empID], [chiefID], [lastName], [firstName], [hireDate], [streetNumber], [StreetName], [cityName], [cityZipCode] \
FROM [Projet_POO_G6].[dbo].[Employees] \
LEFT JOIN [Projet_POO_G6].[dbo].[Addresses] ON [Projet_POO_G6].[dbo].[Employees].[addrID] = [Projet_POO_G6].[dbo].[Addresses].[addrID] \
LEFT JOIN [Projet_POO_G6].[dbo].[Cities] ON [Projet_POO_G6].[dbo].[Addresses].[cityID] = [Projet_POO_G6].[dbo].[Cities].[cityID] \
WHERE [lastName] = '" + lastName + "' OR [firstName] = '" + firstName + "' OR [hireDate] = '" + hireDate + "'";
}

System::String^ NS_Comp::CLmapEMP::insertEmployee(void)
{
	System::String^ query = "DECLARE @cityID INT; "
                            "DECLARE @addrID INT; "
                            "SET @cityID = (Select cityID From cities WHERE cityZipCode= '" + ZipCode + "' and cityName='" + cityName + "'); "
                            "INSERT INTO Addresses (streetNumber, StreetName, cityID) VALUES (" + streetNumber + ", '" + streetName + "', @cityID); "
                            "SET @addrID = SCOPE_IDENTITY(); "
                            "INSERT INTO Employees (lastName, firstName, hireDate, chiefID, addrID) VALUES ('" + lastName + "', '" + firstName + "', GETDATE(), " + ChiefID + ", @addrID);";

    return query;
}

System::String^ NS_Comp::CLmapEMP::deleteEmployee(void)
{
	return "DECLARE @AddrID INT; \
			set @AddrID = ( \
			SELECT e.addrID as addrID \
			FROM Employees e \
			JOIN Addresses a ON e.addrID = a.addrID \
			WHERE lastName = '" + lastName + "' AND firstName = '" + firstName + "' AND hireDate = '" + hireDate + "'); \
			DELETE FROM Employees WHERE lastName = '" + lastName + "' AND firstName = '" + firstName + "' AND hireDate = '" + hireDate + "'; \
			DELETE FROM Addresses WHERE addrID = @AddrID;";
}

System::String^ NS_Comp::CLmapEMP::updateEmployee(void)
{
	System::String^ query = "DECLARE @cityID INT; "
							"DECLARE @addrID INT; "
							"SET @cityID = (SELECT cityID FROM Cities WHERE cityZipCode = '" + ZipCode + "' AND cityName = '" + cityName + "'); "
							"UPDATE Addresses SET "
							"    streetNumber = " + streetNumber + ", "
							"    StreetName = '" + streetName + "', "
							"    cityID = @cityID "
							"WHERE addrID = (SELECT addrID FROM Employees WHERE empID = " + Id + "); "
							"UPDATE Employees SET "
							"    lastName = '" + lastName + "', "
							"    firstName = '" + firstName + "', "
							"    hireDate = GETDATE(), "
							"    chiefID = " + ChiefID + ", "
							"    addrID = (SELECT addrID FROM Addresses WHERE addrID = (SELECT addrID FROM Employees WHERE empID = " + Id + ")) "
							"WHERE empID = " + Id + ";";

	return query;
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
