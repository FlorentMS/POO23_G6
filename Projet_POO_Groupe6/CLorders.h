#pragma once
#include "CLcad.h"
#include "CLmapORDER.h"

namespace NS_Svc {
	ref class CLorders
	{
	private :
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapORDER^ oOrder;
	public :
		CLorders();

		System::Data::DataSet^ displayOrders(System::String^ dataTableName, System::String^ orderRef);

		void addOrder(System::String^ orderRef, System::String^ deliveryDate, System::String^ CompletePayDate, System::String^ CustID,
			System::String^ MeanOfPay, System::String^ PayDate, System::String^ ProductRef, System::String^ color, System::String^ copyNum);
		void addItem(System::String^, System::String^, System::String^);
		void addPayment(System::String^, System::String^, System::String^);

		void eraseOrder(System::String^, System::String^, System::String^);

		void changeOrder(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};
}
