#pragma once
#include "CLcad.h"
#include "CLmapPRODUCT.h"

namespace NS_Svc
{
	ref class CLstock
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapPRODUCT^ oProd;
	public:
		CLstock(void);
		System::Data::DataSet^ displayProducts(System::String^ dataTableName);
		System::Data::DataSet^ displayProduct(System::String^ dataTableName, int ID);
		void addProduct(System::String^ name, System::String^ color, float priceET, int reorderThreshold, float VATrate, int quantity);
		void eraseProduct(int ID);
		void changeProduct(int ID,System::String^ name, System::String^ color, float priceET, int reorderThreshold, float VATrate, int quantity);
	};
}