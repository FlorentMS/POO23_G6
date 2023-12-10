#include "pch.h"
#include "CLsimulations.h"

NS_Svc::CLsimulations::CLsimulations()
{
	this->oCad = gcnew NS_Comp_Data::CLcad;
	this->oSimu = gcnew NS_Comp::CLmapSIMU;
}

System::Data::DataSet^ NS_Svc::CLsimulations::makeSimulation(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oSimu->selectTotalPriceATI();
	return this->oCad->getRows(sql, dataTableName);

}

void NS_Svc::CLsimulations::changeTVA(float percentage)
{
	this->oSimu->setTVArate(1 + percentage);
}

void NS_Svc::CLsimulations::changeMargin(float percentage)
{
	this->oSimu->setMargin(1 + percentage);
}

void NS_Svc::CLsimulations::changeUnknowMarkdown(float percentage)
{
	this->oSimu->setUnknowMarkdown(1 - percentage);
}

void NS_Svc::CLsimulations::changeTradDiscount(float percentage)
{
	this->oSimu->setTradDiscount(1 - percentage);
}
