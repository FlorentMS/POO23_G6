#pragma once
#include "CLmapSTAT.h"
#include "CLcad.h"

namespace NS_Svc
{
	ref class CLstatistics
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapSTAT^ oSTAT;
	public:
		CLstatistics(void);
		System::Data::DataSet^ averageBasket(System::String^);
		System::Data::DataSet^ calculateTurnover(System::String^, System::String^);
		System::Data::DataSet^ productUnderThreshold(System::String^);
		System::Data::DataSet^ lessSellProducts(System::String^, System::String^);
		System::Data::DataSet^ moreSellProducts(System::String^, System::String^);
		System::Data::DataSet^ totalAmount(System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ retailValueInventory(System::String^);
		System::Data::DataSet^ purchaseValueInventory(System::String^);
	};
}