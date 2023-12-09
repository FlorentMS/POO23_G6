#include "pch.h"
#include "CLmapORDER.h"

System::String^ NS_Comp::CLmapORDER::selectOrders(void)
{
	return "Select Orders.orderRef					as Reference,		\
		Orders.orderDate				as order_at,					\
		Orders.deliveryDate			as deliver_at,					\
		Orders.totalET					as total_exlucing_taxes,		\
		Orders.completPaymentDate		as total_payment_at				\
		From Projet_POO_G6.dbo.Orders; ";
}

System::String^ NS_Comp::CLmapORDER::selectOrder(void)
{
	return "Select Orders.orderRef			as order_reference,							\
		Orders.orderDate					as order_at,								\
		Orders.deliveryDate					as deliver_at,								\
		Products.productRef					as product_reference,						\
		Products.productName				as product_name,							\
		characteristicsProd.color			as color,									\
		Orders.totalET						as total_exlucing_taxes,					\
		Orders.completPaymentDate			as total_payment_at	,						\
		order_product.copyNumber			as Item_Number								\
		From Projet_POO_G6.dbo.Orders INNER JOIN Projet_POO_G6.dbo.order_product		\
		on(Orders.orderRef = order_product.orderRef)									\
		INNER JOIN Projet_POO_G6.dbo.characteristicsProd								\
		on(order_product.colorProductID = characteristicsProd.colorProductID)			\
		INNER JOIN Projet_POO_G6.dbo.Products											\
		on(characteristicsProd.productRef = Products.productRef)						\
		Where Orders.orderRef = '"+ this->orderRef +"';";
}

System::String^ NS_Comp::CLmapORDER::selectOrderPay(void)
{
	return "Select orders.orderRef as order_reference, orders.orderDate as order_the, orders.deliveryDate as deliver_the, meanOfPayment as mean_of_payment,		\
			paymentDate as payed_the, totalET as total																											\
			From[Projet_POO_G6].[dbo].Payments inner join[Projet_POO_G6].[dbo].orders on(orders.orderRef = Payments.orderRef)									\
			Where orders.orderRef = '"+ this->orderRef +"'; ";
}

System::String^ NS_Comp::CLmapORDER::insertOrder(void)
{
	return "declare @IdCust as int; set @IdCust = "+ this->custID +";																																									\
			declare @Refprod as int; set @Refprod = "+ this->productRef +";																																								\
			declare @nbcopy as int; set @nbcopy = "+ this->copyNumber +";																																								\
			declare @colorProd as char(12); set @colorProd = '" + this->colorProd + "';																																					\
																																																										\
			declare @NumberOrderCust as int; set @NumberOrderCust = (select CONVERT(int, SUBSTRING(orderRef, 12, 3))																													\
				From Projet_POO_G6.dbo.Orders																																															\
				Where CONVERT(int, SUBSTRING(orderRef, 12, 3)) >= All(select CONVERT(int, SUBSTRING(orderRef, 12, 3))																													\
					From Projet_POO_G6.dbo.Orders																																														\
					Where custNumber = @IdCust)																																															\
				and custNumber = @IdCust) + 1;																																															\
			IF @NumberOrderCust is null																																																	\
				begin																																																					\
				set @NumberOrderCust = 1;																																																\
				update Projet_POO_G6.dbo.Customers set firstBuyDate = GETDATE() where custNumber = @IdCust;																																\
				end																																																						\	\
																																																										\
				declare @orderID as varchar(20);																																														\
			set  @orderID = (Select CONCAT(upper(substring(firstName, 1, 2)), upper(substring(lastName, 1, 2)), Convert(CHAR(4), GETDATE(), 112), upper(substring(Cities.cityName, 1, 3)), format(@NumberOrderCust, '000'))				\
				From Projet_POO_G6.dbo.Customers left join Projet_POO_G6.dbo.Addresses on(addrDel = addrID)																																\
				left join Projet_POO_G6.dbo.Cities on(Addresses.cityID = Cities.cityID)																																					\
				Where Customers.custNumber = @IdCust);																																													\
																																																										\
			declare @colorID as int; declare @VAT as decimal(3, 2); declare @reducePrice as decimal(15, 2);																																\
																																																										\
			set @colorID = (Select colorProductID																																														\
				From Projet_POO_G6.dbo.Products inner join Projet_POO_G6.dbo.characteristicsProd																																		\
				on(Products.productRef = characteristicsProd.productRef)																																								\
				Where Products.productRef = @Refprod and characteristicsProd.color = @colorProd);																																		\
																																																										\
			set @VAT = (Select VATrate																																																	\
				From Projet_POO_G6.dbo.Products																																															\
			where productRef = @Refprod);																																																\
																																																										\
			set @reducePrice = (Select PriceEt																																															\
				From Projet_POO_G6.dbo.Products																																															\
			where Products.productRef = @Refprod);																																														\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[Orders](orderRef, deliveryDate, orderDate, completPaymentDate, custNumber)																												\
				values(@orderID, '" + this->deliveryDate + "', GETDATE(), '"+ this->completePaymentDate +"', @IdCust);																													\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[Payments](orderRef, meanOfPayment, paymentDate)																																			\
				values(@orderID, '"+ this->meanOfPayment +"', '"+ this->paymentDate +"');																																				\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[order_product](orderRef, colorProductID, productVAT, reduceProductPrice, copyNumber)																										\
				values(@orderID, @colorID, @VAT, @reducePrice, @nbcopy);																																								\
																																																										\
																																																										\
			Update Projet_POO_G6.dbo.Orders																																																\
				set Orders.totalET = (Select SUM(reduceProductPrice) From Projet_POO_G6.dbo.order_product where orderRef = @orderID group by orderRef)																					\
			where orderRef = @orderID;";
}

System::String^ NS_Comp::CLmapORDER::insertItem(void)
{
	return "declare @Refprod as int; set @Refprod = " + this->productRef + ";																					\
			declare @orderID as varchar(20); set @orderID = '"+ this->orderRef +"';																	\
			declare @nbcopy as int; set @nbcopy = " + this->copyNumber + ";																					\
			declare @colorProd as char(12); set @colorProd = '" + this->colorProd + "';																		\
																																							\
			declare @colorID as int; declare @VAT as decimal(3, 2); declare @reducePrice as decimal(15, 2);													\
																																							\
			set @colorID = (Select colorProductID																											\
				From Projet_POO_G6.dbo.Products inner join Projet_POO_G6.dbo.characteristicsProd as cp														\
				on(Products.productRef = cp.productRef)																										\
				Where Products.productRef = @Refprod and cp.color = @colorProd);																			\
																																							\
			set @VAT = (Select VATrate																														\
				From Projet_POO_G6.dbo.Products																												\
			where productRef = @Refprod);																													\
																																							\
			set @reducePrice = (Select PriceEt																												\
				From Projet_POO_G6.dbo.Products																												\
			where Products.productRef = @Refprod);																											\
																																							\
			Insert into[Projet_POO_G6].[dbo].[order_product](orderRef, colorProductID, productVAT, reduceProductPrice, copyNumber)							\
				values(@orderID, @colorID, @VAT, @reducePrice, @nbcopy);";
}

System::String^ NS_Comp::CLmapORDER::insertPayment(void)
{
	return "Insert into[Projet_POO_G6].[dbo].[Payments](orderRef, meanOfPayment, paymentDate)			\
			values('" + this->orderRef + "', '" + this->meanOfPayment + "', '" + this->paymentDate + "'); ";
}

System::String^ NS_Comp::CLmapORDER::deleteOrder(void)
{
	return "delete From Projet_POO_G6.dbo.Orders where orderRef='"+ this->orderRef +"';";
}

System::String^ NS_Comp::CLmapORDER::deleteItem(void)
{
	return"declare @colorID as int;																								\
		declare @orderRefItem as varchar(20); Set @orderRefItem = '"+ this->orderRef+"';										\
	set @colorID = (Select colorProductID																						\
		From Projet_POO_G6.dbo.Products inner join Projet_POO_G6.dbo.characteristicsProd as cp									\
		on(Products.productRef = cp.productRef)																					\
		Where Products.productRef = '"+ this->productRef+"' and cp.color = '"+ this->colorProd +"');							\
	delete From Projet_POO_G6.dbo.order_product where orderRef = @orderRefItem and colorProductID = @colorID; ";
}

System::String^ NS_Comp::CLmapORDER::deletePayment(void)
{
	return "delete From Projet_POO_G6.dbo.Payments where orderRef = '" +this->orderRef+ "' and meanOfPayment ='"+ this->meanOfPayment +"' and paymentDate'"+ this->paymentDate+"';";
}

System::String^ NS_Comp::CLmapORDER::updateOrder(void)
{
    return "Update Projet_POO_G6.dbo.Orders																													\
		Set deliveryDate = '"+ this->deliveryDate +"', orderDate = '" + this->orderDate+ "', completPaymentDate = '"+this->completePaymentDate+"'			\
		Where orderRef = '"+ this->orderRef +"'; ";
}




void NS_Comp::CLmapORDER::setCustID(int cID)
{
    this->custID = cID;
}

void NS_Comp::CLmapORDER::setOrderRef(System::String^ OrdRef)
{
    this->orderRef = OrdRef;
}

void NS_Comp::CLmapORDER::setOrderDate(System::String^ OrdDate)
{
	this->orderDate = OrdDate;
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

void NS_Comp::CLmapORDER::setProductColor(System::String^ color)
{
	this->colorProd = color;
}

void NS_Comp::CLmapORDER::setProductRef(int prodRef)
{
    this->productRef = prodRef;
}

void NS_Comp::CLmapORDER::setCopyNumber(int CpNbr)
{
    this->copyNumber = CpNbr;
}



int NS_Comp::CLmapORDER::getCustID(void) { return this->custID;  }

System::String^ NS_Comp::CLmapORDER::getOrderRef(void) { return this->orderRef; }

System::String^ NS_Comp::CLmapORDER::getOrderDate(void) { return this->orderDate; }

System::String^ NS_Comp::CLmapORDER::getDeliveryDate(void) { return this->deliveryDate; }

System::String^ NS_Comp::CLmapORDER::getCompletePaymentDate(void) { return this->completePaymentDate; }

System::String^ NS_Comp::CLmapORDER::getMeanOfPayment(void) { return this->meanOfPayment; }

System::String^ NS_Comp::CLmapORDER::getPaymentDate(void) { return this->paymentDate; }

System::String^ NS_Comp::CLmapORDER::getProductColor(void) { return this->colorProd; }

int NS_Comp::CLmapORDER::getProductRef(void) { return this->productRef;  }

int NS_Comp::CLmapORDER::getCopyNumber(void) { return this->copyNumber; }
