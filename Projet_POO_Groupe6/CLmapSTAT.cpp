#include "pch.h"
#include "CLmapSTAT.h"

System::String^ NS_Comp::CLmapSTAT::selecAverageBasket(void)
{
	return "SELECT\
			SUM(CAST(op.reduceProductPrice AS DECIMAL(15, 2))) / COUNT(DISTINCT o.orderRef) AS PanierMoyenApresRemise\
			FROM\
			Orders o\
			JOIN\
			order_product op ON o.orderRef = op.orderRef; ";
}

System::String^ NS_Comp::CLmapSTAT::selectCalculateTurnover(void)
{
	return "SELECT \
			SUM(CAST(o.totalET AS DECIMAL(15, 2))) AS ChiffreAffaires\
			FROM Orders o\
			WHERE MONTH(o.orderDate) = " + this->month + " AND YEAR(o.orderDate) = " + this->year + "; ";
}

System::String^ NS_Comp::CLmapSTAT::selectProductUnderThreshold(void)
{
	return "SELECT cp.colorProductID, p.productRef, p.productName, cp.color, cp.stockQuantity, p.reorderThreshold\
			FROM Products p\
			JOIN characteristicsProd cp ON p.productRef = cp.productRef\
			WHERE cp.stockQuantity < p.reorderThreshold; ";
}

System::String^ NS_Comp::CLmapSTAT::selectMoreSellProducts(void)
{
	return "SELECT TOP 10 p.productRef, p.productName, ISNULL(SUM(op.copyNumber), 0) AS TotalVentes\
			FROM Products p\
			LEFT JOIN characteristicsProd cp ON p.productRef = cp.productRef\
			LEFT JOIN order_product op ON cp.colorProductID = op.colorProductID\
			LEFT JOIN Orders o ON op.orderRef = o.orderRef\
			GROUP BY p.productRef, p.productName\
			ORDER BY TotalVentes DESC; ";
}

System::String^ NS_Comp::CLmapSTAT::selectLessSellProducts(void)
{
	return "SELECT TOP 10 p.productRef, p.productName, ISNULL(SUM(op.copyNumber), 0) AS TotalVentes\
			FROM Products p\
			LEFT JOIN characteristicsProd cp ON p.productRef = cp.productRef\
			LEFT JOIN order_product op ON cp.colorProductID = op.colorProductID\
			LEFT JOIN Orders o ON op.orderRef = o.orderRef\
			GROUP BY p.productRef, p.productName\
			ORDER BY TotalVentes ASC; ";
}

System::String^ NS_Comp::CLmapSTAT::selectTotalAmount(void)
{
	return "SELECT c.lastName, c.firstName, SUM(CAST(o.totalET AS DECIMAL(15, 2))) AS MontantTotalDesAchats\
			FROM Orders o\
			INNER JOIN Customers c ON o.custNumber = c.custNumber\
			WHERE c.lastName = '" + this->lastName + "' AND c.firstName = '" + this->firstName + "' AND c.birthDate = '" + this->birthDate + "'\
			GROUP BY c.lastName, c.firstName; ";
}

System::String^ NS_Comp::CLmapSTAT::selectRetailValueInventory(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

System::String^ NS_Comp::CLmapSTAT::selectPurchaseValueInventory(void)
{
	return ""; //A compléter avec la bonne requête SQL
}

void NS_Comp::CLmapSTAT::setLastName(System::String^ LName)
{
	this->lastName = LName;
}

void NS_Comp::CLmapSTAT::setFirstName(System::String^ FName)
{
	this->firstName = FName;
}

void NS_Comp::CLmapSTAT::setBirthDate(System::String^ Bdate)
{
	this->birthDate = Bdate;
}

void NS_Comp::CLmapSTAT::setMonth(int month)
{
	this->month = month;
}

void NS_Comp::CLmapSTAT::setYear(int year)
{
	this->year = year;
}

System::String^ NS_Comp::CLmapSTAT::getLastName(void)
{
	return this->lastName;
}

System::String^ NS_Comp::CLmapSTAT::getFirstName(void)
{
	return this->firstName;
}

System::String^ NS_Comp::CLmapSTAT::getBirthDate(void)
{
	return this->birthDate;
}

int NS_Comp::CLmapSTAT::getMonth(void)
{
	return this->month;
}

int NS_Comp::CLmapSTAT::getYear(void)
{
	return this->year;
}
