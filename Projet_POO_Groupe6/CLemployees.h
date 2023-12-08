#pragma once
#include "CLcad.h"
#include "CLmapEMP.h"

namespace NS_Svc
{
	ref class CLemployees
	{
	private :
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapEMP^ oEmp;
	public :
		CLemployees(void);
		System::Data::DataSet^ displayEmp(System::String^ dataTableName, System::String^ hireDate);
		System::Data::DataSet^ displayAllEmp(System::String^ dataTableName);
		void addEmp(System::String^ chiefID, System::String^ firstName, System::String^ lastName, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode);
		void eraseEmp(System::String^ firstName, System::String^lastName, System::String^hireDate);
		void updateEmp(int employeeID, System::String^ chiefID, System::String^ firstName, System::String^ lastName, System::String^ hireDate, int streetNumber, System::String^ streetName, System::String^ cityName, System::String^ ZipCode);
	};
}
