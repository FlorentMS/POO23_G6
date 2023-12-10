#pragma once
#include "CLemployees.h"
#include "CLcustomers.h"
#include "CLstock.h"
#include "CLorders.h"
#include "CLstatistics.h"
#include "CLsimulations.h"

delegate void ValuePercentage(float);

namespace ProjetPOOGroupe6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			// 
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	/// <summary>
	/// Own creation objects
	/// </summary>
	private: NS_Svc::CLorders^ oSVCorders;
	private: NS_Svc::CLcustomers^ oSVCcustomers;
	private: NS_Svc::CLemployees^ oSVCemployees;
	//private: NS_Svc::CLstock^ oSVCstock;
	private: NS_Svc::CLstatistics^ oSVCstatistics;
	private: NS_Svc::CLsimulations^oSVCsimulations; 

	private: System::Data::DataSet^ oDs_orders;
	private: System::Data::DataSet^ oDs_employees;
	private: System::Data::DataSet^ oDs_customers;
	private: System::Data::DataSet^ oDs_stock;
	private: System::Data::DataSet^ oDs_statistics;
	private: System::Data::DataSet^ oDs_simulations;

	private: array<ValuePercentage^>^ allPercentage = gcnew array<ValuePercentage^>(4); 



	/// <summary>
	/// Tab Control
	/// </summary>
	private: System::Windows::Forms::TabControl^ mainTabControl;
	protected:
	//
		private: System::Windows::Forms::TabPage^ homeTab;
		private: System::Windows::Forms::TabPage^ customersTab;
		private: System::Windows::Forms::TabPage^ employeesTab;
		private: System::Windows::Forms::TabPage^ ordersTab;
		private: System::Windows::Forms::TabPage^ stockTab;
		private: System::Windows::Forms::TabPage^ statisticTab;
		private: System::Windows::Forms::TabPage^ simulationsTab;




	/// <summary>
	/// Buttons on tab Simulation
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_simu;
	
	//Groups
	private: System::Windows::Forms::GroupBox^ VAT_groupBox;
		private: System::Windows::Forms::RadioButton^ VAT1;
		private: System::Windows::Forms::RadioButton^ VAT2;
		private: System::Windows::Forms::RadioButton^ VAT3;
		private: System::Windows::Forms::RadioButton^ CustomVAT_radioButton;
		private: System::Windows::Forms::TextBox^ text_CustomVAT;

	private: System::Windows::Forms::GroupBox^ markdown_groupBox;
		private: System::Windows::Forms::RadioButton^ markdown3;
		private: System::Windows::Forms::RadioButton^ markdown2;
		private: System::Windows::Forms::RadioButton^ markdown1;
		private: System::Windows::Forms::RadioButton^ customMarkdown_radioButton;
		private: System::Windows::Forms::TextBox^ text_CustomMarkdown;

	private: System::Windows::Forms::GroupBox^ dicount_groupBox;
		private: System::Windows::Forms::RadioButton^ discount2;
		private: System::Windows::Forms::RadioButton^ discount1;
		private: System::Windows::Forms::RadioButton^ CustomDiscount_radioButton;
		private: System::Windows::Forms::TextBox^ text_CustomDiscount;

	private: System::Windows::Forms::GroupBox^ margin_groupBox;
		private: System::Windows::Forms::RadioButton^ grossMargin3;
		private: System::Windows::Forms::RadioButton^ grossMargin2;
		private: System::Windows::Forms::RadioButton^ grossMargin1;
		private: System::Windows::Forms::RadioButton^ customMargin_radioButton;
		private: System::Windows::Forms::TextBox^ text_CustomMargin;

	//Buttons
	private: System::Windows::Forms::Button^ execution_button;




	/// <summary>
	/// Buttons on tab Statistics
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_stat;


	//Groups
	private: System::Windows::Forms::GroupBox^ DateStatistics_groupBox;
		private: System::Windows::Forms::Label^ monthStatistics;
		private: System::Windows::Forms::Label^ yearStatistics;
		private: System::Windows::Forms::TextBox^ text_turnoverMonth;
		private: System::Windows::Forms::TextBox^ text_turnoverYear;

	private: System::Windows::Forms::GroupBox^ CustomerStatistics_groupBox;
		private: System::Windows::Forms::Label^ firstNameStatistics;
		private: System::Windows::Forms::Label^ lastNameStatistics;
		private: System::Windows::Forms::Label^ birthDateStatistics;
		private: System::Windows::Forms::TextBox^ text_statisticsCustFirstName;
		private: System::Windows::Forms::TextBox^ text_statisticsCustLastName;
		private: System::Windows::Forms::DateTimePicker^ birthStatisitcs_datePicker;



	//Buttons
	private: System::Windows::Forms::Button^ button_turnover;
	private: System::Windows::Forms::Button^ button_commercialValueStock;
	private: System::Windows::Forms::Button^ button_bestSelling;
	private: System::Windows::Forms::Button^ button_customerTotalAmount;
	private: System::Windows::Forms::Button^ button_purchaseValueStock;
	private: System::Windows::Forms::Button^ button_lowestSelling;
	private: System::Windows::Forms::Button^ button_averageCart;
	private: System::Windows::Forms::Button^ button_underReorderThreshold;




	/// <summary>
	/// Buttons on tab Stock
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_stock;

	//Groups
	private: System::Windows::Forms::GroupBox^ ItemAddStock_GroupBox;
		private: System::Windows::Forms::Label^ itemNameAddStock;
		private: System::Windows::Forms::Label^ VATrateAddStock;
		private: System::Windows::Forms::Label^ itemPriceETAddStock;
		private: System::Windows::Forms::Label^ quantityAddStock;
		private: System::Windows::Forms::Label^ reorderThresholdAddStock;
		private: System::Windows::Forms::Label^ itemColorAddStock;
		private: System::Windows::Forms::TextBox^ text_ItemNameAddStock;
		private: System::Windows::Forms::TextBox^ text_vatRateAddStock;
		private: System::Windows::Forms::TextBox^ text_ItemPriceExcludingTaxesAddStock;
		private: System::Windows::Forms::NumericUpDown^ UpDown_quantityAddStock;
		private: System::Windows::Forms::TextBox^ text_reorderThresholdAddStock;
		private: System::Windows::Forms::ComboBox^ itemColorAddStock_comboBox;

	private: System::Windows::Forms::GroupBox^ ItemCHangeSotck_groupBox;
		private: System::Windows::Forms::Label^ thresholdChangeStock;
		private: System::Windows::Forms::TextBox^ text_thresholdChangeStock;
		private: System::Windows::Forms::Label^ itemColorChangeSotck;
		private: System::Windows::Forms::Label^ VATChangeStock;
		private: System::Windows::Forms::TextBox^ text_VATChangeStock;
		private: System::Windows::Forms::Label^ priceChangeStock;
		private: System::Windows::Forms::TextBox^ text_priceChangeStock;
		private: System::Windows::Forms::Label^ itemNameChangeSotck;
		private: System::Windows::Forms::TextBox^ text_itemNameChangeSotck;
		private: System::Windows::Forms::NumericUpDown^ UpDown_quantityChangeStock;
		private: System::Windows::Forms::Label^ quantityChangeStock;
		private: System::Windows::Forms::ComboBox^ itemColorChangeStock_comboBox;
		private: System::Windows::Forms::Label^ itemIdChangeSotck;
		private: System::Windows::Forms::TextBox^ text_itemIdChangeSotck;

	private: System::Windows::Forms::GroupBox^ SearchStock_groupBox;
		private: System::Windows::Forms::Label^ itemIdSearchStock;
		private: System::Windows::Forms::TextBox^ text_itemIdSearchStock;

	//Buttons
	private: System::Windows::Forms::Button^ displayProducts;
	private: System::Windows::Forms::Button^ changeProduct;
	private: System::Windows::Forms::Button^ eraseProduct;
	private: System::Windows::Forms::Button^ addProduct;




	/// <summary>
	/// Buttons on tab Orders
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_ord;

	//Groups
	private: System::Windows::Forms::GroupBox^ GlobalInfoAddOrder_GroupBox;
		private: System::Windows::Forms::Label^ customerIdAddOrders;
		private: System::Windows::Forms::Label^ deliveryDateAddOrder;
		private: System::Windows::Forms::TextBox^ text_customerIdAddOrders;
		private: System::Windows::Forms::DateTimePicker^ deliveryAddOrder_DatePicker;
		
		private: System::Windows::Forms::GroupBox^ meanOfPaymentAddOrder_GroupBox;
			private: System::Windows::Forms::Label^ meanOfPaymentAddOrder;
			private: System::Windows::Forms::Label^ paymentDueDateAddOrder;
			private: System::Windows::Forms::ComboBox^ comboBox_meanOfPaymentAddOrder;
			private: System::Windows::Forms::DateTimePicker^ PaymentDueDateAddOrder_datePicker;

		private: System::Windows::Forms::GroupBox^ ItemAddOrder_GroupeBox;
			private: System::Windows::Forms::Label^ ItemColorAddOrder;
			private: System::Windows::Forms::Label^ itemIDAddOrder;
			private: System::Windows::Forms::Label^ quantityItemsAddOrder;
			private: System::Windows::Forms::ComboBox^ ItemColorAddOrder_comboBox;
			private: System::Windows::Forms::TextBox^ text_ItemIdAddOrder;
			private: System::Windows::Forms::NumericUpDown^ UpDown_quantityItemAddOrders;

	private: System::Windows::Forms::GroupBox^ meanOfPaymentAddPayOrder_GroupBox;
		private: System::Windows::Forms::DateTimePicker^ paymentDueAddPayOrder_datePicker;
		private: System::Windows::Forms::Label^ meanOfPaymentAddPayOrder;
		private: System::Windows::Forms::Label^ paymentDueDateAddPayOrder;
		private: System::Windows::Forms::ComboBox^ meanOfPaymentAddPayOrder_comboBox;

	private: System::Windows::Forms::GroupBox^ ItemAddItemOrder_GroupBox;
		private: System::Windows::Forms::ComboBox^ ItemColorAddItemOrder_comboBox;
		private: System::Windows::Forms::Label^ ItemColorAddItemOrder;
		private: System::Windows::Forms::NumericUpDown^ UpDown_quanityAddItemOrder;
		private: System::Windows::Forms::Label^ quantityAddItemOrder;
		private: System::Windows::Forms::Label^ itemIdAddItemOrder;
		private: System::Windows::Forms::TextBox^ text_itemIdAddItemOrder;

	private: System::Windows::Forms::GroupBox^ searchOrder_groupBox;
		private: System::Windows::Forms::Label^ orderIdSearchOrder;
		private: System::Windows::Forms::TextBox^ text_orderIdSearchOrder;
	

	private: System::Windows::Forms::GroupBox^ infoChangeOrder_groupBox;
		private: System::Windows::Forms::Label^ orderIdChangeOrder;
		private: System::Windows::Forms::Label^ deliveryDateChangeOrder;
		private: System::Windows::Forms::Label^ completePayDateChangeOrder;
		private: System::Windows::Forms::TextBox^ text_orderIdChangeOrder;
		private: System::Windows::Forms::DateTimePicker^ deliveryChangeOrder_datePicker;
		private: System::Windows::Forms::DateTimePicker^ completePayChangeOrder_datePicker;





	//Buttons
	private: System::Windows::Forms::Button^ displayOrder;
	private: System::Windows::Forms::Button^ changeOrder;
	private: System::Windows::Forms::Button^ eraseOrder;
	private: System::Windows::Forms::Button^ addOrder;
	private: System::Windows::Forms::Button^ addPayment;
	private: System::Windows::Forms::Button^ addItem;
	private: System::Windows::Forms::Button^ ErasePaymentOrder;
	private: System::Windows::Forms::Button^ EraseItemOrder;
	private: System::Windows::Forms::RadioButton^ Item_radioButton;
	private: System::Windows::Forms::RadioButton^ Pay_radioButton;




	/// <summary>
	/// Buttons on tab Customers
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_cust;


	//Groups
	private: System::Windows::Forms::GroupBox^ customerGroupBox;
		private: System::Windows::Forms::Label^ custID;
		private: System::Windows::Forms::Label^ lastNameCust;
		private: System::Windows::Forms::Label^ firstNameCust;
		private: System::Windows::Forms::Label^ birthDateCust;
		private: System::Windows::Forms::TextBox^ text_custRef;
		private: System::Windows::Forms::TextBox^ text_custLastName;
		private: System::Windows::Forms::TextBox^ text_custFirstName;
		private: System::Windows::Forms::DateTimePicker^ birthDateCust_datePicker;

	private: System::Windows::Forms::GroupBox^ socityGroupBox;
		private: System::Windows::Forms::Label^ socityName;
		private: System::Windows::Forms::Label^ serviceNum;
		private: System::Windows::Forms::TextBox^ text_socityName;
		private: System::Windows::Forms::TextBox^ text_serviceNumber;

	private: System::Windows::Forms::GroupBox^ deliveryGroupBox;
		private: System::Windows::Forms::Label^ streetNumDel;
		private: System::Windows::Forms::Label^ streetNameDel;
		private: System::Windows::Forms::Label^ cityNameDel;
		private: System::Windows::Forms::Label^ ZipCodeDel;
		private: System::Windows::Forms::TextBox^ text_deliveryStreetName;
		private: System::Windows::Forms::TextBox^ text_deliveryStreetN;
		private: System::Windows::Forms::TextBox^ text_deliveryCityName;
		private: System::Windows::Forms::TextBox^ text_deliveryZIPcode;

	private: System::Windows::Forms::GroupBox^ BillingGroupBox;
		private: System::Windows::Forms::Label^ streetNumBil;
		private: System::Windows::Forms::Label^ streetNameBil;
		private: System::Windows::Forms::Label^ cityNameBil;
		private: System::Windows::Forms::Label^ ZipCodeBil;
		private: System::Windows::Forms::TextBox^ text_bilingCityName;
		private: System::Windows::Forms::TextBox^ text_bilingZIPcode;
		private: System::Windows::Forms::TextBox^ text_bilingStreetName;
		private: System::Windows::Forms::TextBox^ text_bilingStreetN;

	private: System::Windows::Forms::GroupBox^ InfoSearchCust_groupBox;
		private: System::Windows::Forms::Label^ firstNameSearchCust;
		private: System::Windows::Forms::Label^ lastNameSearchCust;
		private: System::Windows::Forms::Label^ birthDateSearchCust;
		private: System::Windows::Forms::TextBox^ text_firstNameSearchCust;
		private: System::Windows::Forms::TextBox^ text_lastNameSearchCust;
		private: System::Windows::Forms::DateTimePicker^ birthSearchCust_datePicker;

	private: System::Windows::Forms::GroupBox^ socityChangeCust_groupBox;
		private: System::Windows::Forms::TextBox^ text_serviceNumberChangeCust;
		private: System::Windows::Forms::TextBox^ text_socityNameChangeCust;
		private: System::Windows::Forms::Label^ serviceNumberChangeCust;
		private: System::Windows::Forms::Label^ socityNameChangeCust;

	private: System::Windows::Forms::GroupBox^ infoChangeCust_groupBox;
		private: System::Windows::Forms::Label^ customerIdChangeCust;
		private: System::Windows::Forms::TextBox^ text_customerIdChangeCust;
		private: System::Windows::Forms::DateTimePicker^ birthChangeCust_datePicker;
		private: System::Windows::Forms::TextBox^ text_firstNameChangeCust;
		private: System::Windows::Forms::Label^ birthDateChangeCust;
		private: System::Windows::Forms::Label^ firstNameChangeCust;
		private: System::Windows::Forms::Label^ lastNameChangeCust;
		private: System::Windows::Forms::TextBox^ text_lastNameChangeCust;

	private: System::Windows::Forms::GroupBox^ BillingChangeCust_groupBox;
		private: System::Windows::Forms::TextBox^ text_cityNameBillingChangeCust;
		private: System::Windows::Forms::TextBox^ text_ZipCodeBillingChangeCust;
		private: System::Windows::Forms::Label^ cityNameBillingChangeCust;
		private: System::Windows::Forms::TextBox^ text_streetNameBillingChangeCust;
		private: System::Windows::Forms::Label^ ZipCodeBillingChangeCust;
		private: System::Windows::Forms::TextBox^ text_streetNumBillingChangeCust;
		private: System::Windows::Forms::Label^ streetNumBillingChangeCust;
		private: System::Windows::Forms::Label^ streetNameBillingChangeCust;

	private: System::Windows::Forms::GroupBox^ DelChangeCust_groupBox;
		private: System::Windows::Forms::TextBox^ text_cityNameDelChangeCust;
		private: System::Windows::Forms::TextBox^ text_ZipCodeDelChangeCust;
		private: System::Windows::Forms::TextBox^ text_streetNameDelChangeCust;
		private: System::Windows::Forms::TextBox^ text_streetNumDelChangeCust;
		private: System::Windows::Forms::Label^ cityNameDelChangeCust;
		private: System::Windows::Forms::Label^ ZipCodeDelChangeCust;
		private: System::Windows::Forms::Label^ streetNumDelChangeCust;
		private: System::Windows::Forms::Label^ streetNameDelChangeCust;

	//Buttons
	private: System::Windows::Forms::Button^ addCust;
	private: System::Windows::Forms::Button^ displayCust;
	private: System::Windows::Forms::Button^ changeCust;
	private: System::Windows::Forms::Button^ eraseCust;




	/// <summary>
	/// Buttons on tab Employees
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_emp;


	//Groups
	private: System::Windows::Forms::GroupBox^ empAdressAdd_GroupBox;
		private: System::Windows::Forms::Label^ firstNameAddEmp;
		private: System::Windows::Forms::Label^ lastNameAddEmp;
		private: System::Windows::Forms::Label^ chiefIdAddemp;
		private: System::Windows::Forms::TextBox^ text_FirstNameAddEmp;
		private: System::Windows::Forms::TextBox^ text_empLastName;
		private: System::Windows::Forms::TextBox^ text_chiefIdAddEmp;

	private: System::Windows::Forms::GroupBox^ infoAddEmp_GroupBox;
		private: System::Windows::Forms::Label^ cityNameAddEmp;
		private: System::Windows::Forms::Label^ streetNameAddEmp;
		private: System::Windows::Forms::Label^ ZIPcodeAddEmp;
		private: System::Windows::Forms::Label^ streetNumAddEmp;
		private: System::Windows::Forms::TextBox^ text_cityNameAddEmp;
		private: System::Windows::Forms::TextBox^ text_streetNameAddEmp;
		private: System::Windows::Forms::TextBox^ text_streetNumber;
		private: System::Windows::Forms::TextBox^ text_ZIPcodeAddEmp;

	private: System::Windows::Forms::GroupBox^ SearchCust_groupBox;
		private: System::Windows::Forms::Label^ hireDateSearchEmp;
		private: System::Windows::Forms::Label^ firstNameSearchEmp;
		private: System::Windows::Forms::Label^ lastNameSearchEmp;
private: System::Windows::Forms::DateTimePicker^ hireDateSearchEmp_datePicker;
private: System::Windows::Forms::TextBox^ text_firstNameSearchEmp;
private: System::Windows::Forms::TextBox^ text_lastNameSearchEmp;








	private: System::Windows::Forms::GroupBox^ InfoChangeEmp_groupBox;
		private: System::Windows::Forms::Label^ lastNameChangeEmp;
		private: System::Windows::Forms::Label^ hireDateChangeEmp;
		private: System::Windows::Forms::Label^ chiefIdChangeEmp;
		private: System::Windows::Forms::Label^ fistNameChangeEmp;
		private: System::Windows::Forms::DateTimePicker^ hireChangeEmp_datePicker;
		private: System::Windows::Forms::TextBox^ text_lastNameChangeEmp;
		private: System::Windows::Forms::TextBox^ text_fistNameChangeEmp;
		private: System::Windows::Forms::TextBox^ text_chiefIdChangeEmp;

	private: System::Windows::Forms::GroupBox^ AddressChangeEmp_groupBox;
		private: System::Windows::Forms::Label^ cityNameChangeEmp;
		private: System::Windows::Forms::Label^ StreetNameChangeEmp;
		private: System::Windows::Forms::Label^ ZipCodeChangeEmp;
		private: System::Windows::Forms::Label^ StreetNumChangeEmp;
		private: System::Windows::Forms::Label^ EmpIdChangeEmp;
		private: System::Windows::Forms::TextBox^ text_ZipCodeChangeEmp;
		private: System::Windows::Forms::TextBox^ text_cityNameChangeEmp;
		private: System::Windows::Forms::TextBox^ text_streetNameChangeEmp;
		private: System::Windows::Forms::TextBox^ text_streetNumChangeEmp;
		private: System::Windows::Forms::TextBox^ text_EmpIdChangeEmp;

	//Buttons
	private: System::Windows::Forms::Button^ displayEmp;
	private: System::Windows::Forms::Button^ changeEmp;
	private: System::Windows::Forms::Button^ eraseEmp;
	private: System::Windows::Forms::Button^ addEmp;

private: System::Windows::Forms::Label^ home_page;








	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->mainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->homeTab = (gcnew System::Windows::Forms::TabPage());
			this->home_page = (gcnew System::Windows::Forms::Label());
			this->customersTab = (gcnew System::Windows::Forms::TabPage());
			this->socityChangeCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_serviceNumberChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->text_socityNameChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->serviceNumberChangeCust = (gcnew System::Windows::Forms::Label());
			this->socityNameChangeCust = (gcnew System::Windows::Forms::Label());
			this->InfoSearchCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthSearchCust_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->displayCust = (gcnew System::Windows::Forms::Button());
			this->text_firstNameSearchCust = (gcnew System::Windows::Forms::TextBox());
			this->birthDateSearchCust = (gcnew System::Windows::Forms::Label());
			this->firstNameSearchCust = (gcnew System::Windows::Forms::Label());
			this->eraseCust = (gcnew System::Windows::Forms::Button());
			this->lastNameSearchCust = (gcnew System::Windows::Forms::Label());
			this->text_lastNameSearchCust = (gcnew System::Windows::Forms::TextBox());
			this->infoChangeCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->customerIdChangeCust = (gcnew System::Windows::Forms::Label());
			this->text_customerIdChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->birthChangeCust_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->text_firstNameChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->birthDateChangeCust = (gcnew System::Windows::Forms::Label());
			this->firstNameChangeCust = (gcnew System::Windows::Forms::Label());
			this->lastNameChangeCust = (gcnew System::Windows::Forms::Label());
			this->text_lastNameChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->BillingChangeCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_cityNameBillingChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->text_ZipCodeBillingChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->cityNameBillingChangeCust = (gcnew System::Windows::Forms::Label());
			this->text_streetNameBillingChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->ZipCodeBillingChangeCust = (gcnew System::Windows::Forms::Label());
			this->text_streetNumBillingChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->streetNumBillingChangeCust = (gcnew System::Windows::Forms::Label());
			this->streetNameBillingChangeCust = (gcnew System::Windows::Forms::Label());
			this->changeCust = (gcnew System::Windows::Forms::Button());
			this->DelChangeCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_cityNameDelChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->text_ZipCodeDelChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNameDelChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNumDelChangeCust = (gcnew System::Windows::Forms::TextBox());
			this->cityNameDelChangeCust = (gcnew System::Windows::Forms::Label());
			this->ZipCodeDelChangeCust = (gcnew System::Windows::Forms::Label());
			this->streetNumDelChangeCust = (gcnew System::Windows::Forms::Label());
			this->streetNameDelChangeCust = (gcnew System::Windows::Forms::Label());
			this->text_custRef = (gcnew System::Windows::Forms::TextBox());
			this->addCust = (gcnew System::Windows::Forms::Button());
			this->socityGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_serviceNumber = (gcnew System::Windows::Forms::TextBox());
			this->text_socityName = (gcnew System::Windows::Forms::TextBox());
			this->serviceNum = (gcnew System::Windows::Forms::Label());
			this->socityName = (gcnew System::Windows::Forms::Label());
			this->customerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthDateCust_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->text_custFirstName = (gcnew System::Windows::Forms::TextBox());
			this->birthDateCust = (gcnew System::Windows::Forms::Label());
			this->firstNameCust = (gcnew System::Windows::Forms::Label());
			this->lastNameCust = (gcnew System::Windows::Forms::Label());
			this->text_custLastName = (gcnew System::Windows::Forms::TextBox());
			this->custID = (gcnew System::Windows::Forms::Label());
			this->BillingGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_bilingCityName = (gcnew System::Windows::Forms::TextBox());
			this->text_bilingZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->cityNameBil = (gcnew System::Windows::Forms::Label());
			this->text_bilingStreetName = (gcnew System::Windows::Forms::TextBox());
			this->ZipCodeBil = (gcnew System::Windows::Forms::Label());
			this->text_bilingStreetN = (gcnew System::Windows::Forms::TextBox());
			this->streetNumBil = (gcnew System::Windows::Forms::Label());
			this->streetNameBil = (gcnew System::Windows::Forms::Label());
			this->deliveryGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_deliveryCityName = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryStreetName = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryStreetN = (gcnew System::Windows::Forms::TextBox());
			this->cityNameDel = (gcnew System::Windows::Forms::Label());
			this->ZipCodeDel = (gcnew System::Windows::Forms::Label());
			this->streetNumDel = (gcnew System::Windows::Forms::Label());
			this->streetNameDel = (gcnew System::Windows::Forms::Label());
			this->dgv_cust = (gcnew System::Windows::Forms::DataGridView());
			this->employeesTab = (gcnew System::Windows::Forms::TabPage());
			this->AddressChangeEmp_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_ZipCodeChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_cityNameChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNameChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNumChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->cityNameChangeEmp = (gcnew System::Windows::Forms::Label());
			this->StreetNameChangeEmp = (gcnew System::Windows::Forms::Label());
			this->ZipCodeChangeEmp = (gcnew System::Windows::Forms::Label());
			this->StreetNumChangeEmp = (gcnew System::Windows::Forms::Label());
			this->InfoChangeEmp_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_EmpIdChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->EmpIdChangeEmp = (gcnew System::Windows::Forms::Label());
			this->hireChangeEmp_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->text_lastNameChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_fistNameChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_chiefIdChangeEmp = (gcnew System::Windows::Forms::TextBox());
			this->lastNameChangeEmp = (gcnew System::Windows::Forms::Label());
			this->hireDateChangeEmp = (gcnew System::Windows::Forms::Label());
			this->chiefIdChangeEmp = (gcnew System::Windows::Forms::Label());
			this->fistNameChangeEmp = (gcnew System::Windows::Forms::Label());
			this->SearchCust_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->hireDateSearchEmp_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->displayEmp = (gcnew System::Windows::Forms::Button());
			this->text_lastNameSearchEmp = (gcnew System::Windows::Forms::TextBox());
			this->eraseEmp = (gcnew System::Windows::Forms::Button());
			this->text_firstNameSearchEmp = (gcnew System::Windows::Forms::TextBox());
			this->lastNameSearchEmp = (gcnew System::Windows::Forms::Label());
			this->hireDateSearchEmp = (gcnew System::Windows::Forms::Label());
			this->firstNameSearchEmp = (gcnew System::Windows::Forms::Label());
			this->changeEmp = (gcnew System::Windows::Forms::Button());
			this->addEmp = (gcnew System::Windows::Forms::Button());
			this->empAdressAdd_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_ZIPcodeAddEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_cityNameAddEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNameAddEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNumber = (gcnew System::Windows::Forms::TextBox());
			this->cityNameAddEmp = (gcnew System::Windows::Forms::Label());
			this->streetNameAddEmp = (gcnew System::Windows::Forms::Label());
			this->ZIPcodeAddEmp = (gcnew System::Windows::Forms::Label());
			this->streetNumAddEmp = (gcnew System::Windows::Forms::Label());
			this->infoAddEmp_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_empLastName = (gcnew System::Windows::Forms::TextBox());
			this->text_FirstNameAddEmp = (gcnew System::Windows::Forms::TextBox());
			this->text_chiefIdAddEmp = (gcnew System::Windows::Forms::TextBox());
			this->lastNameAddEmp = (gcnew System::Windows::Forms::Label());
			this->chiefIdAddemp = (gcnew System::Windows::Forms::Label());
			this->firstNameAddEmp = (gcnew System::Windows::Forms::Label());
			this->dgv_emp = (gcnew System::Windows::Forms::DataGridView());
			this->ordersTab = (gcnew System::Windows::Forms::TabPage());
			this->Item_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Pay_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->meanOfPaymentAddPayOrder_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->ErasePaymentOrder = (gcnew System::Windows::Forms::Button());
			this->paymentDueAddPayOrder_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->meanOfPaymentAddPayOrder = (gcnew System::Windows::Forms::Label());
			this->paymentDueDateAddPayOrder = (gcnew System::Windows::Forms::Label());
			this->meanOfPaymentAddPayOrder_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->addPayment = (gcnew System::Windows::Forms::Button());
			this->ItemAddItemOrder_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EraseItemOrder = (gcnew System::Windows::Forms::Button());
			this->ItemColorAddItemOrder_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ItemColorAddItemOrder = (gcnew System::Windows::Forms::Label());
			this->UpDown_quanityAddItemOrder = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityAddItemOrder = (gcnew System::Windows::Forms::Label());
			this->addItem = (gcnew System::Windows::Forms::Button());
			this->itemIdAddItemOrder = (gcnew System::Windows::Forms::Label());
			this->text_itemIdAddItemOrder = (gcnew System::Windows::Forms::TextBox());
			this->infoChangeOrder_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->deliveryChangeOrder_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->completePayChangeOrder_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->deliveryDateChangeOrder = (gcnew System::Windows::Forms::Label());
			this->completePayDateChangeOrder = (gcnew System::Windows::Forms::Label());
			this->text_orderIdChangeOrder = (gcnew System::Windows::Forms::TextBox());
			this->orderIdChangeOrder = (gcnew System::Windows::Forms::Label());
			this->searchOrder_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_orderIdSearchOrder = (gcnew System::Windows::Forms::TextBox());
			this->orderIdSearchOrder = (gcnew System::Windows::Forms::Label());
			this->displayOrder = (gcnew System::Windows::Forms::Button());
			this->eraseOrder = (gcnew System::Windows::Forms::Button());
			this->GlobalInfoAddOrder_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->deliveryAddOrder_DatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->deliveryDateAddOrder = (gcnew System::Windows::Forms::Label());
			this->text_customerIdAddOrders = (gcnew System::Windows::Forms::TextBox());
			this->customerIdAddOrders = (gcnew System::Windows::Forms::Label());
			this->meanOfPaymentAddOrder_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PaymentDueDateAddOrder_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->meanOfPaymentAddOrder = (gcnew System::Windows::Forms::Label());
			this->paymentDueDateAddOrder = (gcnew System::Windows::Forms::Label());
			this->comboBox_meanOfPaymentAddOrder = (gcnew System::Windows::Forms::ComboBox());
			this->ItemAddOrder_GroupeBox = (gcnew System::Windows::Forms::GroupBox());
			this->ItemColorAddOrder_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ItemColorAddOrder = (gcnew System::Windows::Forms::Label());
			this->UpDown_quantityItemAddOrders = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityItemsAddOrder = (gcnew System::Windows::Forms::Label());
			this->itemIDAddOrder = (gcnew System::Windows::Forms::Label());
			this->text_ItemIdAddOrder = (gcnew System::Windows::Forms::TextBox());
			this->changeOrder = (gcnew System::Windows::Forms::Button());
			this->addOrder = (gcnew System::Windows::Forms::Button());
			this->dgv_ord = (gcnew System::Windows::Forms::DataGridView());
			this->stockTab = (gcnew System::Windows::Forms::TabPage());
			this->SearchStock_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->itemIdSearchStock = (gcnew System::Windows::Forms::Label());
			this->text_itemIdSearchStock = (gcnew System::Windows::Forms::TextBox());
			this->eraseProduct = (gcnew System::Windows::Forms::Button());
			this->displayProducts = (gcnew System::Windows::Forms::Button());
			this->ItemCHangeSotck_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->itemColorChangeStock_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->thresholdChangeStock = (gcnew System::Windows::Forms::Label());
			this->text_thresholdChangeStock = (gcnew System::Windows::Forms::TextBox());
			this->itemColorChangeSotck = (gcnew System::Windows::Forms::Label());
			this->VATChangeStock = (gcnew System::Windows::Forms::Label());
			this->text_VATChangeStock = (gcnew System::Windows::Forms::TextBox());
			this->priceChangeStock = (gcnew System::Windows::Forms::Label());
			this->text_priceChangeStock = (gcnew System::Windows::Forms::TextBox());
			this->itemNameChangeSotck = (gcnew System::Windows::Forms::Label());
			this->text_itemNameChangeSotck = (gcnew System::Windows::Forms::TextBox());
			this->UpDown_quantityChangeStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityChangeStock = (gcnew System::Windows::Forms::Label());
			this->itemIdChangeSotck = (gcnew System::Windows::Forms::Label());
			this->text_itemIdChangeSotck = (gcnew System::Windows::Forms::TextBox());
			this->ItemAddStock_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->itemColorAddStock_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->reorderThresholdAddStock = (gcnew System::Windows::Forms::Label());
			this->text_reorderThresholdAddStock = (gcnew System::Windows::Forms::TextBox());
			this->itemColorAddStock = (gcnew System::Windows::Forms::Label());
			this->VATrateAddStock = (gcnew System::Windows::Forms::Label());
			this->text_vatRateAddStock = (gcnew System::Windows::Forms::TextBox());
			this->itemPriceETAddStock = (gcnew System::Windows::Forms::Label());
			this->text_ItemPriceExcludingTaxesAddStock = (gcnew System::Windows::Forms::TextBox());
			this->itemNameAddStock = (gcnew System::Windows::Forms::Label());
			this->text_ItemNameAddStock = (gcnew System::Windows::Forms::TextBox());
			this->UpDown_quantityAddStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityAddStock = (gcnew System::Windows::Forms::Label());
			this->dgv_stock = (gcnew System::Windows::Forms::DataGridView());
			this->changeProduct = (gcnew System::Windows::Forms::Button());
			this->addProduct = (gcnew System::Windows::Forms::Button());
			this->statisticTab = (gcnew System::Windows::Forms::TabPage());
			this->DateStatistics_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_turnoverYear = (gcnew System::Windows::Forms::TextBox());
			this->yearStatistics = (gcnew System::Windows::Forms::Label());
			this->text_turnoverMonth = (gcnew System::Windows::Forms::TextBox());
			this->monthStatistics = (gcnew System::Windows::Forms::Label());
			this->button_turnover = (gcnew System::Windows::Forms::Button());
			this->CustomerStatistics_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthStatisitcs_datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->birthDateStatistics = (gcnew System::Windows::Forms::Label());
			this->firstNameStatistics = (gcnew System::Windows::Forms::Label());
			this->text_statisticsCustLastName = (gcnew System::Windows::Forms::TextBox());
			this->button_customerTotalAmount = (gcnew System::Windows::Forms::Button());
			this->text_statisticsCustFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lastNameStatistics = (gcnew System::Windows::Forms::Label());
			this->button_commercialValueStock = (gcnew System::Windows::Forms::Button());
			this->button_bestSelling = (gcnew System::Windows::Forms::Button());
			this->button_purchaseValueStock = (gcnew System::Windows::Forms::Button());
			this->button_lowestSelling = (gcnew System::Windows::Forms::Button());
			this->button_averageCart = (gcnew System::Windows::Forms::Button());
			this->button_underReorderThreshold = (gcnew System::Windows::Forms::Button());
			this->dgv_stat = (gcnew System::Windows::Forms::DataGridView());
			this->simulationsTab = (gcnew System::Windows::Forms::TabPage());
			this->markdown_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_CustomMarkdown = (gcnew System::Windows::Forms::TextBox());
			this->customMarkdown_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->markdown2 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown1 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown3 = (gcnew System::Windows::Forms::RadioButton());
			this->dicount_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_CustomDiscount = (gcnew System::Windows::Forms::TextBox());
			this->CustomDiscount_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->discount2 = (gcnew System::Windows::Forms::RadioButton());
			this->discount1 = (gcnew System::Windows::Forms::RadioButton());
			this->margin_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_CustomMargin = (gcnew System::Windows::Forms::TextBox());
			this->customMargin_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->grossMargin3 = (gcnew System::Windows::Forms::RadioButton());
			this->grossMargin1 = (gcnew System::Windows::Forms::RadioButton());
			this->grossMargin2 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_CustomVAT = (gcnew System::Windows::Forms::TextBox());
			this->CustomVAT_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->VAT3 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT2 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT1 = (gcnew System::Windows::Forms::RadioButton());
			this->dgv_simu = (gcnew System::Windows::Forms::DataGridView());
			this->execution_button = (gcnew System::Windows::Forms::Button());
			this->mainTabControl->SuspendLayout();
			this->homeTab->SuspendLayout();
			this->customersTab->SuspendLayout();
			this->socityChangeCust_groupBox->SuspendLayout();
			this->InfoSearchCust_groupBox->SuspendLayout();
			this->infoChangeCust_groupBox->SuspendLayout();
			this->BillingChangeCust_groupBox->SuspendLayout();
			this->DelChangeCust_groupBox->SuspendLayout();
			this->socityGroupBox->SuspendLayout();
			this->customerGroupBox->SuspendLayout();
			this->BillingGroupBox->SuspendLayout();
			this->deliveryGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cust))->BeginInit();
			this->employeesTab->SuspendLayout();
			this->AddressChangeEmp_groupBox->SuspendLayout();
			this->InfoChangeEmp_groupBox->SuspendLayout();
			this->SearchCust_groupBox->SuspendLayout();
			this->empAdressAdd_GroupBox->SuspendLayout();
			this->infoAddEmp_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emp))->BeginInit();
			this->ordersTab->SuspendLayout();
			this->meanOfPaymentAddPayOrder_GroupBox->SuspendLayout();
			this->ItemAddItemOrder_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quanityAddItemOrder))->BeginInit();
			this->infoChangeOrder_groupBox->SuspendLayout();
			this->searchOrder_groupBox->SuspendLayout();
			this->GlobalInfoAddOrder_GroupBox->SuspendLayout();
			this->meanOfPaymentAddOrder_GroupBox->SuspendLayout();
			this->ItemAddOrder_GroupeBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityItemAddOrders))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_ord))->BeginInit();
			this->stockTab->SuspendLayout();
			this->SearchStock_groupBox->SuspendLayout();
			this->ItemCHangeSotck_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityChangeStock))->BeginInit();
			this->ItemAddStock_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityAddStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stock))->BeginInit();
			this->statisticTab->SuspendLayout();
			this->DateStatistics_groupBox->SuspendLayout();
			this->CustomerStatistics_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stat))->BeginInit();
			this->simulationsTab->SuspendLayout();
			this->markdown_groupBox->SuspendLayout();
			this->dicount_groupBox->SuspendLayout();
			this->margin_groupBox->SuspendLayout();
			this->VAT_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_simu))->BeginInit();
			this->SuspendLayout();
			// 
			// mainTabControl
			// 
			this->mainTabControl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->mainTabControl->Controls->Add(this->homeTab);
			this->mainTabControl->Controls->Add(this->customersTab);
			this->mainTabControl->Controls->Add(this->employeesTab);
			this->mainTabControl->Controls->Add(this->ordersTab);
			this->mainTabControl->Controls->Add(this->stockTab);
			this->mainTabControl->Controls->Add(this->statisticTab);
			this->mainTabControl->Controls->Add(this->simulationsTab);
			this->mainTabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTabControl->ItemSize = System::Drawing::Size(49, 27);
			this->mainTabControl->Location = System::Drawing::Point(-1, 2);
			this->mainTabControl->Multiline = true;
			this->mainTabControl->Name = L"mainTabControl";
			this->mainTabControl->Padding = System::Drawing::Point(20, 3);
			this->mainTabControl->SelectedIndex = 0;
			this->mainTabControl->Size = System::Drawing::Size(1112, 757);
			this->mainTabControl->TabIndex = 0;
			// 
			// homeTab
			// 
			this->homeTab->BackColor = System::Drawing::Color::Transparent;
			this->homeTab->Controls->Add(this->home_page);
			this->homeTab->Location = System::Drawing::Point(4, 31);
			this->homeTab->Name = L"homeTab";
			this->homeTab->Size = System::Drawing::Size(1104, 722);
			this->homeTab->TabIndex = 6;
			this->homeTab->Text = L"Home";
			// 
			// home_page
			// 
			this->home_page->AutoSize = true;
			this->home_page->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.22F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_page->Location = System::Drawing::Point(191, 257);
			this->home_page->Name = L"home_page";
			this->home_page->Size = System::Drawing::Size(709, 39);
			this->home_page->TabIndex = 0;
			this->home_page->Text = L"Welcome to your management application !";
			// 
			// customersTab
			// 
			this->customersTab->Controls->Add(this->socityChangeCust_groupBox);
			this->customersTab->Controls->Add(this->InfoSearchCust_groupBox);
			this->customersTab->Controls->Add(this->infoChangeCust_groupBox);
			this->customersTab->Controls->Add(this->BillingChangeCust_groupBox);
			this->customersTab->Controls->Add(this->changeCust);
			this->customersTab->Controls->Add(this->DelChangeCust_groupBox);
			this->customersTab->Controls->Add(this->text_custRef);
			this->customersTab->Controls->Add(this->addCust);
			this->customersTab->Controls->Add(this->socityGroupBox);
			this->customersTab->Controls->Add(this->customerGroupBox);
			this->customersTab->Controls->Add(this->custID);
			this->customersTab->Controls->Add(this->BillingGroupBox);
			this->customersTab->Controls->Add(this->deliveryGroupBox);
			this->customersTab->Controls->Add(this->dgv_cust);
			this->customersTab->Location = System::Drawing::Point(4, 31);
			this->customersTab->Name = L"customersTab";
			this->customersTab->Padding = System::Windows::Forms::Padding(3);
			this->customersTab->Size = System::Drawing::Size(1104, 722);
			this->customersTab->TabIndex = 0;
			this->customersTab->Text = L"Customers";
			this->customersTab->UseVisualStyleBackColor = true;
			// 
			// socityChangeCust_groupBox
			// 
			this->socityChangeCust_groupBox->Controls->Add(this->text_serviceNumberChangeCust);
			this->socityChangeCust_groupBox->Controls->Add(this->text_socityNameChangeCust);
			this->socityChangeCust_groupBox->Controls->Add(this->serviceNumberChangeCust);
			this->socityChangeCust_groupBox->Controls->Add(this->socityNameChangeCust);
			this->socityChangeCust_groupBox->Location = System::Drawing::Point(573, 432);
			this->socityChangeCust_groupBox->Name = L"socityChangeCust_groupBox";
			this->socityChangeCust_groupBox->Size = System::Drawing::Size(472, 85);
			this->socityChangeCust_groupBox->TabIndex = 32;
			this->socityChangeCust_groupBox->TabStop = false;
			this->socityChangeCust_groupBox->Text = L"Socity info";
			// 
			// text_serviceNumberChangeCust
			// 
			this->text_serviceNumberChangeCust->Location = System::Drawing::Point(300, 44);
			this->text_serviceNumberChangeCust->Name = L"text_serviceNumberChangeCust";
			this->text_serviceNumberChangeCust->Size = System::Drawing::Size(148, 22);
			this->text_serviceNumberChangeCust->TabIndex = 27;
			// 
			// text_socityNameChangeCust
			// 
			this->text_socityNameChangeCust->Location = System::Drawing::Point(36, 44);
			this->text_socityNameChangeCust->Name = L"text_socityNameChangeCust";
			this->text_socityNameChangeCust->Size = System::Drawing::Size(175, 22);
			this->text_socityNameChangeCust->TabIndex = 26;
			// 
			// serviceNumberChangeCust
			// 
			this->serviceNumberChangeCust->AutoSize = true;
			this->serviceNumberChangeCust->Location = System::Drawing::Point(287, 25);
			this->serviceNumberChangeCust->Name = L"serviceNumberChangeCust";
			this->serviceNumberChangeCust->Size = System::Drawing::Size(99, 16);
			this->serviceNumberChangeCust->TabIndex = 25;
			this->serviceNumberChangeCust->Text = L"service number";
			// 
			// socityNameChangeCust
			// 
			this->socityNameChangeCust->AutoSize = true;
			this->socityNameChangeCust->Location = System::Drawing::Point(23, 24);
			this->socityNameChangeCust->Name = L"socityNameChangeCust";
			this->socityNameChangeCust->Size = System::Drawing::Size(79, 16);
			this->socityNameChangeCust->TabIndex = 24;
			this->socityNameChangeCust->Text = L"socity name";
			// 
			// InfoSearchCust_groupBox
			// 
			this->InfoSearchCust_groupBox->Controls->Add(this->birthSearchCust_datePicker);
			this->InfoSearchCust_groupBox->Controls->Add(this->displayCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->text_firstNameSearchCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->birthDateSearchCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->firstNameSearchCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->eraseCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->lastNameSearchCust);
			this->InfoSearchCust_groupBox->Controls->Add(this->text_lastNameSearchCust);
			this->InfoSearchCust_groupBox->Location = System::Drawing::Point(800, 38);
			this->InfoSearchCust_groupBox->Name = L"InfoSearchCust_groupBox";
			this->InfoSearchCust_groupBox->Size = System::Drawing::Size(287, 246);
			this->InfoSearchCust_groupBox->TabIndex = 28;
			this->InfoSearchCust_groupBox->TabStop = false;
			this->InfoSearchCust_groupBox->Text = L"Search";
			// 
			// birthSearchCust_datePicker
			// 
			this->birthSearchCust_datePicker->Location = System::Drawing::Point(31, 160);
			this->birthSearchCust_datePicker->Name = L"birthSearchCust_datePicker";
			this->birthSearchCust_datePicker->Size = System::Drawing::Size(229, 22);
			this->birthSearchCust_datePicker->TabIndex = 26;
			// 
			// displayCust
			// 
			this->displayCust->Location = System::Drawing::Point(161, 198);
			this->displayCust->Name = L"displayCust";
			this->displayCust->Size = System::Drawing::Size(95, 33);
			this->displayCust->TabIndex = 32;
			this->displayCust->Text = L"Display";
			this->displayCust->UseVisualStyleBackColor = true;
			this->displayCust->Click += gcnew System::EventHandler(this, &MyForm::displayCust_Click);
			// 
			// text_firstNameSearchCust
			// 
			this->text_firstNameSearchCust->Location = System::Drawing::Point(42, 102);
			this->text_firstNameSearchCust->Name = L"text_firstNameSearchCust";
			this->text_firstNameSearchCust->Size = System::Drawing::Size(218, 22);
			this->text_firstNameSearchCust->TabIndex = 25;
			// 
			// birthDateSearchCust
			// 
			this->birthDateSearchCust->AutoSize = true;
			this->birthDateSearchCust->Location = System::Drawing::Point(24, 141);
			this->birthDateSearchCust->Name = L"birthDateSearchCust";
			this->birthDateSearchCust->Size = System::Drawing::Size(62, 16);
			this->birthDateSearchCust->TabIndex = 23;
			this->birthDateSearchCust->Text = L"birth date";
			// 
			// firstNameSearchCust
			// 
			this->firstNameSearchCust->AutoSize = true;
			this->firstNameSearchCust->Location = System::Drawing::Point(23, 83);
			this->firstNameSearchCust->Name = L"firstNameSearchCust";
			this->firstNameSearchCust->Size = System::Drawing::Size(60, 16);
			this->firstNameSearchCust->TabIndex = 22;
			this->firstNameSearchCust->Text = L"fist name";
			// 
			// eraseCust
			// 
			this->eraseCust->Location = System::Drawing::Point(26, 198);
			this->eraseCust->Name = L"eraseCust";
			this->eraseCust->Size = System::Drawing::Size(94, 33);
			this->eraseCust->TabIndex = 30;
			this->eraseCust->Text = L"Erase";
			this->eraseCust->UseVisualStyleBackColor = true;
			this->eraseCust->Click += gcnew System::EventHandler(this, &MyForm::eraseCust_Click);
			// 
			// lastNameSearchCust
			// 
			this->lastNameSearchCust->AutoSize = true;
			this->lastNameSearchCust->Location = System::Drawing::Point(23, 30);
			this->lastNameSearchCust->Name = L"lastNameSearchCust";
			this->lastNameSearchCust->Size = System::Drawing::Size(65, 16);
			this->lastNameSearchCust->TabIndex = 21;
			this->lastNameSearchCust->Text = L"last name";
			// 
			// text_lastNameSearchCust
			// 
			this->text_lastNameSearchCust->Location = System::Drawing::Point(40, 49);
			this->text_lastNameSearchCust->Name = L"text_lastNameSearchCust";
			this->text_lastNameSearchCust->Size = System::Drawing::Size(220, 22);
			this->text_lastNameSearchCust->TabIndex = 19;
			// 
			// infoChangeCust_groupBox
			// 
			this->infoChangeCust_groupBox->Controls->Add(this->customerIdChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->text_customerIdChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->birthChangeCust_datePicker);
			this->infoChangeCust_groupBox->Controls->Add(this->text_firstNameChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->birthDateChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->firstNameChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->lastNameChangeCust);
			this->infoChangeCust_groupBox->Controls->Add(this->text_lastNameChangeCust);
			this->infoChangeCust_groupBox->Location = System::Drawing::Point(573, 296);
			this->infoChangeCust_groupBox->Name = L"infoChangeCust_groupBox";
			this->infoChangeCust_groupBox->Size = System::Drawing::Size(472, 130);
			this->infoChangeCust_groupBox->TabIndex = 30;
			this->infoChangeCust_groupBox->TabStop = false;
			this->infoChangeCust_groupBox->Text = L"Customer info";
			// 
			// customerIdChangeCust
			// 
			this->customerIdChangeCust->AutoSize = true;
			this->customerIdChangeCust->Location = System::Drawing::Point(297, 24);
			this->customerIdChangeCust->Name = L"customerIdChangeCust";
			this->customerIdChangeCust->Size = System::Drawing::Size(78, 16);
			this->customerIdChangeCust->TabIndex = 28;
			this->customerIdChangeCust->Text = L"customer ID";
			// 
			// text_customerIdChangeCust
			// 
			this->text_customerIdChangeCust->Location = System::Drawing::Point(314, 43);
			this->text_customerIdChangeCust->Name = L"text_customerIdChangeCust";
			this->text_customerIdChangeCust->Size = System::Drawing::Size(128, 22);
			this->text_customerIdChangeCust->TabIndex = 27;
			// 
			// birthChangeCust_datePicker
			// 
			this->birthChangeCust_datePicker->Location = System::Drawing::Point(242, 90);
			this->birthChangeCust_datePicker->Name = L"birthChangeCust_datePicker";
			this->birthChangeCust_datePicker->Size = System::Drawing::Size(200, 22);
			this->birthChangeCust_datePicker->TabIndex = 26;
			// 
			// text_firstNameChangeCust
			// 
			this->text_firstNameChangeCust->Location = System::Drawing::Point(23, 92);
			this->text_firstNameChangeCust->Name = L"text_firstNameChangeCust";
			this->text_firstNameChangeCust->Size = System::Drawing::Size(189, 22);
			this->text_firstNameChangeCust->TabIndex = 25;
			// 
			// birthDateChangeCust
			// 
			this->birthDateChangeCust->AutoSize = true;
			this->birthDateChangeCust->Location = System::Drawing::Point(235, 71);
			this->birthDateChangeCust->Name = L"birthDateChangeCust";
			this->birthDateChangeCust->Size = System::Drawing::Size(62, 16);
			this->birthDateChangeCust->TabIndex = 23;
			this->birthDateChangeCust->Text = L"birth date";
			// 
			// firstNameChangeCust
			// 
			this->firstNameChangeCust->AutoSize = true;
			this->firstNameChangeCust->Location = System::Drawing::Point(4, 73);
			this->firstNameChangeCust->Name = L"firstNameChangeCust";
			this->firstNameChangeCust->Size = System::Drawing::Size(60, 16);
			this->firstNameChangeCust->TabIndex = 22;
			this->firstNameChangeCust->Text = L"fist name";
			// 
			// lastNameChangeCust
			// 
			this->lastNameChangeCust->AutoSize = true;
			this->lastNameChangeCust->Location = System::Drawing::Point(6, 24);
			this->lastNameChangeCust->Name = L"lastNameChangeCust";
			this->lastNameChangeCust->Size = System::Drawing::Size(65, 16);
			this->lastNameChangeCust->TabIndex = 21;
			this->lastNameChangeCust->Text = L"last name";
			// 
			// text_lastNameChangeCust
			// 
			this->text_lastNameChangeCust->Location = System::Drawing::Point(23, 43);
			this->text_lastNameChangeCust->Name = L"text_lastNameChangeCust";
			this->text_lastNameChangeCust->Size = System::Drawing::Size(274, 22);
			this->text_lastNameChangeCust->TabIndex = 19;
			// 
			// BillingChangeCust_groupBox
			// 
			this->BillingChangeCust_groupBox->Controls->Add(this->text_cityNameBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->text_ZipCodeBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->cityNameBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->text_streetNameBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->ZipCodeBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->text_streetNumBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->streetNumBillingChangeCust);
			this->BillingChangeCust_groupBox->Controls->Add(this->streetNameBillingChangeCust);
			this->BillingChangeCust_groupBox->Location = System::Drawing::Point(573, 523);
			this->BillingChangeCust_groupBox->Name = L"BillingChangeCust_groupBox";
			this->BillingChangeCust_groupBox->Size = System::Drawing::Size(472, 72);
			this->BillingChangeCust_groupBox->TabIndex = 31;
			this->BillingChangeCust_groupBox->TabStop = false;
			this->BillingChangeCust_groupBox->Text = L"Billing adress";
			// 
			// text_cityNameBillingChangeCust
			// 
			this->text_cityNameBillingChangeCust->Location = System::Drawing::Point(318, 40);
			this->text_cityNameBillingChangeCust->Name = L"text_cityNameBillingChangeCust";
			this->text_cityNameBillingChangeCust->Size = System::Drawing::Size(149, 22);
			this->text_cityNameBillingChangeCust->TabIndex = 34;
			// 
			// text_ZipCodeBillingChangeCust
			// 
			this->text_ZipCodeBillingChangeCust->Location = System::Drawing::Point(238, 40);
			this->text_ZipCodeBillingChangeCust->Name = L"text_ZipCodeBillingChangeCust";
			this->text_ZipCodeBillingChangeCust->Size = System::Drawing::Size(71, 22);
			this->text_ZipCodeBillingChangeCust->TabIndex = 33;
			// 
			// cityNameBillingChangeCust
			// 
			this->cityNameBillingChangeCust->AutoSize = true;
			this->cityNameBillingChangeCust->Location = System::Drawing::Point(310, 21);
			this->cityNameBillingChangeCust->Name = L"cityNameBillingChangeCust";
			this->cityNameBillingChangeCust->Size = System::Drawing::Size(64, 16);
			this->cityNameBillingChangeCust->TabIndex = 26;
			this->cityNameBillingChangeCust->Text = L"city name";
			// 
			// text_streetNameBillingChangeCust
			// 
			this->text_streetNameBillingChangeCust->Location = System::Drawing::Point(83, 40);
			this->text_streetNameBillingChangeCust->Name = L"text_streetNameBillingChangeCust";
			this->text_streetNameBillingChangeCust->Size = System::Drawing::Size(149, 22);
			this->text_streetNameBillingChangeCust->TabIndex = 32;
			// 
			// ZipCodeBillingChangeCust
			// 
			this->ZipCodeBillingChangeCust->AutoSize = true;
			this->ZipCodeBillingChangeCust->Location = System::Drawing::Point(235, 21);
			this->ZipCodeBillingChangeCust->Name = L"ZipCodeBillingChangeCust";
			this->ZipCodeBillingChangeCust->Size = System::Drawing::Size(61, 16);
			this->ZipCodeBillingChangeCust->TabIndex = 25;
			this->ZipCodeBillingChangeCust->Text = L"ZIP code";
			// 
			// text_streetNumBillingChangeCust
			// 
			this->text_streetNumBillingChangeCust->Location = System::Drawing::Point(9, 40);
			this->text_streetNumBillingChangeCust->Name = L"text_streetNumBillingChangeCust";
			this->text_streetNumBillingChangeCust->Size = System::Drawing::Size(68, 22);
			this->text_streetNumBillingChangeCust->TabIndex = 31;
			// 
			// streetNumBillingChangeCust
			// 
			this->streetNumBillingChangeCust->AutoSize = true;
			this->streetNumBillingChangeCust->Location = System::Drawing::Point(8, 21);
			this->streetNumBillingChangeCust->Name = L"streetNumBillingChangeCust";
			this->streetNumBillingChangeCust->Size = System::Drawing::Size(54, 16);
			this->streetNumBillingChangeCust->TabIndex = 23;
			this->streetNumBillingChangeCust->Text = L"street n°";
			// 
			// streetNameBillingChangeCust
			// 
			this->streetNameBillingChangeCust->AutoSize = true;
			this->streetNameBillingChangeCust->Location = System::Drawing::Point(77, 21);
			this->streetNameBillingChangeCust->Name = L"streetNameBillingChangeCust";
			this->streetNameBillingChangeCust->Size = System::Drawing::Size(77, 16);
			this->streetNameBillingChangeCust->TabIndex = 24;
			this->streetNameBillingChangeCust->Text = L"street name";
			// 
			// changeCust
			// 
			this->changeCust->Location = System::Drawing::Point(732, 679);
			this->changeCust->Name = L"changeCust";
			this->changeCust->Size = System::Drawing::Size(151, 33);
			this->changeCust->TabIndex = 31;
			this->changeCust->Text = L"Change customer";
			this->changeCust->UseVisualStyleBackColor = true;
			this->changeCust->Click += gcnew System::EventHandler(this, &MyForm::changeCust_Click);
			// 
			// DelChangeCust_groupBox
			// 
			this->DelChangeCust_groupBox->Controls->Add(this->text_cityNameDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->text_ZipCodeDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->text_streetNameDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->text_streetNumDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->cityNameDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->ZipCodeDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->streetNumDelChangeCust);
			this->DelChangeCust_groupBox->Controls->Add(this->streetNameDelChangeCust);
			this->DelChangeCust_groupBox->Location = System::Drawing::Point(573, 601);
			this->DelChangeCust_groupBox->Name = L"DelChangeCust_groupBox";
			this->DelChangeCust_groupBox->Size = System::Drawing::Size(472, 72);
			this->DelChangeCust_groupBox->TabIndex = 29;
			this->DelChangeCust_groupBox->TabStop = false;
			this->DelChangeCust_groupBox->Text = L"Delivery adress";
			// 
			// text_cityNameDelChangeCust
			// 
			this->text_cityNameDelChangeCust->Location = System::Drawing::Point(313, 40);
			this->text_cityNameDelChangeCust->Name = L"text_cityNameDelChangeCust";
			this->text_cityNameDelChangeCust->Size = System::Drawing::Size(149, 22);
			this->text_cityNameDelChangeCust->TabIndex = 30;
			// 
			// text_ZipCodeDelChangeCust
			// 
			this->text_ZipCodeDelChangeCust->Location = System::Drawing::Point(238, 40);
			this->text_ZipCodeDelChangeCust->Name = L"text_ZipCodeDelChangeCust";
			this->text_ZipCodeDelChangeCust->Size = System::Drawing::Size(71, 22);
			this->text_ZipCodeDelChangeCust->TabIndex = 29;
			// 
			// text_streetNameDelChangeCust
			// 
			this->text_streetNameDelChangeCust->Location = System::Drawing::Point(80, 40);
			this->text_streetNameDelChangeCust->Name = L"text_streetNameDelChangeCust";
			this->text_streetNameDelChangeCust->Size = System::Drawing::Size(152, 22);
			this->text_streetNameDelChangeCust->TabIndex = 28;
			// 
			// text_streetNumDelChangeCust
			// 
			this->text_streetNumDelChangeCust->Location = System::Drawing::Point(6, 40);
			this->text_streetNumDelChangeCust->Name = L"text_streetNumDelChangeCust";
			this->text_streetNumDelChangeCust->Size = System::Drawing::Size(68, 22);
			this->text_streetNumDelChangeCust->TabIndex = 27;
			// 
			// cityNameDelChangeCust
			// 
			this->cityNameDelChangeCust->AutoSize = true;
			this->cityNameDelChangeCust->Location = System::Drawing::Point(305, 21);
			this->cityNameDelChangeCust->Name = L"cityNameDelChangeCust";
			this->cityNameDelChangeCust->Size = System::Drawing::Size(64, 16);
			this->cityNameDelChangeCust->TabIndex = 26;
			this->cityNameDelChangeCust->Text = L"city name";
			// 
			// ZipCodeDelChangeCust
			// 
			this->ZipCodeDelChangeCust->AutoSize = true;
			this->ZipCodeDelChangeCust->Location = System::Drawing::Point(235, 21);
			this->ZipCodeDelChangeCust->Name = L"ZipCodeDelChangeCust";
			this->ZipCodeDelChangeCust->Size = System::Drawing::Size(61, 16);
			this->ZipCodeDelChangeCust->TabIndex = 25;
			this->ZipCodeDelChangeCust->Text = L"ZIP code";
			// 
			// streetNumDelChangeCust
			// 
			this->streetNumDelChangeCust->AutoSize = true;
			this->streetNumDelChangeCust->Location = System::Drawing::Point(3, 21);
			this->streetNumDelChangeCust->Name = L"streetNumDelChangeCust";
			this->streetNumDelChangeCust->Size = System::Drawing::Size(54, 16);
			this->streetNumDelChangeCust->TabIndex = 23;
			this->streetNumDelChangeCust->Text = L"street n°";
			// 
			// streetNameDelChangeCust
			// 
			this->streetNameDelChangeCust->AutoSize = true;
			this->streetNameDelChangeCust->Location = System::Drawing::Point(77, 21);
			this->streetNameDelChangeCust->Name = L"streetNameDelChangeCust";
			this->streetNameDelChangeCust->Size = System::Drawing::Size(77, 16);
			this->streetNameDelChangeCust->TabIndex = 24;
			this->streetNameDelChangeCust->Text = L"street name";
			// 
			// text_custRef
			// 
			this->text_custRef->Location = System::Drawing::Point(944, 764);
			this->text_custRef->Name = L"text_custRef";
			this->text_custRef->Size = System::Drawing::Size(207, 22);
			this->text_custRef->TabIndex = 24;
			// 
			// addCust
			// 
			this->addCust->Location = System::Drawing::Point(158, 679);
			this->addCust->Name = L"addCust";
			this->addCust->Size = System::Drawing::Size(141, 33);
			this->addCust->TabIndex = 29;
			this->addCust->Text = L"Add customer";
			this->addCust->UseVisualStyleBackColor = true;
			this->addCust->Click += gcnew System::EventHandler(this, &MyForm::addCust_Click);
			// 
			// socityGroupBox
			// 
			this->socityGroupBox->Controls->Add(this->text_serviceNumber);
			this->socityGroupBox->Controls->Add(this->text_socityName);
			this->socityGroupBox->Controls->Add(this->serviceNum);
			this->socityGroupBox->Controls->Add(this->socityName);
			this->socityGroupBox->Location = System::Drawing::Point(33, 432);
			this->socityGroupBox->Name = L"socityGroupBox";
			this->socityGroupBox->Size = System::Drawing::Size(472, 85);
			this->socityGroupBox->TabIndex = 28;
			this->socityGroupBox->TabStop = false;
			this->socityGroupBox->Text = L"Socity info";
			// 
			// text_serviceNumber
			// 
			this->text_serviceNumber->Location = System::Drawing::Point(300, 44);
			this->text_serviceNumber->Name = L"text_serviceNumber";
			this->text_serviceNumber->Size = System::Drawing::Size(148, 22);
			this->text_serviceNumber->TabIndex = 27;
			// 
			// text_socityName
			// 
			this->text_socityName->Location = System::Drawing::Point(36, 44);
			this->text_socityName->Name = L"text_socityName";
			this->text_socityName->Size = System::Drawing::Size(175, 22);
			this->text_socityName->TabIndex = 26;
			// 
			// serviceNum
			// 
			this->serviceNum->AutoSize = true;
			this->serviceNum->Location = System::Drawing::Point(287, 25);
			this->serviceNum->Name = L"serviceNum";
			this->serviceNum->Size = System::Drawing::Size(99, 16);
			this->serviceNum->TabIndex = 25;
			this->serviceNum->Text = L"service number";
			// 
			// socityName
			// 
			this->socityName->AutoSize = true;
			this->socityName->Location = System::Drawing::Point(23, 24);
			this->socityName->Name = L"socityName";
			this->socityName->Size = System::Drawing::Size(79, 16);
			this->socityName->TabIndex = 24;
			this->socityName->Text = L"socity name";
			// 
			// customerGroupBox
			// 
			this->customerGroupBox->Controls->Add(this->birthDateCust_datePicker);
			this->customerGroupBox->Controls->Add(this->text_custFirstName);
			this->customerGroupBox->Controls->Add(this->birthDateCust);
			this->customerGroupBox->Controls->Add(this->firstNameCust);
			this->customerGroupBox->Controls->Add(this->lastNameCust);
			this->customerGroupBox->Controls->Add(this->text_custLastName);
			this->customerGroupBox->Location = System::Drawing::Point(33, 296);
			this->customerGroupBox->Name = L"customerGroupBox";
			this->customerGroupBox->Size = System::Drawing::Size(472, 130);
			this->customerGroupBox->TabIndex = 27;
			this->customerGroupBox->TabStop = false;
			this->customerGroupBox->Text = L"Customers info";
			// 
			// birthDateCust_datePicker
			// 
			this->birthDateCust_datePicker->Location = System::Drawing::Point(242, 90);
			this->birthDateCust_datePicker->Name = L"birthDateCust_datePicker";
			this->birthDateCust_datePicker->Size = System::Drawing::Size(200, 22);
			this->birthDateCust_datePicker->TabIndex = 26;
			// 
			// text_custFirstName
			// 
			this->text_custFirstName->Location = System::Drawing::Point(23, 92);
			this->text_custFirstName->Name = L"text_custFirstName";
			this->text_custFirstName->Size = System::Drawing::Size(189, 22);
			this->text_custFirstName->TabIndex = 25;
			// 
			// birthDateCust
			// 
			this->birthDateCust->AutoSize = true;
			this->birthDateCust->Location = System::Drawing::Point(235, 71);
			this->birthDateCust->Name = L"birthDateCust";
			this->birthDateCust->Size = System::Drawing::Size(62, 16);
			this->birthDateCust->TabIndex = 23;
			this->birthDateCust->Text = L"birth date";
			// 
			// firstNameCust
			// 
			this->firstNameCust->AutoSize = true;
			this->firstNameCust->Location = System::Drawing::Point(4, 73);
			this->firstNameCust->Name = L"firstNameCust";
			this->firstNameCust->Size = System::Drawing::Size(60, 16);
			this->firstNameCust->TabIndex = 22;
			this->firstNameCust->Text = L"fist name";
			// 
			// lastNameCust
			// 
			this->lastNameCust->AutoSize = true;
			this->lastNameCust->Location = System::Drawing::Point(6, 24);
			this->lastNameCust->Name = L"lastNameCust";
			this->lastNameCust->Size = System::Drawing::Size(65, 16);
			this->lastNameCust->TabIndex = 21;
			this->lastNameCust->Text = L"last name";
			// 
			// text_custLastName
			// 
			this->text_custLastName->Location = System::Drawing::Point(23, 43);
			this->text_custLastName->Name = L"text_custLastName";
			this->text_custLastName->Size = System::Drawing::Size(274, 22);
			this->text_custLastName->TabIndex = 19;
			// 
			// custID
			// 
			this->custID->AutoSize = true;
			this->custID->Location = System::Drawing::Point(931, 745);
			this->custID->Name = L"custID";
			this->custID->Size = System::Drawing::Size(129, 16);
			this->custID->TabIndex = 20;
			this->custID->Text = L"customenr reference";
			// 
			// BillingGroupBox
			// 
			this->BillingGroupBox->Controls->Add(this->text_bilingCityName);
			this->BillingGroupBox->Controls->Add(this->text_bilingZIPcode);
			this->BillingGroupBox->Controls->Add(this->cityNameBil);
			this->BillingGroupBox->Controls->Add(this->text_bilingStreetName);
			this->BillingGroupBox->Controls->Add(this->ZipCodeBil);
			this->BillingGroupBox->Controls->Add(this->text_bilingStreetN);
			this->BillingGroupBox->Controls->Add(this->streetNumBil);
			this->BillingGroupBox->Controls->Add(this->streetNameBil);
			this->BillingGroupBox->Location = System::Drawing::Point(33, 523);
			this->BillingGroupBox->Name = L"BillingGroupBox";
			this->BillingGroupBox->Size = System::Drawing::Size(472, 72);
			this->BillingGroupBox->TabIndex = 27;
			this->BillingGroupBox->TabStop = false;
			this->BillingGroupBox->Text = L"Billing adress";
			// 
			// text_bilingCityName
			// 
			this->text_bilingCityName->Location = System::Drawing::Point(318, 40);
			this->text_bilingCityName->Name = L"text_bilingCityName";
			this->text_bilingCityName->Size = System::Drawing::Size(149, 22);
			this->text_bilingCityName->TabIndex = 34;
			// 
			// text_bilingZIPcode
			// 
			this->text_bilingZIPcode->Location = System::Drawing::Point(238, 40);
			this->text_bilingZIPcode->Name = L"text_bilingZIPcode";
			this->text_bilingZIPcode->Size = System::Drawing::Size(71, 22);
			this->text_bilingZIPcode->TabIndex = 33;
			// 
			// cityNameBil
			// 
			this->cityNameBil->AutoSize = true;
			this->cityNameBil->Location = System::Drawing::Point(310, 21);
			this->cityNameBil->Name = L"cityNameBil";
			this->cityNameBil->Size = System::Drawing::Size(64, 16);
			this->cityNameBil->TabIndex = 26;
			this->cityNameBil->Text = L"city name";
			// 
			// text_bilingStreetName
			// 
			this->text_bilingStreetName->Location = System::Drawing::Point(83, 40);
			this->text_bilingStreetName->Name = L"text_bilingStreetName";
			this->text_bilingStreetName->Size = System::Drawing::Size(149, 22);
			this->text_bilingStreetName->TabIndex = 32;
			// 
			// ZipCodeBil
			// 
			this->ZipCodeBil->AutoSize = true;
			this->ZipCodeBil->Location = System::Drawing::Point(235, 21);
			this->ZipCodeBil->Name = L"ZipCodeBil";
			this->ZipCodeBil->Size = System::Drawing::Size(61, 16);
			this->ZipCodeBil->TabIndex = 25;
			this->ZipCodeBil->Text = L"ZIP code";
			// 
			// text_bilingStreetN
			// 
			this->text_bilingStreetN->Location = System::Drawing::Point(9, 40);
			this->text_bilingStreetN->Name = L"text_bilingStreetN";
			this->text_bilingStreetN->Size = System::Drawing::Size(68, 22);
			this->text_bilingStreetN->TabIndex = 31;
			// 
			// streetNumBil
			// 
			this->streetNumBil->AutoSize = true;
			this->streetNumBil->Location = System::Drawing::Point(8, 21);
			this->streetNumBil->Name = L"streetNumBil";
			this->streetNumBil->Size = System::Drawing::Size(54, 16);
			this->streetNumBil->TabIndex = 23;
			this->streetNumBil->Text = L"street n°";
			// 
			// streetNameBil
			// 
			this->streetNameBil->AutoSize = true;
			this->streetNameBil->Location = System::Drawing::Point(77, 21);
			this->streetNameBil->Name = L"streetNameBil";
			this->streetNameBil->Size = System::Drawing::Size(77, 16);
			this->streetNameBil->TabIndex = 24;
			this->streetNameBil->Text = L"street name";
			// 
			// deliveryGroupBox
			// 
			this->deliveryGroupBox->Controls->Add(this->text_deliveryCityName);
			this->deliveryGroupBox->Controls->Add(this->text_deliveryZIPcode);
			this->deliveryGroupBox->Controls->Add(this->text_deliveryStreetName);
			this->deliveryGroupBox->Controls->Add(this->text_deliveryStreetN);
			this->deliveryGroupBox->Controls->Add(this->cityNameDel);
			this->deliveryGroupBox->Controls->Add(this->ZipCodeDel);
			this->deliveryGroupBox->Controls->Add(this->streetNumDel);
			this->deliveryGroupBox->Controls->Add(this->streetNameDel);
			this->deliveryGroupBox->Location = System::Drawing::Point(33, 601);
			this->deliveryGroupBox->Name = L"deliveryGroupBox";
			this->deliveryGroupBox->Size = System::Drawing::Size(472, 72);
			this->deliveryGroupBox->TabIndex = 25;
			this->deliveryGroupBox->TabStop = false;
			this->deliveryGroupBox->Text = L"Delivery adress";
			// 
			// text_deliveryCityName
			// 
			this->text_deliveryCityName->Location = System::Drawing::Point(313, 40);
			this->text_deliveryCityName->Name = L"text_deliveryCityName";
			this->text_deliveryCityName->Size = System::Drawing::Size(149, 22);
			this->text_deliveryCityName->TabIndex = 30;
			// 
			// text_deliveryZIPcode
			// 
			this->text_deliveryZIPcode->Location = System::Drawing::Point(238, 40);
			this->text_deliveryZIPcode->Name = L"text_deliveryZIPcode";
			this->text_deliveryZIPcode->Size = System::Drawing::Size(71, 22);
			this->text_deliveryZIPcode->TabIndex = 29;
			// 
			// text_deliveryStreetName
			// 
			this->text_deliveryStreetName->Location = System::Drawing::Point(80, 40);
			this->text_deliveryStreetName->Name = L"text_deliveryStreetName";
			this->text_deliveryStreetName->Size = System::Drawing::Size(152, 22);
			this->text_deliveryStreetName->TabIndex = 28;
			// 
			// text_deliveryStreetN
			// 
			this->text_deliveryStreetN->Location = System::Drawing::Point(6, 40);
			this->text_deliveryStreetN->Name = L"text_deliveryStreetN";
			this->text_deliveryStreetN->Size = System::Drawing::Size(68, 22);
			this->text_deliveryStreetN->TabIndex = 27;
			// 
			// cityNameDel
			// 
			this->cityNameDel->AutoSize = true;
			this->cityNameDel->Location = System::Drawing::Point(305, 21);
			this->cityNameDel->Name = L"cityNameDel";
			this->cityNameDel->Size = System::Drawing::Size(64, 16);
			this->cityNameDel->TabIndex = 26;
			this->cityNameDel->Text = L"city name";
			// 
			// ZipCodeDel
			// 
			this->ZipCodeDel->AutoSize = true;
			this->ZipCodeDel->Location = System::Drawing::Point(235, 21);
			this->ZipCodeDel->Name = L"ZipCodeDel";
			this->ZipCodeDel->Size = System::Drawing::Size(61, 16);
			this->ZipCodeDel->TabIndex = 25;
			this->ZipCodeDel->Text = L"ZIP code";
			// 
			// streetNumDel
			// 
			this->streetNumDel->AutoSize = true;
			this->streetNumDel->Location = System::Drawing::Point(3, 21);
			this->streetNumDel->Name = L"streetNumDel";
			this->streetNumDel->Size = System::Drawing::Size(54, 16);
			this->streetNumDel->TabIndex = 23;
			this->streetNumDel->Text = L"street n°";
			// 
			// streetNameDel
			// 
			this->streetNameDel->AutoSize = true;
			this->streetNameDel->Location = System::Drawing::Point(77, 21);
			this->streetNameDel->Name = L"streetNameDel";
			this->streetNameDel->Size = System::Drawing::Size(77, 16);
			this->streetNameDel->TabIndex = 24;
			this->streetNameDel->Text = L"street name";
			// 
			// dgv_cust
			// 
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_cust->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dgv_cust->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_cust->DefaultCellStyle = dataGridViewCellStyle16;
			this->dgv_cust->Location = System::Drawing::Point(24, 29);
			this->dgv_cust->Name = L"dgv_cust";
			this->dgv_cust->RowHeadersWidth = 51;
			this->dgv_cust->RowTemplate->Height = 24;
			this->dgv_cust->Size = System::Drawing::Size(761, 255);
			this->dgv_cust->TabIndex = 18;
			// 
			// employeesTab
			// 
			this->employeesTab->Controls->Add(this->AddressChangeEmp_groupBox);
			this->employeesTab->Controls->Add(this->InfoChangeEmp_groupBox);
			this->employeesTab->Controls->Add(this->SearchCust_groupBox);
			this->employeesTab->Controls->Add(this->changeEmp);
			this->employeesTab->Controls->Add(this->addEmp);
			this->employeesTab->Controls->Add(this->empAdressAdd_GroupBox);
			this->employeesTab->Controls->Add(this->infoAddEmp_GroupBox);
			this->employeesTab->Controls->Add(this->dgv_emp);
			this->employeesTab->Location = System::Drawing::Point(4, 31);
			this->employeesTab->Name = L"employeesTab";
			this->employeesTab->Padding = System::Windows::Forms::Padding(3);
			this->employeesTab->Size = System::Drawing::Size(1104, 722);
			this->employeesTab->TabIndex = 1;
			this->employeesTab->Text = L"Employees";
			this->employeesTab->UseVisualStyleBackColor = true;
			// 
			// AddressChangeEmp_groupBox
			// 
			this->AddressChangeEmp_groupBox->Controls->Add(this->text_ZipCodeChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->text_cityNameChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->text_streetNameChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->text_streetNumChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->cityNameChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->StreetNameChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->ZipCodeChangeEmp);
			this->AddressChangeEmp_groupBox->Controls->Add(this->StreetNumChangeEmp);
			this->AddressChangeEmp_groupBox->Location = System::Drawing::Point(550, 523);
			this->AddressChangeEmp_groupBox->Name = L"AddressChangeEmp_groupBox";
			this->AddressChangeEmp_groupBox->Size = System::Drawing::Size(493, 139);
			this->AddressChangeEmp_groupBox->TabIndex = 41;
			this->AddressChangeEmp_groupBox->TabStop = false;
			this->AddressChangeEmp_groupBox->Text = L"Address";
			// 
			// text_ZipCodeChangeEmp
			// 
			this->text_ZipCodeChangeEmp->Location = System::Drawing::Point(35, 95);
			this->text_ZipCodeChangeEmp->Name = L"text_ZipCodeChangeEmp";
			this->text_ZipCodeChangeEmp->Size = System::Drawing::Size(97, 22);
			this->text_ZipCodeChangeEmp->TabIndex = 40;
			// 
			// text_cityNameChangeEmp
			// 
			this->text_cityNameChangeEmp->Location = System::Drawing::Point(174, 95);
			this->text_cityNameChangeEmp->Name = L"text_cityNameChangeEmp";
			this->text_cityNameChangeEmp->Size = System::Drawing::Size(199, 22);
			this->text_cityNameChangeEmp->TabIndex = 39;
			// 
			// text_streetNameChangeEmp
			// 
			this->text_streetNameChangeEmp->Location = System::Drawing::Point(173, 37);
			this->text_streetNameChangeEmp->Name = L"text_streetNameChangeEmp";
			this->text_streetNameChangeEmp->Size = System::Drawing::Size(282, 22);
			this->text_streetNameChangeEmp->TabIndex = 38;
			// 
			// text_streetNumChangeEmp
			// 
			this->text_streetNumChangeEmp->Location = System::Drawing::Point(35, 40);
			this->text_streetNumChangeEmp->Name = L"text_streetNumChangeEmp";
			this->text_streetNumChangeEmp->Size = System::Drawing::Size(97, 22);
			this->text_streetNumChangeEmp->TabIndex = 37;
			// 
			// cityNameChangeEmp
			// 
			this->cityNameChangeEmp->AutoSize = true;
			this->cityNameChangeEmp->Location = System::Drawing::Point(159, 76);
			this->cityNameChangeEmp->Name = L"cityNameChangeEmp";
			this->cityNameChangeEmp->Size = System::Drawing::Size(64, 16);
			this->cityNameChangeEmp->TabIndex = 30;
			this->cityNameChangeEmp->Text = L"city name";
			// 
			// StreetNameChangeEmp
			// 
			this->StreetNameChangeEmp->AutoSize = true;
			this->StreetNameChangeEmp->Location = System::Drawing::Point(156, 18);
			this->StreetNameChangeEmp->Name = L"StreetNameChangeEmp";
			this->StreetNameChangeEmp->Size = System::Drawing::Size(77, 16);
			this->StreetNameChangeEmp->TabIndex = 28;
			this->StreetNameChangeEmp->Text = L"street name";
			// 
			// ZipCodeChangeEmp
			// 
			this->ZipCodeChangeEmp->AutoSize = true;
			this->ZipCodeChangeEmp->Location = System::Drawing::Point(17, 76);
			this->ZipCodeChangeEmp->Name = L"ZipCodeChangeEmp";
			this->ZipCodeChangeEmp->Size = System::Drawing::Size(61, 16);
			this->ZipCodeChangeEmp->TabIndex = 29;
			this->ZipCodeChangeEmp->Text = L"ZIP code";
			// 
			// StreetNumChangeEmp
			// 
			this->StreetNumChangeEmp->AutoSize = true;
			this->StreetNumChangeEmp->Location = System::Drawing::Point(20, 21);
			this->StreetNumChangeEmp->Name = L"StreetNumChangeEmp";
			this->StreetNumChangeEmp->Size = System::Drawing::Size(88, 16);
			this->StreetNumChangeEmp->TabIndex = 27;
			this->StreetNumChangeEmp->Text = L"street number";
			// 
			// InfoChangeEmp_groupBox
			// 
			this->InfoChangeEmp_groupBox->Controls->Add(this->text_EmpIdChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->EmpIdChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->hireChangeEmp_datePicker);
			this->InfoChangeEmp_groupBox->Controls->Add(this->text_lastNameChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->text_fistNameChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->text_chiefIdChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->lastNameChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->hireDateChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->chiefIdChangeEmp);
			this->InfoChangeEmp_groupBox->Controls->Add(this->fistNameChangeEmp);
			this->InfoChangeEmp_groupBox->Location = System::Drawing::Point(550, 314);
			this->InfoChangeEmp_groupBox->Name = L"InfoChangeEmp_groupBox";
			this->InfoChangeEmp_groupBox->Size = System::Drawing::Size(493, 203);
			this->InfoChangeEmp_groupBox->TabIndex = 38;
			this->InfoChangeEmp_groupBox->TabStop = false;
			this->InfoChangeEmp_groupBox->Text = L"Info";
			// 
			// text_EmpIdChangeEmp
			// 
			this->text_EmpIdChangeEmp->BackColor = System::Drawing::SystemColors::HighlightText;
			this->text_EmpIdChangeEmp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->text_EmpIdChangeEmp->Location = System::Drawing::Point(327, 153);
			this->text_EmpIdChangeEmp->Name = L"text_EmpIdChangeEmp";
			this->text_EmpIdChangeEmp->Size = System::Drawing::Size(128, 22);
			this->text_EmpIdChangeEmp->TabIndex = 39;
			// 
			// EmpIdChangeEmp
			// 
			this->EmpIdChangeEmp->AutoSize = true;
			this->EmpIdChangeEmp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->EmpIdChangeEmp->Location = System::Drawing::Point(313, 134);
			this->EmpIdChangeEmp->Name = L"EmpIdChangeEmp";
			this->EmpIdChangeEmp->Size = System::Drawing::Size(83, 16);
			this->EmpIdChangeEmp->TabIndex = 38;
			this->EmpIdChangeEmp->Text = L"Employee Id";
			// 
			// hireChangeEmp_datePicker
			// 
			this->hireChangeEmp_datePicker->Location = System::Drawing::Point(35, 153);
			this->hireChangeEmp_datePicker->Name = L"hireChangeEmp_datePicker";
			this->hireChangeEmp_datePicker->Size = System::Drawing::Size(250, 22);
			this->hireChangeEmp_datePicker->TabIndex = 37;
			// 
			// text_lastNameChangeEmp
			// 
			this->text_lastNameChangeEmp->Location = System::Drawing::Point(35, 47);
			this->text_lastNameChangeEmp->Name = L"text_lastNameChangeEmp";
			this->text_lastNameChangeEmp->Size = System::Drawing::Size(420, 22);
			this->text_lastNameChangeEmp->TabIndex = 32;
			// 
			// text_fistNameChangeEmp
			// 
			this->text_fistNameChangeEmp->Location = System::Drawing::Point(35, 97);
			this->text_fistNameChangeEmp->Name = L"text_fistNameChangeEmp";
			this->text_fistNameChangeEmp->Size = System::Drawing::Size(255, 22);
			this->text_fistNameChangeEmp->TabIndex = 31;
			// 
			// text_chiefIdChangeEmp
			// 
			this->text_chiefIdChangeEmp->BackColor = System::Drawing::SystemColors::HighlightText;
			this->text_chiefIdChangeEmp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->text_chiefIdChangeEmp->Location = System::Drawing::Point(327, 97);
			this->text_chiefIdChangeEmp->Name = L"text_chiefIdChangeEmp";
			this->text_chiefIdChangeEmp->Size = System::Drawing::Size(128, 22);
			this->text_chiefIdChangeEmp->TabIndex = 30;
			// 
			// lastNameChangeEmp
			// 
			this->lastNameChangeEmp->AutoSize = true;
			this->lastNameChangeEmp->Location = System::Drawing::Point(21, 28);
			this->lastNameChangeEmp->Name = L"lastNameChangeEmp";
			this->lastNameChangeEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameChangeEmp->TabIndex = 25;
			this->lastNameChangeEmp->Text = L"last name";
			// 
			// hireDateChangeEmp
			// 
			this->hireDateChangeEmp->AutoSize = true;
			this->hireDateChangeEmp->Location = System::Drawing::Point(23, 134);
			this->hireDateChangeEmp->Name = L"hireDateChangeEmp";
			this->hireDateChangeEmp->Size = System::Drawing::Size(59, 16);
			this->hireDateChangeEmp->TabIndex = 27;
			this->hireDateChangeEmp->Text = L"hire date";
			// 
			// chiefIdChangeEmp
			// 
			this->chiefIdChangeEmp->AutoSize = true;
			this->chiefIdChangeEmp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->chiefIdChangeEmp->Location = System::Drawing::Point(313, 78);
			this->chiefIdChangeEmp->Name = L"chiefIdChangeEmp";
			this->chiefIdChangeEmp->Size = System::Drawing::Size(51, 16);
			this->chiefIdChangeEmp->TabIndex = 28;
			this->chiefIdChangeEmp->Text = L"chief ID";
			// 
			// fistNameChangeEmp
			// 
			this->fistNameChangeEmp->AutoSize = true;
			this->fistNameChangeEmp->Location = System::Drawing::Point(23, 78);
			this->fistNameChangeEmp->Name = L"fistNameChangeEmp";
			this->fistNameChangeEmp->Size = System::Drawing::Size(60, 16);
			this->fistNameChangeEmp->TabIndex = 26;
			this->fistNameChangeEmp->Text = L"fist name";
			// 
			// SearchCust_groupBox
			// 
			this->SearchCust_groupBox->Controls->Add(this->hireDateSearchEmp_datePicker);
			this->SearchCust_groupBox->Controls->Add(this->displayEmp);
			this->SearchCust_groupBox->Controls->Add(this->text_lastNameSearchEmp);
			this->SearchCust_groupBox->Controls->Add(this->eraseEmp);
			this->SearchCust_groupBox->Controls->Add(this->text_firstNameSearchEmp);
			this->SearchCust_groupBox->Controls->Add(this->lastNameSearchEmp);
			this->SearchCust_groupBox->Controls->Add(this->hireDateSearchEmp);
			this->SearchCust_groupBox->Controls->Add(this->firstNameSearchEmp);
			this->SearchCust_groupBox->Location = System::Drawing::Point(803, 38);
			this->SearchCust_groupBox->Name = L"SearchCust_groupBox";
			this->SearchCust_groupBox->Size = System::Drawing::Size(285, 245);
			this->SearchCust_groupBox->TabIndex = 38;
			this->SearchCust_groupBox->TabStop = false;
			this->SearchCust_groupBox->Text = L"Search";
			// 
			// hireDateSearchEmp_datePicker
			// 
			this->hireDateSearchEmp_datePicker->Location = System::Drawing::Point(33, 152);
			this->hireDateSearchEmp_datePicker->Name = L"hireDateSearchEmp_datePicker";
			this->hireDateSearchEmp_datePicker->Size = System::Drawing::Size(232, 22);
			this->hireDateSearchEmp_datePicker->TabIndex = 37;
			// 
			// displayEmp
			// 
			this->displayEmp->Location = System::Drawing::Point(166, 193);
			this->displayEmp->Name = L"displayEmp";
			this->displayEmp->Size = System::Drawing::Size(99, 33);
			this->displayEmp->TabIndex = 36;
			this->displayEmp->Text = L"Display";
			this->displayEmp->UseVisualStyleBackColor = true;
			this->displayEmp->Click += gcnew System::EventHandler(this, &MyForm::displayEmp_Click);
			// 
			// text_lastNameSearchEmp
			// 
			this->text_lastNameSearchEmp->Location = System::Drawing::Point(33, 47);
			this->text_lastNameSearchEmp->Name = L"text_lastNameSearchEmp";
			this->text_lastNameSearchEmp->Size = System::Drawing::Size(232, 22);
			this->text_lastNameSearchEmp->TabIndex = 32;
			// 
			// eraseEmp
			// 
			this->eraseEmp->Location = System::Drawing::Point(22, 193);
			this->eraseEmp->Name = L"eraseEmp";
			this->eraseEmp->Size = System::Drawing::Size(98, 33);
			this->eraseEmp->TabIndex = 34;
			this->eraseEmp->Text = L"Erase";
			this->eraseEmp->UseVisualStyleBackColor = true;
			this->eraseEmp->Click += gcnew System::EventHandler(this, &MyForm::eraseEmp_Click);
			// 
			// text_firstNameSearchEmp
			// 
			this->text_firstNameSearchEmp->Location = System::Drawing::Point(33, 97);
			this->text_firstNameSearchEmp->Name = L"text_firstNameSearchEmp";
			this->text_firstNameSearchEmp->Size = System::Drawing::Size(232, 22);
			this->text_firstNameSearchEmp->TabIndex = 31;
			// 
			// lastNameSearchEmp
			// 
			this->lastNameSearchEmp->AutoSize = true;
			this->lastNameSearchEmp->Location = System::Drawing::Point(19, 28);
			this->lastNameSearchEmp->Name = L"lastNameSearchEmp";
			this->lastNameSearchEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameSearchEmp->TabIndex = 25;
			this->lastNameSearchEmp->Text = L"last name";
			// 
			// hireDateSearchEmp
			// 
			this->hireDateSearchEmp->AutoSize = true;
			this->hireDateSearchEmp->Location = System::Drawing::Point(21, 133);
			this->hireDateSearchEmp->Name = L"hireDateSearchEmp";
			this->hireDateSearchEmp->Size = System::Drawing::Size(59, 16);
			this->hireDateSearchEmp->TabIndex = 27;
			this->hireDateSearchEmp->Text = L"hire date";
			// 
			// firstNameSearchEmp
			// 
			this->firstNameSearchEmp->AutoSize = true;
			this->firstNameSearchEmp->Location = System::Drawing::Point(21, 78);
			this->firstNameSearchEmp->Name = L"firstNameSearchEmp";
			this->firstNameSearchEmp->Size = System::Drawing::Size(60, 16);
			this->firstNameSearchEmp->TabIndex = 26;
			this->firstNameSearchEmp->Text = L"fist name";
			// 
			// changeEmp
			// 
			this->changeEmp->Location = System::Drawing::Point(724, 677);
			this->changeEmp->Name = L"changeEmp";
			this->changeEmp->Size = System::Drawing::Size(151, 33);
			this->changeEmp->TabIndex = 35;
			this->changeEmp->Text = L"Change employee";
			this->changeEmp->UseVisualStyleBackColor = true;
			this->changeEmp->Click += gcnew System::EventHandler(this, &MyForm::changeEmp_Click);
			// 
			// addEmp
			// 
			this->addEmp->Location = System::Drawing::Point(164, 677);
			this->addEmp->Name = L"addEmp";
			this->addEmp->Size = System::Drawing::Size(141, 33);
			this->addEmp->TabIndex = 33;
			this->addEmp->Text = L"Add employee";
			this->addEmp->UseVisualStyleBackColor = true;
			this->addEmp->Click += gcnew System::EventHandler(this, &MyForm::addEmp_Click);
			// 
			// empAdressAdd_GroupBox
			// 
			this->empAdressAdd_GroupBox->Controls->Add(this->text_ZIPcodeAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->text_cityNameAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->text_streetNameAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->text_streetNumber);
			this->empAdressAdd_GroupBox->Controls->Add(this->cityNameAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->streetNameAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->ZIPcodeAddEmp);
			this->empAdressAdd_GroupBox->Controls->Add(this->streetNumAddEmp);
			this->empAdressAdd_GroupBox->Location = System::Drawing::Point(50, 523);
			this->empAdressAdd_GroupBox->Name = L"empAdressAdd_GroupBox";
			this->empAdressAdd_GroupBox->Size = System::Drawing::Size(426, 139);
			this->empAdressAdd_GroupBox->TabIndex = 20;
			this->empAdressAdd_GroupBox->TabStop = false;
			this->empAdressAdd_GroupBox->Text = L"Address";
			// 
			// text_ZIPcodeAddEmp
			// 
			this->text_ZIPcodeAddEmp->Location = System::Drawing::Point(34, 95);
			this->text_ZIPcodeAddEmp->Name = L"text_ZIPcodeAddEmp";
			this->text_ZIPcodeAddEmp->Size = System::Drawing::Size(101, 22);
			this->text_ZIPcodeAddEmp->TabIndex = 40;
			// 
			// text_cityNameAddEmp
			// 
			this->text_cityNameAddEmp->Location = System::Drawing::Point(180, 95);
			this->text_cityNameAddEmp->Name = L"text_cityNameAddEmp";
			this->text_cityNameAddEmp->Size = System::Drawing::Size(163, 22);
			this->text_cityNameAddEmp->TabIndex = 39;
			// 
			// text_streetNameAddEmp
			// 
			this->text_streetNameAddEmp->Location = System::Drawing::Point(180, 40);
			this->text_streetNameAddEmp->Name = L"text_streetNameAddEmp";
			this->text_streetNameAddEmp->Size = System::Drawing::Size(219, 22);
			this->text_streetNameAddEmp->TabIndex = 38;
			// 
			// text_streetNumber
			// 
			this->text_streetNumber->Location = System::Drawing::Point(34, 40);
			this->text_streetNumber->Name = L"text_streetNumber";
			this->text_streetNumber->Size = System::Drawing::Size(101, 22);
			this->text_streetNumber->TabIndex = 37;
			// 
			// cityNameAddEmp
			// 
			this->cityNameAddEmp->AutoSize = true;
			this->cityNameAddEmp->Location = System::Drawing::Point(165, 76);
			this->cityNameAddEmp->Name = L"cityNameAddEmp";
			this->cityNameAddEmp->Size = System::Drawing::Size(64, 16);
			this->cityNameAddEmp->TabIndex = 30;
			this->cityNameAddEmp->Text = L"city name";
			// 
			// streetNameAddEmp
			// 
			this->streetNameAddEmp->AutoSize = true;
			this->streetNameAddEmp->Location = System::Drawing::Point(163, 21);
			this->streetNameAddEmp->Name = L"streetNameAddEmp";
			this->streetNameAddEmp->Size = System::Drawing::Size(77, 16);
			this->streetNameAddEmp->TabIndex = 28;
			this->streetNameAddEmp->Text = L"street name";
			// 
			// ZIPcodeAddEmp
			// 
			this->ZIPcodeAddEmp->AutoSize = true;
			this->ZIPcodeAddEmp->Location = System::Drawing::Point(21, 76);
			this->ZIPcodeAddEmp->Name = L"ZIPcodeAddEmp";
			this->ZIPcodeAddEmp->Size = System::Drawing::Size(61, 16);
			this->ZIPcodeAddEmp->TabIndex = 29;
			this->ZIPcodeAddEmp->Text = L"ZIP code";
			// 
			// streetNumAddEmp
			// 
			this->streetNumAddEmp->AutoSize = true;
			this->streetNumAddEmp->Location = System::Drawing::Point(19, 21);
			this->streetNumAddEmp->Name = L"streetNumAddEmp";
			this->streetNumAddEmp->Size = System::Drawing::Size(88, 16);
			this->streetNumAddEmp->TabIndex = 27;
			this->streetNumAddEmp->Text = L"street number";
			// 
			// infoAddEmp_GroupBox
			// 
			this->infoAddEmp_GroupBox->Controls->Add(this->text_empLastName);
			this->infoAddEmp_GroupBox->Controls->Add(this->text_FirstNameAddEmp);
			this->infoAddEmp_GroupBox->Controls->Add(this->text_chiefIdAddEmp);
			this->infoAddEmp_GroupBox->Controls->Add(this->lastNameAddEmp);
			this->infoAddEmp_GroupBox->Controls->Add(this->chiefIdAddemp);
			this->infoAddEmp_GroupBox->Controls->Add(this->firstNameAddEmp);
			this->infoAddEmp_GroupBox->Location = System::Drawing::Point(50, 314);
			this->infoAddEmp_GroupBox->Name = L"infoAddEmp_GroupBox";
			this->infoAddEmp_GroupBox->Size = System::Drawing::Size(426, 203);
			this->infoAddEmp_GroupBox->TabIndex = 19;
			this->infoAddEmp_GroupBox->TabStop = false;
			this->infoAddEmp_GroupBox->Text = L"Info";
			// 
			// text_empLastName
			// 
			this->text_empLastName->Location = System::Drawing::Point(35, 47);
			this->text_empLastName->Name = L"text_empLastName";
			this->text_empLastName->Size = System::Drawing::Size(364, 22);
			this->text_empLastName->TabIndex = 32;
			// 
			// text_FirstNameAddEmp
			// 
			this->text_FirstNameAddEmp->Location = System::Drawing::Point(35, 97);
			this->text_FirstNameAddEmp->Name = L"text_FirstNameAddEmp";
			this->text_FirstNameAddEmp->Size = System::Drawing::Size(364, 22);
			this->text_FirstNameAddEmp->TabIndex = 31;
			// 
			// text_chiefIdAddEmp
			// 
			this->text_chiefIdAddEmp->BackColor = System::Drawing::SystemColors::HighlightText;
			this->text_chiefIdAddEmp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->text_chiefIdAddEmp->Location = System::Drawing::Point(35, 155);
			this->text_chiefIdAddEmp->Name = L"text_chiefIdAddEmp";
			this->text_chiefIdAddEmp->Size = System::Drawing::Size(128, 22);
			this->text_chiefIdAddEmp->TabIndex = 30;
			// 
			// lastNameAddEmp
			// 
			this->lastNameAddEmp->AutoSize = true;
			this->lastNameAddEmp->Location = System::Drawing::Point(21, 28);
			this->lastNameAddEmp->Name = L"lastNameAddEmp";
			this->lastNameAddEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameAddEmp->TabIndex = 25;
			this->lastNameAddEmp->Text = L"last name";
			// 
			// chiefIdAddemp
			// 
			this->chiefIdAddemp->AutoSize = true;
			this->chiefIdAddemp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->chiefIdAddemp->Location = System::Drawing::Point(21, 136);
			this->chiefIdAddemp->Name = L"chiefIdAddemp";
			this->chiefIdAddemp->Size = System::Drawing::Size(51, 16);
			this->chiefIdAddemp->TabIndex = 28;
			this->chiefIdAddemp->Text = L"chief ID";
			// 
			// firstNameAddEmp
			// 
			this->firstNameAddEmp->AutoSize = true;
			this->firstNameAddEmp->Location = System::Drawing::Point(23, 78);
			this->firstNameAddEmp->Name = L"firstNameAddEmp";
			this->firstNameAddEmp->Size = System::Drawing::Size(60, 16);
			this->firstNameAddEmp->TabIndex = 26;
			this->firstNameAddEmp->Text = L"fist name";
			// 
			// dgv_emp
			// 
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_emp->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dgv_emp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_emp->DefaultCellStyle = dataGridViewCellStyle14;
			this->dgv_emp->Location = System::Drawing::Point(21, 30);
			this->dgv_emp->Name = L"dgv_emp";
			this->dgv_emp->RowHeadersWidth = 51;
			this->dgv_emp->RowTemplate->Height = 24;
			this->dgv_emp->Size = System::Drawing::Size(763, 255);
			this->dgv_emp->TabIndex = 18;
			// 
			// ordersTab
			// 
			this->ordersTab->Controls->Add(this->Item_radioButton);
			this->ordersTab->Controls->Add(this->Pay_radioButton);
			this->ordersTab->Controls->Add(this->meanOfPaymentAddPayOrder_GroupBox);
			this->ordersTab->Controls->Add(this->ItemAddItemOrder_GroupBox);
			this->ordersTab->Controls->Add(this->infoChangeOrder_groupBox);
			this->ordersTab->Controls->Add(this->searchOrder_groupBox);
			this->ordersTab->Controls->Add(this->GlobalInfoAddOrder_GroupBox);
			this->ordersTab->Controls->Add(this->changeOrder);
			this->ordersTab->Controls->Add(this->addOrder);
			this->ordersTab->Controls->Add(this->dgv_ord);
			this->ordersTab->Location = System::Drawing::Point(4, 31);
			this->ordersTab->Name = L"ordersTab";
			this->ordersTab->Size = System::Drawing::Size(1104, 722);
			this->ordersTab->TabIndex = 2;
			this->ordersTab->Text = L"Orders";
			this->ordersTab->UseVisualStyleBackColor = true;
			// 
			// Item_radioButton
			// 
			this->Item_radioButton->AutoSize = true;
			this->Item_radioButton->Checked = true;
			this->Item_radioButton->Location = System::Drawing::Point(841, 56);
			this->Item_radioButton->Name = L"Item_radioButton";
			this->Item_radioButton->Size = System::Drawing::Size(60, 20);
			this->Item_radioButton->TabIndex = 52;
			this->Item_radioButton->TabStop = true;
			this->Item_radioButton->Text = L"Items";
			this->Item_radioButton->UseVisualStyleBackColor = true;
			// 
			// Pay_radioButton
			// 
			this->Pay_radioButton->AutoSize = true;
			this->Pay_radioButton->Location = System::Drawing::Point(926, 56);
			this->Pay_radioButton->Name = L"Pay_radioButton";
			this->Pay_radioButton->Size = System::Drawing::Size(137, 20);
			this->Pay_radioButton->TabIndex = 51;
			this->Pay_radioButton->Text = L"Methode Payment";
			this->Pay_radioButton->UseVisualStyleBackColor = true;
			// 
			// meanOfPaymentAddPayOrder_GroupBox
			// 
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->ErasePaymentOrder);
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->paymentDueAddPayOrder_datePicker);
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->meanOfPaymentAddPayOrder);
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->paymentDueDateAddPayOrder);
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->meanOfPaymentAddPayOrder_comboBox);
			this->meanOfPaymentAddPayOrder_GroupBox->Controls->Add(this->addPayment);
			this->meanOfPaymentAddPayOrder_GroupBox->Location = System::Drawing::Point(806, 478);
			this->meanOfPaymentAddPayOrder_GroupBox->Name = L"meanOfPaymentAddPayOrder_GroupBox";
			this->meanOfPaymentAddPayOrder_GroupBox->Size = System::Drawing::Size(280, 181);
			this->meanOfPaymentAddPayOrder_GroupBox->TabIndex = 49;
			this->meanOfPaymentAddPayOrder_GroupBox->TabStop = false;
			this->meanOfPaymentAddPayOrder_GroupBox->Text = L"mean of payment";
			// 
			// ErasePaymentOrder
			// 
			this->ErasePaymentOrder->Location = System::Drawing::Point(32, 135);
			this->ErasePaymentOrder->Name = L"ErasePaymentOrder";
			this->ErasePaymentOrder->Size = System::Drawing::Size(101, 33);
			this->ErasePaymentOrder->TabIndex = 51;
			this->ErasePaymentOrder->Text = L"Delete";
			this->ErasePaymentOrder->UseVisualStyleBackColor = true;
			this->ErasePaymentOrder->Click += gcnew System::EventHandler(this, &MyForm::ErasePaymentOrder_Click);
			// 
			// paymentDueAddPayOrder_datePicker
			// 
			this->paymentDueAddPayOrder_datePicker->Location = System::Drawing::Point(33, 98);
			this->paymentDueAddPayOrder_datePicker->Name = L"paymentDueAddPayOrder_datePicker";
			this->paymentDueAddPayOrder_datePicker->Size = System::Drawing::Size(224, 22);
			this->paymentDueAddPayOrder_datePicker->TabIndex = 48;
			// 
			// meanOfPaymentAddPayOrder
			// 
			this->meanOfPaymentAddPayOrder->AutoSize = true;
			this->meanOfPaymentAddPayOrder->Location = System::Drawing::Point(16, 24);
			this->meanOfPaymentAddPayOrder->Name = L"meanOfPaymentAddPayOrder";
			this->meanOfPaymentAddPayOrder->Size = System::Drawing::Size(110, 16);
			this->meanOfPaymentAddPayOrder->TabIndex = 31;
			this->meanOfPaymentAddPayOrder->Text = L"mean of payment";
			// 
			// paymentDueDateAddPayOrder
			// 
			this->paymentDueDateAddPayOrder->AutoSize = true;
			this->paymentDueDateAddPayOrder->Location = System::Drawing::Point(14, 74);
			this->paymentDueDateAddPayOrder->Name = L"paymentDueDateAddPayOrder";
			this->paymentDueDateAddPayOrder->Size = System::Drawing::Size(115, 16);
			this->paymentDueDateAddPayOrder->TabIndex = 29;
			this->paymentDueDateAddPayOrder->Text = L"payment due date";
			// 
			// meanOfPaymentAddPayOrder_comboBox
			// 
			this->meanOfPaymentAddPayOrder_comboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Cash",
					L"Credit card", L"Bank transfer"
			});
			this->meanOfPaymentAddPayOrder_comboBox->CausesValidation = false;
			this->meanOfPaymentAddPayOrder_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->meanOfPaymentAddPayOrder_comboBox->FormattingEnabled = true;
			this->meanOfPaymentAddPayOrder_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->meanOfPaymentAddPayOrder_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Cash", L"Credit Card",
					L"Bank transfer"
			});
			this->meanOfPaymentAddPayOrder_comboBox->Location = System::Drawing::Point(33, 41);
			this->meanOfPaymentAddPayOrder_comboBox->Name = L"meanOfPaymentAddPayOrder_comboBox";
			this->meanOfPaymentAddPayOrder_comboBox->Size = System::Drawing::Size(224, 24);
			this->meanOfPaymentAddPayOrder_comboBox->TabIndex = 0;
			// 
			// addPayment
			// 
			this->addPayment->Location = System::Drawing::Point(156, 136);
			this->addPayment->Name = L"addPayment";
			this->addPayment->Size = System::Drawing::Size(101, 33);
			this->addPayment->TabIndex = 44;
			this->addPayment->Text = L"Add another";
			this->addPayment->UseVisualStyleBackColor = true;
			this->addPayment->Click += gcnew System::EventHandler(this, &MyForm::addPayment_Click);
			// 
			// ItemAddItemOrder_GroupBox
			// 
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->EraseItemOrder);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->ItemColorAddItemOrder_comboBox);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->ItemColorAddItemOrder);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->UpDown_quanityAddItemOrder);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->quantityAddItemOrder);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->addItem);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->itemIdAddItemOrder);
			this->ItemAddItemOrder_GroupBox->Controls->Add(this->text_itemIdAddItemOrder);
			this->ItemAddItemOrder_GroupBox->Location = System::Drawing::Point(806, 259);
			this->ItemAddItemOrder_GroupBox->Name = L"ItemAddItemOrder_GroupBox";
			this->ItemAddItemOrder_GroupBox->Size = System::Drawing::Size(280, 191);
			this->ItemAddItemOrder_GroupBox->TabIndex = 50;
			this->ItemAddItemOrder_GroupBox->TabStop = false;
			this->ItemAddItemOrder_GroupBox->Text = L"Item";
			// 
			// EraseItemOrder
			// 
			this->EraseItemOrder->Location = System::Drawing::Point(28, 142);
			this->EraseItemOrder->Name = L"EraseItemOrder";
			this->EraseItemOrder->Size = System::Drawing::Size(101, 33);
			this->EraseItemOrder->TabIndex = 50;
			this->EraseItemOrder->Text = L"Delete";
			this->EraseItemOrder->UseVisualStyleBackColor = true;
			this->EraseItemOrder->Click += gcnew System::EventHandler(this, &MyForm::EraseItemOrder_Click);
			// 
			// ItemColorAddItemOrder_comboBox
			// 
			this->ItemColorAddItemOrder_comboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"Blanc",
					L"Noir", L"Vert", L"Bleu", L"Rouge"
			});
			this->ItemColorAddItemOrder_comboBox->CausesValidation = false;
			this->ItemColorAddItemOrder_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ItemColorAddItemOrder_comboBox->FormattingEnabled = true;
			this->ItemColorAddItemOrder_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ItemColorAddItemOrder_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Blanc", L"Noir", L"Vert",
					L"Bleu", L"Rouge"
			});
			this->ItemColorAddItemOrder_comboBox->Location = System::Drawing::Point(33, 95);
			this->ItemColorAddItemOrder_comboBox->Name = L"ItemColorAddItemOrder_comboBox";
			this->ItemColorAddItemOrder_comboBox->Size = System::Drawing::Size(137, 24);
			this->ItemColorAddItemOrder_comboBox->TabIndex = 49;
			// 
			// ItemColorAddItemOrder
			// 
			this->ItemColorAddItemOrder->AutoSize = true;
			this->ItemColorAddItemOrder->Location = System::Drawing::Point(21, 76);
			this->ItemColorAddItemOrder->Name = L"ItemColorAddItemOrder";
			this->ItemColorAddItemOrder->Size = System::Drawing::Size(65, 16);
			this->ItemColorAddItemOrder->TabIndex = 33;
			this->ItemColorAddItemOrder->Text = L"Item color";
			// 
			// UpDown_quanityAddItemOrder
			// 
			this->UpDown_quanityAddItemOrder->Location = System::Drawing::Point(205, 95);
			this->UpDown_quanityAddItemOrder->Name = L"UpDown_quanityAddItemOrder";
			this->UpDown_quanityAddItemOrder->Size = System::Drawing::Size(46, 22);
			this->UpDown_quanityAddItemOrder->TabIndex = 32;
			// 
			// quantityAddItemOrder
			// 
			this->quantityAddItemOrder->AutoSize = true;
			this->quantityAddItemOrder->Location = System::Drawing::Point(186, 76);
			this->quantityAddItemOrder->Name = L"quantityAddItemOrder";
			this->quantityAddItemOrder->Size = System::Drawing::Size(53, 16);
			this->quantityAddItemOrder->TabIndex = 31;
			this->quantityAddItemOrder->Text = L"quantity";
			// 
			// addItem
			// 
			this->addItem->Location = System::Drawing::Point(150, 142);
			this->addItem->Name = L"addItem";
			this->addItem->Size = System::Drawing::Size(101, 33);
			this->addItem->TabIndex = 45;
			this->addItem->Text = L"Add another";
			this->addItem->UseVisualStyleBackColor = true;
			this->addItem->Click += gcnew System::EventHandler(this, &MyForm::addItem_Click);
			// 
			// itemIdAddItemOrder
			// 
			this->itemIdAddItemOrder->AutoSize = true;
			this->itemIdAddItemOrder->Location = System::Drawing::Point(21, 20);
			this->itemIdAddItemOrder->Name = L"itemIdAddItemOrder";
			this->itemIdAddItemOrder->Size = System::Drawing::Size(116, 16);
			this->itemIdAddItemOrder->TabIndex = 29;
			this->itemIdAddItemOrder->Text = L"item ID (reference)";
			// 
			// text_itemIdAddItemOrder
			// 
			this->text_itemIdAddItemOrder->Location = System::Drawing::Point(33, 39);
			this->text_itemIdAddItemOrder->Name = L"text_itemIdAddItemOrder";
			this->text_itemIdAddItemOrder->Size = System::Drawing::Size(218, 22);
			this->text_itemIdAddItemOrder->TabIndex = 0;
			// 
			// infoChangeOrder_groupBox
			// 
			this->infoChangeOrder_groupBox->Controls->Add(this->deliveryChangeOrder_datePicker);
			this->infoChangeOrder_groupBox->Controls->Add(this->completePayChangeOrder_datePicker);
			this->infoChangeOrder_groupBox->Controls->Add(this->deliveryDateChangeOrder);
			this->infoChangeOrder_groupBox->Controls->Add(this->completePayDateChangeOrder);
			this->infoChangeOrder_groupBox->Controls->Add(this->text_orderIdChangeOrder);
			this->infoChangeOrder_groupBox->Controls->Add(this->orderIdChangeOrder);
			this->infoChangeOrder_groupBox->Location = System::Drawing::Point(472, 391);
			this->infoChangeOrder_groupBox->Name = L"infoChangeOrder_groupBox";
			this->infoChangeOrder_groupBox->Size = System::Drawing::Size(276, 187);
			this->infoChangeOrder_groupBox->TabIndex = 48;
			this->infoChangeOrder_groupBox->TabStop = false;
			this->infoChangeOrder_groupBox->Text = L"Global info";
			// 
			// deliveryChangeOrder_datePicker
			// 
			this->deliveryChangeOrder_datePicker->Location = System::Drawing::Point(39, 138);
			this->deliveryChangeOrder_datePicker->Name = L"deliveryChangeOrder_datePicker";
			this->deliveryChangeOrder_datePicker->Size = System::Drawing::Size(220, 22);
			this->deliveryChangeOrder_datePicker->TabIndex = 47;
			// 
			// completePayChangeOrder_datePicker
			// 
			this->completePayChangeOrder_datePicker->Location = System::Drawing::Point(39, 87);
			this->completePayChangeOrder_datePicker->Name = L"completePayChangeOrder_datePicker";
			this->completePayChangeOrder_datePicker->Size = System::Drawing::Size(220, 22);
			this->completePayChangeOrder_datePicker->TabIndex = 46;
			// 
			// deliveryDateChangeOrder
			// 
			this->deliveryDateChangeOrder->AutoSize = true;
			this->deliveryDateChangeOrder->Location = System::Drawing::Point(20, 116);
			this->deliveryDateChangeOrder->Name = L"deliveryDateChangeOrder";
			this->deliveryDateChangeOrder->Size = System::Drawing::Size(85, 16);
			this->deliveryDateChangeOrder->TabIndex = 35;
			this->deliveryDateChangeOrder->Text = L"delivery date";
			// 
			// completePayDateChangeOrder
			// 
			this->completePayDateChangeOrder->AutoSize = true;
			this->completePayDateChangeOrder->Location = System::Drawing::Point(20, 68);
			this->completePayDateChangeOrder->Name = L"completePayDateChangeOrder";
			this->completePayDateChangeOrder->Size = System::Drawing::Size(156, 16);
			this->completePayDateChangeOrder->TabIndex = 32;
			this->completePayDateChangeOrder->Text = L"complete payement date";
			// 
			// text_orderIdChangeOrder
			// 
			this->text_orderIdChangeOrder->Location = System::Drawing::Point(39, 37);
			this->text_orderIdChangeOrder->Name = L"text_orderIdChangeOrder";
			this->text_orderIdChangeOrder->Size = System::Drawing::Size(112, 22);
			this->text_orderIdChangeOrder->TabIndex = 32;
			// 
			// orderIdChangeOrder
			// 
			this->orderIdChangeOrder->AutoSize = true;
			this->orderIdChangeOrder->Location = System::Drawing::Point(21, 18);
			this->orderIdChangeOrder->Name = L"orderIdChangeOrder";
			this->orderIdChangeOrder->Size = System::Drawing::Size(99, 16);
			this->orderIdChangeOrder->TabIndex = 28;
			this->orderIdChangeOrder->Text = L"order reference";
			// 
			// searchOrder_groupBox
			// 
			this->searchOrder_groupBox->Controls->Add(this->text_orderIdSearchOrder);
			this->searchOrder_groupBox->Controls->Add(this->orderIdSearchOrder);
			this->searchOrder_groupBox->Controls->Add(this->displayOrder);
			this->searchOrder_groupBox->Controls->Add(this->eraseOrder);
			this->searchOrder_groupBox->Location = System::Drawing::Point(806, 92);
			this->searchOrder_groupBox->Name = L"searchOrder_groupBox";
			this->searchOrder_groupBox->Size = System::Drawing::Size(280, 137);
			this->searchOrder_groupBox->TabIndex = 48;
			this->searchOrder_groupBox->TabStop = false;
			this->searchOrder_groupBox->Text = L"Search";
			// 
			// text_orderIdSearchOrder
			// 
			this->text_orderIdSearchOrder->Location = System::Drawing::Point(39, 46);
			this->text_orderIdSearchOrder->Name = L"text_orderIdSearchOrder";
			this->text_orderIdSearchOrder->Size = System::Drawing::Size(212, 22);
			this->text_orderIdSearchOrder->TabIndex = 32;
			// 
			// orderIdSearchOrder
			// 
			this->orderIdSearchOrder->AutoSize = true;
			this->orderIdSearchOrder->Location = System::Drawing::Point(21, 27);
			this->orderIdSearchOrder->Name = L"orderIdSearchOrder";
			this->orderIdSearchOrder->Size = System::Drawing::Size(63, 16);
			this->orderIdSearchOrder->TabIndex = 28;
			this->orderIdSearchOrder->Text = L"order Ref";
			// 
			// displayOrder
			// 
			this->displayOrder->Location = System::Drawing::Point(165, 87);
			this->displayOrder->Name = L"displayOrder";
			this->displayOrder->Size = System::Drawing::Size(86, 33);
			this->displayOrder->TabIndex = 40;
			this->displayOrder->Text = L"Display";
			this->displayOrder->UseVisualStyleBackColor = true;
			this->displayOrder->Click += gcnew System::EventHandler(this, &MyForm::displayOrder_Click);
			// 
			// eraseOrder
			// 
			this->eraseOrder->Location = System::Drawing::Point(32, 87);
			this->eraseOrder->Name = L"eraseOrder";
			this->eraseOrder->Size = System::Drawing::Size(86, 33);
			this->eraseOrder->TabIndex = 38;
			this->eraseOrder->Text = L"Erase";
			this->eraseOrder->UseVisualStyleBackColor = true;
			this->eraseOrder->Click += gcnew System::EventHandler(this, &MyForm::eraseOrder_Click);
			// 
			// GlobalInfoAddOrder_GroupBox
			// 
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->deliveryAddOrder_DatePicker);
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->deliveryDateAddOrder);
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->text_customerIdAddOrders);
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->customerIdAddOrders);
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->meanOfPaymentAddOrder_GroupBox);
			this->GlobalInfoAddOrder_GroupBox->Controls->Add(this->ItemAddOrder_GroupeBox);
			this->GlobalInfoAddOrder_GroupBox->Location = System::Drawing::Point(25, 300);
			this->GlobalInfoAddOrder_GroupBox->Name = L"GlobalInfoAddOrder_GroupBox";
			this->GlobalInfoAddOrder_GroupBox->Size = System::Drawing::Size(408, 370);
			this->GlobalInfoAddOrder_GroupBox->TabIndex = 41;
			this->GlobalInfoAddOrder_GroupBox->TabStop = false;
			this->GlobalInfoAddOrder_GroupBox->Text = L"Global info";
			// 
			// deliveryAddOrder_DatePicker
			// 
			this->deliveryAddOrder_DatePicker->Location = System::Drawing::Point(128, 44);
			this->deliveryAddOrder_DatePicker->Name = L"deliveryAddOrder_DatePicker";
			this->deliveryAddOrder_DatePicker->Size = System::Drawing::Size(220, 22);
			this->deliveryAddOrder_DatePicker->TabIndex = 47;
			this->deliveryAddOrder_DatePicker->Value = System::DateTime(2023, 12, 9, 17, 39, 0, 0);
			// 
			// deliveryDateAddOrder
			// 
			this->deliveryDateAddOrder->AutoSize = true;
			this->deliveryDateAddOrder->Location = System::Drawing::Point(109, 20);
			this->deliveryDateAddOrder->Name = L"deliveryDateAddOrder";
			this->deliveryDateAddOrder->Size = System::Drawing::Size(85, 16);
			this->deliveryDateAddOrder->TabIndex = 35;
			this->deliveryDateAddOrder->Text = L"delivery date";
			// 
			// text_customerIdAddOrders
			// 
			this->text_customerIdAddOrders->Location = System::Drawing::Point(39, 44);
			this->text_customerIdAddOrders->Name = L"text_customerIdAddOrders";
			this->text_customerIdAddOrders->Size = System::Drawing::Size(67, 22);
			this->text_customerIdAddOrders->TabIndex = 34;
			// 
			// customerIdAddOrders
			// 
			this->customerIdAddOrders->AutoSize = true;
			this->customerIdAddOrders->Location = System::Drawing::Point(21, 25);
			this->customerIdAddOrders->Name = L"customerIdAddOrders";
			this->customerIdAddOrders->Size = System::Drawing::Size(78, 16);
			this->customerIdAddOrders->TabIndex = 33;
			this->customerIdAddOrders->Text = L"customer ID";
			// 
			// meanOfPaymentAddOrder_GroupBox
			// 
			this->meanOfPaymentAddOrder_GroupBox->Controls->Add(this->PaymentDueDateAddOrder_datePicker);
			this->meanOfPaymentAddOrder_GroupBox->Controls->Add(this->meanOfPaymentAddOrder);
			this->meanOfPaymentAddOrder_GroupBox->Controls->Add(this->paymentDueDateAddOrder);
			this->meanOfPaymentAddOrder_GroupBox->Controls->Add(this->comboBox_meanOfPaymentAddOrder);
			this->meanOfPaymentAddOrder_GroupBox->Location = System::Drawing::Point(47, 226);
			this->meanOfPaymentAddOrder_GroupBox->Name = L"meanOfPaymentAddOrder_GroupBox";
			this->meanOfPaymentAddOrder_GroupBox->Size = System::Drawing::Size(285, 133);
			this->meanOfPaymentAddOrder_GroupBox->TabIndex = 43;
			this->meanOfPaymentAddOrder_GroupBox->TabStop = false;
			this->meanOfPaymentAddOrder_GroupBox->Text = L"mean of payment";
			// 
			// PaymentDueDateAddOrder_datePicker
			// 
			this->PaymentDueDateAddOrder_datePicker->Location = System::Drawing::Point(33, 96);
			this->PaymentDueDateAddOrder_datePicker->Name = L"PaymentDueDateAddOrder_datePicker";
			this->PaymentDueDateAddOrder_datePicker->Size = System::Drawing::Size(229, 22);
			this->PaymentDueDateAddOrder_datePicker->TabIndex = 48;
			// 
			// meanOfPaymentAddOrder
			// 
			this->meanOfPaymentAddOrder->AutoSize = true;
			this->meanOfPaymentAddOrder->Location = System::Drawing::Point(16, 24);
			this->meanOfPaymentAddOrder->Name = L"meanOfPaymentAddOrder";
			this->meanOfPaymentAddOrder->Size = System::Drawing::Size(110, 16);
			this->meanOfPaymentAddOrder->TabIndex = 31;
			this->meanOfPaymentAddOrder->Text = L"mean of payment";
			// 
			// paymentDueDateAddOrder
			// 
			this->paymentDueDateAddOrder->AutoSize = true;
			this->paymentDueDateAddOrder->Location = System::Drawing::Point(14, 72);
			this->paymentDueDateAddOrder->Name = L"paymentDueDateAddOrder";
			this->paymentDueDateAddOrder->Size = System::Drawing::Size(115, 16);
			this->paymentDueDateAddOrder->TabIndex = 29;
			this->paymentDueDateAddOrder->Text = L"payment due date";
			// 
			// comboBox_meanOfPaymentAddOrder
			// 
			this->comboBox_meanOfPaymentAddOrder->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Cash",
					L"Credit card", L"Bank transfer"
			});
			this->comboBox_meanOfPaymentAddOrder->CausesValidation = false;
			this->comboBox_meanOfPaymentAddOrder->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_meanOfPaymentAddOrder->FormattingEnabled = true;
			this->comboBox_meanOfPaymentAddOrder->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox_meanOfPaymentAddOrder->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cash", L"Credit Card", L"Bank transfer" });
			this->comboBox_meanOfPaymentAddOrder->Location = System::Drawing::Point(33, 41);
			this->comboBox_meanOfPaymentAddOrder->Name = L"comboBox_meanOfPaymentAddOrder";
			this->comboBox_meanOfPaymentAddOrder->Size = System::Drawing::Size(229, 24);
			this->comboBox_meanOfPaymentAddOrder->TabIndex = 0;
			// 
			// ItemAddOrder_GroupeBox
			// 
			this->ItemAddOrder_GroupeBox->Controls->Add(this->ItemColorAddOrder_comboBox);
			this->ItemAddOrder_GroupeBox->Controls->Add(this->ItemColorAddOrder);
			this->ItemAddOrder_GroupeBox->Controls->Add(this->UpDown_quantityItemAddOrders);
			this->ItemAddOrder_GroupeBox->Controls->Add(this->quantityItemsAddOrder);
			this->ItemAddOrder_GroupeBox->Controls->Add(this->itemIDAddOrder);
			this->ItemAddOrder_GroupeBox->Controls->Add(this->text_ItemIdAddOrder);
			this->ItemAddOrder_GroupeBox->Location = System::Drawing::Point(47, 79);
			this->ItemAddOrder_GroupeBox->Name = L"ItemAddOrder_GroupeBox";
			this->ItemAddOrder_GroupeBox->Size = System::Drawing::Size(285, 133);
			this->ItemAddOrder_GroupeBox->TabIndex = 42;
			this->ItemAddOrder_GroupeBox->TabStop = false;
			this->ItemAddOrder_GroupeBox->Text = L"Item";
			// 
			// ItemColorAddOrder_comboBox
			// 
			this->ItemColorAddOrder_comboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"Blanc", L"Noir",
					L"Vert", L"Bleu", L"Rouge"
			});
			this->ItemColorAddOrder_comboBox->CausesValidation = false;
			this->ItemColorAddOrder_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ItemColorAddOrder_comboBox->FormattingEnabled = true;
			this->ItemColorAddOrder_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ItemColorAddOrder_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Blanc", L"Noir", L"Vert", L"Bleu",
					L"Rouge"
			});
			this->ItemColorAddOrder_comboBox->Location = System::Drawing::Point(33, 95);
			this->ItemColorAddOrder_comboBox->Name = L"ItemColorAddOrder_comboBox";
			this->ItemColorAddOrder_comboBox->Size = System::Drawing::Size(141, 24);
			this->ItemColorAddOrder_comboBox->TabIndex = 49;
			// 
			// ItemColorAddOrder
			// 
			this->ItemColorAddOrder->AutoSize = true;
			this->ItemColorAddOrder->Location = System::Drawing::Point(17, 76);
			this->ItemColorAddOrder->Name = L"ItemColorAddOrder";
			this->ItemColorAddOrder->Size = System::Drawing::Size(65, 16);
			this->ItemColorAddOrder->TabIndex = 33;
			this->ItemColorAddOrder->Text = L"Item color";
			// 
			// UpDown_quantityItemAddOrders
			// 
			this->UpDown_quantityItemAddOrders->Location = System::Drawing::Point(213, 94);
			this->UpDown_quantityItemAddOrders->Name = L"UpDown_quantityItemAddOrders";
			this->UpDown_quantityItemAddOrders->Size = System::Drawing::Size(46, 22);
			this->UpDown_quantityItemAddOrders->TabIndex = 32;
			// 
			// quantityItemsAddOrder
			// 
			this->quantityItemsAddOrder->AutoSize = true;
			this->quantityItemsAddOrder->Location = System::Drawing::Point(198, 76);
			this->quantityItemsAddOrder->Name = L"quantityItemsAddOrder";
			this->quantityItemsAddOrder->Size = System::Drawing::Size(53, 16);
			this->quantityItemsAddOrder->TabIndex = 31;
			this->quantityItemsAddOrder->Text = L"quantity";
			// 
			// itemIDAddOrder
			// 
			this->itemIDAddOrder->AutoSize = true;
			this->itemIDAddOrder->Location = System::Drawing::Point(17, 20);
			this->itemIDAddOrder->Name = L"itemIDAddOrder";
			this->itemIDAddOrder->Size = System::Drawing::Size(116, 16);
			this->itemIDAddOrder->TabIndex = 29;
			this->itemIDAddOrder->Text = L"item ID (reference)";
			// 
			// text_ItemIdAddOrder
			// 
			this->text_ItemIdAddOrder->Location = System::Drawing::Point(33, 39);
			this->text_ItemIdAddOrder->Name = L"text_ItemIdAddOrder";
			this->text_ItemIdAddOrder->Size = System::Drawing::Size(122, 22);
			this->text_ItemIdAddOrder->TabIndex = 0;
			// 
			// changeOrder
			// 
			this->changeOrder->Location = System::Drawing::Point(552, 590);
			this->changeOrder->Name = L"changeOrder";
			this->changeOrder->Size = System::Drawing::Size(127, 33);
			this->changeOrder->TabIndex = 39;
			this->changeOrder->Text = L"Change order";
			this->changeOrder->UseVisualStyleBackColor = true;
			this->changeOrder->Click += gcnew System::EventHandler(this, &MyForm::changeOrder_Click);
			// 
			// addOrder
			// 
			this->addOrder->Location = System::Drawing::Point(109, 677);
			this->addOrder->Name = L"addOrder";
			this->addOrder->Size = System::Drawing::Size(150, 33);
			this->addOrder->TabIndex = 37;
			this->addOrder->Text = L"Add order";
			this->addOrder->UseVisualStyleBackColor = true;
			this->addOrder->Click += gcnew System::EventHandler(this, &MyForm::addOrder_Click);
			// 
			// dgv_ord
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_ord->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgv_ord->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_ord->DefaultCellStyle = dataGridViewCellStyle6;
			this->dgv_ord->Location = System::Drawing::Point(22, 31);
			this->dgv_ord->Name = L"dgv_ord";
			this->dgv_ord->RowHeadersWidth = 51;
			this->dgv_ord->RowTemplate->Height = 24;
			this->dgv_ord->Size = System::Drawing::Size(763, 252);
			this->dgv_ord->TabIndex = 18;
			// 
			// stockTab
			// 
			this->stockTab->Controls->Add(this->SearchStock_groupBox);
			this->stockTab->Controls->Add(this->ItemCHangeSotck_groupBox);
			this->stockTab->Controls->Add(this->ItemAddStock_GroupBox);
			this->stockTab->Controls->Add(this->dgv_stock);
			this->stockTab->Controls->Add(this->changeProduct);
			this->stockTab->Controls->Add(this->addProduct);
			this->stockTab->Location = System::Drawing::Point(4, 31);
			this->stockTab->Name = L"stockTab";
			this->stockTab->Size = System::Drawing::Size(1104, 722);
			this->stockTab->TabIndex = 5;
			this->stockTab->Text = L"Stock";
			this->stockTab->UseVisualStyleBackColor = true;
			// 
			// SearchStock_groupBox
			// 
			this->SearchStock_groupBox->Controls->Add(this->itemIdSearchStock);
			this->SearchStock_groupBox->Controls->Add(this->text_itemIdSearchStock);
			this->SearchStock_groupBox->Controls->Add(this->eraseProduct);
			this->SearchStock_groupBox->Controls->Add(this->displayProducts);
			this->SearchStock_groupBox->Location = System::Drawing::Point(800, 82);
			this->SearchStock_groupBox->Name = L"SearchStock_groupBox";
			this->SearchStock_groupBox->Size = System::Drawing::Size(278, 150);
			this->SearchStock_groupBox->TabIndex = 50;
			this->SearchStock_groupBox->TabStop = false;
			this->SearchStock_groupBox->Text = L"Search";
			// 
			// itemIdSearchStock
			// 
			this->itemIdSearchStock->AutoSize = true;
			this->itemIdSearchStock->Location = System::Drawing::Point(20, 36);
			this->itemIdSearchStock->Name = L"itemIdSearchStock";
			this->itemIdSearchStock->Size = System::Drawing::Size(116, 16);
			this->itemIdSearchStock->TabIndex = 34;
			this->itemIdSearchStock->Text = L"item ID (reference)";
			// 
			// text_itemIdSearchStock
			// 
			this->text_itemIdSearchStock->Location = System::Drawing::Point(43, 55);
			this->text_itemIdSearchStock->Name = L"text_itemIdSearchStock";
			this->text_itemIdSearchStock->Size = System::Drawing::Size(203, 22);
			this->text_itemIdSearchStock->TabIndex = 33;
			// 
			// eraseProduct
			// 
			this->eraseProduct->Location = System::Drawing::Point(19, 98);
			this->eraseProduct->Name = L"eraseProduct";
			this->eraseProduct->Size = System::Drawing::Size(95, 33);
			this->eraseProduct->TabIndex = 38;
			this->eraseProduct->Text = L"Erase";
			this->eraseProduct->UseVisualStyleBackColor = true;
			// 
			// displayProducts
			// 
			this->displayProducts->Location = System::Drawing::Point(151, 98);
			this->displayProducts->Name = L"displayProducts";
			this->displayProducts->Size = System::Drawing::Size(95, 33);
			this->displayProducts->TabIndex = 40;
			this->displayProducts->Text = L"Display";
			this->displayProducts->UseVisualStyleBackColor = true;
			// 
			// ItemCHangeSotck_groupBox
			// 
			this->ItemCHangeSotck_groupBox->Controls->Add(this->itemColorChangeStock_comboBox);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->thresholdChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->text_thresholdChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->itemColorChangeSotck);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->VATChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->text_VATChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->priceChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->text_priceChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->itemNameChangeSotck);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->text_itemNameChangeSotck);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->UpDown_quantityChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->quantityChangeStock);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->itemIdChangeSotck);
			this->ItemCHangeSotck_groupBox->Controls->Add(this->text_itemIdChangeSotck);
			this->ItemCHangeSotck_groupBox->Location = System::Drawing::Point(556, 340);
			this->ItemCHangeSotck_groupBox->Name = L"ItemCHangeSotck_groupBox";
			this->ItemCHangeSotck_groupBox->Size = System::Drawing::Size(490, 277);
			this->ItemCHangeSotck_groupBox->TabIndex = 49;
			this->ItemCHangeSotck_groupBox->TabStop = false;
			this->ItemCHangeSotck_groupBox->Text = L"Item";
			// 
			// itemColorChangeStock_comboBox
			// 
			this->itemColorChangeStock_comboBox->FormattingEnabled = true;
			this->itemColorChangeStock_comboBox->Location = System::Drawing::Point(341, 96);
			this->itemColorChangeStock_comboBox->Name = L"itemColorChangeStock_comboBox";
			this->itemColorChangeStock_comboBox->Size = System::Drawing::Size(121, 24);
			this->itemColorChangeStock_comboBox->TabIndex = 48;
			// 
			// thresholdChangeStock
			// 
			this->thresholdChangeStock->AutoSize = true;
			this->thresholdChangeStock->Location = System::Drawing::Point(33, 142);
			this->thresholdChangeStock->Name = L"thresholdChangeStock";
			this->thresholdChangeStock->Size = System::Drawing::Size(109, 16);
			this->thresholdChangeStock->TabIndex = 46;
			this->thresholdChangeStock->Text = L"reorder threshold";
			// 
			// text_thresholdChangeStock
			// 
			this->text_thresholdChangeStock->Location = System::Drawing::Point(56, 161);
			this->text_thresholdChangeStock->Name = L"text_thresholdChangeStock";
			this->text_thresholdChangeStock->Size = System::Drawing::Size(234, 22);
			this->text_thresholdChangeStock->TabIndex = 45;
			// 
			// itemColorChangeSotck
			// 
			this->itemColorChangeSotck->AutoSize = true;
			this->itemColorChangeSotck->Location = System::Drawing::Point(318, 79);
			this->itemColorChangeSotck->Name = L"itemColorChangeSotck";
			this->itemColorChangeSotck->Size = System::Drawing::Size(65, 16);
			this->itemColorChangeSotck->TabIndex = 44;
			this->itemColorChangeSotck->Text = L"item color";
			// 
			// VATChangeStock
			// 
			this->VATChangeStock->AutoSize = true;
			this->VATChangeStock->Location = System::Drawing::Point(318, 206);
			this->VATChangeStock->Name = L"VATChangeStock";
			this->VATChangeStock->Size = System::Drawing::Size(83, 16);
			this->VATChangeStock->TabIndex = 42;
			this->VATChangeStock->Text = L"VAT rate (%)";
			// 
			// text_VATChangeStock
			// 
			this->text_VATChangeStock->Location = System::Drawing::Point(341, 225);
			this->text_VATChangeStock->Name = L"text_VATChangeStock";
			this->text_VATChangeStock->Size = System::Drawing::Size(60, 22);
			this->text_VATChangeStock->TabIndex = 41;
			// 
			// priceChangeStock
			// 
			this->priceChangeStock->AutoSize = true;
			this->priceChangeStock->Location = System::Drawing::Point(37, 206);
			this->priceChangeStock->Name = L"priceChangeStock";
			this->priceChangeStock->Size = System::Drawing::Size(160, 16);
			this->priceChangeStock->TabIndex = 40;
			this->priceChangeStock->Text = L"item price excluding taxes";
			// 
			// text_priceChangeStock
			// 
			this->text_priceChangeStock->Location = System::Drawing::Point(60, 225);
			this->text_priceChangeStock->Name = L"text_priceChangeStock";
			this->text_priceChangeStock->Size = System::Drawing::Size(236, 22);
			this->text_priceChangeStock->TabIndex = 39;
			// 
			// itemNameChangeSotck
			// 
			this->itemNameChangeSotck->AutoSize = true;
			this->itemNameChangeSotck->Location = System::Drawing::Point(37, 79);
			this->itemNameChangeSotck->Name = L"itemNameChangeSotck";
			this->itemNameChangeSotck->Size = System::Drawing::Size(69, 16);
			this->itemNameChangeSotck->TabIndex = 38;
			this->itemNameChangeSotck->Text = L"item name";
			// 
			// text_itemNameChangeSotck
			// 
			this->text_itemNameChangeSotck->Location = System::Drawing::Point(60, 98);
			this->text_itemNameChangeSotck->Name = L"text_itemNameChangeSotck";
			this->text_itemNameChangeSotck->Size = System::Drawing::Size(236, 22);
			this->text_itemNameChangeSotck->TabIndex = 37;
			// 
			// UpDown_quantityChangeStock
			// 
			this->UpDown_quantityChangeStock->Location = System::Drawing::Point(341, 162);
			this->UpDown_quantityChangeStock->Name = L"UpDown_quantityChangeStock";
			this->UpDown_quantityChangeStock->Size = System::Drawing::Size(46, 22);
			this->UpDown_quantityChangeStock->TabIndex = 36;
			// 
			// quantityChangeStock
			// 
			this->quantityChangeStock->AutoSize = true;
			this->quantityChangeStock->Location = System::Drawing::Point(318, 143);
			this->quantityChangeStock->Name = L"quantityChangeStock";
			this->quantityChangeStock->Size = System::Drawing::Size(53, 16);
			this->quantityChangeStock->TabIndex = 35;
			this->quantityChangeStock->Text = L"quantity";
			// 
			// itemIdChangeSotck
			// 
			this->itemIdChangeSotck->AutoSize = true;
			this->itemIdChangeSotck->Location = System::Drawing::Point(37, 18);
			this->itemIdChangeSotck->Name = L"itemIdChangeSotck";
			this->itemIdChangeSotck->Size = System::Drawing::Size(116, 16);
			this->itemIdChangeSotck->TabIndex = 34;
			this->itemIdChangeSotck->Text = L"item ID (reference)";
			// 
			// text_itemIdChangeSotck
			// 
			this->text_itemIdChangeSotck->Location = System::Drawing::Point(60, 37);
			this->text_itemIdChangeSotck->Name = L"text_itemIdChangeSotck";
			this->text_itemIdChangeSotck->Size = System::Drawing::Size(236, 22);
			this->text_itemIdChangeSotck->TabIndex = 33;
			// 
			// ItemAddStock_GroupBox
			// 
			this->ItemAddStock_GroupBox->Controls->Add(this->itemColorAddStock_comboBox);
			this->ItemAddStock_GroupBox->Controls->Add(this->reorderThresholdAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->text_reorderThresholdAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->itemColorAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->VATrateAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->text_vatRateAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->itemPriceETAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->text_ItemPriceExcludingTaxesAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->itemNameAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->text_ItemNameAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->UpDown_quantityAddStock);
			this->ItemAddStock_GroupBox->Controls->Add(this->quantityAddStock);
			this->ItemAddStock_GroupBox->Location = System::Drawing::Point(49, 338);
			this->ItemAddStock_GroupBox->Name = L"ItemAddStock_GroupBox";
			this->ItemAddStock_GroupBox->Size = System::Drawing::Size(436, 286);
			this->ItemAddStock_GroupBox->TabIndex = 42;
			this->ItemAddStock_GroupBox->TabStop = false;
			this->ItemAddStock_GroupBox->Text = L"Item";
			// 
			// itemColorAddStock_comboBox
			// 
			this->itemColorAddStock_comboBox->FormattingEnabled = true;
			this->itemColorAddStock_comboBox->Location = System::Drawing::Point(67, 108);
			this->itemColorAddStock_comboBox->Name = L"itemColorAddStock_comboBox";
			this->itemColorAddStock_comboBox->Size = System::Drawing::Size(151, 24);
			this->itemColorAddStock_comboBox->TabIndex = 47;
			// 
			// reorderThresholdAddStock
			// 
			this->reorderThresholdAddStock->AutoSize = true;
			this->reorderThresholdAddStock->Location = System::Drawing::Point(44, 151);
			this->reorderThresholdAddStock->Name = L"reorderThresholdAddStock";
			this->reorderThresholdAddStock->Size = System::Drawing::Size(109, 16);
			this->reorderThresholdAddStock->TabIndex = 46;
			this->reorderThresholdAddStock->Text = L"reorder threshold";
			// 
			// text_reorderThresholdAddStock
			// 
			this->text_reorderThresholdAddStock->Location = System::Drawing::Point(67, 170);
			this->text_reorderThresholdAddStock->Name = L"text_reorderThresholdAddStock";
			this->text_reorderThresholdAddStock->Size = System::Drawing::Size(190, 22);
			this->text_reorderThresholdAddStock->TabIndex = 45;
			// 
			// itemColorAddStock
			// 
			this->itemColorAddStock->AutoSize = true;
			this->itemColorAddStock->Location = System::Drawing::Point(44, 88);
			this->itemColorAddStock->Name = L"itemColorAddStock";
			this->itemColorAddStock->Size = System::Drawing::Size(65, 16);
			this->itemColorAddStock->TabIndex = 44;
			this->itemColorAddStock->Text = L"item color";
			// 
			// VATrateAddStock
			// 
			this->VATrateAddStock->AutoSize = true;
			this->VATrateAddStock->Location = System::Drawing::Point(260, 215);
			this->VATrateAddStock->Name = L"VATrateAddStock";
			this->VATrateAddStock->Size = System::Drawing::Size(83, 16);
			this->VATrateAddStock->TabIndex = 42;
			this->VATrateAddStock->Text = L"VAT rate (%)";
			// 
			// text_vatRateAddStock
			// 
			this->text_vatRateAddStock->Location = System::Drawing::Point(283, 234);
			this->text_vatRateAddStock->Name = L"text_vatRateAddStock";
			this->text_vatRateAddStock->Size = System::Drawing::Size(60, 22);
			this->text_vatRateAddStock->TabIndex = 41;
			// 
			// itemPriceETAddStock
			// 
			this->itemPriceETAddStock->AutoSize = true;
			this->itemPriceETAddStock->Location = System::Drawing::Point(44, 215);
			this->itemPriceETAddStock->Name = L"itemPriceETAddStock";
			this->itemPriceETAddStock->Size = System::Drawing::Size(160, 16);
			this->itemPriceETAddStock->TabIndex = 40;
			this->itemPriceETAddStock->Text = L"item price excluding taxes";
			// 
			// text_ItemPriceExcludingTaxesAddStock
			// 
			this->text_ItemPriceExcludingTaxesAddStock->Location = System::Drawing::Point(67, 234);
			this->text_ItemPriceExcludingTaxesAddStock->Name = L"text_ItemPriceExcludingTaxesAddStock";
			this->text_ItemPriceExcludingTaxesAddStock->Size = System::Drawing::Size(151, 22);
			this->text_ItemPriceExcludingTaxesAddStock->TabIndex = 39;
			// 
			// itemNameAddStock
			// 
			this->itemNameAddStock->AutoSize = true;
			this->itemNameAddStock->Location = System::Drawing::Point(44, 27);
			this->itemNameAddStock->Name = L"itemNameAddStock";
			this->itemNameAddStock->Size = System::Drawing::Size(69, 16);
			this->itemNameAddStock->TabIndex = 38;
			this->itemNameAddStock->Text = L"item name";
			// 
			// text_ItemNameAddStock
			// 
			this->text_ItemNameAddStock->Location = System::Drawing::Point(67, 46);
			this->text_ItemNameAddStock->Name = L"text_ItemNameAddStock";
			this->text_ItemNameAddStock->Size = System::Drawing::Size(190, 22);
			this->text_ItemNameAddStock->TabIndex = 37;
			// 
			// UpDown_quantityAddStock
			// 
			this->UpDown_quantityAddStock->Location = System::Drawing::Point(283, 107);
			this->UpDown_quantityAddStock->Name = L"UpDown_quantityAddStock";
			this->UpDown_quantityAddStock->Size = System::Drawing::Size(46, 22);
			this->UpDown_quantityAddStock->TabIndex = 36;
			// 
			// quantityAddStock
			// 
			this->quantityAddStock->AutoSize = true;
			this->quantityAddStock->Location = System::Drawing::Point(260, 88);
			this->quantityAddStock->Name = L"quantityAddStock";
			this->quantityAddStock->Size = System::Drawing::Size(53, 16);
			this->quantityAddStock->TabIndex = 35;
			this->quantityAddStock->Text = L"quantity";
			// 
			// dgv_stock
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_stock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dgv_stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_stock->DefaultCellStyle = dataGridViewCellStyle8;
			this->dgv_stock->Location = System::Drawing::Point(21, 27);
			this->dgv_stock->Name = L"dgv_stock";
			this->dgv_stock->RowHeadersWidth = 51;
			this->dgv_stock->RowTemplate->Height = 24;
			this->dgv_stock->Size = System::Drawing::Size(763, 260);
			this->dgv_stock->TabIndex = 41;
			// 
			// changeProduct
			// 
			this->changeProduct->Location = System::Drawing::Point(715, 640);
			this->changeProduct->Name = L"changeProduct";
			this->changeProduct->Size = System::Drawing::Size(151, 33);
			this->changeProduct->TabIndex = 39;
			this->changeProduct->Text = L"Change product";
			this->changeProduct->UseVisualStyleBackColor = true;
			// 
			// addProduct
			// 
			this->addProduct->Location = System::Drawing::Point(184, 630);
			this->addProduct->Name = L"addProduct";
			this->addProduct->Size = System::Drawing::Size(141, 33);
			this->addProduct->TabIndex = 37;
			this->addProduct->Text = L"Add product";
			this->addProduct->UseVisualStyleBackColor = true;
			// 
			// statisticTab
			// 
			this->statisticTab->Controls->Add(this->DateStatistics_groupBox);
			this->statisticTab->Controls->Add(this->CustomerStatistics_groupBox);
			this->statisticTab->Controls->Add(this->button_commercialValueStock);
			this->statisticTab->Controls->Add(this->button_bestSelling);
			this->statisticTab->Controls->Add(this->button_purchaseValueStock);
			this->statisticTab->Controls->Add(this->button_lowestSelling);
			this->statisticTab->Controls->Add(this->button_averageCart);
			this->statisticTab->Controls->Add(this->button_underReorderThreshold);
			this->statisticTab->Controls->Add(this->dgv_stat);
			this->statisticTab->Location = System::Drawing::Point(4, 31);
			this->statisticTab->Name = L"statisticTab";
			this->statisticTab->Size = System::Drawing::Size(1104, 722);
			this->statisticTab->TabIndex = 3;
			this->statisticTab->Text = L"Statistics";
			this->statisticTab->UseVisualStyleBackColor = true;
			// 
			// DateStatistics_groupBox
			// 
			this->DateStatistics_groupBox->Controls->Add(this->text_turnoverYear);
			this->DateStatistics_groupBox->Controls->Add(this->yearStatistics);
			this->DateStatistics_groupBox->Controls->Add(this->text_turnoverMonth);
			this->DateStatistics_groupBox->Controls->Add(this->monthStatistics);
			this->DateStatistics_groupBox->Controls->Add(this->button_turnover);
			this->DateStatistics_groupBox->Location = System::Drawing::Point(560, 539);
			this->DateStatistics_groupBox->Name = L"DateStatistics_groupBox";
			this->DateStatistics_groupBox->Size = System::Drawing::Size(390, 134);
			this->DateStatistics_groupBox->TabIndex = 43;
			this->DateStatistics_groupBox->TabStop = false;
			this->DateStatistics_groupBox->Text = L"Date";
			// 
			// text_turnoverYear
			// 
			this->text_turnoverYear->Location = System::Drawing::Point(250, 35);
			this->text_turnoverYear->Name = L"text_turnoverYear";
			this->text_turnoverYear->Size = System::Drawing::Size(92, 22);
			this->text_turnoverYear->TabIndex = 34;
			// 
			// yearStatistics
			// 
			this->yearStatistics->AutoSize = true;
			this->yearStatistics->Location = System::Drawing::Point(210, 38);
			this->yearStatistics->Name = L"yearStatistics";
			this->yearStatistics->Size = System::Drawing::Size(34, 16);
			this->yearStatistics->TabIndex = 33;
			this->yearStatistics->Text = L"year";
			// 
			// text_turnoverMonth
			// 
			this->text_turnoverMonth->Location = System::Drawing::Point(86, 35);
			this->text_turnoverMonth->Name = L"text_turnoverMonth";
			this->text_turnoverMonth->Size = System::Drawing::Size(70, 22);
			this->text_turnoverMonth->TabIndex = 32;
			// 
			// monthStatistics
			// 
			this->monthStatistics->AutoSize = true;
			this->monthStatistics->Location = System::Drawing::Point(37, 38);
			this->monthStatistics->Name = L"monthStatistics";
			this->monthStatistics->Size = System::Drawing::Size(43, 16);
			this->monthStatistics->TabIndex = 28;
			this->monthStatistics->Text = L"month";
			// 
			// button_turnover
			// 
			this->button_turnover->Location = System::Drawing::Point(22, 79);
			this->button_turnover->Name = L"button_turnover";
			this->button_turnover->Size = System::Drawing::Size(331, 41);
			this->button_turnover->TabIndex = 19;
			this->button_turnover->Text = L"Calculate turnover for a month";
			this->button_turnover->UseVisualStyleBackColor = true;
			this->button_turnover->Click += gcnew System::EventHandler(this, &MyForm::button_turnover_Click);
			// 
			// CustomerStatistics_groupBox
			// 
			this->CustomerStatistics_groupBox->Controls->Add(this->birthStatisitcs_datePicker);
			this->CustomerStatistics_groupBox->Controls->Add(this->birthDateStatistics);
			this->CustomerStatistics_groupBox->Controls->Add(this->firstNameStatistics);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustLastName);
			this->CustomerStatistics_groupBox->Controls->Add(this->button_customerTotalAmount);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustFirstName);
			this->CustomerStatistics_groupBox->Controls->Add(this->lastNameStatistics);
			this->CustomerStatistics_groupBox->Location = System::Drawing::Point(73, 450);
			this->CustomerStatistics_groupBox->Name = L"CustomerStatistics_groupBox";
			this->CustomerStatistics_groupBox->Size = System::Drawing::Size(390, 223);
			this->CustomerStatistics_groupBox->TabIndex = 42;
			this->CustomerStatistics_groupBox->TabStop = false;
			this->CustomerStatistics_groupBox->Text = L"Customer";
			// 
			// birthStatisitcs_datePicker
			// 
			this->birthStatisitcs_datePicker->Location = System::Drawing::Point(99, 111);
			this->birthStatisitcs_datePicker->Name = L"birthStatisitcs_datePicker";
			this->birthStatisitcs_datePicker->Size = System::Drawing::Size(226, 22);
			this->birthStatisitcs_datePicker->TabIndex = 36;
			// 
			// birthDateStatistics
			// 
			this->birthDateStatistics->AutoSize = true;
			this->birthDateStatistics->Location = System::Drawing::Point(23, 118);
			this->birthDateStatistics->Name = L"birthDateStatistics";
			this->birthDateStatistics->Size = System::Drawing::Size(62, 16);
			this->birthDateStatistics->TabIndex = 35;
			this->birthDateStatistics->Text = L"birth date";
			// 
			// firstNameStatistics
			// 
			this->firstNameStatistics->AutoSize = true;
			this->firstNameStatistics->Location = System::Drawing::Point(21, 76);
			this->firstNameStatistics->Name = L"firstNameStatistics";
			this->firstNameStatistics->Size = System::Drawing::Size(64, 16);
			this->firstNameStatistics->TabIndex = 32;
			this->firstNameStatistics->Text = L"first name";
			// 
			// text_statisticsCustLastName
			// 
			this->text_statisticsCustLastName->Location = System::Drawing::Point(99, 36);
			this->text_statisticsCustLastName->Name = L"text_statisticsCustLastName";
			this->text_statisticsCustLastName->Size = System::Drawing::Size(226, 22);
			this->text_statisticsCustLastName->TabIndex = 34;
			// 
			// button_customerTotalAmount
			// 
			this->button_customerTotalAmount->Location = System::Drawing::Point(26, 167);
			this->button_customerTotalAmount->Name = L"button_customerTotalAmount";
			this->button_customerTotalAmount->Size = System::Drawing::Size(331, 41);
			this->button_customerTotalAmount->TabIndex = 24;
			this->button_customerTotalAmount->Text = L"Calculate total amout for customer";
			this->button_customerTotalAmount->UseVisualStyleBackColor = true;
			this->button_customerTotalAmount->Click += gcnew System::EventHandler(this, &MyForm::button_customerTotalAmount_Click);
			// 
			// text_statisticsCustFirstName
			// 
			this->text_statisticsCustFirstName->Location = System::Drawing::Point(99, 73);
			this->text_statisticsCustFirstName->Name = L"text_statisticsCustFirstName";
			this->text_statisticsCustFirstName->Size = System::Drawing::Size(226, 22);
			this->text_statisticsCustFirstName->TabIndex = 33;
			// 
			// lastNameStatistics
			// 
			this->lastNameStatistics->AutoSize = true;
			this->lastNameStatistics->Location = System::Drawing::Point(20, 36);
			this->lastNameStatistics->Name = L"lastNameStatistics";
			this->lastNameStatistics->Size = System::Drawing::Size(65, 16);
			this->lastNameStatistics->TabIndex = 33;
			this->lastNameStatistics->Text = L"last name";
			// 
			// button_commercialValueStock
			// 
			this->button_commercialValueStock->Location = System::Drawing::Point(603, 369);
			this->button_commercialValueStock->Name = L"button_commercialValueStock";
			this->button_commercialValueStock->Size = System::Drawing::Size(331, 41);
			this->button_commercialValueStock->TabIndex = 26;
			this->button_commercialValueStock->Text = L"Calculate the commercial value of stock";
			this->button_commercialValueStock->UseVisualStyleBackColor = true;
			this->button_commercialValueStock->Click += gcnew System::EventHandler(this, &MyForm::button_commercialValueStock_Click);
			// 
			// button_bestSelling
			// 
			this->button_bestSelling->Location = System::Drawing::Point(104, 290);
			this->button_bestSelling->Name = L"button_bestSelling";
			this->button_bestSelling->Size = System::Drawing::Size(331, 41);
			this->button_bestSelling->TabIndex = 25;
			this->button_bestSelling->Text = L"10 best-selling items";
			this->button_bestSelling->UseVisualStyleBackColor = true;
			this->button_bestSelling->Click += gcnew System::EventHandler(this, &MyForm::button_bestSelling_Click);
			// 
			// button_purchaseValueStock
			// 
			this->button_purchaseValueStock->Location = System::Drawing::Point(603, 278);
			this->button_purchaseValueStock->Name = L"button_purchaseValueStock";
			this->button_purchaseValueStock->Size = System::Drawing::Size(331, 41);
			this->button_purchaseValueStock->TabIndex = 23;
			this->button_purchaseValueStock->Text = L"Calculate the purchase value of stock";
			this->button_purchaseValueStock->UseVisualStyleBackColor = true;
			this->button_purchaseValueStock->Click += gcnew System::EventHandler(this, &MyForm::button_purchaseValueStock_Click);
			// 
			// button_lowestSelling
			// 
			this->button_lowestSelling->Location = System::Drawing::Point(104, 369);
			this->button_lowestSelling->Name = L"button_lowestSelling";
			this->button_lowestSelling->Size = System::Drawing::Size(331, 41);
			this->button_lowestSelling->TabIndex = 22;
			this->button_lowestSelling->Text = L"10 lowest-selling items";
			this->button_lowestSelling->UseVisualStyleBackColor = true;
			this->button_lowestSelling->Click += gcnew System::EventHandler(this, &MyForm::button_lowestSelling_Click);
			// 
			// button_averageCart
			// 
			this->button_averageCart->Location = System::Drawing::Point(600, 461);
			this->button_averageCart->Name = L"button_averageCart";
			this->button_averageCart->Size = System::Drawing::Size(331, 41);
			this->button_averageCart->TabIndex = 21;
			this->button_averageCart->Text = L"Calculate average cart after discount";
			this->button_averageCart->UseVisualStyleBackColor = true;
			this->button_averageCart->Click += gcnew System::EventHandler(this, &MyForm::button_averageCart_Click);
			// 
			// button_underReorderThreshold
			// 
			this->button_underReorderThreshold->Location = System::Drawing::Point(842, 107);
			this->button_underReorderThreshold->Name = L"button_underReorderThreshold";
			this->button_underReorderThreshold->Size = System::Drawing::Size(155, 88);
			this->button_underReorderThreshold->TabIndex = 20;
			this->button_underReorderThreshold->Text = L"Products under the reorder threshold";
			this->button_underReorderThreshold->UseVisualStyleBackColor = true;
			this->button_underReorderThreshold->Click += gcnew System::EventHandler(this, &MyForm::button_underReorderThreshold_Click);
			// 
			// dgv_stat
			// 
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_stat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dgv_stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_stat->DefaultCellStyle = dataGridViewCellStyle10;
			this->dgv_stat->Location = System::Drawing::Point(51, 47);
			this->dgv_stat->Name = L"dgv_stat";
			this->dgv_stat->RowHeadersWidth = 51;
			this->dgv_stat->RowTemplate->Height = 24;
			this->dgv_stat->Size = System::Drawing::Size(715, 205);
			this->dgv_stat->TabIndex = 18;
			// 
			// simulationsTab
			// 
			this->simulationsTab->Controls->Add(this->markdown_groupBox);
			this->simulationsTab->Controls->Add(this->dicount_groupBox);
			this->simulationsTab->Controls->Add(this->margin_groupBox);
			this->simulationsTab->Controls->Add(this->VAT_groupBox);
			this->simulationsTab->Controls->Add(this->dgv_simu);
			this->simulationsTab->Controls->Add(this->execution_button);
			this->simulationsTab->Location = System::Drawing::Point(4, 31);
			this->simulationsTab->Name = L"simulationsTab";
			this->simulationsTab->Size = System::Drawing::Size(1104, 722);
			this->simulationsTab->TabIndex = 4;
			this->simulationsTab->Text = L"Simulations";
			this->simulationsTab->UseVisualStyleBackColor = true;
			// 
			// markdown_groupBox
			// 
			this->markdown_groupBox->Controls->Add(this->text_CustomMarkdown);
			this->markdown_groupBox->Controls->Add(this->customMarkdown_radioButton);
			this->markdown_groupBox->Controls->Add(this->markdown2);
			this->markdown_groupBox->Controls->Add(this->markdown1);
			this->markdown_groupBox->Controls->Add(this->markdown3);
			this->markdown_groupBox->Location = System::Drawing::Point(97, 494);
			this->markdown_groupBox->Name = L"markdown_groupBox";
			this->markdown_groupBox->Size = System::Drawing::Size(612, 54);
			this->markdown_groupBox->TabIndex = 21;
			this->markdown_groupBox->TabStop = false;
			this->markdown_groupBox->Text = L"Unknow markdown";
			// 
			// text_CustomMarkdown
			// 
			this->text_CustomMarkdown->Location = System::Drawing::Point(462, 19);
			this->text_CustomMarkdown->Name = L"text_CustomMarkdown";
			this->text_CustomMarkdown->Size = System::Drawing::Size(122, 22);
			this->text_CustomMarkdown->TabIndex = 11;
			this->text_CustomMarkdown->Text = L"6";
			// 
			// customMarkdown_radioButton
			// 
			this->customMarkdown_radioButton->AutoSize = true;
			this->customMarkdown_radioButton->Location = System::Drawing::Point(383, 21);
			this->customMarkdown_radioButton->Name = L"customMarkdown_radioButton";
			this->customMarkdown_radioButton->Size = System::Drawing::Size(73, 20);
			this->customMarkdown_radioButton->TabIndex = 11;
			this->customMarkdown_radioButton->TabStop = true;
			this->customMarkdown_radioButton->Text = L"Custom";
			this->customMarkdown_radioButton->UseVisualStyleBackColor = true;
			this->customMarkdown_radioButton->Click += gcnew System::EventHandler(this, &MyForm::customMarkdown_radioButton_Click);
			// 
			// markdown2
			// 
			this->markdown2->AutoSize = true;
			this->markdown2->Location = System::Drawing::Point(157, 21);
			this->markdown2->Name = L"markdown2";
			this->markdown2->Size = System::Drawing::Size(50, 20);
			this->markdown2->TabIndex = 15;
			this->markdown2->TabStop = true;
			this->markdown2->Text = L"3 %";
			this->markdown2->UseVisualStyleBackColor = true;
			this->markdown2->Click += gcnew System::EventHandler(this, &MyForm::markdown2_Click);
			// 
			// markdown1
			// 
			this->markdown1->AutoSize = true;
			this->markdown1->Location = System::Drawing::Point(61, 21);
			this->markdown1->Name = L"markdown1";
			this->markdown1->Size = System::Drawing::Size(50, 20);
			this->markdown1->TabIndex = 14;
			this->markdown1->TabStop = true;
			this->markdown1->Text = L"2 %";
			this->markdown1->UseVisualStyleBackColor = true;
			this->markdown1->Click += gcnew System::EventHandler(this, &MyForm::markdown1_Click);
			// 
			// markdown3
			// 
			this->markdown3->AutoSize = true;
			this->markdown3->Location = System::Drawing::Point(264, 21);
			this->markdown3->Name = L"markdown3";
			this->markdown3->Size = System::Drawing::Size(50, 20);
			this->markdown3->TabIndex = 16;
			this->markdown3->TabStop = true;
			this->markdown3->Text = L"5 %";
			this->markdown3->UseVisualStyleBackColor = true;
			this->markdown3->Click += gcnew System::EventHandler(this, &MyForm::markdown3_Click);
			// 
			// dicount_groupBox
			// 
			this->dicount_groupBox->Controls->Add(this->text_CustomDiscount);
			this->dicount_groupBox->Controls->Add(this->CustomDiscount_radioButton);
			this->dicount_groupBox->Controls->Add(this->discount2);
			this->dicount_groupBox->Controls->Add(this->discount1);
			this->dicount_groupBox->Location = System::Drawing::Point(97, 580);
			this->dicount_groupBox->Name = L"dicount_groupBox";
			this->dicount_groupBox->Size = System::Drawing::Size(489, 54);
			this->dicount_groupBox->TabIndex = 20;
			this->dicount_groupBox->TabStop = false;
			this->dicount_groupBox->Text = L"Trade discount";
			// 
			// text_CustomDiscount
			// 
			this->text_CustomDiscount->Location = System::Drawing::Point(343, 21);
			this->text_CustomDiscount->Name = L"text_CustomDiscount";
			this->text_CustomDiscount->Size = System::Drawing::Size(122, 22);
			this->text_CustomDiscount->TabIndex = 17;
			this->text_CustomDiscount->Text = L"7";
			// 
			// CustomDiscount_radioButton
			// 
			this->CustomDiscount_radioButton->AutoSize = true;
			this->CustomDiscount_radioButton->Location = System::Drawing::Point(264, 21);
			this->CustomDiscount_radioButton->Name = L"CustomDiscount_radioButton";
			this->CustomDiscount_radioButton->Size = System::Drawing::Size(73, 20);
			this->CustomDiscount_radioButton->TabIndex = 17;
			this->CustomDiscount_radioButton->TabStop = true;
			this->CustomDiscount_radioButton->Text = L"Custom";
			this->CustomDiscount_radioButton->UseVisualStyleBackColor = true;
			this->CustomDiscount_radioButton->Click += gcnew System::EventHandler(this, &MyForm::CustomDiscount_radioButton_Click);
			// 
			// discount2
			// 
			this->discount2->AutoSize = true;
			this->discount2->Location = System::Drawing::Point(185, 21);
			this->discount2->Name = L"discount2";
			this->discount2->Size = System::Drawing::Size(50, 20);
			this->discount2->TabIndex = 12;
			this->discount2->TabStop = true;
			this->discount2->Text = L"6 %";
			this->discount2->UseVisualStyleBackColor = true;
			this->discount2->Click += gcnew System::EventHandler(this, &MyForm::discount2_Click);
			// 
			// discount1
			// 
			this->discount1->AutoSize = true;
			this->discount1->Location = System::Drawing::Point(72, 21);
			this->discount1->Name = L"discount1";
			this->discount1->Size = System::Drawing::Size(50, 20);
			this->discount1->TabIndex = 11;
			this->discount1->TabStop = true;
			this->discount1->Text = L"5 %";
			this->discount1->UseVisualStyleBackColor = true;
			this->discount1->Click += gcnew System::EventHandler(this, &MyForm::discount1_Click);
			// 
			// margin_groupBox
			// 
			this->margin_groupBox->Controls->Add(this->text_CustomMargin);
			this->margin_groupBox->Controls->Add(this->customMargin_radioButton);
			this->margin_groupBox->Controls->Add(this->grossMargin3);
			this->margin_groupBox->Controls->Add(this->grossMargin1);
			this->margin_groupBox->Controls->Add(this->grossMargin2);
			this->margin_groupBox->Location = System::Drawing::Point(97, 411);
			this->margin_groupBox->Name = L"margin_groupBox";
			this->margin_groupBox->Size = System::Drawing::Size(612, 54);
			this->margin_groupBox->TabIndex = 19;
			this->margin_groupBox->TabStop = false;
			this->margin_groupBox->Text = L"Gross Margin";
			// 
			// text_CustomMargin
			// 
			this->text_CustomMargin->Location = System::Drawing::Point(462, 20);
			this->text_CustomMargin->Name = L"text_CustomMargin";
			this->text_CustomMargin->Size = System::Drawing::Size(122, 22);
			this->text_CustomMargin->TabIndex = 6;
			this->text_CustomMargin->Text = L"20";
			// 
			// customMargin_radioButton
			// 
			this->customMargin_radioButton->AutoSize = true;
			this->customMargin_radioButton->Location = System::Drawing::Point(383, 21);
			this->customMargin_radioButton->Name = L"customMargin_radioButton";
			this->customMargin_radioButton->Size = System::Drawing::Size(73, 20);
			this->customMargin_radioButton->TabIndex = 5;
			this->customMargin_radioButton->TabStop = true;
			this->customMargin_radioButton->Text = L"Custom";
			this->customMargin_radioButton->UseVisualStyleBackColor = true;
			this->customMargin_radioButton->Click += gcnew System::EventHandler(this, &MyForm::customMargin_radioButton_Click);
			// 
			// grossMargin3
			// 
			this->grossMargin3->AutoSize = true;
			this->grossMargin3->Location = System::Drawing::Point(264, 21);
			this->grossMargin3->Name = L"grossMargin3";
			this->grossMargin3->Size = System::Drawing::Size(57, 20);
			this->grossMargin3->TabIndex = 10;
			this->grossMargin3->TabStop = true;
			this->grossMargin3->Text = L"15 %";
			this->grossMargin3->UseVisualStyleBackColor = true;
			this->grossMargin3->Click += gcnew System::EventHandler(this, &MyForm::grossMargin3_Click);
			// 
			// grossMargin1
			// 
			this->grossMargin1->AutoSize = true;
			this->grossMargin1->Location = System::Drawing::Point(61, 21);
			this->grossMargin1->Name = L"grossMargin1";
			this->grossMargin1->Size = System::Drawing::Size(50, 20);
			this->grossMargin1->TabIndex = 8;
			this->grossMargin1->TabStop = true;
			this->grossMargin1->Text = L"5 %";
			this->grossMargin1->UseVisualStyleBackColor = true;
			this->grossMargin1->Click += gcnew System::EventHandler(this, &MyForm::grossMargin1_Click);
			// 
			// grossMargin2
			// 
			this->grossMargin2->AutoSize = true;
			this->grossMargin2->Location = System::Drawing::Point(157, 21);
			this->grossMargin2->Name = L"grossMargin2";
			this->grossMargin2->Size = System::Drawing::Size(57, 20);
			this->grossMargin2->TabIndex = 9;
			this->grossMargin2->TabStop = true;
			this->grossMargin2->Text = L"10 %";
			this->grossMargin2->UseVisualStyleBackColor = true;
			this->grossMargin2->Click += gcnew System::EventHandler(this, &MyForm::grossMargin2_Click);
			// 
			// VAT_groupBox
			// 
			this->VAT_groupBox->Controls->Add(this->text_CustomVAT);
			this->VAT_groupBox->Controls->Add(this->CustomVAT_radioButton);
			this->VAT_groupBox->Controls->Add(this->VAT3);
			this->VAT_groupBox->Controls->Add(this->VAT2);
			this->VAT_groupBox->Controls->Add(this->VAT1);
			this->VAT_groupBox->Location = System::Drawing::Point(97, 324);
			this->VAT_groupBox->Name = L"VAT_groupBox";
			this->VAT_groupBox->Size = System::Drawing::Size(612, 54);
			this->VAT_groupBox->TabIndex = 18;
			this->VAT_groupBox->TabStop = false;
			this->VAT_groupBox->Text = L"VAT rate";
			// 
			// text_CustomVAT
			// 
			this->text_CustomVAT->Location = System::Drawing::Point(462, 21);
			this->text_CustomVAT->Name = L"text_CustomVAT";
			this->text_CustomVAT->Size = System::Drawing::Size(122, 22);
			this->text_CustomVAT->TabIndex = 5;
			this->text_CustomVAT->Text = L"20";
			// 
			// CustomVAT_radioButton
			// 
			this->CustomVAT_radioButton->AutoSize = true;
			this->CustomVAT_radioButton->Location = System::Drawing::Point(383, 21);
			this->CustomVAT_radioButton->Name = L"CustomVAT_radioButton";
			this->CustomVAT_radioButton->Size = System::Drawing::Size(73, 20);
			this->CustomVAT_radioButton->TabIndex = 4;
			this->CustomVAT_radioButton->TabStop = true;
			this->CustomVAT_radioButton->Text = L"Custom";
			this->CustomVAT_radioButton->UseVisualStyleBackColor = true;
			this->CustomVAT_radioButton->Click += gcnew System::EventHandler(this, &MyForm::CustomVAT_radioButton_Click);
			// 
			// VAT3
			// 
			this->VAT3->AutoSize = true;
			this->VAT3->Location = System::Drawing::Point(264, 21);
			this->VAT3->Name = L"VAT3";
			this->VAT3->Size = System::Drawing::Size(57, 20);
			this->VAT3->TabIndex = 3;
			this->VAT3->TabStop = true;
			this->VAT3->Text = L"15 %";
			this->VAT3->UseVisualStyleBackColor = true;
			this->VAT3->Click += gcnew System::EventHandler(this, &MyForm::VAT3_Click);
			// 
			// VAT2
			// 
			this->VAT2->AutoSize = true;
			this->VAT2->Location = System::Drawing::Point(157, 21);
			this->VAT2->Name = L"VAT2";
			this->VAT2->Size = System::Drawing::Size(57, 20);
			this->VAT2->TabIndex = 2;
			this->VAT2->TabStop = true;
			this->VAT2->Text = L"10 %";
			this->VAT2->UseVisualStyleBackColor = true;
			this->VAT2->Click += gcnew System::EventHandler(this, &MyForm::VAT2_Click);
			// 
			// VAT1
			// 
			this->VAT1->AutoSize = true;
			this->VAT1->Location = System::Drawing::Point(61, 21);
			this->VAT1->Name = L"VAT1";
			this->VAT1->Size = System::Drawing::Size(50, 20);
			this->VAT1->TabIndex = 1;
			this->VAT1->TabStop = true;
			this->VAT1->Text = L"5 %";
			this->VAT1->UseVisualStyleBackColor = true;
			this->VAT1->Click += gcnew System::EventHandler(this, &MyForm::VAT1_Click);
			// 
			// dgv_simu
			// 
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_simu->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dgv_simu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_simu->DefaultCellStyle = dataGridViewCellStyle12;
			this->dgv_simu->Location = System::Drawing::Point(51, 47);
			this->dgv_simu->Name = L"dgv_simu";
			this->dgv_simu->RowHeadersWidth = 51;
			this->dgv_simu->RowTemplate->Height = 24;
			this->dgv_simu->Size = System::Drawing::Size(965, 229);
			this->dgv_simu->TabIndex = 17;
			// 
			// execution_button
			// 
			this->execution_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->execution_button->Location = System::Drawing::Point(800, 439);
			this->execution_button->Name = L"execution_button";
			this->execution_button->Size = System::Drawing::Size(183, 86);
			this->execution_button->TabIndex = 7;
			this->execution_button->Text = L"EXECUTE";
			this->execution_button->UseVisualStyleBackColor = true;
			this->execution_button->Click += gcnew System::EventHandler(this, &MyForm::execution_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 760);
			this->Controls->Add(this->mainTabControl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->mainTabControl->ResumeLayout(false);
			this->homeTab->ResumeLayout(false);
			this->homeTab->PerformLayout();
			this->customersTab->ResumeLayout(false);
			this->customersTab->PerformLayout();
			this->socityChangeCust_groupBox->ResumeLayout(false);
			this->socityChangeCust_groupBox->PerformLayout();
			this->InfoSearchCust_groupBox->ResumeLayout(false);
			this->InfoSearchCust_groupBox->PerformLayout();
			this->infoChangeCust_groupBox->ResumeLayout(false);
			this->infoChangeCust_groupBox->PerformLayout();
			this->BillingChangeCust_groupBox->ResumeLayout(false);
			this->BillingChangeCust_groupBox->PerformLayout();
			this->DelChangeCust_groupBox->ResumeLayout(false);
			this->DelChangeCust_groupBox->PerformLayout();
			this->socityGroupBox->ResumeLayout(false);
			this->socityGroupBox->PerformLayout();
			this->customerGroupBox->ResumeLayout(false);
			this->customerGroupBox->PerformLayout();
			this->BillingGroupBox->ResumeLayout(false);
			this->BillingGroupBox->PerformLayout();
			this->deliveryGroupBox->ResumeLayout(false);
			this->deliveryGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cust))->EndInit();
			this->employeesTab->ResumeLayout(false);
			this->AddressChangeEmp_groupBox->ResumeLayout(false);
			this->AddressChangeEmp_groupBox->PerformLayout();
			this->InfoChangeEmp_groupBox->ResumeLayout(false);
			this->InfoChangeEmp_groupBox->PerformLayout();
			this->SearchCust_groupBox->ResumeLayout(false);
			this->SearchCust_groupBox->PerformLayout();
			this->empAdressAdd_GroupBox->ResumeLayout(false);
			this->empAdressAdd_GroupBox->PerformLayout();
			this->infoAddEmp_GroupBox->ResumeLayout(false);
			this->infoAddEmp_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emp))->EndInit();
			this->ordersTab->ResumeLayout(false);
			this->ordersTab->PerformLayout();
			this->meanOfPaymentAddPayOrder_GroupBox->ResumeLayout(false);
			this->meanOfPaymentAddPayOrder_GroupBox->PerformLayout();
			this->ItemAddItemOrder_GroupBox->ResumeLayout(false);
			this->ItemAddItemOrder_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quanityAddItemOrder))->EndInit();
			this->infoChangeOrder_groupBox->ResumeLayout(false);
			this->infoChangeOrder_groupBox->PerformLayout();
			this->searchOrder_groupBox->ResumeLayout(false);
			this->searchOrder_groupBox->PerformLayout();
			this->GlobalInfoAddOrder_GroupBox->ResumeLayout(false);
			this->GlobalInfoAddOrder_GroupBox->PerformLayout();
			this->meanOfPaymentAddOrder_GroupBox->ResumeLayout(false);
			this->meanOfPaymentAddOrder_GroupBox->PerformLayout();
			this->ItemAddOrder_GroupeBox->ResumeLayout(false);
			this->ItemAddOrder_GroupeBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityItemAddOrders))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_ord))->EndInit();
			this->stockTab->ResumeLayout(false);
			this->SearchStock_groupBox->ResumeLayout(false);
			this->SearchStock_groupBox->PerformLayout();
			this->ItemCHangeSotck_groupBox->ResumeLayout(false);
			this->ItemCHangeSotck_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityChangeStock))->EndInit();
			this->ItemAddStock_GroupBox->ResumeLayout(false);
			this->ItemAddStock_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown_quantityAddStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stock))->EndInit();
			this->statisticTab->ResumeLayout(false);
			this->DateStatistics_groupBox->ResumeLayout(false);
			this->DateStatistics_groupBox->PerformLayout();
			this->CustomerStatistics_groupBox->ResumeLayout(false);
			this->CustomerStatistics_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stat))->EndInit();
			this->simulationsTab->ResumeLayout(false);
			this->markdown_groupBox->ResumeLayout(false);
			this->markdown_groupBox->PerformLayout();
			this->dicount_groupBox->ResumeLayout(false);
			this->dicount_groupBox->PerformLayout();
			this->margin_groupBox->ResumeLayout(false);
			this->margin_groupBox->PerformLayout();
			this->VAT_groupBox->ResumeLayout(false);
			this->VAT_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_simu))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSVCorders = gcnew NS_Svc::CLorders();
		this->oSVCcustomers = gcnew NS_Svc::CLcustomers();
		this->oSVCemployees = gcnew NS_Svc::CLemployees();
		//this->oSVCstock = gcnew NS_Svc::CLstock();
		this->oSVCstatistics = gcnew NS_Svc::CLstatistics();
		this->oSVCsimulations = gcnew NS_Svc::CLsimulations();

		this->dgv_ord->Refresh();
		DisplayAllOrder();
		
		this->dgv_cust->Refresh();
		DisplayCustomers();

		allPercentage[0] = gcnew ValuePercentage(oSVCsimulations, &NS_Svc::CLsimulations::changeTVA);
		allPercentage[1] = gcnew ValuePercentage(oSVCsimulations, &NS_Svc::CLsimulations::changeMargin);
		allPercentage[2] = gcnew ValuePercentage(oSVCsimulations, &NS_Svc::CLsimulations::changeTradDiscount);
		allPercentage[3] = gcnew ValuePercentage(oSVCsimulations, &NS_Svc::CLsimulations::changeUnknowMarkdown);
		DisplayCustomers();

		this->dgv_emp->Refresh();
		DisplayEmployee();
	}


	
	private: void DisplayOrder(void){
		if (this->Item_radioButton->Checked == true) { DisplayOneOrderItem(); }
		else { DisplayOneOrderPay(); }
	}
	private: void DisplayAllOrder(void) {
		this->oDs_orders = this->oSVCorders->displayOrders("RslAll");
		this->dgv_ord->DataSource = this->oDs_orders;
		this->dgv_ord->DataMember = "RslAll";
	}
	public: void DisplayOneOrderItem(void) {
		this->oDs_orders = this->oSVCorders->displayOrder("RslItem", this->text_orderIdSearchOrder->Text);
		this->dgv_ord->DataSource = this->oDs_orders;
		this->dgv_ord->DataMember = "RslItem";
	}
	public: void DisplayOneOrderPay(void) {
		this->oDs_orders = this->oSVCorders->displayOrderPay("RslPay", this->text_orderIdSearchOrder->Text);
		this->dgv_ord->DataSource = this->oDs_orders;
		this->dgv_ord->DataMember = "RslPay";
	}
	private: System::Void displayOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text)) {
			this->dgv_ord->Refresh();
			DisplayOrder();
		}
		else{ MessageBox::Show("Be carefull ! Please put an order refrence ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void eraseOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text)) {
			this->dgv_ord->Refresh();
			this->oSVCorders->eraseOrder(this->text_orderIdSearchOrder->Text);
			DisplayAllOrder();
		}
		else{ MessageBox::Show("Be carefull ! You missed to file the order reference ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void addItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text) ||  System::String::IsNullOrWhiteSpace(this->text_itemIdAddItemOrder->Text) || System::String::IsNullOrWhiteSpace(this->ItemColorAddItemOrder_comboBox->Text) || this->UpDown_quanityAddItemOrder->Text == "0")) {
			this->dgv_ord->Refresh();
			this->oSVCorders->addItem(this->text_orderIdSearchOrder->Text, this->text_itemIdAddItemOrder->Text, this->ItemColorAddItemOrder_comboBox->Text, this->UpDown_quanityAddItemOrder->Text);
			DisplayOrder();
		}
		else{ MessageBox::Show("Be carefull ! You missed to file some informations. \n Don't forget to add an order reference", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void addPayment_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text) || this->meanOfPaymentAddPayOrder_comboBox->Text == "")) {
			this->dgv_ord->Refresh();
			this->oSVCorders->addPayment(this->text_orderIdSearchOrder->Text, this->meanOfPaymentAddPayOrder_comboBox->Text, this->paymentDueAddPayOrder_datePicker->Text);
			DisplayOrder();
		}
		else{ MessageBox::Show("Be carefull ! You missed to file some informations. \n Don't forget to add an order reference", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void EraseItemOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text) || System::String::IsNullOrWhiteSpace(this->text_itemIdAddItemOrder->Text) || System::String::IsNullOrWhiteSpace(this->ItemColorAddItemOrder_comboBox->Text))) {
			this->dgv_ord->Refresh();
			this->oSVCorders->eraseItem(this->text_orderIdSearchOrder->Text, this->text_itemIdAddItemOrder->Text, this->ItemColorAddItemOrder_comboBox->Text);
			DisplayOrder();
		}
		else { MessageBox::Show("Be carefull ! You missed to file some informations. \n Don't forget to add an order reference", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void ErasePaymentOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_orderIdSearchOrder->Text) || this->meanOfPaymentAddPayOrder_comboBox->Text == "")) {
			this->dgv_ord->Refresh();
			this->oSVCorders->erasePayment(this->text_orderIdSearchOrder->Text, this->meanOfPaymentAddPayOrder_comboBox->Text, this->paymentDueAddPayOrder_datePicker->Text);
			DisplayOrder();
		}
		else { MessageBox::Show("Be carefull ! You missed to file some informations. \n Don't forget to add an order reference", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void addOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_customerIdAddOrders->Text) || this->comboBox_meanOfPaymentAddOrder->Text=="" 
			|| System::String::IsNullOrWhiteSpace(this->text_ItemIdAddOrder->Text) || this->ItemColorAddOrder_comboBox->Text==""
			|| this->UpDown_quantityItemAddOrders->Text=="0")) {
			this->dgv_ord->Refresh();
			this->oSVCorders->addOrder((this->deliveryAddOrder_DatePicker->Value).ToString("yyyy-MM-dd"), (this->PaymentDueDateAddOrder_datePicker->Value).ToString("yyyy-MM-dd"),
				this->text_customerIdAddOrders->Text,this->comboBox_meanOfPaymentAddOrder->Text, (this->PaymentDueDateAddOrder_datePicker->Value).ToString("yyyy-MM-dd"),
				this->text_ItemIdAddOrder->Text,this->ItemColorAddOrder_comboBox->Text, this->UpDown_quantityItemAddOrders->Text);
			DisplayAllOrder();
		}
		else {MessageBox::Show("Be carefull ! You missed to file some informations ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);}
	}
	private: System::Void changeOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!System::String::IsNullOrWhiteSpace(this->text_orderIdChangeOrder->Text)) {
			this->dgv_ord->Refresh();
			this->oSVCorders->changeOrder(this->text_orderIdChangeOrder->Text,(this->deliveryChangeOrder_datePicker->Value).ToString("yyyy-MM-dd"), (this->completePayChangeOrder_datePicker->Value).ToString("yyyy-MM-dd"));
			DisplayAllOrder();
		}
		else { MessageBox::Show("Be carefull ! You missed to file some informations ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}



	
	private: void DisplayEmployee(void) {
		this->oDs_employees = this->oSVCemployees->displayEmp("Rsl");
		this->dgv_emp->DataSource = this->oDs_employees;
		this->dgv_emp->DataMember = "Rsl";
	}
	private: System::Void displayEmp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_emp->Refresh();
		this->oDs_employees = this->oSVCemployees->displayemployee("Rsl", this->text_firstNameSearchEmp->Text, this->text_lastNameSearchEmp->Text, (this->hireDateSearchEmp_datePicker->Value).ToString("yyyy-MM-dd"));
		this->dgv_emp->DataSource = this->oDs_employees;
		this->dgv_emp->DataMember = "Rsl";
	}
	private: System::Void addEmp_Click(System::Object^ sender, System::EventArgs^ e) {
		int streetNumber = System::Convert::ToInt32(this->text_streetNumber->Text);
		int chiefID = System::Convert::ToInt32(this->text_chiefIdAddEmp->Text);
		this->dgv_emp->Refresh();
		this->oSVCemployees->addEmp(chiefID, this->text_FirstNameAddEmp->Text, this->text_empLastName->Text, (this->hireChangeEmp_datePicker->Value).ToString("yyyy-MM-dd"), streetNumber, this->text_streetNameAddEmp->Text, this->text_cityNameAddEmp->Text, this->text_ZIPcodeAddEmp->Text);
		DisplayEmployee();
	}
	private: System::Void eraseEmp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_emp->Refresh();
		this->oSVCemployees->eraseEmp(this->text_firstNameSearchEmp->Text, this->text_lastNameSearchEmp->Text, (this->hireDateSearchEmp_datePicker->Value).ToString("yyyy-MM-dd"));
		DisplayEmployee();
	}
	private: System::Void changeEmp_Click(System::Object^ sender, System::EventArgs^ e) {
		int streetNumb = System::Convert::ToInt32(this->text_streetNumChangeEmp->Text);
		int employeeID = System::Convert::ToInt32(this->text_EmpIdChangeEmp->Text);
		int chiefID = System::Convert::ToInt32(this->text_chiefIdChangeEmp->Text);
		this->dgv_emp->Refresh();
		this->oSVCemployees->updateEmp(employeeID, chiefID, this->text_fistNameChangeEmp->Text, this->text_lastNameChangeEmp->Text, (this->hireChangeEmp_datePicker->Value).ToString("yyyy-MM-dd"), streetNumb, this->text_streetNameChangeEmp->Text, this->text_cityNameChangeEmp->Text, this->text_ZipCodeChangeEmp->Text);
		DisplayEmployee();
	}


	
	private: void DisplayCustomers(void) {
		this->oDs_customers = this->oSVCcustomers->displayCustomers("Rsl");
		this->dgv_cust->DataSource = this->oDs_customers;
		this->dgv_cust->DataMember = "Rsl";
	}
	private: System::Void addCust_Click(System::Object^ sender, System::EventArgs^ e) {
		int bilingStreetN = System::Convert::ToInt32(this->text_bilingStreetN->Text);
		int deliveryStreetN = System::Convert::ToInt32(this->text_deliveryStreetN->Text);
		this->oSVCcustomers->addCustomers(this->text_custLastName->Text, this->text_custFirstName->Text, (this->birthDateCust_datePicker->Value).ToString("yyy-MM-dd"), bilingStreetN, deliveryStreetN, this->text_bilingStreetName->Text, this->text_deliveryStreetName->Text, this->text_bilingCityName->Text, this->text_deliveryCityName->Text, this->text_bilingZIPcode->Text, this->text_deliveryZIPcode->Text);
		this->dgv_cust->Refresh();
		DisplayCustomers();
	}
	private: System::Void eraseCust_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSVCcustomers->eraseCustomers(this->text_lastNameSearchCust->Text, this->text_firstNameSearchCust->Text, (this->birthSearchCust_datePicker->Value).ToString("yyy-MM-dd"));
		this->dgv_cust->Refresh();
		DisplayCustomers();
	}
	private: System::Void displayCust_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_cust->Refresh();
		this->oDs_customers = this->oSVCcustomers->displayCustomer("RslSpe", this->text_lastNameSearchCust->Text, this->text_firstNameSearchCust->Text, (this->birthSearchCust_datePicker->Value).ToString("yyy-MM-dd"));
		this->dgv_cust->DataSource = this->oDs_customers;
		this->dgv_cust->DataMember = "RslSpe";
	}
	private: System::Void changeCust_Click(System::Object^ sender, System::EventArgs^ e) {
		int bilingStreetNchange = System::Convert::ToInt32(this->text_streetNumDelChangeCust->Text);
		int deliveryStreetNchange = System::Convert::ToInt32(this->text_streetNumBillingChangeCust->Text);
		int custNum = System::Convert::ToInt32(this->text_customerIdChangeCust->Text);
		this->dgv_cust->Refresh();
		this->oSVCcustomers->updateCustomers(custNum, this->text_lastNameChangeCust->Text, this->text_firstNameChangeCust->Text, (this->birthChangeCust_datePicker->Value).ToString("yyy-MM-dd"), bilingStreetNchange, deliveryStreetNchange, this->text_streetNameBillingChangeCust->Text, this->text_streetNameDelChangeCust->Text, this->text_cityNameBillingChangeCust->Text, this->text_cityNameDelChangeCust->Text, this->text_ZipCodeBillingChangeCust->Text, this->text_ZipCodeDelChangeCust->Text);
		DisplayCustomers();
	}



	private: System::Void button_averageCart_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->averageBasket("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}
	private: System::Void button_turnover_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_turnoverMonth->Text) || System::String::IsNullOrWhiteSpace(this->text_turnoverYear->Text))) {
			int month = System::Convert::ToInt32(this->text_turnoverMonth->Text);
			int year = System::Convert::ToInt32(this->text_turnoverYear->Text);
			this->dgv_stat->Refresh();
			this->oDs_statistics = this->oSVCstatistics->calculateTurnover("Rsl", month, year);
			this->dgv_stat->DataSource = this->oDs_statistics;
			this->dgv_stat->DataMember = "Rsl";
		}
		else{ MessageBox::Show("Be carefull ! You missed to file some informations ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void button_underReorderThreshold_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->productUnderThreshold("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}
	private: System::Void button_bestSelling_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->moreSellProducts("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}
	private: System::Void button_lowestSelling_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->lessSellProducts("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}
	private: System::Void button_customerTotalAmount_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!(System::String::IsNullOrWhiteSpace(this->text_statisticsCustLastName->Text) || System::String::IsNullOrWhiteSpace(this->text_statisticsCustFirstName->Text))) {
			this->dgv_stat->Refresh();
			this->oDs_statistics = this->oSVCstatistics->totalAmount("Rsl", this->text_statisticsCustLastName->Text, this->text_statisticsCustFirstName->Text, (this->birthStatisitcs_datePicker->Value).ToString("yyyy-MM-dd"));
			this->dgv_stat->DataSource = this->oDs_statistics;
			this->dgv_stat->DataMember = "Rsl";
		}
		else{ MessageBox::Show("Be carefull ! You missed to file some informations ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	private: System::Void button_commercialValueStock_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->retailValueInventory("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}
	private: System::Void button_purchaseValueStock_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dgv_stat->Refresh();
		this->oDs_statistics = this->oSVCstatistics->purchaseValueInventory("Rsl");
		this->dgv_stat->DataSource = this->oDs_statistics;
		this->dgv_stat->DataMember = "Rsl";
	}



	private: System::Void VAT1_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[0]->Invoke(0.05);
	}
	private: System::Void VAT2_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[0]->Invoke(0.10);
	}
	private: System::Void VAT3_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[0]->Invoke(0.15);
	}
	private: System::Void CustomVAT_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[0]->Invoke(System::Convert::ToSingle(this->text_CustomVAT->Text)/100); 
	}
	private: System::Void grossMargin1_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[1]->Invoke(0.05);
	}
	private: System::Void grossMargin2_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[1]->Invoke(0.10);
	}
	private: System::Void grossMargin3_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[1]->Invoke(0.15);
	}
	private: System::Void customMargin_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[1]->Invoke(System::Convert::ToSingle(this->text_CustomMargin->Text)/100);
	}
	private: System::Void markdown1_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[3]->Invoke(0.02);
	}
	private: System::Void markdown2_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[3]->Invoke(0.03);
	}
	private: System::Void markdown3_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[3]->Invoke(0.05);
	}
	private: System::Void customMarkdown_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[3]->Invoke(System::Convert::ToSingle(this->text_CustomMarkdown->Text)/100);
	}
	private: System::Void discount1_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[2]->Invoke(0.05);
	}
	private: System::Void discount2_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[2]->Invoke(0.06);
	}
	private: System::Void CustomDiscount_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		allPercentage[2]->Invoke(System::Convert::ToSingle(this->text_CustomDiscount->Text)/100);
	}
	private: System::Void execution_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_simu->Refresh();
		this->oDs_simulations = this->oSVCsimulations->makeSimulation("Rsl");
		this->dgv_simu->DataSource = this->oDs_simulations;
		this->dgv_simu->DataMember = "Rsl";
	}
};
}
