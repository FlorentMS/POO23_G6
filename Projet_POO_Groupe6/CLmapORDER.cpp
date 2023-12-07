#include "pch.h"
#include "CLmapORDER.h"

System::String^ NS_Comp::CLmapORDER::selectOrders(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::selectOrder(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::insertOrder(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::insertItem(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::insertPayment(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::deleteOrder(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

System::String^ NS_Comp::CLmapORDER::updateOrder(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

void NS_Comp::CLmapORDER::setCustID(int cID)
{
    this->custID = cID;
}

void NS_Comp::CLmapORDER::setOrderRef(System::String^ OrdRef)
{
    this->orderRef = OrdRef;
}

void NS_Comp::CLmapORDER::setDeliveryDate(System::String^ DelDate)
{
    this->deliveryDate = DelDate;
}

void NS_Comp::CLmapORDER::setCompletePaymentDate(System::String^ CompPayDate)
{
    this->completePaymentDate = CompPayDate;
}

void NS_Comp::CLmapORDER::setMeanOfPayment(System::String^ MoP)
{
    this->meanOfPayment = MoP;
}

void NS_Comp::CLmapORDER::setPaymentDate(System::String^ PayDate)
{
    this->paymentDate = PayDate;
}

void NS_Comp::CLmapORDER::setProductRef(int CpNbr)
{
    this->copyNumber = CpNbr;
}

void NS_Comp::CLmapORDER::setCopyNumber(int CpNbr)
{
    this->copyNumber = CpNbr;
}



int NS_Comp::CLmapORDER::getCustID(void) { return this->custID; }

System::String^ NS_Comp::CLmapORDER::getOrderRef(void) { return this->orderRef; }

System::String^ NS_Comp::CLmapORDER::getDeliveryDate(void) { return this->deliveryDate; }

System::String^ NS_Comp::CLmapORDER::getCompletePaymentDate(void) { return this->completePaymentDate; }

System::String^ NS_Comp::CLmapORDER::getMeanOfPayment(void) { return this->meanOfPayment; }

System::String^ NS_Comp::CLmapORDER::getPaymentDate(void) { return this->paymentDate; }

int NS_Comp::CLmapORDER::getProductRef(void) { return this->productRef; }

int NS_Comp::CLmapORDER::getCopyNumber(void) { return this->copyNumber; }