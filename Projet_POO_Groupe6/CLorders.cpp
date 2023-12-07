#include "pch.h"
#include "CLorders.h"

NS_Svc::CLorders::CLorders()
{
	//this->oCad = &Cnx;
	this->oOrder = gcnew NS_Comp::CLmapORDER;
}

System::Data::DataSet^ NS_Svc::CLorders::displayOrders(System::String^ dataTableName, System::String^ OrderRef)
{
	System::String^ sql;

	sql = this->oOrder->selectOrders();
	return this->oCad->getRows(sql, dataTableName);
}



void NS_Svc::CLorders::addOrder(System::String^ orderRef, System::String^ deliveryDate, System::String^ CompletePayDate, System::String^ CustID,
	System::String^ MeanOfPay, System::String^ PayDate, System::String^ ProductRef, System::String^ color, System::String^ copyNum)
{
	System::String^ sql; 

	this->oOrder->setCustID(System::Convert::ToInt32(CustID)) ;
	this->oOrder->setDeliveryDate(deliveryDate);
	this->oOrder->setCompletePaymentDate(CompletePayDate); //May be can be delete

	/*if (MeanOfPay != "" && PayDate != "") {
		this->oOrder->setMeanOfPayment(MeanOfPay);
		this->oOrder->setPaymentDate(PayDate);
	}
	if (ProductRef != "" && copyNum != "" && color != "") {
		this->oOrder->setProductRef(System::Convert::ToInt32(ProductRef));
		this->oOrder->setProductColor(color);
		this->oOrder->setCopyNumber(System::Convert::ToInt32(copyNum));
	}
	if (orderRef != "") {
		this->oOrder->setOrderRef(orderRef);
	}*/

	this->oOrder->setMeanOfPayment(MeanOfPay);
	this->oOrder->setPaymentDate(PayDate);
	this->oOrder->setProductRef(System::Convert::ToInt32(ProductRef));
	this->oOrder->setProductColor(color);
	this->oOrder->setCopyNumber(System::Convert::ToInt32(copyNum));

	sql = this->oOrder->insertOrder();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::addItem(System::String^ ProductRef, System::String^ color, System::String^ copyNum)
{
	System::String^ sql;

	this->oOrder->setProductRef(System::Convert::ToInt32(ProductRef));
	this->oOrder->setProductColor(color);
	this->oOrder->setCopyNumber(System::Convert::ToInt32(copyNum));

	sql = this->oOrder->insertItem();
	
	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::addPayment(System::String^ MeanOfPay, System::String^ PayDate)
{
	System::String^ sql;

	this->oOrder->setMeanOfPayment(MeanOfPay);
	this->oOrder->setPaymentDate(PayDate);

	sql = this->oOrder->insertPayment();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::eraseOrder(System::String^ orderRefrence)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRefrence);

	sql = this->oOrder->insertPayment();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::changeOrder(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^)
{
	throw gcnew System::NotImplementedException();
}

