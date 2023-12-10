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
		System::Data::DataSet^ displayEmp(System::String^ );
		System::Data::DataSet^ displayemployee(System::String^, System::String^, System::String^, System::String^);
		void addEmp(int , System::String^ , System::String^ , System::String^ , int , System::String^ , System::String^ , System::String^ );
		void eraseEmp(System::String^ , System::String^, System::String^);
		void updateEmp(int , int , System::String^ , System::String^ , System::String^ , int , System::String^ , System::String^ , System::String^ );
	};
}
