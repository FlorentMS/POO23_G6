#pragma once
#include "CLcad.h"
#include "CLmapSIMU.h"

namespace NS_Svc {
	ref class CLsimulations
	{
	private: 
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp::CLmapSIMU^ oSimu;

	public :
		CLsimulations();
		System::Data::DataSet^ makeSimulation(System::String^ dataTableName);
		void changeTVA(float percentage);
		void changeMargin(float percentage);
		void changeUnknowMarkdown(float percentage);
		void changeTradDiscount(float percentage);
	};
}
