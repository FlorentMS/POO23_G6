#pragma once
namespace NS_Comp
{
	ref class CLmapEMP
	{
	private :
		//System::String^ sSql;
		int Id;
		System::String^ lastName;
		System::String^ firstName;
		int streetNumber;
		System::String^ streetName;
		System::String^ ZipCode;
		System::String^ cityName;
		System::String^ hireDate;
		System::String^ ChiefID;
	public :
		System::String^ selectEmployees(void);
		System::String^ insertEmployee(void);
		System::String^ deleteEmployee(void);
		System::String^ updateEmployee(void);
		void setId(int id);
		void setLastName(System::String^ lastName);
		void setFirstName(System::String^ firstName);
		void setStreetNumber(int streetNumber);
		void setStreetName(System::String^ streetName);
		void setZipCode(System::String^ ZipCode);
		void setCityName(System::String^ CityName);
		void setHireName(System::String^ HireDate);
		void setChiefId(System::String^ ChiefId);
		int getId(void);
		System::String^ getLastName(void);
		System::String^ getFirstName(void);
		int getStreetNumber(void);
		System::String^ getStreetName(void);
		System::String^ getZipCode(void);
		System::String^ getCityName(void);
		System::String^ getHireDate(void);
		System::String^ getChiefId(void);
	};
}