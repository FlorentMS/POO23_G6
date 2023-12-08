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
		Orders.completPaymentDate			as total_payment_at							\
		From Projet_POO_G6.dbo.Orders INNER JOIN Projet_POO_G6.dbo.order_product		\
		on(Orders.orderRef = order_product.orderRef)									\
		INNER JOIN Projet_POO_G6.dbo.characteristicsProd								\
		on(order_product.colorProductID = characteristicsProd.colorProductID)			\
		INNER JOIN Projet_POO_G6.dbo.Products											\
		on(characteristicsProd.productRef = Products.productRef)						\
		Where Orders.orderRef = '"+ this->orderRef +"';";
}

System::String^ NS_Comp::CLmapORDER::insertOrder(void)
{
	return "/*declare @IdCust as int; set @IdCust = "+ this->custID +";																																									\
			declare @Refprod as int; set @Refprod = "+ this->productRef +";																																								\
			declare @nbcopy as int; set @nbcopy = "+ this->copyNumber +";																																								\
			declare @colorProd as char(12); set @colorProd = '" + this->colorProd + "';*/																																				\
			declare @IdCust as int; set @IdCust = 3;																																													\
			declare @Refprod as int; set @Refprod = 6;																																													\
			declare @nbcopy as int; set @nbcopy = 1;																																													\
			declare @colorProd as char(12); set @colorProd = 'Bleu';																																									\
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
			end																																																							\
																																																										\
																																																										\
				declare @orderID as varchar(20);																																														\
			set  @orderID = (Select CONCAT(upper(substring(firstName, 1, 2)), upper(substring(lastName, 1, 2)), Convert(CHAR(4), GETDATE(), 112), upper(substring(Cities.cityName, 1, 3)), format(@NumberOrderCust, '000'))				\
				From Projet_POO_G6.dbo.Customers left join Projet_POO_G6.dbo.Addresses on(addrDel = addrID)																																\
				left join Projet_POO_G6.dbo.Cities on(Addresses.cityID = Cities.cityID)																																					\
				Where Customers.custNumber = @IdCust);																																													\
			print @orderID;																																																				\
			drop table if exists ##tempOrder;																																															\
			create table ##tempOrder(orderRefrence varchar(20));																																										\
			insert into ##tempOrder(orderRefrence) values(@orderID);																																									\
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
				values(@orderID, '2021-12-21', GETDATE(), '2021-02-11', @IdCust);																																						\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[Payments](orderRef, meanOfPayment, paymentDate)																																			\
				values(@orderID, 'cash', '2022-01-02');																																													\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[order_product](orderRef, colorProductID, productVAT, reduceProductPrice, copyNumber)																										\
				values(@orderID, @colorID, @VAT, @reducePrice, @nbcopy);																																								\
																																																										\
																																																										\
			Update Projet_POO_G6.dbo.Orders																																																\
				set Orders.totalET = (Select SUM(reduceProductPrice) From Projet_POO_G6.dbo.order_product where orderRef = @orderID group by orderRef)																					\
			where orderRef = @orderID;																																												\
																																																										\
			/*Insert into[Projet_POO_G6].[dbo].[Orders](orderRef, deliveryDate, orderDate, completPaymentDate, custNumber)																												\
				values(@orderID, '" + this->deliveryDate + "', GETDATE(), '"+ this->completePaymentDate +"', @IdCust);																														\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[Payments](orderRef, meanOfPayment, paymentDate)																																			\
				values(@orderID, '"+ this->meanOfPayment +"', '"+ this->paymentDate +"');																																					\
																																																										\
			Insert into[Projet_POO_G6].[dbo].[order_product](orderRef, colorProductID, productVAT, reduceProductPrice, copyNumber)																										\
				values(@orderID, @colorID, @VAT, @reducePrice, @nbcopy);																																								\
																																																										\
																																																										\
			Update Projet_POO_G6.dbo.Orders																																																\
				set Orders.totalET = (Select SUM(reduceProductPrice) From Projet_POO_G6.dbo.order_product where orderRef = @orderID group by orderRef)																					\
			where orderRef = @orderID; */";
}

System::String^ NS_Comp::CLmapORDER::insertItem(void)
{
    return "declare @Refprod as int; set @Refprod = "+ this->productRef +";																					\
			declare @orderID as varchar(20); set @orderID = (Select * From ##tempOrder);																	\
			declare @nbcopy as int; set @nbcopy = "+ this->copyNumber +";																					\
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
				values(@orderID, @colorID, @VAT, @reducePrice, @nbcopy);																					\
																																							\
			/*Calculate the priceET of commande*/																											\
			Update Projet_POO_G6.dbo.Orders																													\
				set Orders.totalET = (Select SUM(reduceProductPrice) From Projet_POO_G6.dbo.order_product where orderRef = @orderID group by orderRef)		\
			where orderRef = @orderID; ";
}

System::String^ NS_Comp::CLmapORDER::insertPayment(void)
{
    return "declare @OrderID as varchar(20); set @OrderID = (Select * From ##tempOrder);		\
																								\
			Insert into[Projet_POO_G6].[dbo].[Payments](orderRef, meanOfPayment, paymentDate)	\
			values(@OrderID, '"+ this->meanOfPayment +"', '"+ this->paymentDate +"');";
}

System::String^ NS_Comp::CLmapORDER::deleteOrder(void)
{
	return "delete From Projet_POO_G6.dbo.Orders where orderRef='"+ this->orderRef +"';";
}

System::String^ NS_Comp::CLmapORDER::updateOrder(void)
{
    return "";
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

void NS_Comp::CLmapORDER::setProductColor(System::String^ color)
{
	this->colorProd = color;
}

void NS_Comp::CLmapORDER::setProductRef(int CpNbr)
{
    this->copyNumber = CpNbr;
}

void NS_Comp::CLmapORDER::setCopyNumber(int CpNbr)
{
    this->copyNumber = CpNbr;
}



int NS_Comp::CLmapORDER::getCustID(void) { return this->custID;  }

System::String^ NS_Comp::CLmapORDER::getOrderRef(void) { return this->orderRef; }

System::String^ NS_Comp::CLmapORDER::getDeliveryDate(void) { return this->deliveryDate; }

System::String^ NS_Comp::CLmapORDER::getCompletePaymentDate(void) { return this->completePaymentDate; }

System::String^ NS_Comp::CLmapORDER::getMeanOfPayment(void) { return this->meanOfPayment; }

System::String^ NS_Comp::CLmapORDER::getPaymentDate(void) { return this->paymentDate; }

System::String^ NS_Comp::CLmapORDER::getProductColor(void) { return this->colorProd; }

int NS_Comp::CLmapORDER::getProductRef(void) { return this->productRef;  }

int NS_Comp::CLmapORDER::getCopyNumber(void) { return this->copyNumber; }
