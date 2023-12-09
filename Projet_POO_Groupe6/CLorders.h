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


		System::Data::DataSet^ displayOrders(System::String^ dataTableName);
		System::Data::DataSet^ displayOrder(System::String^ dataTableName, System::String^ orderRef);
		System::Data::DataSet^ displayOrderPay(System::String^ dataTableName, System::String^ orderRef);


		void addOrder(System::String^ deliveryDate, System::String^ CompletePayDate, System::String^ CustID, System::String^ MeanOfPay, 
			System::String^ PayDate, System::String^ ProductRef, System::String^ color, System::String^ copyNum);
		
		void addItem(System::String^ prodRef, System::String^ ProductRef, System::String^ color, System::String^ copyNum);
		
		void addPayment(System::String^ prodRef, System::String^ MeanOfPay, System::String^ PayDate);

		void eraseOrder(System::String^ orderRef);

		void eraseItem(System::String^ orderRef, System::String^ prodRef, System::String^ color);

		void erasePayment(System::String^ prodRef, System::String^ MeanOfPay, System::String^ PayDate);

		void changeOrder(System::String^ orderRef, System::String^ deliveryDate, System::String^ CompletePayDate);
	};
}
