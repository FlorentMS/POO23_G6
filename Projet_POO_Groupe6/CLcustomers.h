#pragma once
#include "CLmapCUST.h"
#include "CLcad.h"

namespace NS_Svc
{
	ref class CLcustomers
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapCUST^ oCUST;
	public:
		CLcustomers(void);
		System::Data::DataSet^ displayCustomers(System::String^);
		void addCustomers(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void eraseCustomers();
		void updateCustomers();
	};
}