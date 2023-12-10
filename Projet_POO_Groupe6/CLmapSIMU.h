#pragma once
namespace NS_Comp {
	ref class CLmapSIMU
	{
	private : 
		System::String^ sSql;
		float TVArate;
		float Margin;
		float UnknowMarkdown;
		float TradDiscount;
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