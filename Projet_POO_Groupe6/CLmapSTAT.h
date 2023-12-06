#pragma once

namespace NS_Comp
{
	ref class CLmapSTAT
	{
	private :
		//System::String^ sSql;
	public :
		System::String^ selecAverageBasket(void);
		System::String^ selectInventoryCostValue(void);
		System::String^ selectInventorySellValue(void);
		System::String^ selectProductsMoreSell(void);
		System::String^ selectProductsLessSell(void);
		System::String^ selectTotalAmountID(void);
		System::String^ selectTotalAmount(void);
		System::String^ selectProductUnderThreshold(void);
	};
}
