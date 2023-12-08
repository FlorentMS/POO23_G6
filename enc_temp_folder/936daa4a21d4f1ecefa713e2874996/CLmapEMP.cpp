#include "pch.h"
#include "CLmapEMP.h"

System::String^ NS_Comp::CLmapEMP::selectEmployees(void)
{
    System::String^ query = "SELECT [empID], [chiefID], [lastName], [firstName], [hireDate], [streetNumber], [StreetName], [cityName], [cityZipCode] "
        "FROM [Projet_POO_G6].[dbo].[Employees] "
        "LEFT JOIN [Projet_POO_G6].[dbo].[Addresses] ON [Projet_POO_G6].[dbo].[Employees].[addrID] = [Projet_POO_G6].[dbo].[Addresses].[addrID] "
        "LEFT JOIN [Projet_POO_G6].[dbo].[Cities] ON [Projet_POO_G6].[dbo].[Addresses].[cityID] = [Projet_POO_G6].[dbo].[Cities].[cityID]";

    // Ajouter une clause WHERE si au moins un filtre est spécifié
    if (!System::String::IsNullOrEmpty(lastName) || !System::String::IsNullOrEmpty(firstName) || !System::String::IsNullOrEmpty(hireDate))
    {
        query += " WHERE";

        // Ajouter le filtre pour le nom de famille s'il est spécifié
        if (!System::String::IsNullOrEmpty(lastName))
        {
            query += " [lastName] = '" + lastName + "'";
        }

        // Ajouter le filtre pour le prénom s'il est spécifié
        if (!System::String::IsNullOrEmpty(firstName))
        {
            if (!System::String::IsNullOrEmpty(lastName))
            {
                query += " AND";
            }
            query += " [firstName] = '" + firstName + "'";
        }

        // Ajouter le filtre pour la date d'embauche s'il est spécifié
        if (!System::String::IsNullOrEmpty(hireDate))
        {
            if (!System::String::IsNullOrEmpty(lastName) || !System::String::IsNullOrEmpty(firstName))
            {
                query += " AND";
            }
            query += " [hireDate] = '" + hireDate + "'";
        }
    }

    return query;
}

System::String^ NS_Comp::CLmapEMP::insertEmployee(void)
{
	System::String^ query = "DECLARE @cityID INT; "
                            "DECLARE @addrID INT; "
                            "INSERT INTO Cities (cityZipCode, cityName) VALUES ('" + ZipCode + "', '" + cityName + "'); "
                            "SET @cityID = SCOPE_IDENTITY(); "
                            "INSERT INTO Addresses (streetNumber, StreetName, cityID) VALUES (" + streetNumber + ", '" + streetName + "', @cityID); "
                            "SET @addrID = SCOPE_IDENTITY(); "
                            "INSERT INTO Employees (lastName, firstName, hireDate, chiefID, addrID) VALUES ('" + lastName + "', '" + firstName + "', '" + hireDate + "', " + ChiefID + ", @addrID);";

    return query;
}

System::String^ NS_Comp::CLmapEMP::deleteEmployee(void)
{
	return "DELETE FROM [Projet_POO_G6].[dbo].[Employees] WHERE [lastName] = '" + lastName + "' AND [firstName] = '" + firstName + "' AND [hireDate] = '" + hireDate + "';             \
            DELETE FROM [Projet_POO_G6].[dbo].[Addresses] WHERE [addrID] IN (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [lastName] = '" + lastName + "' AND [firstName] = '" + firstName + "' AND [hireDate] = '" + hireDate + "');    \
            DELETE FROM [Projet_POO_G6].[dbo].[Cities] WHERE [cityID] IN (SELECT [cityID] FROM [Projet_POO_G6].[dbo].[Addresses] WHERE [addrID] IN (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [lastName] = '" + lastName + "' AND [firstName] = '" + firstName + "' AND [hireDate] = '" + hireDate + "'));";
}

System::String^ NS_Comp::CLmapEMP::updateEmployee(void)
{
	return "UPDATE [Projet_POO_G6].[dbo].[Employees] SET "
		"[chiefID] = " + ChiefID + ", "
		"[firstName] = '" + firstName + "', "
		"[lastName] = '" + lastName + "', "
		"[hireDate] = '" + hireDate + "' "
		"WHERE [empID] = " + Id + "; "
		"UPDATE [Projet_POO_G6].[dbo].[Addresses] SET "
		"[streetNumber] = " + streetNumber + ", "
		"[streetName] = '" + streetName + "' "
		"WHERE [addrID] = (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [empID] = " + Id + "); "
		"UPDATE [Projet_POO_G6].[dbo].[Cities] SET "
		"[cityName] = '" + cityName + "', "
		"[cityZipCode] = '" + ZipCode + "' "
		"WHERE [cityID] = (SELECT [cityID] FROM [Projet_POO_G6].[dbo].[Addresses] WHERE [addrID] = (SELECT [addrID] FROM [Projet_POO_G6].[dbo].[Employees] WHERE [empID] = " + Id + "));";
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
