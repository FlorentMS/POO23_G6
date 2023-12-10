#pragma once
namespace NS_Comp {
	ref class CLmapSIMU
	{
	private : 
		System::String^ sSql;
		float TVArate = 1.0;
		float Margin = 1.0;
		float UnknowMarkdown = 1.0;
		float TradDiscount = 1.0;
	public : 
		System::String^ selectTotalPriceATI(void);

		void setTVArate(float);
		void setMargin(float);
		void setUnknowMarkdown(float);
		void setTradDiscount(float);

		float getTVArate();
		float getMargin();
		float getUnknowMarkdown();
		float getTradDiscount();
	};
}