#pragma once

namespace NS_Comp
{
	ref class CLmapPRODUCT
	{
	private:
		System::String^ sSql;
		int productRef;
		System::String^ productName;
		float PriceET;
		int stockQuantity;
		int reorderThreshold;
		float VATrate;
		System::String^ color;

	public:
		System::String^ selectProducts(void);
		System::String^ selectProduct(void);
		System::String^ insertProduct(void);
		System::String^ deleteProduct(void);
		System::String^ updateProduct(void);
		void setProductRef(int);
		void setProductName(System::String^);
		void setPriceET(float);
		void setStockQuantity(int);
		void setReorderThreshold(int);
		void setVATrate(float);
		void setColor(System::String^);
		int getProductRef(void);
		System::String^ getProductName(void);
		float getPriceET(void);
		int getStockQuantity(void);
		int getReorderThreshold(void);
		float getVATrate(void);
		System::String^ getColor(void);
	};
}