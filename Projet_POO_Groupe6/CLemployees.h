#pragma once
#include "CLcad.h"
#include "CLmapEMP.h"

namespace NS_svc
{
	ref class CLemployees
	{
	private :
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapEMP^ oEmp;
	public :
		CLemployees(void);
		System::Data::DataSet^ displayEmployees(System::String^ dataTableName);
		void addEmployee(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode);
		void eraseEmployee(System::String^ firstName, System::String^lastName, System::String^hireDate);
		void updateEmployee(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode);
	};
}
