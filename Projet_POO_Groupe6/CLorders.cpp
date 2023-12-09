#include "pch.h"
#include "CLorders.h"
#include "CLcad.h"


NS_Svc::CLorders::CLorders()
{
	this->oCad = gcnew NS_Comp_Data::CLcad;
	this->oOrder = gcnew NS_Comp::CLmapORDER;
}

System::Data::DataSet^ NS_Svc::CLorders::displayOrders(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oOrder->selectOrders();
	return this->oCad->getRows(sql, dataTableName);
}



System::Data::DataSet^ NS_Svc::CLorders::displayOrder(System::String^ dataTableName, System::String^ orderRef)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRef);

	sql = this->oOrder->selectOrder();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Svc::CLorders::displayOrderPay(System::String^ dataTableName, System::String^ orderRef)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRef);

	sql = this->oOrder->selectOrderPay();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Svc::CLorders::addOrder(System::String^ deliveryDate, System::String^ CompletePayDate, System::String^ CustID, 
	System::String^ MeanOfPay, System::String^ PayDate, System::String^ ProductRef, System::String^ color, System::String^ copyNum)
{
	System::String^ sql; 

		this->oOrder->setCustID(System::Convert::ToInt32(CustID));
		this->oOrder->setDeliveryDate(deliveryDate);
		this->oOrder->setCompletePaymentDate(CompletePayDate); //May be can be delete
		this->oOrder->setMeanOfPayment(MeanOfPay);
		this->oOrder->setPaymentDate(PayDate);
		this->oOrder->setProductRef(System::Convert::ToInt32(ProductRef));
		this->oOrder->setProductColor(color);
		this->oOrder->setCopyNumber(System::Convert::ToInt32(copyNum));

		sql = this->oOrder->insertOrder();

		this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::addItem(System::String^ orderRef, System::String^ ProductRef, System::String^ color, System::String^ copyNum)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRef);
	this->oOrder->setProductRef(System::Convert::ToInt32(ProductRef));
	this->oOrder->setProductColor(color);
	this->oOrder->setCopyNumber(System::Convert::ToInt32(copyNum));

	sql = this->oOrder->insertItem();
	
	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::addPayment(System::String^ prodRef, System::String^ MeanOfPay, System::String^ PayDate)
{
	System::String^ sql;

	this->oOrder->setOrderRef(prodRef);
	this->oOrder->setMeanOfPayment(MeanOfPay);
	this->oOrder->setPaymentDate(PayDate);

	sql = this->oOrder->insertPayment();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::eraseOrder(System::String^ orderRefrence)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRefrence);

	sql = this->oOrder->deleteOrder();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::eraseItem(System::String^ ordRef, System::String^ prodRef, System::String^ color)
{
	System::String^ sql;

	this->oOrder->setOrderRef(ordRef);
	this->oOrder->setProductRef(System::Convert::ToInt32(prodRef));
	this->oOrder->setProductColor(color);

	sql = this->oOrder->deleteItem();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::erasePayment(System::String^ prodRef, System::String^ MeanOfPay, System::String^ PayDate)
{
	System::String^ sql;

	this->oOrder->setOrderRef(prodRef);
	this->oOrder->setMeanOfPayment(MeanOfPay);
	this->oOrder->setPaymentDate(PayDate);

	sql = this->oOrder->deletePayment();

	this->oCad->actionRows(sql);
}

void NS_Svc::CLorders::changeOrder(System::String^ orderRef, System::String^ deliveryDate, System::String^ CompletePayDate)
{
	System::String^ sql;

	this->oOrder->setOrderRef(orderRef);
	this->oOrder->setDeliveryDate(deliveryDate);
	this->oOrder->setCompletePaymentDate(CompletePayDate);

	sql = this->oOrder->updateOrder();

	this->oCad->actionRows(sql);
}

