#pragma once
#include "CLemployees.h"
#include "CLcustomers.h"
#include "CLstock.h"
#include "CLorders.h"
#include "CLstatistics.h"
#include "CLsimulations.h"

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
	//private: NS_Svc::CLemployees^ oSVCemployees;
	//private: NS_Svc::CLcustomers^ oSVCcustomers;
	//private: NS_Svc::CLstock^ oSVCstock;
	//private: NS_Svc::CLstatistics^ oSVCstatistics;
	//priavte: NS_Svc::CLsimulations^oSVCsimulations;

	private: System::Data::DataSet^ oDs_orders;


	
	/// <summary>
	/// Tab Control
	/// </summary>
	private: System::Windows::Forms::TabControl^ mainTabControl;
	protected:

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

	private: System::Windows::Forms::GroupBox^ markdown_groupBox;
		private: System::Windows::Forms::RadioButton^ markdown3;
		private: System::Windows::Forms::RadioButton^ markdown2;
		private: System::Windows::Forms::RadioButton^ markdown1;
	
	
	private: System::Windows::Forms::GroupBox^ dicount_groupBox;
		private: System::Windows::Forms::RadioButton^ discount2;
		private: System::Windows::Forms::RadioButton^ discount1;

	private: System::Windows::Forms::GroupBox^ margin_groupBox;
		private: System::Windows::Forms::RadioButton^ grossMargin3;
		private: System::Windows::Forms::RadioButton^ grossMargin2;
		private: System::Windows::Forms::RadioButton^ grossMargin1;
	
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
		private: System::Windows::Forms::Label^ CustomersReferenceStatistics;
		private: System::Windows::Forms::TextBox^ text_statisticsCustFirstName;
		private: System::Windows::Forms::TextBox^ text_statisticsCustLastName;
		private: System::Windows::Forms::TextBox^ text_statisticsCustBirthDate;
		private: System::Windows::Forms::TextBox^ text_statisticsCustReference;
	
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
	private: System::Windows::Forms::GroupBox^ ItemStock_GroupBox;
		private: System::Windows::Forms::Label^ itemIdStock;
		private: System::Windows::Forms::Label^ itemNameStock;
		private: System::Windows::Forms::Label^ VATrate;
		private: System::Windows::Forms::Label^ itemPriceETStock;
		private: System::Windows::Forms::Label^ quantityStock;
		private: System::Windows::Forms::Label^ reorderThreshold;
		private: System::Windows::Forms::Label^ itemColorStock;
		private: System::Windows::Forms::TextBox^ text_stockArticleID;
		private: System::Windows::Forms::TextBox^ text_articleName;
		private: System::Windows::Forms::TextBox^ textBox_vatRate;
		private: System::Windows::Forms::TextBox^ text_articlePriceExcludingTaxes;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantityProductStock;
		private: System::Windows::Forms::TextBox^ textBox_reorderThreshold;
		private: System::Windows::Forms::TextBox^ text_articleColor;
	
	//Buttons
	private: System::Windows::Forms::Button^ displayProducts;
	private: System::Windows::Forms::Button^ changeProduct;
	private: System::Windows::Forms::Button^ ereaseProduct;
	private: System::Windows::Forms::Button^ addProduct;





	/// <summary>
	/// Buttons on tab Orders
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_ord;

	
	//Groups
	private: System::Windows::Forms::GroupBox^ GlobalInfoOrder_GroupBox;
		private: System::Windows::Forms::Label^ orderID;
		private: System::Windows::Forms::Label^ customerIdOrders;
		private: System::Windows::Forms::Label^ completPaymentDate;
		private: System::Windows::Forms::Label^ deliveryDate;
		private: System::Windows::Forms::TextBox^ text_orderID;
		private: System::Windows::Forms::TextBox^ text_customerIdOrders;
		private: System::Windows::Forms::TextBox^ text_completPayementDate;
		private: System::Windows::Forms::TextBox^ text_deliveryDate;

	private: System::Windows::Forms::GroupBox^ meanOfPaymentGroupBox;
		private: System::Windows::Forms::Label^ meanOfPayment;
		private: System::Windows::Forms::Label^ paymentDueDate;
		private: System::Windows::Forms::ComboBox^ comboBox_meanOfPayment;
		private: System::Windows::Forms::TextBox^ text_paymentDueDate;
	
	private: System::Windows::Forms::GroupBox^ ItemOrder_GroupeBox;
		private: System::Windows::Forms::Label^ itemID;
		private: System::Windows::Forms::Label^ quantityItemsOrders;
		private: System::Windows::Forms::TextBox^ text_ordersArticleID;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantityItemOrders;

	//Buttons
	private: System::Windows::Forms::Button^ displayOrder;
	private: System::Windows::Forms::Button^ changeOrder;
	private: System::Windows::Forms::Button^ eraseOrder;
	private: System::Windows::Forms::Button^ addOrder;
	private: System::Windows::Forms::Button^ addPayment;
	private: System::Windows::Forms::Button^ addItem;


	


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
		private: System::Windows::Forms::TextBox^ text_birthDate;

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
	private: System::Windows::Forms::GroupBox^ empAdressGroupBox;
		private: System::Windows::Forms::Label^ IDemp;
		private: System::Windows::Forms::Label^ firstNameEmp;
		private: System::Windows::Forms::Label^ lastNameEmp;
		private: System::Windows::Forms::Label^ hireDateEmp;
		private: System::Windows::Forms::Label^ chiefIDemp;
		private: System::Windows::Forms::TextBox^ text_employeeID;
		private: System::Windows::Forms::TextBox^ text_empFirstName;
		private: System::Windows::Forms::TextBox^ text_empLastName;
		private: System::Windows::Forms::TextBox^ text_hireDate;
		private: System::Windows::Forms::TextBox^ text_chiefID;

	private: System::Windows::Forms::GroupBox^ infoEmpGroupBox;
		private: System::Windows::Forms::Label^ cityNameEmp;
		private: System::Windows::Forms::Label^ streetNameEmp;
		private: System::Windows::Forms::Label^ ZIPcodeEmp;
		private: System::Windows::Forms::Label^ streetNumEmp;
		private: System::Windows::Forms::TextBox^ text_cityName;
		private: System::Windows::Forms::TextBox^ text_streetName;
		private: System::Windows::Forms::TextBox^ text_streetNumber;
		private: System::Windows::Forms::TextBox^ text_ZIPcode;

	//Buttons
	private: System::Windows::Forms::Button^ displayEmp;
	private: System::Windows::Forms::Button^ changeEmp;
	private: System::Windows::Forms::Button^ eraseEmp;
	private: System::Windows::Forms::Button^ addEmp;





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
			this->mainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->homeTab = (gcnew System::Windows::Forms::TabPage());
			this->customersTab = (gcnew System::Windows::Forms::TabPage());
			this->displayCust = (gcnew System::Windows::Forms::Button());
			this->changeCust = (gcnew System::Windows::Forms::Button());
			this->text_custRef = (gcnew System::Windows::Forms::TextBox());
			this->eraseCust = (gcnew System::Windows::Forms::Button());
			this->addCust = (gcnew System::Windows::Forms::Button());
			this->socityGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_serviceNumber = (gcnew System::Windows::Forms::TextBox());
			this->text_socityName = (gcnew System::Windows::Forms::TextBox());
			this->serviceNum = (gcnew System::Windows::Forms::Label());
			this->socityName = (gcnew System::Windows::Forms::Label());
			this->customerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_birthDate = (gcnew System::Windows::Forms::TextBox());
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
			this->displayEmp = (gcnew System::Windows::Forms::Button());
			this->changeEmp = (gcnew System::Windows::Forms::Button());
			this->eraseEmp = (gcnew System::Windows::Forms::Button());
			this->addEmp = (gcnew System::Windows::Forms::Button());
			this->empAdressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_ZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->text_cityName = (gcnew System::Windows::Forms::TextBox());
			this->text_streetName = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNumber = (gcnew System::Windows::Forms::TextBox());
			this->cityNameEmp = (gcnew System::Windows::Forms::Label());
			this->streetNameEmp = (gcnew System::Windows::Forms::Label());
			this->ZIPcodeEmp = (gcnew System::Windows::Forms::Label());
			this->streetNumEmp = (gcnew System::Windows::Forms::Label());
			this->infoEmpGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_hireDate = (gcnew System::Windows::Forms::TextBox());
			this->text_empLastName = (gcnew System::Windows::Forms::TextBox());
			this->text_empFirstName = (gcnew System::Windows::Forms::TextBox());
			this->text_chiefID = (gcnew System::Windows::Forms::TextBox());
			this->lastNameEmp = (gcnew System::Windows::Forms::Label());
			this->hireDateEmp = (gcnew System::Windows::Forms::Label());
			this->chiefIDemp = (gcnew System::Windows::Forms::Label());
			this->firstNameEmp = (gcnew System::Windows::Forms::Label());
			this->IDemp = (gcnew System::Windows::Forms::Label());
			this->text_employeeID = (gcnew System::Windows::Forms::TextBox());
			this->dgv_emp = (gcnew System::Windows::Forms::DataGridView());
			this->ordersTab = (gcnew System::Windows::Forms::TabPage());
			this->addItem = (gcnew System::Windows::Forms::Button());
			this->addPayment = (gcnew System::Windows::Forms::Button());
			this->meanOfPaymentGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->meanOfPayment = (gcnew System::Windows::Forms::Label());
			this->paymentDueDate = (gcnew System::Windows::Forms::Label());
			this->text_paymentDueDate = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_meanOfPayment = (gcnew System::Windows::Forms::ComboBox());
			this->ItemOrder_GroupeBox = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown_quantityItemOrders = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityItemsOrders = (gcnew System::Windows::Forms::Label());
			this->itemID = (gcnew System::Windows::Forms::Label());
			this->text_ordersArticleID = (gcnew System::Windows::Forms::TextBox());
			this->GlobalInfoOrder_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->deliveryDate = (gcnew System::Windows::Forms::Label());
			this->text_deliveryDate = (gcnew System::Windows::Forms::TextBox());
			this->completPaymentDate = (gcnew System::Windows::Forms::Label());
			this->text_customerIdOrders = (gcnew System::Windows::Forms::TextBox());
			this->text_completPayementDate = (gcnew System::Windows::Forms::TextBox());
			this->customerIdOrders = (gcnew System::Windows::Forms::Label());
			this->text_orderID = (gcnew System::Windows::Forms::TextBox());
			this->orderID = (gcnew System::Windows::Forms::Label());
			this->displayOrder = (gcnew System::Windows::Forms::Button());
			this->changeOrder = (gcnew System::Windows::Forms::Button());
			this->eraseOrder = (gcnew System::Windows::Forms::Button());
			this->addOrder = (gcnew System::Windows::Forms::Button());
			this->dgv_ord = (gcnew System::Windows::Forms::DataGridView());
			this->stockTab = (gcnew System::Windows::Forms::TabPage());
			this->ItemStock_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_articleColor = (gcnew System::Windows::Forms::TextBox());
			this->reorderThreshold = (gcnew System::Windows::Forms::Label());
			this->textBox_reorderThreshold = (gcnew System::Windows::Forms::TextBox());
			this->itemColorStock = (gcnew System::Windows::Forms::Label());
			this->VATrate = (gcnew System::Windows::Forms::Label());
			this->textBox_vatRate = (gcnew System::Windows::Forms::TextBox());
			this->itemPriceETStock = (gcnew System::Windows::Forms::Label());
			this->text_articlePriceExcludingTaxes = (gcnew System::Windows::Forms::TextBox());
			this->itemNameStock = (gcnew System::Windows::Forms::Label());
			this->text_articleName = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown_quantityProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->quantityStock = (gcnew System::Windows::Forms::Label());
			this->itemIdStock = (gcnew System::Windows::Forms::Label());
			this->text_stockArticleID = (gcnew System::Windows::Forms::TextBox());
			this->dgv_stock = (gcnew System::Windows::Forms::DataGridView());
			this->displayProducts = (gcnew System::Windows::Forms::Button());
			this->changeProduct = (gcnew System::Windows::Forms::Button());
			this->ereaseProduct = (gcnew System::Windows::Forms::Button());
			this->addProduct = (gcnew System::Windows::Forms::Button());
			this->statisticTab = (gcnew System::Windows::Forms::TabPage());
			this->DateStatistics_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_turnoverYear = (gcnew System::Windows::Forms::TextBox());
			this->yearStatistics = (gcnew System::Windows::Forms::Label());
			this->text_turnoverMonth = (gcnew System::Windows::Forms::TextBox());
			this->monthStatistics = (gcnew System::Windows::Forms::Label());
			this->CustomerStatistics_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthDateStatistics = (gcnew System::Windows::Forms::Label());
			this->text_statisticsCustBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->firstNameStatistics = (gcnew System::Windows::Forms::Label());
			this->text_statisticsCustLastName = (gcnew System::Windows::Forms::TextBox());
			this->text_statisticsCustFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lastNameStatistics = (gcnew System::Windows::Forms::Label());
			this->text_statisticsCustReference = (gcnew System::Windows::Forms::TextBox());
			this->CustomersReferenceStatistics = (gcnew System::Windows::Forms::Label());
			this->button_commercialValueStock = (gcnew System::Windows::Forms::Button());
			this->button_bestSelling = (gcnew System::Windows::Forms::Button());
			this->button_turnover = (gcnew System::Windows::Forms::Button());
			this->button_customerTotalAmount = (gcnew System::Windows::Forms::Button());
			this->button_purchaseValueStock = (gcnew System::Windows::Forms::Button());
			this->button_lowestSelling = (gcnew System::Windows::Forms::Button());
			this->button_averageCart = (gcnew System::Windows::Forms::Button());
			this->button_underReorderThreshold = (gcnew System::Windows::Forms::Button());
			this->dgv_stat = (gcnew System::Windows::Forms::DataGridView());
			this->simulationsTab = (gcnew System::Windows::Forms::TabPage());
			this->markdown_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->markdown2 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown1 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown3 = (gcnew System::Windows::Forms::RadioButton());
			this->dicount_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->discount2 = (gcnew System::Windows::Forms::RadioButton());
			this->discount1 = (gcnew System::Windows::Forms::RadioButton());
			this->margin_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->grossMargin3 = (gcnew System::Windows::Forms::RadioButton());
			this->grossMargin1 = (gcnew System::Windows::Forms::RadioButton());
			this->grossMargin2 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->VAT3 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT2 = (gcnew System::Windows::Forms::RadioButton());
			this->VAT1 = (gcnew System::Windows::Forms::RadioButton());
			this->dgv_simu = (gcnew System::Windows::Forms::DataGridView());
			this->execution_button = (gcnew System::Windows::Forms::Button());
			this->mainTabControl->SuspendLayout();
			this->customersTab->SuspendLayout();
			this->socityGroupBox->SuspendLayout();
			this->customerGroupBox->SuspendLayout();
			this->BillingGroupBox->SuspendLayout();
			this->deliveryGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cust))->BeginInit();
			this->employeesTab->SuspendLayout();
			this->empAdressGroupBox->SuspendLayout();
			this->infoEmpGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emp))->BeginInit();
			this->ordersTab->SuspendLayout();
			this->meanOfPaymentGroupBox->SuspendLayout();
			this->ItemOrder_GroupeBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantityItemOrders))->BeginInit();
			this->GlobalInfoOrder_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_ord))->BeginInit();
			this->stockTab->SuspendLayout();
			this->ItemStock_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantityProductStock))->BeginInit();
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
			this->mainTabControl->Controls->Add(this->homeTab);
			this->mainTabControl->Controls->Add(this->customersTab);
			this->mainTabControl->Controls->Add(this->employeesTab);
			this->mainTabControl->Controls->Add(this->ordersTab);
			this->mainTabControl->Controls->Add(this->stockTab);
			this->mainTabControl->Controls->Add(this->statisticTab);
			this->mainTabControl->Controls->Add(this->simulationsTab);
			this->mainTabControl->Location = System::Drawing::Point(-1, 2);
			this->mainTabControl->Name = L"mainTabControl";
			this->mainTabControl->SelectedIndex = 0;
			this->mainTabControl->Size = System::Drawing::Size(776, 610);
			this->mainTabControl->TabIndex = 0;
			// 
			// homeTab
			// 
			this->homeTab->Location = System::Drawing::Point(4, 25);
			this->homeTab->Name = L"homeTab";
			this->homeTab->Size = System::Drawing::Size(768, 581);
			this->homeTab->TabIndex = 6;
			this->homeTab->Text = L"Home";
			this->homeTab->UseVisualStyleBackColor = true;
			// 
			// customersTab
			// 
			this->customersTab->Controls->Add(this->displayCust);
			this->customersTab->Controls->Add(this->changeCust);
			this->customersTab->Controls->Add(this->text_custRef);
			this->customersTab->Controls->Add(this->eraseCust);
			this->customersTab->Controls->Add(this->addCust);
			this->customersTab->Controls->Add(this->socityGroupBox);
			this->customersTab->Controls->Add(this->customerGroupBox);
			this->customersTab->Controls->Add(this->custID);
			this->customersTab->Controls->Add(this->BillingGroupBox);
			this->customersTab->Controls->Add(this->deliveryGroupBox);
			this->customersTab->Controls->Add(this->dgv_cust);
			this->customersTab->Location = System::Drawing::Point(4, 25);
			this->customersTab->Name = L"customersTab";
			this->customersTab->Padding = System::Windows::Forms::Padding(3);
			this->customersTab->Size = System::Drawing::Size(768, 581);
			this->customersTab->TabIndex = 0;
			this->customersTab->Text = L"Customers";
			this->customersTab->UseVisualStyleBackColor = true;
			// 
			// displayCust
			// 
			this->displayCust->Location = System::Drawing::Point(797, 753);
			this->displayCust->Name = L"displayCust";
			this->displayCust->Size = System::Drawing::Size(141, 33);
			this->displayCust->TabIndex = 32;
			this->displayCust->Text = L"Display customers";
			this->displayCust->UseVisualStyleBackColor = true;
			// 
			// changeCust
			// 
			this->changeCust->Location = System::Drawing::Point(290, 523);
			this->changeCust->Name = L"changeCust";
			this->changeCust->Size = System::Drawing::Size(151, 33);
			this->changeCust->TabIndex = 31;
			this->changeCust->Text = L"Change customer";
			this->changeCust->UseVisualStyleBackColor = true;
			// 
			// text_custRef
			// 
			this->text_custRef->Location = System::Drawing::Point(944, 764);
			this->text_custRef->Name = L"text_custRef";
			this->text_custRef->Size = System::Drawing::Size(207, 22);
			this->text_custRef->TabIndex = 24;
			// 
			// eraseCust
			// 
			this->eraseCust->Location = System::Drawing::Point(535, 523);
			this->eraseCust->Name = L"eraseCust";
			this->eraseCust->Size = System::Drawing::Size(151, 33);
			this->eraseCust->TabIndex = 30;
			this->eraseCust->Text = L"Erase customer";
			this->eraseCust->UseVisualStyleBackColor = true;
			// 
			// addCust
			// 
			this->addCust->Location = System::Drawing::Point(66, 523);
			this->addCust->Name = L"addCust";
			this->addCust->Size = System::Drawing::Size(141, 33);
			this->addCust->TabIndex = 29;
			this->addCust->Text = L"Add customer";
			this->addCust->UseVisualStyleBackColor = true;
			// 
			// socityGroupBox
			// 
			this->socityGroupBox->Controls->Add(this->text_serviceNumber);
			this->socityGroupBox->Controls->Add(this->text_socityName);
			this->socityGroupBox->Controls->Add(this->serviceNum);
			this->socityGroupBox->Controls->Add(this->socityName);
			this->socityGroupBox->Location = System::Drawing::Point(510, 285);
			this->socityGroupBox->Name = L"socityGroupBox";
			this->socityGroupBox->Size = System::Drawing::Size(233, 130);
			this->socityGroupBox->TabIndex = 28;
			this->socityGroupBox->TabStop = false;
			this->socityGroupBox->Text = L"Socity info";
			// 
			// text_serviceNumber
			// 
			this->text_serviceNumber->Location = System::Drawing::Point(36, 93);
			this->text_serviceNumber->Name = L"text_serviceNumber";
			this->text_serviceNumber->Size = System::Drawing::Size(175, 22);
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
			this->serviceNum->Location = System::Drawing::Point(23, 74);
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
			this->customerGroupBox->Controls->Add(this->text_birthDate);
			this->customerGroupBox->Controls->Add(this->text_custFirstName);
			this->customerGroupBox->Controls->Add(this->birthDateCust);
			this->customerGroupBox->Controls->Add(this->firstNameCust);
			this->customerGroupBox->Controls->Add(this->lastNameCust);
			this->customerGroupBox->Controls->Add(this->text_custLastName);
			this->customerGroupBox->Location = System::Drawing::Point(24, 285);
			this->customerGroupBox->Name = L"customerGroupBox";
			this->customerGroupBox->Size = System::Drawing::Size(472, 130);
			this->customerGroupBox->TabIndex = 27;
			this->customerGroupBox->TabStop = false;
			this->customerGroupBox->Text = L"Customers info";
			// 
			// text_birthDate
			// 
			this->text_birthDate->Location = System::Drawing::Point(254, 102);
			this->text_birthDate->Name = L"text_birthDate";
			this->text_birthDate->Size = System::Drawing::Size(207, 22);
			this->text_birthDate->TabIndex = 26;
			// 
			// text_custFirstName
			// 
			this->text_custFirstName->Location = System::Drawing::Point(25, 102);
			this->text_custFirstName->Name = L"text_custFirstName";
			this->text_custFirstName->Size = System::Drawing::Size(189, 22);
			this->text_custFirstName->TabIndex = 25;
			// 
			// birthDateCust
			// 
			this->birthDateCust->AutoSize = true;
			this->birthDateCust->Location = System::Drawing::Point(241, 83);
			this->birthDateCust->Name = L"birthDateCust";
			this->birthDateCust->Size = System::Drawing::Size(62, 16);
			this->birthDateCust->TabIndex = 23;
			this->birthDateCust->Text = L"birth date";
			// 
			// firstNameCust
			// 
			this->firstNameCust->AutoSize = true;
			this->firstNameCust->Location = System::Drawing::Point(6, 83);
			this->firstNameCust->Name = L"firstNameCust";
			this->firstNameCust->Size = System::Drawing::Size(60, 16);
			this->firstNameCust->TabIndex = 22;
			this->firstNameCust->Text = L"fist name";
			// 
			// lastNameCust
			// 
			this->lastNameCust->AutoSize = true;
			this->lastNameCust->Location = System::Drawing::Point(6, 30);
			this->lastNameCust->Name = L"lastNameCust";
			this->lastNameCust->Size = System::Drawing::Size(65, 16);
			this->lastNameCust->TabIndex = 21;
			this->lastNameCust->Text = L"last name";
			// 
			// text_custLastName
			// 
			this->text_custLastName->Location = System::Drawing::Point(23, 49);
			this->text_custLastName->Name = L"text_custLastName";
			this->text_custLastName->Size = System::Drawing::Size(191, 22);
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
			this->BillingGroupBox->Location = System::Drawing::Point(371, 431);
			this->BillingGroupBox->Name = L"BillingGroupBox";
			this->BillingGroupBox->Size = System::Drawing::Size(372, 72);
			this->BillingGroupBox->TabIndex = 27;
			this->BillingGroupBox->TabStop = false;
			this->BillingGroupBox->Text = L"Billing adress";
			// 
			// text_bilingCityName
			// 
			this->text_bilingCityName->Location = System::Drawing::Point(263, 41);
			this->text_bilingCityName->Name = L"text_bilingCityName";
			this->text_bilingCityName->Size = System::Drawing::Size(103, 22);
			this->text_bilingCityName->TabIndex = 34;
			// 
			// text_bilingZIPcode
			// 
			this->text_bilingZIPcode->Location = System::Drawing::Point(186, 40);
			this->text_bilingZIPcode->Name = L"text_bilingZIPcode";
			this->text_bilingZIPcode->Size = System::Drawing::Size(71, 22);
			this->text_bilingZIPcode->TabIndex = 33;
			// 
			// cityNameBil
			// 
			this->cityNameBil->AutoSize = true;
			this->cityNameBil->Location = System::Drawing::Point(283, 21);
			this->cityNameBil->Name = L"cityNameBil";
			this->cityNameBil->Size = System::Drawing::Size(64, 16);
			this->cityNameBil->TabIndex = 26;
			this->cityNameBil->Text = L"city name";
			// 
			// text_bilingStreetName
			// 
			this->text_bilingStreetName->Location = System::Drawing::Point(63, 40);
			this->text_bilingStreetName->Name = L"text_bilingStreetName";
			this->text_bilingStreetName->Size = System::Drawing::Size(112, 22);
			this->text_bilingStreetName->TabIndex = 32;
			// 
			// ZipCodeBil
			// 
			this->ZipCodeBil->AutoSize = true;
			this->ZipCodeBil->Location = System::Drawing::Point(192, 21);
			this->ZipCodeBil->Name = L"ZipCodeBil";
			this->ZipCodeBil->Size = System::Drawing::Size(61, 16);
			this->ZipCodeBil->TabIndex = 25;
			this->ZipCodeBil->Text = L"ZIP code";
			// 
			// text_bilingStreetN
			// 
			this->text_bilingStreetN->Location = System::Drawing::Point(9, 40);
			this->text_bilingStreetN->Name = L"text_bilingStreetN";
			this->text_bilingStreetN->Size = System::Drawing::Size(48, 22);
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
			this->streetNameBil->Location = System::Drawing::Point(80, 21);
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
			this->deliveryGroupBox->Location = System::Drawing::Point(24, 431);
			this->deliveryGroupBox->Name = L"deliveryGroupBox";
			this->deliveryGroupBox->Size = System::Drawing::Size(341, 72);
			this->deliveryGroupBox->TabIndex = 25;
			this->deliveryGroupBox->TabStop = false;
			this->deliveryGroupBox->Text = L"Delivery adress";
			// 
			// text_deliveryCityName
			// 
			this->text_deliveryCityName->Location = System::Drawing::Point(248, 41);
			this->text_deliveryCityName->Name = L"text_deliveryCityName";
			this->text_deliveryCityName->Size = System::Drawing::Size(87, 22);
			this->text_deliveryCityName->TabIndex = 30;
			// 
			// text_deliveryZIPcode
			// 
			this->text_deliveryZIPcode->Location = System::Drawing::Point(171, 40);
			this->text_deliveryZIPcode->Name = L"text_deliveryZIPcode";
			this->text_deliveryZIPcode->Size = System::Drawing::Size(71, 22);
			this->text_deliveryZIPcode->TabIndex = 29;
			// 
			// text_deliveryStreetName
			// 
			this->text_deliveryStreetName->Location = System::Drawing::Point(60, 40);
			this->text_deliveryStreetName->Name = L"text_deliveryStreetName";
			this->text_deliveryStreetName->Size = System::Drawing::Size(100, 22);
			this->text_deliveryStreetName->TabIndex = 28;
			// 
			// text_deliveryStreetN
			// 
			this->text_deliveryStreetN->Location = System::Drawing::Point(6, 40);
			this->text_deliveryStreetN->Name = L"text_deliveryStreetN";
			this->text_deliveryStreetN->Size = System::Drawing::Size(48, 22);
			this->text_deliveryStreetN->TabIndex = 27;
			// 
			// cityNameDel
			// 
			this->cityNameDel->AutoSize = true;
			this->cityNameDel->Location = System::Drawing::Point(260, 21);
			this->cityNameDel->Name = L"cityNameDel";
			this->cityNameDel->Size = System::Drawing::Size(64, 16);
			this->cityNameDel->TabIndex = 26;
			this->cityNameDel->Text = L"city name";
			// 
			// ZipCodeDel
			// 
			this->ZipCodeDel->AutoSize = true;
			this->ZipCodeDel->Location = System::Drawing::Point(176, 21);
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
			this->streetNameDel->Location = System::Drawing::Point(74, 21);
			this->streetNameDel->Name = L"streetNameDel";
			this->streetNameDel->Size = System::Drawing::Size(77, 16);
			this->streetNameDel->TabIndex = 24;
			this->streetNameDel->Text = L"street name";
			// 
			// dgv_cust
			// 
			this->dgv_cust->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_cust->Location = System::Drawing::Point(24, 20);
			this->dgv_cust->Name = L"dgv_cust";
			this->dgv_cust->RowHeadersWidth = 51;
			this->dgv_cust->RowTemplate->Height = 24;
			this->dgv_cust->Size = System::Drawing::Size(672, 229);
			this->dgv_cust->TabIndex = 18;
			// 
			// employeesTab
			// 
			this->employeesTab->Controls->Add(this->displayEmp);
			this->employeesTab->Controls->Add(this->changeEmp);
			this->employeesTab->Controls->Add(this->eraseEmp);
			this->employeesTab->Controls->Add(this->addEmp);
			this->employeesTab->Controls->Add(this->empAdressGroupBox);
			this->employeesTab->Controls->Add(this->infoEmpGroupBox);
			this->employeesTab->Controls->Add(this->dgv_emp);
			this->employeesTab->Location = System::Drawing::Point(4, 25);
			this->employeesTab->Name = L"employeesTab";
			this->employeesTab->Padding = System::Windows::Forms::Padding(3);
			this->employeesTab->Size = System::Drawing::Size(768, 581);
			this->employeesTab->TabIndex = 1;
			this->employeesTab->Text = L"Employees";
			this->employeesTab->UseVisualStyleBackColor = true;
			// 
			// displayEmp
			// 
			this->displayEmp->Location = System::Drawing::Point(21, 516);
			this->displayEmp->Name = L"displayEmp";
			this->displayEmp->Size = System::Drawing::Size(141, 33);
			this->displayEmp->TabIndex = 36;
			this->displayEmp->Text = L"Display employees";
			this->displayEmp->UseVisualStyleBackColor = true;
			// 
			// changeEmp
			// 
			this->changeEmp->Location = System::Drawing::Point(379, 516);
			this->changeEmp->Name = L"changeEmp";
			this->changeEmp->Size = System::Drawing::Size(151, 33);
			this->changeEmp->TabIndex = 35;
			this->changeEmp->Text = L"Change employee";
			this->changeEmp->UseVisualStyleBackColor = true;
			// 
			// eraseEmp
			// 
			this->eraseEmp->Location = System::Drawing::Point(579, 516);
			this->eraseEmp->Name = L"eraseEmp";
			this->eraseEmp->Size = System::Drawing::Size(151, 33);
			this->eraseEmp->TabIndex = 34;
			this->eraseEmp->Text = L"Erase employee";
			this->eraseEmp->UseVisualStyleBackColor = true;
			// 
			// addEmp
			// 
			this->addEmp->Location = System::Drawing::Point(192, 516);
			this->addEmp->Name = L"addEmp";
			this->addEmp->Size = System::Drawing::Size(141, 33);
			this->addEmp->TabIndex = 33;
			this->addEmp->Text = L"Add employee";
			this->addEmp->UseVisualStyleBackColor = true;
			// 
			// empAdressGroupBox
			// 
			this->empAdressGroupBox->Controls->Add(this->text_ZIPcode);
			this->empAdressGroupBox->Controls->Add(this->text_cityName);
			this->empAdressGroupBox->Controls->Add(this->text_streetName);
			this->empAdressGroupBox->Controls->Add(this->text_streetNumber);
			this->empAdressGroupBox->Controls->Add(this->cityNameEmp);
			this->empAdressGroupBox->Controls->Add(this->streetNameEmp);
			this->empAdressGroupBox->Controls->Add(this->ZIPcodeEmp);
			this->empAdressGroupBox->Controls->Add(this->streetNumEmp);
			this->empAdressGroupBox->Location = System::Drawing::Point(379, 298);
			this->empAdressGroupBox->Name = L"empAdressGroupBox";
			this->empAdressGroupBox->Size = System::Drawing::Size(323, 123);
			this->empAdressGroupBox->TabIndex = 20;
			this->empAdressGroupBox->TabStop = false;
			this->empAdressGroupBox->Text = L"Adress";
			// 
			// text_ZIPcode
			// 
			this->text_ZIPcode->Location = System::Drawing::Point(223, 84);
			this->text_ZIPcode->Name = L"text_ZIPcode";
			this->text_ZIPcode->Size = System::Drawing::Size(68, 22);
			this->text_ZIPcode->TabIndex = 40;
			// 
			// text_cityName
			// 
			this->text_cityName->Location = System::Drawing::Point(21, 84);
			this->text_cityName->Name = L"text_cityName";
			this->text_cityName->Size = System::Drawing::Size(163, 22);
			this->text_cityName->TabIndex = 39;
			// 
			// text_streetName
			// 
			this->text_streetName->Location = System::Drawing::Point(128, 37);
			this->text_streetName->Name = L"text_streetName";
			this->text_streetName->Size = System::Drawing::Size(163, 22);
			this->text_streetName->TabIndex = 38;
			// 
			// text_streetNumber
			// 
			this->text_streetNumber->Location = System::Drawing::Point(21, 37);
			this->text_streetNumber->Name = L"text_streetNumber";
			this->text_streetNumber->Size = System::Drawing::Size(68, 22);
			this->text_streetNumber->TabIndex = 37;
			// 
			// cityNameEmp
			// 
			this->cityNameEmp->AutoSize = true;
			this->cityNameEmp->Location = System::Drawing::Point(6, 65);
			this->cityNameEmp->Name = L"cityNameEmp";
			this->cityNameEmp->Size = System::Drawing::Size(64, 16);
			this->cityNameEmp->TabIndex = 30;
			this->cityNameEmp->Text = L"city name";
			// 
			// streetNameEmp
			// 
			this->streetNameEmp->AutoSize = true;
			this->streetNameEmp->Location = System::Drawing::Point(111, 18);
			this->streetNameEmp->Name = L"streetNameEmp";
			this->streetNameEmp->Size = System::Drawing::Size(77, 16);
			this->streetNameEmp->TabIndex = 28;
			this->streetNameEmp->Text = L"street name";
			// 
			// ZIPcodeEmp
			// 
			this->ZIPcodeEmp->AutoSize = true;
			this->ZIPcodeEmp->Location = System::Drawing::Point(210, 65);
			this->ZIPcodeEmp->Name = L"ZIPcodeEmp";
			this->ZIPcodeEmp->Size = System::Drawing::Size(61, 16);
			this->ZIPcodeEmp->TabIndex = 29;
			this->ZIPcodeEmp->Text = L"ZIP code";
			// 
			// streetNumEmp
			// 
			this->streetNumEmp->AutoSize = true;
			this->streetNumEmp->Location = System::Drawing::Point(6, 18);
			this->streetNumEmp->Name = L"streetNumEmp";
			this->streetNumEmp->Size = System::Drawing::Size(88, 16);
			this->streetNumEmp->TabIndex = 27;
			this->streetNumEmp->Text = L"street number";
			// 
			// infoEmpGroupBox
			// 
			this->infoEmpGroupBox->Controls->Add(this->text_hireDate);
			this->infoEmpGroupBox->Controls->Add(this->text_empLastName);
			this->infoEmpGroupBox->Controls->Add(this->text_empFirstName);
			this->infoEmpGroupBox->Controls->Add(this->text_chiefID);
			this->infoEmpGroupBox->Controls->Add(this->lastNameEmp);
			this->infoEmpGroupBox->Controls->Add(this->hireDateEmp);
			this->infoEmpGroupBox->Controls->Add(this->chiefIDemp);
			this->infoEmpGroupBox->Controls->Add(this->firstNameEmp);
			this->infoEmpGroupBox->Controls->Add(this->IDemp);
			this->infoEmpGroupBox->Controls->Add(this->text_employeeID);
			this->infoEmpGroupBox->Location = System::Drawing::Point(49, 298);
			this->infoEmpGroupBox->Name = L"infoEmpGroupBox";
			this->infoEmpGroupBox->Size = System::Drawing::Size(309, 185);
			this->infoEmpGroupBox->TabIndex = 19;
			this->infoEmpGroupBox->TabStop = false;
			this->infoEmpGroupBox->Text = L"Info";
			// 
			// text_hireDate
			// 
			this->text_hireDate->Location = System::Drawing::Point(181, 143);
			this->text_hireDate->Name = L"text_hireDate";
			this->text_hireDate->Size = System::Drawing::Size(103, 22);
			this->text_hireDate->TabIndex = 33;
			// 
			// text_empLastName
			// 
			this->text_empLastName->Location = System::Drawing::Point(18, 91);
			this->text_empLastName->Name = L"text_empLastName";
			this->text_empLastName->Size = System::Drawing::Size(266, 22);
			this->text_empLastName->TabIndex = 32;
			// 
			// text_empFirstName
			// 
			this->text_empFirstName->Location = System::Drawing::Point(18, 143);
			this->text_empFirstName->Name = L"text_empFirstName";
			this->text_empFirstName->Size = System::Drawing::Size(139, 22);
			this->text_empFirstName->TabIndex = 31;
			// 
			// text_chiefID
			// 
			this->text_chiefID->Location = System::Drawing::Point(165, 41);
			this->text_chiefID->Name = L"text_chiefID";
			this->text_chiefID->Size = System::Drawing::Size(128, 22);
			this->text_chiefID->TabIndex = 30;
			// 
			// lastNameEmp
			// 
			this->lastNameEmp->AutoSize = true;
			this->lastNameEmp->Location = System::Drawing::Point(4, 72);
			this->lastNameEmp->Name = L"lastNameEmp";
			this->lastNameEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameEmp->TabIndex = 25;
			this->lastNameEmp->Text = L"last name";
			// 
			// hireDateEmp
			// 
			this->hireDateEmp->AutoSize = true;
			this->hireDateEmp->Location = System::Drawing::Point(162, 124);
			this->hireDateEmp->Name = L"hireDateEmp";
			this->hireDateEmp->Size = System::Drawing::Size(59, 16);
			this->hireDateEmp->TabIndex = 27;
			this->hireDateEmp->Text = L"hire date";
			// 
			// chiefIDemp
			// 
			this->chiefIDemp->AutoSize = true;
			this->chiefIDemp->Location = System::Drawing::Point(151, 22);
			this->chiefIDemp->Name = L"chiefIDemp";
			this->chiefIDemp->Size = System::Drawing::Size(51, 16);
			this->chiefIDemp->TabIndex = 28;
			this->chiefIDemp->Text = L"chief ID";
			// 
			// firstNameEmp
			// 
			this->firstNameEmp->AutoSize = true;
			this->firstNameEmp->Location = System::Drawing::Point(6, 124);
			this->firstNameEmp->Name = L"firstNameEmp";
			this->firstNameEmp->Size = System::Drawing::Size(60, 16);
			this->firstNameEmp->TabIndex = 26;
			this->firstNameEmp->Text = L"fist name";
			// 
			// IDemp
			// 
			this->IDemp->AutoSize = true;
			this->IDemp->Location = System::Drawing::Point(6, 23);
			this->IDemp->Name = L"IDemp";
			this->IDemp->Size = System::Drawing::Size(84, 16);
			this->IDemp->TabIndex = 24;
			this->IDemp->Text = L"employee ID";
			// 
			// text_employeeID
			// 
			this->text_employeeID->Location = System::Drawing::Point(18, 42);
			this->text_employeeID->Name = L"text_employeeID";
			this->text_employeeID->Size = System::Drawing::Size(124, 22);
			this->text_employeeID->TabIndex = 29;
			// 
			// dgv_emp
			// 
			this->dgv_emp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_emp->Location = System::Drawing::Point(49, 39);
			this->dgv_emp->Name = L"dgv_emp";
			this->dgv_emp->RowHeadersWidth = 51;
			this->dgv_emp->RowTemplate->Height = 24;
			this->dgv_emp->Size = System::Drawing::Size(672, 229);
			this->dgv_emp->TabIndex = 18;
			// 
			// ordersTab
			// 
			this->ordersTab->Controls->Add(this->addItem);
			this->ordersTab->Controls->Add(this->addPayment);
			this->ordersTab->Controls->Add(this->meanOfPaymentGroupBox);
			this->ordersTab->Controls->Add(this->ItemOrder_GroupeBox);
			this->ordersTab->Controls->Add(this->GlobalInfoOrder_GroupBox);
			this->ordersTab->Controls->Add(this->displayOrder);
			this->ordersTab->Controls->Add(this->changeOrder);
			this->ordersTab->Controls->Add(this->eraseOrder);
			this->ordersTab->Controls->Add(this->addOrder);
			this->ordersTab->Controls->Add(this->dgv_ord);
			this->ordersTab->Location = System::Drawing::Point(4, 25);
			this->ordersTab->Name = L"ordersTab";
			this->ordersTab->Size = System::Drawing::Size(768, 581);
			this->ordersTab->TabIndex = 2;
			this->ordersTab->Text = L"Orders";
			this->ordersTab->UseVisualStyleBackColor = true;
			// 
			// addItem
			// 
			this->addItem->Location = System::Drawing::Point(645, 511);
			this->addItem->Name = L"addItem";
			this->addItem->Size = System::Drawing::Size(117, 33);
			this->addItem->TabIndex = 45;
			this->addItem->Text = L"Add item";
			this->addItem->UseVisualStyleBackColor = true;
			// 
			// addPayment
			// 
			this->addPayment->Location = System::Drawing::Point(522, 511);
			this->addPayment->Name = L"addPayment";
			this->addPayment->Size = System::Drawing::Size(117, 33);
			this->addPayment->TabIndex = 44;
			this->addPayment->Text = L"Add payment";
			this->addPayment->UseVisualStyleBackColor = true;
			// 
			// meanOfPaymentGroupBox
			// 
			this->meanOfPaymentGroupBox->Controls->Add(this->meanOfPayment);
			this->meanOfPaymentGroupBox->Controls->Add(this->paymentDueDate);
			this->meanOfPaymentGroupBox->Controls->Add(this->text_paymentDueDate);
			this->meanOfPaymentGroupBox->Controls->Add(this->comboBox_meanOfPayment);
			this->meanOfPaymentGroupBox->Location = System::Drawing::Point(334, 372);
			this->meanOfPaymentGroupBox->Name = L"meanOfPaymentGroupBox";
			this->meanOfPaymentGroupBox->Size = System::Drawing::Size(387, 120);
			this->meanOfPaymentGroupBox->TabIndex = 43;
			this->meanOfPaymentGroupBox->TabStop = false;
			this->meanOfPaymentGroupBox->Text = L"mean of payment";
			// 
			// meanOfPayment
			// 
			this->meanOfPayment->AutoSize = true;
			this->meanOfPayment->Location = System::Drawing::Point(32, 24);
			this->meanOfPayment->Name = L"meanOfPayment";
			this->meanOfPayment->Size = System::Drawing::Size(110, 16);
			this->meanOfPayment->TabIndex = 31;
			this->meanOfPayment->Text = L"mean of payment";
			// 
			// paymentDueDate
			// 
			this->paymentDueDate->AutoSize = true;
			this->paymentDueDate->Location = System::Drawing::Point(30, 68);
			this->paymentDueDate->Name = L"paymentDueDate";
			this->paymentDueDate->Size = System::Drawing::Size(115, 16);
			this->paymentDueDate->TabIndex = 29;
			this->paymentDueDate->Text = L"payment due date";
			// 
			// text_paymentDueDate
			// 
			this->text_paymentDueDate->Location = System::Drawing::Point(49, 87);
			this->text_paymentDueDate->Name = L"text_paymentDueDate";
			this->text_paymentDueDate->Size = System::Drawing::Size(102, 22);
			this->text_paymentDueDate->TabIndex = 30;
			// 
			// comboBox_meanOfPayment
			// 
			this->comboBox_meanOfPayment->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Cash", L"Credit card",
					L"Bank transfer"
			});
			this->comboBox_meanOfPayment->CausesValidation = false;
			this->comboBox_meanOfPayment->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_meanOfPayment->FormattingEnabled = true;
			this->comboBox_meanOfPayment->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox_meanOfPayment->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cash", L"Credit Card", L"Bank transfer" });
			this->comboBox_meanOfPayment->Location = System::Drawing::Point(49, 41);
			this->comboBox_meanOfPayment->Name = L"comboBox_meanOfPayment";
			this->comboBox_meanOfPayment->Size = System::Drawing::Size(324, 24);
			this->comboBox_meanOfPayment->TabIndex = 0;
			// 
			// ItemOrder_GroupeBox
			// 
			this->ItemOrder_GroupeBox->Controls->Add(this->numericUpDown_quantityItemOrders);
			this->ItemOrder_GroupeBox->Controls->Add(this->quantityItemsOrders);
			this->ItemOrder_GroupeBox->Controls->Add(this->itemID);
			this->ItemOrder_GroupeBox->Controls->Add(this->text_ordersArticleID);
			this->ItemOrder_GroupeBox->Location = System::Drawing::Point(334, 289);
			this->ItemOrder_GroupeBox->Name = L"ItemOrder_GroupeBox";
			this->ItemOrder_GroupeBox->Size = System::Drawing::Size(387, 77);
			this->ItemOrder_GroupeBox->TabIndex = 42;
			this->ItemOrder_GroupeBox->TabStop = false;
			this->ItemOrder_GroupeBox->Text = L"Item";
			// 
			// numericUpDown_quantityItemOrders
			// 
			this->numericUpDown_quantityItemOrders->Location = System::Drawing::Point(327, 37);
			this->numericUpDown_quantityItemOrders->Name = L"numericUpDown_quantityItemOrders";
			this->numericUpDown_quantityItemOrders->Size = System::Drawing::Size(46, 22);
			this->numericUpDown_quantityItemOrders->TabIndex = 32;
			// 
			// quantityItemsOrders
			// 
			this->quantityItemsOrders->AutoSize = true;
			this->quantityItemsOrders->Location = System::Drawing::Point(299, 20);
			this->quantityItemsOrders->Name = L"quantityItemsOrders";
			this->quantityItemsOrders->Size = System::Drawing::Size(53, 16);
			this->quantityItemsOrders->TabIndex = 31;
			this->quantityItemsOrders->Text = L"quantity";
			// 
			// itemID
			// 
			this->itemID->AutoSize = true;
			this->itemID->Location = System::Drawing::Point(26, 20);
			this->itemID->Name = L"itemID";
			this->itemID->Size = System::Drawing::Size(116, 16);
			this->itemID->TabIndex = 29;
			this->itemID->Text = L"item ID (reference)";
			// 
			// text_ordersArticleID
			// 
			this->text_ordersArticleID->Location = System::Drawing::Point(49, 39);
			this->text_ordersArticleID->Name = L"text_ordersArticleID";
			this->text_ordersArticleID->Size = System::Drawing::Size(236, 22);
			this->text_ordersArticleID->TabIndex = 0;
			// 
			// GlobalInfoOrder_GroupBox
			// 
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->deliveryDate);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->text_deliveryDate);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->completPaymentDate);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->text_customerIdOrders);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->text_completPayementDate);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->customerIdOrders);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->text_orderID);
			this->GlobalInfoOrder_GroupBox->Controls->Add(this->orderID);
			this->GlobalInfoOrder_GroupBox->Location = System::Drawing::Point(25, 289);
			this->GlobalInfoOrder_GroupBox->Name = L"GlobalInfoOrder_GroupBox";
			this->GlobalInfoOrder_GroupBox->Size = System::Drawing::Size(303, 177);
			this->GlobalInfoOrder_GroupBox->TabIndex = 41;
			this->GlobalInfoOrder_GroupBox->TabStop = false;
			this->GlobalInfoOrder_GroupBox->Text = L"Global info";
			// 
			// deliveryDate
			// 
			this->deliveryDate->AutoSize = true;
			this->deliveryDate->Location = System::Drawing::Point(182, 120);
			this->deliveryDate->Name = L"deliveryDate";
			this->deliveryDate->Size = System::Drawing::Size(85, 16);
			this->deliveryDate->TabIndex = 35;
			this->deliveryDate->Text = L"delivery date";
			// 
			// text_deliveryDate
			// 
			this->text_deliveryDate->Location = System::Drawing::Point(201, 139);
			this->text_deliveryDate->Name = L"text_deliveryDate";
			this->text_deliveryDate->Size = System::Drawing::Size(76, 22);
			this->text_deliveryDate->TabIndex = 36;
			// 
			// completPaymentDate
			// 
			this->completPaymentDate->AutoSize = true;
			this->completPaymentDate->Location = System::Drawing::Point(20, 120);
			this->completPaymentDate->Name = L"completPaymentDate";
			this->completPaymentDate->Size = System::Drawing::Size(156, 16);
			this->completPaymentDate->TabIndex = 32;
			this->completPaymentDate->Text = L"complete payement date";
			// 
			// text_customerIdOrders
			// 
			this->text_customerIdOrders->Location = System::Drawing::Point(39, 83);
			this->text_customerIdOrders->Name = L"text_customerIdOrders";
			this->text_customerIdOrders->Size = System::Drawing::Size(238, 22);
			this->text_customerIdOrders->TabIndex = 34;
			// 
			// text_completPayementDate
			// 
			this->text_completPayementDate->Location = System::Drawing::Point(39, 139);
			this->text_completPayementDate->Name = L"text_completPayementDate";
			this->text_completPayementDate->Size = System::Drawing::Size(102, 22);
			this->text_completPayementDate->TabIndex = 33;
			// 
			// customerIdOrders
			// 
			this->customerIdOrders->AutoSize = true;
			this->customerIdOrders->Location = System::Drawing::Point(21, 64);
			this->customerIdOrders->Name = L"customerIdOrders";
			this->customerIdOrders->Size = System::Drawing::Size(78, 16);
			this->customerIdOrders->TabIndex = 33;
			this->customerIdOrders->Text = L"customer ID";
			// 
			// text_orderID
			// 
			this->text_orderID->Location = System::Drawing::Point(39, 37);
			this->text_orderID->Name = L"text_orderID";
			this->text_orderID->Size = System::Drawing::Size(238, 22);
			this->text_orderID->TabIndex = 32;
			// 
			// orderID
			// 
			this->orderID->AutoSize = true;
			this->orderID->Location = System::Drawing::Point(21, 18);
			this->orderID->Name = L"orderID";
			this->orderID->Size = System::Drawing::Size(55, 16);
			this->orderID->TabIndex = 28;
			this->orderID->Text = L"order ID";
			// 
			// displayOrder
			// 
			this->displayOrder->Location = System::Drawing::Point(9, 511);
			this->displayOrder->Name = L"displayOrder";
			this->displayOrder->Size = System::Drawing::Size(117, 33);
			this->displayOrder->TabIndex = 40;
			this->displayOrder->Text = L"Display order";
			this->displayOrder->UseVisualStyleBackColor = true;
			this->displayOrder->Click += gcnew System::EventHandler(this, &MyForm::displayOrder_Click);
			// 
			// changeOrder
			// 
			this->changeOrder->Location = System::Drawing::Point(132, 511);
			this->changeOrder->Name = L"changeOrder";
			this->changeOrder->Size = System::Drawing::Size(127, 33);
			this->changeOrder->TabIndex = 39;
			this->changeOrder->Text = L"Change order";
			this->changeOrder->UseVisualStyleBackColor = true;
			// 
			// eraseOrder
			// 
			this->eraseOrder->Location = System::Drawing::Point(264, 511);
			this->eraseOrder->Name = L"eraseOrder";
			this->eraseOrder->Size = System::Drawing::Size(127, 33);
			this->eraseOrder->TabIndex = 38;
			this->eraseOrder->Text = L"Erase order";
			this->eraseOrder->UseVisualStyleBackColor = true;
			// 
			// addOrder
			// 
			this->addOrder->Location = System::Drawing::Point(399, 511);
			this->addOrder->Name = L"addOrder";
			this->addOrder->Size = System::Drawing::Size(117, 33);
			this->addOrder->TabIndex = 37;
			this->addOrder->Text = L"Add order";
			this->addOrder->UseVisualStyleBackColor = true;
			// 
			// dgv_ord
			// 
			this->dgv_ord->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_ord->Location = System::Drawing::Point(49, 39);
			this->dgv_ord->Name = L"dgv_ord";
			this->dgv_ord->RowHeadersWidth = 51;
			this->dgv_ord->RowTemplate->Height = 24;
			this->dgv_ord->Size = System::Drawing::Size(672, 229);
			this->dgv_ord->TabIndex = 18;
			// 
			// stockTab
			// 
			this->stockTab->Controls->Add(this->ItemStock_GroupBox);
			this->stockTab->Controls->Add(this->dgv_stock);
			this->stockTab->Controls->Add(this->displayProducts);
			this->stockTab->Controls->Add(this->changeProduct);
			this->stockTab->Controls->Add(this->ereaseProduct);
			this->stockTab->Controls->Add(this->addProduct);
			this->stockTab->Location = System::Drawing::Point(4, 25);
			this->stockTab->Name = L"stockTab";
			this->stockTab->Size = System::Drawing::Size(768, 581);
			this->stockTab->TabIndex = 5;
			this->stockTab->Text = L"Stock";
			this->stockTab->UseVisualStyleBackColor = true;
			// 
			// ItemStock_GroupBox
			// 
			this->ItemStock_GroupBox->Controls->Add(this->text_articleColor);
			this->ItemStock_GroupBox->Controls->Add(this->reorderThreshold);
			this->ItemStock_GroupBox->Controls->Add(this->textBox_reorderThreshold);
			this->ItemStock_GroupBox->Controls->Add(this->itemColorStock);
			this->ItemStock_GroupBox->Controls->Add(this->VATrate);
			this->ItemStock_GroupBox->Controls->Add(this->textBox_vatRate);
			this->ItemStock_GroupBox->Controls->Add(this->itemPriceETStock);
			this->ItemStock_GroupBox->Controls->Add(this->text_articlePriceExcludingTaxes);
			this->ItemStock_GroupBox->Controls->Add(this->itemNameStock);
			this->ItemStock_GroupBox->Controls->Add(this->text_articleName);
			this->ItemStock_GroupBox->Controls->Add(this->numericUpDown_quantityProductStock);
			this->ItemStock_GroupBox->Controls->Add(this->quantityStock);
			this->ItemStock_GroupBox->Controls->Add(this->itemIdStock);
			this->ItemStock_GroupBox->Controls->Add(this->text_stockArticleID);
			this->ItemStock_GroupBox->Location = System::Drawing::Point(134, 293);
			this->ItemStock_GroupBox->Name = L"ItemStock_GroupBox";
			this->ItemStock_GroupBox->Size = System::Drawing::Size(490, 176);
			this->ItemStock_GroupBox->TabIndex = 42;
			this->ItemStock_GroupBox->TabStop = false;
			this->ItemStock_GroupBox->Text = L"Item";
			// 
			// text_articleColor
			// 
			this->text_articleColor->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(30) {
				L"Red", L"Orange", L"Yellow",
					L"Green", L"Blue", L"Purple", L"Pink", L"Brown", L"Gray", L"Black", L"White", L"Cyan", L"Magenta", L"Indigo", L"Turquoise", L"Lavender",
					L"Maroon", L"Olive", L"Coral", L"Teal", L"Salmon", L"Gold", L"Silver", L"Beige", L"Crimson", L"Azure", L"Ruby", L"Emerald", L"Ivory",
					L"Charcoal"
			});
			this->text_articleColor->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->text_articleColor->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->text_articleColor->Location = System::Drawing::Point(321, 88);
			this->text_articleColor->Name = L"text_articleColor";
			this->text_articleColor->Size = System::Drawing::Size(151, 22);
			this->text_articleColor->TabIndex = 48;
			// 
			// reorderThreshold
			// 
			this->reorderThreshold->AutoSize = true;
			this->reorderThreshold->Location = System::Drawing::Point(298, 122);
			this->reorderThreshold->Name = L"reorderThreshold";
			this->reorderThreshold->Size = System::Drawing::Size(109, 16);
			this->reorderThreshold->TabIndex = 46;
			this->reorderThreshold->Text = L"reorder threshold";
			// 
			// textBox_reorderThreshold
			// 
			this->textBox_reorderThreshold->Location = System::Drawing::Point(321, 141);
			this->textBox_reorderThreshold->Name = L"textBox_reorderThreshold";
			this->textBox_reorderThreshold->Size = System::Drawing::Size(151, 22);
			this->textBox_reorderThreshold->TabIndex = 45;
			// 
			// itemColorStock
			// 
			this->itemColorStock->AutoSize = true;
			this->itemColorStock->Location = System::Drawing::Point(298, 69);
			this->itemColorStock->Name = L"itemColorStock";
			this->itemColorStock->Size = System::Drawing::Size(65, 16);
			this->itemColorStock->TabIndex = 44;
			this->itemColorStock->Text = L"item color";
			// 
			// VATrate
			// 
			this->VATrate->AutoSize = true;
			this->VATrate->Location = System::Drawing::Point(389, 18);
			this->VATrate->Name = L"VATrate";
			this->VATrate->Size = System::Drawing::Size(83, 16);
			this->VATrate->TabIndex = 42;
			this->VATrate->Text = L"VAT rate (%)";
			// 
			// textBox_vatRate
			// 
			this->textBox_vatRate->Location = System::Drawing::Point(412, 37);
			this->textBox_vatRate->Name = L"textBox_vatRate";
			this->textBox_vatRate->Size = System::Drawing::Size(60, 22);
			this->textBox_vatRate->TabIndex = 41;
			// 
			// itemPriceETStock
			// 
			this->itemPriceETStock->AutoSize = true;
			this->itemPriceETStock->Location = System::Drawing::Point(20, 122);
			this->itemPriceETStock->Name = L"itemPriceETStock";
			this->itemPriceETStock->Size = System::Drawing::Size(160, 16);
			this->itemPriceETStock->TabIndex = 40;
			this->itemPriceETStock->Text = L"item price excluding taxes";
			// 
			// text_articlePriceExcludingTaxes
			// 
			this->text_articlePriceExcludingTaxes->Location = System::Drawing::Point(43, 141);
			this->text_articlePriceExcludingTaxes->Name = L"text_articlePriceExcludingTaxes";
			this->text_articlePriceExcludingTaxes->Size = System::Drawing::Size(236, 22);
			this->text_articlePriceExcludingTaxes->TabIndex = 39;
			// 
			// itemNameStock
			// 
			this->itemNameStock->AutoSize = true;
			this->itemNameStock->Location = System::Drawing::Point(20, 69);
			this->itemNameStock->Name = L"itemNameStock";
			this->itemNameStock->Size = System::Drawing::Size(69, 16);
			this->itemNameStock->TabIndex = 38;
			this->itemNameStock->Text = L"item name";
			// 
			// text_articleName
			// 
			this->text_articleName->Location = System::Drawing::Point(43, 88);
			this->text_articleName->Name = L"text_articleName";
			this->text_articleName->Size = System::Drawing::Size(236, 22);
			this->text_articleName->TabIndex = 37;
			// 
			// numericUpDown_quantityProductStock
			// 
			this->numericUpDown_quantityProductStock->Location = System::Drawing::Point(321, 35);
			this->numericUpDown_quantityProductStock->Name = L"numericUpDown_quantityProductStock";
			this->numericUpDown_quantityProductStock->Size = System::Drawing::Size(46, 22);
			this->numericUpDown_quantityProductStock->TabIndex = 36;
			// 
			// quantityStock
			// 
			this->quantityStock->AutoSize = true;
			this->quantityStock->Location = System::Drawing::Point(293, 18);
			this->quantityStock->Name = L"quantityStock";
			this->quantityStock->Size = System::Drawing::Size(53, 16);
			this->quantityStock->TabIndex = 35;
			this->quantityStock->Text = L"quantity";
			// 
			// itemIdStock
			// 
			this->itemIdStock->AutoSize = true;
			this->itemIdStock->Location = System::Drawing::Point(20, 18);
			this->itemIdStock->Name = L"itemIdStock";
			this->itemIdStock->Size = System::Drawing::Size(116, 16);
			this->itemIdStock->TabIndex = 34;
			this->itemIdStock->Text = L"item ID (reference)";
			// 
			// text_stockArticleID
			// 
			this->text_stockArticleID->Location = System::Drawing::Point(43, 37);
			this->text_stockArticleID->Name = L"text_stockArticleID";
			this->text_stockArticleID->Size = System::Drawing::Size(236, 22);
			this->text_stockArticleID->TabIndex = 33;
			// 
			// dgv_stock
			// 
			this->dgv_stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_stock->Location = System::Drawing::Point(51, 32);
			this->dgv_stock->Name = L"dgv_stock";
			this->dgv_stock->RowHeadersWidth = 51;
			this->dgv_stock->RowTemplate->Height = 24;
			this->dgv_stock->Size = System::Drawing::Size(672, 229);
			this->dgv_stock->TabIndex = 41;
			// 
			// displayProducts
			// 
			this->displayProducts->Location = System::Drawing::Point(32, 514);
			this->displayProducts->Name = L"displayProducts";
			this->displayProducts->Size = System::Drawing::Size(141, 33);
			this->displayProducts->TabIndex = 40;
			this->displayProducts->Text = L"Display products";
			this->displayProducts->UseVisualStyleBackColor = true;
			// 
			// changeProduct
			// 
			this->changeProduct->Location = System::Drawing::Point(390, 514);
			this->changeProduct->Name = L"changeProduct";
			this->changeProduct->Size = System::Drawing::Size(151, 33);
			this->changeProduct->TabIndex = 39;
			this->changeProduct->Text = L"Change product";
			this->changeProduct->UseVisualStyleBackColor = true;
			// 
			// ereaseProduct
			// 
			this->ereaseProduct->Location = System::Drawing::Point(590, 514);
			this->ereaseProduct->Name = L"ereaseProduct";
			this->ereaseProduct->Size = System::Drawing::Size(151, 33);
			this->ereaseProduct->TabIndex = 38;
			this->ereaseProduct->Text = L"Erase product";
			this->ereaseProduct->UseVisualStyleBackColor = true;
			// 
			// addProduct
			// 
			this->addProduct->Location = System::Drawing::Point(203, 514);
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
			this->statisticTab->Controls->Add(this->button_turnover);
			this->statisticTab->Controls->Add(this->button_customerTotalAmount);
			this->statisticTab->Controls->Add(this->button_purchaseValueStock);
			this->statisticTab->Controls->Add(this->button_lowestSelling);
			this->statisticTab->Controls->Add(this->button_averageCart);
			this->statisticTab->Controls->Add(this->button_underReorderThreshold);
			this->statisticTab->Controls->Add(this->dgv_stat);
			this->statisticTab->Location = System::Drawing::Point(4, 25);
			this->statisticTab->Name = L"statisticTab";
			this->statisticTab->Size = System::Drawing::Size(768, 581);
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
			this->DateStatistics_groupBox->Location = System::Drawing::Point(41, 503);
			this->DateStatistics_groupBox->Name = L"DateStatistics_groupBox";
			this->DateStatistics_groupBox->Size = System::Drawing::Size(331, 58);
			this->DateStatistics_groupBox->TabIndex = 43;
			this->DateStatistics_groupBox->TabStop = false;
			this->DateStatistics_groupBox->Text = L"Date";
			// 
			// text_turnoverYear
			// 
			this->text_turnoverYear->Location = System::Drawing::Point(211, 21);
			this->text_turnoverYear->Name = L"text_turnoverYear";
			this->text_turnoverYear->Size = System::Drawing::Size(92, 22);
			this->text_turnoverYear->TabIndex = 34;
			// 
			// yearStatistics
			// 
			this->yearStatistics->AutoSize = true;
			this->yearStatistics->Location = System::Drawing::Point(171, 24);
			this->yearStatistics->Name = L"yearStatistics";
			this->yearStatistics->Size = System::Drawing::Size(34, 16);
			this->yearStatistics->TabIndex = 33;
			this->yearStatistics->Text = L"year";
			// 
			// text_turnoverMonth
			// 
			this->text_turnoverMonth->Location = System::Drawing::Point(68, 21);
			this->text_turnoverMonth->Name = L"text_turnoverMonth";
			this->text_turnoverMonth->Size = System::Drawing::Size(70, 22);
			this->text_turnoverMonth->TabIndex = 32;
			// 
			// monthStatistics
			// 
			this->monthStatistics->AutoSize = true;
			this->monthStatistics->Location = System::Drawing::Point(19, 24);
			this->monthStatistics->Name = L"monthStatistics";
			this->monthStatistics->Size = System::Drawing::Size(43, 16);
			this->monthStatistics->TabIndex = 28;
			this->monthStatistics->Text = L"month";
			// 
			// CustomerStatistics_groupBox
			// 
			this->CustomerStatistics_groupBox->Controls->Add(this->birthDateStatistics);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustBirthDate);
			this->CustomerStatistics_groupBox->Controls->Add(this->firstNameStatistics);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustLastName);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustFirstName);
			this->CustomerStatistics_groupBox->Controls->Add(this->lastNameStatistics);
			this->CustomerStatistics_groupBox->Controls->Add(this->text_statisticsCustReference);
			this->CustomerStatistics_groupBox->Controls->Add(this->CustomersReferenceStatistics);
			this->CustomerStatistics_groupBox->Location = System::Drawing::Point(400, 429);
			this->CustomerStatistics_groupBox->Name = L"CustomerStatistics_groupBox";
			this->CustomerStatistics_groupBox->Size = System::Drawing::Size(331, 132);
			this->CustomerStatistics_groupBox->TabIndex = 42;
			this->CustomerStatistics_groupBox->TabStop = false;
			this->CustomerStatistics_groupBox->Text = L"Customer";
			// 
			// birthDateStatistics
			// 
			this->birthDateStatistics->AutoSize = true;
			this->birthDateStatistics->Location = System::Drawing::Point(19, 103);
			this->birthDateStatistics->Name = L"birthDateStatistics";
			this->birthDateStatistics->Size = System::Drawing::Size(62, 16);
			this->birthDateStatistics->TabIndex = 35;
			this->birthDateStatistics->Text = L"birth date";
			// 
			// text_statisticsCustBirthDate
			// 
			this->text_statisticsCustBirthDate->Location = System::Drawing::Point(95, 97);
			this->text_statisticsCustBirthDate->Name = L"text_statisticsCustBirthDate";
			this->text_statisticsCustBirthDate->Size = System::Drawing::Size(74, 22);
			this->text_statisticsCustBirthDate->TabIndex = 36;
			// 
			// firstNameStatistics
			// 
			this->firstNameStatistics->AutoSize = true;
			this->firstNameStatistics->Location = System::Drawing::Point(17, 61);
			this->firstNameStatistics->Name = L"firstNameStatistics";
			this->firstNameStatistics->Size = System::Drawing::Size(64, 16);
			this->firstNameStatistics->TabIndex = 32;
			this->firstNameStatistics->Text = L"first name";
			// 
			// text_statisticsCustLastName
			// 
			this->text_statisticsCustLastName->Location = System::Drawing::Point(95, 21);
			this->text_statisticsCustLastName->Name = L"text_statisticsCustLastName";
			this->text_statisticsCustLastName->Size = System::Drawing::Size(226, 22);
			this->text_statisticsCustLastName->TabIndex = 34;
			// 
			// text_statisticsCustFirstName
			// 
			this->text_statisticsCustFirstName->Location = System::Drawing::Point(95, 58);
			this->text_statisticsCustFirstName->Name = L"text_statisticsCustFirstName";
			this->text_statisticsCustFirstName->Size = System::Drawing::Size(226, 22);
			this->text_statisticsCustFirstName->TabIndex = 33;
			// 
			// lastNameStatistics
			// 
			this->lastNameStatistics->AutoSize = true;
			this->lastNameStatistics->Location = System::Drawing::Point(16, 21);
			this->lastNameStatistics->Name = L"lastNameStatistics";
			this->lastNameStatistics->Size = System::Drawing::Size(65, 16);
			this->lastNameStatistics->TabIndex = 33;
			this->lastNameStatistics->Text = L"last name";
			// 
			// text_statisticsCustReference
			// 
			this->text_statisticsCustReference->Location = System::Drawing::Point(259, 97);
			this->text_statisticsCustReference->Name = L"text_statisticsCustReference";
			this->text_statisticsCustReference->Size = System::Drawing::Size(62, 22);
			this->text_statisticsCustReference->TabIndex = 32;
			// 
			// CustomersReferenceStatistics
			// 
			this->CustomersReferenceStatistics->AutoSize = true;
			this->CustomersReferenceStatistics->Location = System::Drawing::Point(175, 100);
			this->CustomersReferenceStatistics->Name = L"CustomersReferenceStatistics";
			this->CustomersReferenceStatistics->Size = System::Drawing::Size(64, 16);
			this->CustomersReferenceStatistics->TabIndex = 28;
			this->CustomersReferenceStatistics->Text = L"reference";
			// 
			// button_commercialValueStock
			// 
			this->button_commercialValueStock->Location = System::Drawing::Point(41, 364);
			this->button_commercialValueStock->Name = L"button_commercialValueStock";
			this->button_commercialValueStock->Size = System::Drawing::Size(331, 41);
			this->button_commercialValueStock->TabIndex = 26;
			this->button_commercialValueStock->Text = L"Calculate the commercial value of stock";
			this->button_commercialValueStock->UseVisualStyleBackColor = true;
			// 
			// button_bestSelling
			// 
			this->button_bestSelling->Location = System::Drawing::Point(400, 280);
			this->button_bestSelling->Name = L"button_bestSelling";
			this->button_bestSelling->Size = System::Drawing::Size(331, 41);
			this->button_bestSelling->TabIndex = 25;
			this->button_bestSelling->Text = L"10 best-selling items";
			this->button_bestSelling->UseVisualStyleBackColor = true;
			// 
			// button_turnover
			// 
			this->button_turnover->Location = System::Drawing::Point(41, 458);
			this->button_turnover->Name = L"button_turnover";
			this->button_turnover->Size = System::Drawing::Size(331, 41);
			this->button_turnover->TabIndex = 19;
			this->button_turnover->Text = L"Calculate turnover for a month";
			this->button_turnover->UseVisualStyleBackColor = true;
			// 
			// button_customerTotalAmount
			// 
			this->button_customerTotalAmount->Location = System::Drawing::Point(400, 374);
			this->button_customerTotalAmount->Name = L"button_customerTotalAmount";
			this->button_customerTotalAmount->Size = System::Drawing::Size(331, 41);
			this->button_customerTotalAmount->TabIndex = 24;
			this->button_customerTotalAmount->Text = L"Calculate total amout for customer";
			this->button_customerTotalAmount->UseVisualStyleBackColor = true;
			// 
			// button_purchaseValueStock
			// 
			this->button_purchaseValueStock->Location = System::Drawing::Point(41, 411);
			this->button_purchaseValueStock->Name = L"button_purchaseValueStock";
			this->button_purchaseValueStock->Size = System::Drawing::Size(331, 41);
			this->button_purchaseValueStock->TabIndex = 23;
			this->button_purchaseValueStock->Text = L"Calculate the purchase value of stock";
			this->button_purchaseValueStock->UseVisualStyleBackColor = true;
			// 
			// button_lowestSelling
			// 
			this->button_lowestSelling->Location = System::Drawing::Point(400, 327);
			this->button_lowestSelling->Name = L"button_lowestSelling";
			this->button_lowestSelling->Size = System::Drawing::Size(331, 41);
			this->button_lowestSelling->TabIndex = 22;
			this->button_lowestSelling->Text = L"10 lowest-selling items";
			this->button_lowestSelling->UseVisualStyleBackColor = true;
			// 
			// button_averageCart
			// 
			this->button_averageCart->Location = System::Drawing::Point(41, 270);
			this->button_averageCart->Name = L"button_averageCart";
			this->button_averageCart->Size = System::Drawing::Size(331, 41);
			this->button_averageCart->TabIndex = 21;
			this->button_averageCart->Text = L"Calculate average cart after discount";
			this->button_averageCart->UseVisualStyleBackColor = true;
			// 
			// button_underReorderThreshold
			// 
			this->button_underReorderThreshold->Location = System::Drawing::Point(41, 317);
			this->button_underReorderThreshold->Name = L"button_underReorderThreshold";
			this->button_underReorderThreshold->Size = System::Drawing::Size(331, 41);
			this->button_underReorderThreshold->TabIndex = 20;
			this->button_underReorderThreshold->Text = L"Products under the reorder threshold";
			this->button_underReorderThreshold->UseVisualStyleBackColor = true;
			// 
			// dgv_stat
			// 
			this->dgv_stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_stat->Location = System::Drawing::Point(51, 47);
			this->dgv_stat->Name = L"dgv_stat";
			this->dgv_stat->RowHeadersWidth = 51;
			this->dgv_stat->RowTemplate->Height = 24;
			this->dgv_stat->Size = System::Drawing::Size(672, 194);
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
			this->simulationsTab->Location = System::Drawing::Point(4, 25);
			this->simulationsTab->Name = L"simulationsTab";
			this->simulationsTab->Size = System::Drawing::Size(768, 581);
			this->simulationsTab->TabIndex = 4;
			this->simulationsTab->Text = L"Simulations";
			this->simulationsTab->UseVisualStyleBackColor = true;
			// 
			// markdown_groupBox
			// 
			this->markdown_groupBox->Controls->Add(this->markdown2);
			this->markdown_groupBox->Controls->Add(this->markdown1);
			this->markdown_groupBox->Controls->Add(this->markdown3);
			this->markdown_groupBox->Location = System::Drawing::Point(33, 494);
			this->markdown_groupBox->Name = L"markdown_groupBox";
			this->markdown_groupBox->Size = System::Drawing::Size(371, 54);
			this->markdown_groupBox->TabIndex = 21;
			this->markdown_groupBox->TabStop = false;
			this->markdown_groupBox->Text = L"Unknow markdown";
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
			// 
			// dicount_groupBox
			// 
			this->dicount_groupBox->Controls->Add(this->discount2);
			this->dicount_groupBox->Controls->Add(this->discount1);
			this->dicount_groupBox->Location = System::Drawing::Point(442, 324);
			this->dicount_groupBox->Name = L"dicount_groupBox";
			this->dicount_groupBox->Size = System::Drawing::Size(294, 54);
			this->dicount_groupBox->TabIndex = 20;
			this->dicount_groupBox->TabStop = false;
			this->dicount_groupBox->Text = L"Trade discount";
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
			// 
			// margin_groupBox
			// 
			this->margin_groupBox->Controls->Add(this->grossMargin3);
			this->margin_groupBox->Controls->Add(this->grossMargin1);
			this->margin_groupBox->Controls->Add(this->grossMargin2);
			this->margin_groupBox->Location = System::Drawing::Point(33, 411);
			this->margin_groupBox->Name = L"margin_groupBox";
			this->margin_groupBox->Size = System::Drawing::Size(371, 54);
			this->margin_groupBox->TabIndex = 19;
			this->margin_groupBox->TabStop = false;
			this->margin_groupBox->Text = L"Gross Margin";
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
			// 
			// VAT_groupBox
			// 
			this->VAT_groupBox->Controls->Add(this->VAT3);
			this->VAT_groupBox->Controls->Add(this->VAT2);
			this->VAT_groupBox->Controls->Add(this->VAT1);
			this->VAT_groupBox->Location = System::Drawing::Point(33, 324);
			this->VAT_groupBox->Name = L"VAT_groupBox";
			this->VAT_groupBox->Size = System::Drawing::Size(371, 54);
			this->VAT_groupBox->TabIndex = 18;
			this->VAT_groupBox->TabStop = false;
			this->VAT_groupBox->Text = L"VAT rate";
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
			// 
			// dgv_simu
			// 
			this->dgv_simu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_simu->Location = System::Drawing::Point(51, 47);
			this->dgv_simu->Name = L"dgv_simu";
			this->dgv_simu->RowHeadersWidth = 51;
			this->dgv_simu->RowTemplate->Height = 24;
			this->dgv_simu->Size = System::Drawing::Size(672, 229);
			this->dgv_simu->TabIndex = 17;
			// 
			// execution_button
			// 
			this->execution_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->execution_button->Location = System::Drawing::Point(494, 432);
			this->execution_button->Name = L"execution_button";
			this->execution_button->Size = System::Drawing::Size(183, 86);
			this->execution_button->TabIndex = 7;
			this->execution_button->Text = L"EXECUTE";
			this->execution_button->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 608);
			this->Controls->Add(this->mainTabControl);
			this->MaximumSize = System::Drawing::Size(790, 655);
			this->MinimumSize = System::Drawing::Size(790, 655);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->mainTabControl->ResumeLayout(false);
			this->customersTab->ResumeLayout(false);
			this->customersTab->PerformLayout();
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
			this->empAdressGroupBox->ResumeLayout(false);
			this->empAdressGroupBox->PerformLayout();
			this->infoEmpGroupBox->ResumeLayout(false);
			this->infoEmpGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emp))->EndInit();
			this->ordersTab->ResumeLayout(false);
			this->meanOfPaymentGroupBox->ResumeLayout(false);
			this->meanOfPaymentGroupBox->PerformLayout();
			this->ItemOrder_GroupeBox->ResumeLayout(false);
			this->ItemOrder_GroupeBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantityItemOrders))->EndInit();
			this->GlobalInfoOrder_GroupBox->ResumeLayout(false);
			this->GlobalInfoOrder_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_ord))->EndInit();
			this->stockTab->ResumeLayout(false);
			this->ItemStock_GroupBox->ResumeLayout(false);
			this->ItemStock_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantityProductStock))->EndInit();
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
		//this->oSVCcustomers = gcnew NS_Svc::CLcustomers();
		//this->oSVCemployees = gcnew NS_Svc::CLemployees();
		//this->oSVCstock = gcnew NS_Svc::CLstock();
		//this->oSVCstatistics = gcnew NS_Svc::CLstatistics();
		//this->oSVCsimulations = gcnew NS_Svc::CLsimulations();
	}
	private: System::Void displayOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_ord->Refresh();
		this->oDs_orders = this->oSVCorders->displayOrders("Rsl", "");
		this->dgv_ord->DataSource = this->oDs_orders;
		this->dgv_ord->DataMember = "Rsl";
	}
};
}
