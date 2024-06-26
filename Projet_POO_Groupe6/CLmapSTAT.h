#pragma once

namespace NS_Comp
{
	ref class CLmapSTAT
	{
	private :
		System::String^ sSql;

		//Customer info
		System::String^ lastName;
		System::String^ firstName;
		System::String^ birthDate;

		//Date
		int month;
		int year;

	public :
		System::String^ selecAverageBasket(void);
		System::String^ selectCalculateTurnover(void);
		System::String^ selectProductUnderThreshold(void);
		System::String^ selectMoreSellProducts(void);
		System::String^ selectLessSellProducts(void);
		System::String^ selectTotalAmount(void);
		System::String^ selectRetailValueInventory(void);
		System::String^ selectPurchaseValueInventory(void);

		//Setters
		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setBirthDate(System::String^);
		void setMonth(int);
		void setYear(int);

		//Getters
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getBirthDate(void);
		int getMonth(void);
		int getYear(void);
	};
}
