#include "pch.h"
#include "CLmapCUST.h"

System::String^ NS_NS_Comp::CLmapCUST::selectCustomers()
{
	return "";
}

System::String^ NS_Comp::CLmapCUST::insertCustomer()
{
	return "";
}

System::String^ NS_Comp::CLmapCUST::deleteCustomer()
{
	return "";
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
