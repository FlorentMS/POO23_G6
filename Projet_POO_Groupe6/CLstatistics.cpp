#include "pch.h"
#include "CLstatistics.h"

NS_Svc::CLstatistics::CLstatistics(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oSTAT = gcnew NS_Comp::CLmapSTAT();
}

System::Data::DataSet^ NS_Svc::CLstatistics::averageBasket(System::String^ dataTable)
{
	System::String^ sql;

	sql = this->oSTAT->selecAverageBasket();

	return this->oCad->getRows(sql, dataTable);
}

System::Data::DataSet^ NS_Svc::CLstatistics::calculateTurnover(System::String^ dataTable, int month, int year)
{
	System::String^ sql;

	this->oSTAT->setMonth(month);
	this->oSTAT->setYear(year);
	sql = this->oSTAT->selectCalculateTurnover();

	return this->oCad->getRows(sql, dataTable);
}

System::Data::DataSet^ NS_Svc::CLstatistics::productUnderThreshold(System::String^ dataTable)
{
	System::String^ sql;

	sql = this->oSTAT->selectProductUnderThreshold();

	return this->oCad->getRows(sql, dataTable);
}

System::Data::DataSet^ NS_Svc::CLstatistics::moreSellProducts(System::String^ dataTable)
{
	System::String^ sql;

	sql = this->oSTAT->selectMoreSellProducts();

	return this->oCad->getRows(sql, dataTable);
}

System::Data::DataSet^ NS_Svc::CLstatistics::lessSellProducts(System::String^ dataTable)
{
	System::String^ sql;

	sql = this->oSTAT->selectLessSellProducts();

	return this->oCad->getRows(sql, dataTable);
}

System::Data::DataSet^ NS_Svc::CLstatistics::totalAmount(System::String^, System::String^, System::String^, System::String^)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::Data::DataSet^ NS_Svc::CLstatistics::retailValueInventory(System::String^)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::Data::DataSet^ NS_Svc::CLstatistics::purchaseValueInventory(System::String^)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}
