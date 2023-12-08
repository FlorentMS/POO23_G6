#include "pch.h"
#include "CLmapCUST.h"

System::String^ NS_Comp::CLmapCUST::selectCustomers()
{
	return "SELECT [Projet_POO_G6].[dbo].[Customers].[custNumber], [lastName], [firstName], [birthDate], [firstBuyDate],\
		[addrDel].[streetNumber] AS[delStreetNumber],\
		[addrDel].[StreetName] AS[delStreetName],\
		[CitiesDel].[cityZipCode] AS[delCityZipCode],\
		[CitiesDel].[cityName] AS[delCityName],\
		[addrBil].[streetNumber] AS[billStreetNumber],\
		[addrBil].[StreetName] AS[billStreetName],\
		[CitiesBill].[cityZipCode] AS[billCityZipCode],\
		[CitiesBill].[cityName] AS[billCityName]\
		FROM[Projet_POO_G6].[dbo].[Customers]\
		LEFT JOIN[Projet_POO_G6].[dbo].[Socities] ON[Projet_POO_G6].[dbo].[Customers].[socityID] = [Projet_POO_G6].[dbo].[Socities].[socityID]\
		JOIN[Projet_POO_G6].[dbo].[Addresses] AS[addrDel] ON[Projet_POO_G6].[dbo].[Customers].[addrDel] = [addrDel].[addrID]\
		JOIN[Projet_POO_G6].[dbo].[Cities] AS[CitiesDel] ON[addrDel].[cityID] = [CitiesDel].[cityID]\
		JOIN[Projet_POO_G6].[dbo].[Addresses] AS[addrBil] ON[Projet_POO_G6].[dbo].[Customers].[addrBil] = [addrBil].[addrID]\
		JOIN[Projet_POO_G6].[dbo].[Cities] AS[CitiesBill] ON[addrBil].[cityID] = [CitiesBill].[cityID]";
}

System::String^ NS_Comp::CLmapCUST::insertCustomer()
{
	return "DECLARE @cityIDdel INT;\
			DECLARE @addrIDdel INT;\
			DECLARE @addrIDbil INT;\
			DECLARE @cityIDbil INT;\
			SET @cityIDdel = (SELECT cityID FROM Cities WHERE cityName = '" + this->cityNameDel + "' AND cityZipCode = '" + this->ZipCodeDel + "');\
			SET @cityIDbil = (SELECT cityID FROM Cities WHERE cityName = '" + this->cityNameBil + "' AND cityZipCode = '" + this->ZipCodeBil + "');\
			INSERT INTO Addresses(streetNumber, streetName, cityID) VALUES\
			(" + this->streetNumberDel + ", '" + this->streetNameDel + "', @cityIDdel); \
			SET @addrIDdel = SCOPE_IDENTITY();\
			INSERT INTO Addresses(streetNumber, streetName, cityID) VALUES\
			(" + this->streetNumberBil + ", '" + this->streetNameBil + "', @cityIDbil);\
			SET @addrIDbil = SCOPE_IDENTITY();\
			INSERT INTO Customers(lastName, firstName, birthDate, addrBil, addrDel) VALUES\
			('" + this->lastName + "', '" + this->firstName + "', '" + this->birthDate + "', @addrIDbil, @addrIDdel);\
	";
}

System::String^ NS_Comp::CLmapCUST::deleteCustomer()
{
	return "DECLARE @BiladdrID INT = (SELECT addrID FROM Addresses a JOIN Customers c ON  a.addrID = c.addrBil \
			WHERE lastName = '" + this->lastName + "' AND firstName = '" + this->firstName + "' AND birthDate = '" + this->birthDate + "');\
			\
			DECLARE @DeladdrID INT = (SELECT addrID FROM Addresses a JOIN Customers c ON  a.addrID = c.addrDel\
			WHERE lastName = '" + this->lastName + "' AND firstName = '" + this->firstName + "' AND birthDate = '" + this->birthDate + "');\
			\
			--Suppression de la ligne dans la table Customers\
				DELETE FROM Customers\
				WHERE lastName = '" + this->lastName + "' AND firstName = '" + this->firstName + "' AND birthDate = '" + this->birthDate + "';\
			\
			--Suppression de l'adresse de facturation\
				DELETE FROM Addresses\
				WHERE addrID = @BiladdrID;\
			\
			--Suppression de l'adresse de livraison\
				DELETE FROM Addresses\
				WHERE addrID = @DeladdrID; ";
}

System::String^ NS_Comp::CLmapCUST::updateCustomer()
{
	return "";
}



void NS_Comp::CLmapCUST::setCustNumber(int custNum)
{
	this->custNumber = custNum;
}

void NS_Comp::CLmapCUST::setLastName(System::String^ lastName)
{
	this->lastName = lastName;
}

void NS_Comp::CLmapCUST::setFirstName(System::String^ firstName)
{
	this->firstName = firstName;
}

void NS_Comp::CLmapCUST::setBirthDate(System::String^ birthDate)
{
	this->birthDate = birthDate;
}

int NS_Comp::CLmapCUST::getCustNumber(void)
{
	return this->custNumber;
}

System::String^ NS_Comp::CLmapCUST::getLastName(void)
{
	return this->lastName;
}

System::String^ NS_Comp::CLmapCUST::getFirstName(void)
{
	return this->firstName;
}

System::String^ NS_Comp::CLmapCUST::getBirthDate(void)
{
	return this->birthDate;
}



void NS_Comp::CLmapCUST::setstreetNumberDel(int SNameD)
{
	this->streetNumberDel = SNameD;
}

void NS_Comp::CLmapCUST::setStreetNameDel(System::String^ SNumD)
{
	this->streetNameDel = SNumD;
}

void NS_Comp::CLmapCUST::setZipCodeDel(System::String^ ZCD)
{
	this->ZipCodeDel = ZCD;
}

void NS_Comp::CLmapCUST::setCityNameDel(System::String^ CND)
{
	this->cityNameDel = CND;
}

int NS_Comp::CLmapCUST::getstreetNumberDel(void)
{
	return this->streetNumberDel;
}

System::String^ NS_Comp::CLmapCUST::getStreetNameDel(void)
{
	return this->streetNameDel;
}

System::String^ NS_Comp::CLmapCUST::getZipCodeDel(void)
{
	return this->ZipCodeBil;
}

System::String^ NS_Comp::CLmapCUST::getCityNameDel(void)
{
	return this->cityNameDel;
}



void NS_Comp::CLmapCUST::setstreetNumberBil(int SNumB)
{
	this->streetNumberBil = SNumB;
}

void NS_Comp::CLmapCUST::setStreetNameBil(System::String^ SNameB)
{
	this->streetNameBil = SNameB;
}

void NS_Comp::CLmapCUST::setZipCodeBil(System::String^ ZCB)
{
	this->ZipCodeBil = ZCB;
}

void NS_Comp::CLmapCUST::setCityNameBil(System::String^ CNB)
{
	this->cityNameBil = CNB;
}

int NS_Comp::CLmapCUST::getstreetNumberBil(void)
{
	return this->streetNumberBil;
}

System::String^ NS_Comp::CLmapCUST::getStreetNameBil(void)
{
	return this->streetNameBil;
}

System::String^ NS_Comp::CLmapCUST::getZipCodeBil(void)
{
	return this->ZipCodeBil;
}

System::String^ NS_Comp::CLmapCUST::getCityNameBil(void)
{
	return this->cityNameBil;
}



void NS_Comp::CLmapCUST::setSocityName(System::String^ SN)
{
	this->socityName = SN;
}

void NS_Comp::CLmapCUST::setServiceNum(System::String^ SNum)
{
	this->serviceNum = SNum;
}

System::String^ NS_Comp::CLmapCUST::getSocityName(void)
{
	return this->socityName;
}

System::String^ NS_Comp::CLmapCUST::getServiceNum(void)
{
	return this->serviceNum;
}
