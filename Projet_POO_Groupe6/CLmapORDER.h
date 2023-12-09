#pragma once

namespace NS_Comp
{
	ref class CLmapORDER
	{
	private:
		System::String^ sSql;
		int custID;
		System::String^ orderRef;
		System::String^ orderDate;
		System::String^ deliveryDate;
		System::String^ completePaymentDate;
		System::String^ meanOfPayment;
		System::String^ paymentDate;
		int productRef;
		System::String^ colorProd;
		int copyNumber;
	public:
		System::String^ selectOrders(void);
		System::String^ selectOrder(void);
		System::String^ insertOrder(void);
		System::String^ insertItem(void);
		System::String^ insertPayment(void);
		System::String^ deleteOrder(void);
		System::String^ deleteItem(void);
		System::String^ deletePayment(void);
		System::String^ updateOrder(void);

		void setCustID(int);
		void setOrderRef(System::String^);
		void setOrderDate(System::String^);
		void setDeliveryDate(System::String^);
		void setCompletePaymentDate(System::String^);
		void setMeanOfPayment(System::String^);
		void setPaymentDate(System::String^);
		void setProductColor(System::String^);
		void setProductRef(int);
		void setCopyNumber(int);

		int getCustID(void);
		System::String^ getOrderRef(void);
		System::String^ getOrderDate(void);
		System::String^ getDeliveryDate(void);
		System::String^ getCompletePaymentDate(void);
		System::String^ getMeanOfPayment(void);
		System::String^ getPaymentDate(void);
		System::String^ getProductColor(void);
		int getProductRef(void);
		int getCopyNumber(void);

	};
}