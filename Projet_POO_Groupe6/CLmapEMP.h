#pragma once

namespace NS_Comp
{
	ref class CLmapEMP
	{
	private :
		System::String^ sSql;
		int Id;
		System::String^ lastName;
		System::String^ firstName;
		int streetNumber;
		System::String^ streetName;
		System::String^ ZipCode;
		System::String^ cityName;
		System::String^ hireDate;
		int ChiefID;
	public :
		System::String^ selectEmployees(void);
		System::String^ selectEmployee(void);
		System::String^ insertEmployee(void);
		System::String^ deleteEmployee(void);
		System::String^ updateEmployee(void);
		void setId(int id);
		void setLastName(System::String^);
		void setFirstName(System::String^);
		void setStreetNumber(int);
		void setStreetName(System::String^);
		void setZipCode(System::String^);
		void setCityName(System::String^);
		void setHireDate(System::String^);
		void setChiefId(int);
		int getId(void);
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		int getStreetNumber(void);
		System::String^ getStreetName(void);
		System::String^ getZipCode(void);
		System::String^ getCityName(void);
		System::String^ getHireDate(void);
		int getChiefId(void);
	};
}