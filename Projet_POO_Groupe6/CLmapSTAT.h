#pragma once

namespace NS_Comp
{
	ref class CLmapSTAT
	{
	private :
		//System::String^ sSql;
	public :
		System::String^ selecAverageBasket(void);
		System::String^ selectCalculateTurnover(void);
		System::String^ selectProductUnderThreshold(void);
		System::String^ selectMoreSellProducts(void);
		System::String^ selectLessSellProducts(void);
		System::String^ selectTotalAmount(void);
		System::String^ selectRetailValueInventory(void);
		System::String^ selectPurchaseValueInventory(void);

	};
}
