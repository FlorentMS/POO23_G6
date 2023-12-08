#pragma once
namespace NS_Comp {
	ref class CLmapCUST
	{
	private:
		System::String^ sSql;

		//Customer info
		int custNumber;
		System::String^ lastName;
		System::String^ firstName;
		System::String^ birthDate;

		//Delivery adress
		int streetNumberDel;
		System::String^ streetNameDel;
		System::String^ ZipCodeDel;
		System::String^ cityNameDel;

		//Billing adress
		int streetNumberBil;
		System::String^ streetNameBil;
		System::String^ ZipCodeBil;
		System::String^ cityNameBil;

		//Socity info
		System::String^ socityName;
		System::String^ serviceNum;

	public:
		System::String^ selectCustomers();
		System::String^ selectCustomer();
		System::String^ insertCustomer();
		System::String^ deleteCustomer();
		System::String^ updateCustomer();


		// Setter and getter Customer
		void setCustNumber(int);
		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setBirthDate(System::String^);

		int getCustNumber(void);
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		System::String^ getBirthDate(void);


		// Setter and getter Delivery
		void setstreetNumberDel(int);
		void setStreetNameDel(System::String^);
		void setZipCodeDel(System::String^);
		void setCityNameDel(System::String^);

		int getstreetNumberDel(void);
		System::String^ getStreetNameDel(void);
		System::String^ getZipCodeDel(void);
		System::String^ getCityNameDel(void);


		// Setter and getter Billing
		void setstreetNumberBil(int);
		void setStreetNameBil(System::String^);
		void setZipCodeBil(System::String^);
		void setCityNameBil(System::String^);

		int getstreetNumberBil(void);
		System::String^ getStreetNameBil(void);
		System::String^ getZipCodeBil(void);
		System::String^ getCityNameBil(void);


		// Setter and getter Socity
		void setSocityName(System::String^);
		void setServiceNum(System::String^);

		System::String^ getSocityName(void);
		System::String^ getServiceNum(void);
	};
}
