#pragma once

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
	private: System::Windows::Forms::TabControl^ mainTabControl;
	protected:

	private: System::Windows::Forms::TabPage^ customersTab;
	private: System::Windows::Forms::TabPage^ employeesTab;
	private: System::Windows::Forms::TabPage^ ordersTab;
	private: System::Windows::Forms::TabPage^ statisticTab;
	private: System::Windows::Forms::TabPage^ simulationsTab;


	private: System::Windows::Forms::RadioButton^ VAT1;
	private: System::Windows::Forms::RadioButton^ VAT3;


	private: System::Windows::Forms::RadioButton^ VAT2;




	private: System::Windows::Forms::Button^ execution_button;
	private: System::Windows::Forms::RadioButton^ markdown3;
	private: System::Windows::Forms::RadioButton^ markdown2;
	private: System::Windows::Forms::RadioButton^ markdown1;
	private: System::Windows::Forms::RadioButton^ discount2;
	private: System::Windows::Forms::RadioButton^ discount1;
	private: System::Windows::Forms::RadioButton^ grossMargin3;
	private: System::Windows::Forms::RadioButton^ grossMargin2;
	private: System::Windows::Forms::RadioButton^ grossMargin1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ VAT_groupBox;






	private: System::Windows::Forms::GroupBox^ margin_groupBox;
	private: System::Windows::Forms::GroupBox^ discount_groupBox;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ custID;
	private: System::Windows::Forms::TextBox^ text_custLastName;



	private: System::Windows::Forms::Label^ lastName;
	private: System::Windows::Forms::Label^ firstName;
	private: System::Windows::Forms::GroupBox^ deliveryGroupBox;
	private: System::Windows::Forms::Label^ ZipCodeDel;


	private: System::Windows::Forms::Label^ streetNumDel;
	private: System::Windows::Forms::Label^ streetNameDel;
	private: System::Windows::Forms::Label^ cityNameDel;
	private: System::Windows::Forms::GroupBox^ customerGroupBox;
	private: System::Windows::Forms::GroupBox^ BillingGroupBox;
	private: System::Windows::Forms::Label^ cityNameBil;
	private: System::Windows::Forms::Label^ ZipCodeBil;
	private: System::Windows::Forms::Label^ streetNumBil;
	private: System::Windows::Forms::Label^ streetNameBil;
	private: System::Windows::Forms::Label^ birthDateCust;
	private: System::Windows::Forms::Button^ addCust;

	private: System::Windows::Forms::GroupBox^ socityGroupBox;
	private: System::Windows::Forms::Label^ serviceNum;
	private: System::Windows::Forms::Label^ socityName;
	private: System::Windows::Forms::Button^ displayCust;
	private: System::Windows::Forms::Button^ changeCust;
	private: System::Windows::Forms::Button^ eraseCust;
	private: System::Windows::Forms::GroupBox^ empAdressGroupBox;

	private: System::Windows::Forms::GroupBox^ infoEmpGroupBox;
	private: System::Windows::Forms::Label^ lastNameEmp;
	private: System::Windows::Forms::Label^ hireDateEmp;
	private: System::Windows::Forms::Label^ IDemp;
	private: System::Windows::Forms::Label^ firstNameEmp;
	private: System::Windows::Forms::Label^ chiefIDemp;
	private: System::Windows::Forms::Button^ displayEmp;
private: System::Windows::Forms::Button^ changeEmp;
private: System::Windows::Forms::Button^ eraseEmp;



private: System::Windows::Forms::Button^ addEmp;

	private: System::Windows::Forms::Label^ cityNameEmp;
	private: System::Windows::Forms::Label^ streetNameEmp;
	private: System::Windows::Forms::Label^ ZIPcodeEmp;
	private: System::Windows::Forms::Label^ streetNumEmp;
private: System::Windows::Forms::TabPage^ stockTab;
private: System::Windows::Forms::Button^ displayOrder;
private: System::Windows::Forms::Button^ changeOrder;
private: System::Windows::Forms::Button^ eraseOrder;



private: System::Windows::Forms::Button^ addOrder;

private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ text_serviceNumber;

private: System::Windows::Forms::TextBox^ text_socityName;
private: System::Windows::Forms::TextBox^ text_birthDate;
private: System::Windows::Forms::TextBox^ text_custFirstName;



private: System::Windows::Forms::TextBox^ text_custRef;
private: System::Windows::Forms::TextBox^ text_deliveryStreetName;


private: System::Windows::Forms::TextBox^ text_deliveryStreetN;
private: System::Windows::Forms::TextBox^ text_deliveryCityName;


private: System::Windows::Forms::TextBox^ text_deliveryZIPcode;
private: System::Windows::Forms::TextBox^ text_bilingCityName;
private: System::Windows::Forms::TextBox^ text_bilingZIPcode;
private: System::Windows::Forms::TextBox^ text_bilingStreetName;
private: System::Windows::Forms::TextBox^ text_bilingStreetN;
private: System::Windows::Forms::TextBox^ text_hireDate;

private: System::Windows::Forms::TextBox^ text_empLastName;
private: System::Windows::Forms::TextBox^ text_empFirstName;


private: System::Windows::Forms::TextBox^ text_chiefID;

private: System::Windows::Forms::TextBox^ text_employeeID;
private: System::Windows::Forms::TextBox^ text_cityName;



private: System::Windows::Forms::TextBox^ text_streetName;

private: System::Windows::Forms::TextBox^ text_streetNumber;
private: System::Windows::Forms::TextBox^ text_ZIPcode;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::ComboBox^ comboBox_meanOfPayment;


private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ text_articleID;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ text_paymentDueDate;

private: System::Windows::Forms::TextBox^ text_orderID;
private: System::Windows::Forms::TextBox^ text_customerID;



private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantity;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ addPayment;
private: System::Windows::Forms::Button^ addArticle;


private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ text_deliveryDate;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ text_completPayementDate;





























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
			this->customersTab = (gcnew System::Windows::Forms::TabPage());
			this->displayCust = (gcnew System::Windows::Forms::Button());
			this->changeCust = (gcnew System::Windows::Forms::Button());
			this->eraseCust = (gcnew System::Windows::Forms::Button());
			this->addCust = (gcnew System::Windows::Forms::Button());
			this->socityGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->text_serviceNumber = (gcnew System::Windows::Forms::TextBox());
			this->text_socityName = (gcnew System::Windows::Forms::TextBox());
			this->serviceNum = (gcnew System::Windows::Forms::Label());
			this->socityName = (gcnew System::Windows::Forms::Label());
			this->customerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthDateCust = (gcnew System::Windows::Forms::Label());
			this->firstName = (gcnew System::Windows::Forms::Label());
			this->lastName = (gcnew System::Windows::Forms::Label());
			this->custID = (gcnew System::Windows::Forms::Label());
			this->text_custLastName = (gcnew System::Windows::Forms::TextBox());
			this->BillingGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->cityNameBil = (gcnew System::Windows::Forms::Label());
			this->ZipCodeBil = (gcnew System::Windows::Forms::Label());
			this->streetNumBil = (gcnew System::Windows::Forms::Label());
			this->streetNameBil = (gcnew System::Windows::Forms::Label());
			this->deliveryGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->cityNameDel = (gcnew System::Windows::Forms::Label());
			this->ZipCodeDel = (gcnew System::Windows::Forms::Label());
			this->streetNumDel = (gcnew System::Windows::Forms::Label());
			this->streetNameDel = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->employeesTab = (gcnew System::Windows::Forms::TabPage());
			this->displayEmp = (gcnew System::Windows::Forms::Button());
			this->changeEmp = (gcnew System::Windows::Forms::Button());
			this->eraseEmp = (gcnew System::Windows::Forms::Button());
			this->addEmp = (gcnew System::Windows::Forms::Button());
			this->empAdressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->cityNameEmp = (gcnew System::Windows::Forms::Label());
			this->streetNameEmp = (gcnew System::Windows::Forms::Label());
			this->ZIPcodeEmp = (gcnew System::Windows::Forms::Label());
			this->streetNumEmp = (gcnew System::Windows::Forms::Label());
			this->infoEmpGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->chiefIDemp = (gcnew System::Windows::Forms::Label());
			this->lastNameEmp = (gcnew System::Windows::Forms::Label());
			this->hireDateEmp = (gcnew System::Windows::Forms::Label());
			this->IDemp = (gcnew System::Windows::Forms::Label());
			this->firstNameEmp = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->ordersTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->displayOrder = (gcnew System::Windows::Forms::Button());
			this->changeOrder = (gcnew System::Windows::Forms::Button());
			this->eraseOrder = (gcnew System::Windows::Forms::Button());
			this->addOrder = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->stockTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->statisticTab = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->simulationsTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->markdown2 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown1 = (gcnew System::Windows::Forms::RadioButton());
			this->markdown3 = (gcnew System::Windows::Forms::RadioButton());
			this->discount_groupBox = (gcnew System::Windows::Forms::GroupBox());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->execution_button = (gcnew System::Windows::Forms::Button());
			this->text_custRef = (gcnew System::Windows::Forms::TextBox());
			this->text_custFirstName = (gcnew System::Windows::Forms::TextBox());
			this->text_birthDate = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryStreetN = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryStreetName = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->text_deliveryCityName = (gcnew System::Windows::Forms::TextBox());
			this->text_bilingCityName = (gcnew System::Windows::Forms::TextBox());
			this->text_bilingZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->text_bilingStreetName = (gcnew System::Windows::Forms::TextBox());
			this->text_bilingStreetN = (gcnew System::Windows::Forms::TextBox());
			this->text_employeeID = (gcnew System::Windows::Forms::TextBox());
			this->text_chiefID = (gcnew System::Windows::Forms::TextBox());
			this->text_empLastName = (gcnew System::Windows::Forms::TextBox());
			this->text_empFirstName = (gcnew System::Windows::Forms::TextBox());
			this->text_hireDate = (gcnew System::Windows::Forms::TextBox());
			this->text_streetNumber = (gcnew System::Windows::Forms::TextBox());
			this->text_streetName = (gcnew System::Windows::Forms::TextBox());
			this->text_cityName = (gcnew System::Windows::Forms::TextBox());
			this->text_ZIPcode = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox_meanOfPayment = (gcnew System::Windows::Forms::ComboBox());
			this->text_articleID = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_paymentDueDate = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_orderID = (gcnew System::Windows::Forms::TextBox());
			this->text_customerID = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->addPayment = (gcnew System::Windows::Forms::Button());
			this->addArticle = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->text_completPayementDate = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->text_deliveryDate = (gcnew System::Windows::Forms::TextBox());
			this->mainTabControl->SuspendLayout();
			this->customersTab->SuspendLayout();
			this->socityGroupBox->SuspendLayout();
			this->customerGroupBox->SuspendLayout();
			this->BillingGroupBox->SuspendLayout();
			this->deliveryGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->employeesTab->SuspendLayout();
			this->empAdressGroupBox->SuspendLayout();
			this->infoEmpGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->ordersTab->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->stockTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->statisticTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->simulationsTab->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->discount_groupBox->SuspendLayout();
			this->margin_groupBox->SuspendLayout();
			this->VAT_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantity))->BeginInit();
			this->SuspendLayout();
			// 
			// mainTabControl
			// 
			this->mainTabControl->Controls->Add(this->customersTab);
			this->mainTabControl->Controls->Add(this->employeesTab);
			this->mainTabControl->Controls->Add(this->ordersTab);
			this->mainTabControl->Controls->Add(this->stockTab);
			this->mainTabControl->Controls->Add(this->statisticTab);
			this->mainTabControl->Controls->Add(this->simulationsTab);
			this->mainTabControl->Location = System::Drawing::Point(-1, 2);
			this->mainTabControl->Name = L"mainTabControl";
			this->mainTabControl->SelectedIndex = 0;
			this->mainTabControl->Size = System::Drawing::Size(782, 690);
			this->mainTabControl->TabIndex = 0;
			// 
			// customersTab
			// 
			this->customersTab->Controls->Add(this->displayCust);
			this->customersTab->Controls->Add(this->changeCust);
			this->customersTab->Controls->Add(this->eraseCust);
			this->customersTab->Controls->Add(this->addCust);
			this->customersTab->Controls->Add(this->socityGroupBox);
			this->customersTab->Controls->Add(this->customerGroupBox);
			this->customersTab->Controls->Add(this->BillingGroupBox);
			this->customersTab->Controls->Add(this->deliveryGroupBox);
			this->customersTab->Controls->Add(this->dataGridView5);
			this->customersTab->Location = System::Drawing::Point(4, 25);
			this->customersTab->Name = L"customersTab";
			this->customersTab->Padding = System::Windows::Forms::Padding(3);
			this->customersTab->Size = System::Drawing::Size(774, 661);
			this->customersTab->TabIndex = 0;
			this->customersTab->Text = L"Customers";
			this->customersTab->UseVisualStyleBackColor = true;
			// 
			// displayCust
			// 
			this->displayCust->Location = System::Drawing::Point(24, 526);
			this->displayCust->Name = L"displayCust";
			this->displayCust->Size = System::Drawing::Size(141, 33);
			this->displayCust->TabIndex = 32;
			this->displayCust->Text = L"Display customers";
			this->displayCust->UseVisualStyleBackColor = true;
			// 
			// changeCust
			// 
			this->changeCust->Location = System::Drawing::Point(382, 526);
			this->changeCust->Name = L"changeCust";
			this->changeCust->Size = System::Drawing::Size(151, 33);
			this->changeCust->TabIndex = 31;
			this->changeCust->Text = L"Change customer";
			this->changeCust->UseVisualStyleBackColor = true;
			// 
			// eraseCust
			// 
			this->eraseCust->Location = System::Drawing::Point(582, 526);
			this->eraseCust->Name = L"eraseCust";
			this->eraseCust->Size = System::Drawing::Size(151, 33);
			this->eraseCust->TabIndex = 30;
			this->eraseCust->Text = L"Erase customer";
			this->eraseCust->UseVisualStyleBackColor = true;
			// 
			// addCust
			// 
			this->addCust->Location = System::Drawing::Point(195, 526);
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
			this->customerGroupBox->Controls->Add(this->text_custRef);
			this->customerGroupBox->Controls->Add(this->birthDateCust);
			this->customerGroupBox->Controls->Add(this->firstName);
			this->customerGroupBox->Controls->Add(this->lastName);
			this->customerGroupBox->Controls->Add(this->custID);
			this->customerGroupBox->Controls->Add(this->text_custLastName);
			this->customerGroupBox->Location = System::Drawing::Point(24, 285);
			this->customerGroupBox->Name = L"customerGroupBox";
			this->customerGroupBox->Size = System::Drawing::Size(472, 130);
			this->customerGroupBox->TabIndex = 27;
			this->customerGroupBox->TabStop = false;
			this->customerGroupBox->Text = L"Customers info";
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
			// firstName
			// 
			this->firstName->AutoSize = true;
			this->firstName->Location = System::Drawing::Point(6, 83);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(60, 16);
			this->firstName->TabIndex = 22;
			this->firstName->Text = L"fist name";
			this->firstName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_5);
			// 
			// lastName
			// 
			this->lastName->AutoSize = true;
			this->lastName->Location = System::Drawing::Point(6, 30);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(65, 16);
			this->lastName->TabIndex = 21;
			this->lastName->Text = L"last name";
			this->lastName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_4);
			// 
			// custID
			// 
			this->custID->AutoSize = true;
			this->custID->Location = System::Drawing::Point(241, 30);
			this->custID->Name = L"custID";
			this->custID->Size = System::Drawing::Size(52, 16);
			this->custID->TabIndex = 20;
			this->custID->Text = L"custRef";
			this->custID->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			// 
			// text_custLastName
			// 
			this->text_custLastName->Location = System::Drawing::Point(23, 49);
			this->text_custLastName->Name = L"text_custLastName";
			this->text_custLastName->Size = System::Drawing::Size(191, 22);
			this->text_custLastName->TabIndex = 19;
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
			// cityNameBil
			// 
			this->cityNameBil->AutoSize = true;
			this->cityNameBil->Location = System::Drawing::Point(283, 21);
			this->cityNameBil->Name = L"cityNameBil";
			this->cityNameBil->Size = System::Drawing::Size(64, 16);
			this->cityNameBil->TabIndex = 26;
			this->cityNameBil->Text = L"city name";
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
			this->ZipCodeDel->Click += gcnew System::EventHandler(this, &MyForm::ZipCodeDel_Click);
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
			this->streetNameDel->Click += gcnew System::EventHandler(this, &MyForm::streetNameDel_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(49, 39);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(672, 229);
			this->dataGridView5->TabIndex = 18;
			// 
			// employeesTab
			// 
			this->employeesTab->Controls->Add(this->displayEmp);
			this->employeesTab->Controls->Add(this->changeEmp);
			this->employeesTab->Controls->Add(this->eraseEmp);
			this->employeesTab->Controls->Add(this->addEmp);
			this->employeesTab->Controls->Add(this->empAdressGroupBox);
			this->employeesTab->Controls->Add(this->infoEmpGroupBox);
			this->employeesTab->Controls->Add(this->dataGridView4);
			this->employeesTab->Location = System::Drawing::Point(4, 25);
			this->employeesTab->Name = L"employeesTab";
			this->employeesTab->Padding = System::Windows::Forms::Padding(3);
			this->employeesTab->Size = System::Drawing::Size(774, 661);
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
			this->displayEmp->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// changeEmp
			// 
			this->changeEmp->Location = System::Drawing::Point(379, 516);
			this->changeEmp->Name = L"changeEmp";
			this->changeEmp->Size = System::Drawing::Size(151, 33);
			this->changeEmp->TabIndex = 35;
			this->changeEmp->Text = L"Change employee";
			this->changeEmp->UseVisualStyleBackColor = true;
			this->changeEmp->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// eraseEmp
			// 
			this->eraseEmp->Location = System::Drawing::Point(579, 516);
			this->eraseEmp->Name = L"eraseEmp";
			this->eraseEmp->Size = System::Drawing::Size(151, 33);
			this->eraseEmp->TabIndex = 34;
			this->eraseEmp->Text = L"Erase employee";
			this->eraseEmp->UseVisualStyleBackColor = true;
			this->eraseEmp->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// addEmp
			// 
			this->addEmp->Location = System::Drawing::Point(192, 516);
			this->addEmp->Name = L"addEmp";
			this->addEmp->Size = System::Drawing::Size(141, 33);
			this->addEmp->TabIndex = 33;
			this->addEmp->Text = L"Add employee";
			this->addEmp->UseVisualStyleBackColor = true;
			this->addEmp->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
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
			this->empAdressGroupBox->Location = System::Drawing::Point(398, 298);
			this->empAdressGroupBox->Name = L"empAdressGroupBox";
			this->empAdressGroupBox->Size = System::Drawing::Size(304, 123);
			this->empAdressGroupBox->TabIndex = 20;
			this->empAdressGroupBox->TabStop = false;
			this->empAdressGroupBox->Text = L"Adress";
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
			this->infoEmpGroupBox->Size = System::Drawing::Size(299, 164);
			this->infoEmpGroupBox->TabIndex = 19;
			this->infoEmpGroupBox->TabStop = false;
			this->infoEmpGroupBox->Text = L"Info";
			// 
			// chiefIDemp
			// 
			this->chiefIDemp->AutoSize = true;
			this->chiefIDemp->Location = System::Drawing::Point(151, 15);
			this->chiefIDemp->Name = L"chiefIDemp";
			this->chiefIDemp->Size = System::Drawing::Size(51, 16);
			this->chiefIDemp->TabIndex = 28;
			this->chiefIDemp->Text = L"chief ID";
			this->chiefIDemp->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_6);
			// 
			// lastNameEmp
			// 
			this->lastNameEmp->AutoSize = true;
			this->lastNameEmp->Location = System::Drawing::Point(4, 65);
			this->lastNameEmp->Name = L"lastNameEmp";
			this->lastNameEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameEmp->TabIndex = 25;
			this->lastNameEmp->Text = L"last name";
			// 
			// hireDateEmp
			// 
			this->hireDateEmp->AutoSize = true;
			this->hireDateEmp->Location = System::Drawing::Point(162, 117);
			this->hireDateEmp->Name = L"hireDateEmp";
			this->hireDateEmp->Size = System::Drawing::Size(59, 16);
			this->hireDateEmp->TabIndex = 27;
			this->hireDateEmp->Text = L"hire date";
			this->hireDateEmp->Click += gcnew System::EventHandler(this, &MyForm::hireDateEmp_Click);
			// 
			// IDemp
			// 
			this->IDemp->AutoSize = true;
			this->IDemp->Location = System::Drawing::Point(6, 16);
			this->IDemp->Name = L"IDemp";
			this->IDemp->Size = System::Drawing::Size(84, 16);
			this->IDemp->TabIndex = 24;
			this->IDemp->Text = L"employee ID";
			// 
			// firstNameEmp
			// 
			this->firstNameEmp->AutoSize = true;
			this->firstNameEmp->Location = System::Drawing::Point(6, 117);
			this->firstNameEmp->Name = L"firstNameEmp";
			this->firstNameEmp->Size = System::Drawing::Size(60, 16);
			this->firstNameEmp->TabIndex = 26;
			this->firstNameEmp->Text = L"fist name";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(49, 39);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(672, 229);
			this->dataGridView4->TabIndex = 18;
			// 
			// ordersTab
			// 
			this->ordersTab->Controls->Add(this->addArticle);
			this->ordersTab->Controls->Add(this->addPayment);
			this->ordersTab->Controls->Add(this->groupBox4);
			this->ordersTab->Controls->Add(this->groupBox3);
			this->ordersTab->Controls->Add(this->groupBox2);
			this->ordersTab->Controls->Add(this->displayOrder);
			this->ordersTab->Controls->Add(this->changeOrder);
			this->ordersTab->Controls->Add(this->eraseOrder);
			this->ordersTab->Controls->Add(this->addOrder);
			this->ordersTab->Controls->Add(this->dataGridView3);
			this->ordersTab->Location = System::Drawing::Point(4, 25);
			this->ordersTab->Name = L"ordersTab";
			this->ordersTab->Size = System::Drawing::Size(774, 661);
			this->ordersTab->TabIndex = 2;
			this->ordersTab->Text = L"Orders";
			this->ordersTab->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->text_paymentDueDate);
			this->groupBox4->Controls->Add(this->comboBox_meanOfPayment);
			this->groupBox4->Location = System::Drawing::Point(334, 372);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(387, 120);
			this->groupBox4->TabIndex = 43;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"mean of payment";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown_quantity);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->text_articleID);
			this->groupBox3->Location = System::Drawing::Point(334, 289);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(387, 77);
			this->groupBox3->TabIndex = 42;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Article";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->text_deliveryDate);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->text_customerID);
			this->groupBox2->Controls->Add(this->text_completPayementDate);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->text_orderID);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(25, 289);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 177);
			this->groupBox2->TabIndex = 41;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Global info";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// displayOrder
			// 
			this->displayOrder->Location = System::Drawing::Point(9, 511);
			this->displayOrder->Name = L"displayOrder";
			this->displayOrder->Size = System::Drawing::Size(117, 33);
			this->displayOrder->TabIndex = 40;
			this->displayOrder->Text = L"Display order";
			this->displayOrder->UseVisualStyleBackColor = true;
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
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(49, 39);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(672, 229);
			this->dataGridView3->TabIndex = 18;
			// 
			// stockTab
			// 
			this->stockTab->Controls->Add(this->groupBox5);
			this->stockTab->Controls->Add(this->dataGridView6);
			this->stockTab->Controls->Add(this->button6);
			this->stockTab->Controls->Add(this->button7);
			this->stockTab->Controls->Add(this->button8);
			this->stockTab->Controls->Add(this->button9);
			this->stockTab->Location = System::Drawing::Point(4, 25);
			this->stockTab->Name = L"stockTab";
			this->stockTab->Size = System::Drawing::Size(774, 661);
			this->stockTab->TabIndex = 5;
			this->stockTab->Text = L"Stock";
			this->stockTab->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Location = System::Drawing::Point(51, 280);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(672, 191);
			this->groupBox5->TabIndex = 42;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Product";
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(51, 32);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(672, 229);
			this->dataGridView6->TabIndex = 41;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(32, 514);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 33);
			this->button6->TabIndex = 40;
			this->button6->Text = L"Display products";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(390, 514);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(151, 33);
			this->button7->TabIndex = 39;
			this->button7->Text = L"Change product";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(590, 514);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(151, 33);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Erase product";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(203, 514);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(141, 33);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Add product";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// statisticTab
			// 
			this->statisticTab->Controls->Add(this->label5);
			this->statisticTab->Controls->Add(this->label4);
			this->statisticTab->Controls->Add(this->label3);
			this->statisticTab->Controls->Add(this->label2);
			this->statisticTab->Controls->Add(this->label1);
			this->statisticTab->Controls->Add(this->button15);
			this->statisticTab->Controls->Add(this->button16);
			this->statisticTab->Controls->Add(this->button14);
			this->statisticTab->Controls->Add(this->button13);
			this->statisticTab->Controls->Add(this->button12);
			this->statisticTab->Controls->Add(this->button11);
			this->statisticTab->Controls->Add(this->button10);
			this->statisticTab->Controls->Add(this->button1);
			this->statisticTab->Controls->Add(this->dataGridView2);
			this->statisticTab->Location = System::Drawing::Point(4, 25);
			this->statisticTab->Name = L"statisticTab";
			this->statisticTab->Size = System::Drawing::Size(774, 661);
			this->statisticTab->TabIndex = 3;
			this->statisticTab->Text = L"Statistics";
			this->statisticTab->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(425, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(425, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(425, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(425, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 28;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"label1";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(428, 521);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(232, 26);
			this->button15->TabIndex = 26;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(428, 467);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(232, 26);
			this->button16->TabIndex = 25;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(428, 414);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(232, 26);
			this->button14->TabIndex = 24;
			this->button14->Text = L"Calculate total amout of customer";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(80, 522);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(232, 26);
			this->button13->TabIndex = 23;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(80, 469);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(232, 26);
			this->button12->TabIndex = 22;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(80, 414);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(232, 26);
			this->button11->TabIndex = 21;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(80, 361);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(232, 26);
			this->button10->TabIndex = 20;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(80, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 26);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Calculate turnover";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(51, 47);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(672, 194);
			this->dataGridView2->TabIndex = 18;
			// 
			// simulationsTab
			// 
			this->simulationsTab->Controls->Add(this->groupBox1);
			this->simulationsTab->Controls->Add(this->discount_groupBox);
			this->simulationsTab->Controls->Add(this->margin_groupBox);
			this->simulationsTab->Controls->Add(this->VAT_groupBox);
			this->simulationsTab->Controls->Add(this->dataGridView1);
			this->simulationsTab->Controls->Add(this->execution_button);
			this->simulationsTab->Location = System::Drawing::Point(4, 25);
			this->simulationsTab->Name = L"simulationsTab";
			this->simulationsTab->Size = System::Drawing::Size(774, 661);
			this->simulationsTab->TabIndex = 4;
			this->simulationsTab->Text = L"Simulations";
			this->simulationsTab->UseVisualStyleBackColor = true;
			this->simulationsTab->Click += gcnew System::EventHandler(this, &MyForm::simulationsTab_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->markdown2);
			this->groupBox1->Controls->Add(this->markdown1);
			this->groupBox1->Controls->Add(this->markdown3);
			this->groupBox1->Location = System::Drawing::Point(33, 494);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 54);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Trade discount";
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
			this->markdown3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::markdown3_CheckedChanged);
			// 
			// discount_groupBox
			// 
			this->discount_groupBox->Controls->Add(this->discount2);
			this->discount_groupBox->Controls->Add(this->discount1);
			this->discount_groupBox->Location = System::Drawing::Point(442, 324);
			this->discount_groupBox->Name = L"discount_groupBox";
			this->discount_groupBox->Size = System::Drawing::Size(294, 54);
			this->discount_groupBox->TabIndex = 20;
			this->discount_groupBox->TabStop = false;
			this->discount_groupBox->Text = L"Trade discount";
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
			this->discount1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::discount1_CheckedChanged);
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
			this->margin_groupBox->Enter += gcnew System::EventHandler(this, &MyForm::margin_groupBox_Enter);
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
			this->VAT_groupBox->Enter += gcnew System::EventHandler(this, &MyForm::VAT_groupBox_Enter);
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
			this->VAT1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(51, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(672, 229);
			this->dataGridView1->TabIndex = 17;
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
			// text_custRef
			// 
			this->text_custRef->Location = System::Drawing::Point(254, 49);
			this->text_custRef->Name = L"text_custRef";
			this->text_custRef->Size = System::Drawing::Size(207, 22);
			this->text_custRef->TabIndex = 24;
			// 
			// text_custFirstName
			// 
			this->text_custFirstName->Location = System::Drawing::Point(25, 102);
			this->text_custFirstName->Name = L"text_custFirstName";
			this->text_custFirstName->Size = System::Drawing::Size(189, 22);
			this->text_custFirstName->TabIndex = 25;
			// 
			// text_birthDate
			// 
			this->text_birthDate->Location = System::Drawing::Point(254, 102);
			this->text_birthDate->Name = L"text_birthDate";
			this->text_birthDate->Size = System::Drawing::Size(207, 22);
			this->text_birthDate->TabIndex = 26;
			// 
			// text_deliveryStreetN
			// 
			this->text_deliveryStreetN->Location = System::Drawing::Point(6, 40);
			this->text_deliveryStreetN->Name = L"text_deliveryStreetN";
			this->text_deliveryStreetN->Size = System::Drawing::Size(48, 22);
			this->text_deliveryStreetN->TabIndex = 27;
			this->text_deliveryStreetN->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// text_deliveryStreetName
			// 
			this->text_deliveryStreetName->Location = System::Drawing::Point(60, 40);
			this->text_deliveryStreetName->Name = L"text_deliveryStreetName";
			this->text_deliveryStreetName->Size = System::Drawing::Size(100, 22);
			this->text_deliveryStreetName->TabIndex = 28;
			// 
			// text_deliveryZIPcode
			// 
			this->text_deliveryZIPcode->Location = System::Drawing::Point(171, 40);
			this->text_deliveryZIPcode->Name = L"text_deliveryZIPcode";
			this->text_deliveryZIPcode->Size = System::Drawing::Size(71, 22);
			this->text_deliveryZIPcode->TabIndex = 29;
			// 
			// text_deliveryCityName
			// 
			this->text_deliveryCityName->Location = System::Drawing::Point(248, 41);
			this->text_deliveryCityName->Name = L"text_deliveryCityName";
			this->text_deliveryCityName->Size = System::Drawing::Size(87, 22);
			this->text_deliveryCityName->TabIndex = 30;
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
			// text_bilingStreetName
			// 
			this->text_bilingStreetName->Location = System::Drawing::Point(63, 40);
			this->text_bilingStreetName->Name = L"text_bilingStreetName";
			this->text_bilingStreetName->Size = System::Drawing::Size(112, 22);
			this->text_bilingStreetName->TabIndex = 32;
			// 
			// text_bilingStreetN
			// 
			this->text_bilingStreetN->Location = System::Drawing::Point(9, 40);
			this->text_bilingStreetN->Name = L"text_bilingStreetN";
			this->text_bilingStreetN->Size = System::Drawing::Size(48, 22);
			this->text_bilingStreetN->TabIndex = 31;
			// 
			// text_employeeID
			// 
			this->text_employeeID->Location = System::Drawing::Point(18, 35);
			this->text_employeeID->Name = L"text_employeeID";
			this->text_employeeID->Size = System::Drawing::Size(124, 22);
			this->text_employeeID->TabIndex = 29;
			// 
			// text_chiefID
			// 
			this->text_chiefID->Location = System::Drawing::Point(165, 34);
			this->text_chiefID->Name = L"text_chiefID";
			this->text_chiefID->Size = System::Drawing::Size(128, 22);
			this->text_chiefID->TabIndex = 30;
			// 
			// text_empLastName
			// 
			this->text_empLastName->Location = System::Drawing::Point(18, 84);
			this->text_empLastName->Name = L"text_empLastName";
			this->text_empLastName->Size = System::Drawing::Size(266, 22);
			this->text_empLastName->TabIndex = 32;
			// 
			// text_empFirstName
			// 
			this->text_empFirstName->Location = System::Drawing::Point(18, 136);
			this->text_empFirstName->Name = L"text_empFirstName";
			this->text_empFirstName->Size = System::Drawing::Size(139, 22);
			this->text_empFirstName->TabIndex = 31;
			// 
			// text_hireDate
			// 
			this->text_hireDate->Location = System::Drawing::Point(181, 136);
			this->text_hireDate->Name = L"text_hireDate";
			this->text_hireDate->Size = System::Drawing::Size(103, 22);
			this->text_hireDate->TabIndex = 33;
			// 
			// text_streetNumber
			// 
			this->text_streetNumber->Location = System::Drawing::Point(21, 37);
			this->text_streetNumber->Name = L"text_streetNumber";
			this->text_streetNumber->Size = System::Drawing::Size(68, 22);
			this->text_streetNumber->TabIndex = 37;
			// 
			// text_streetName
			// 
			this->text_streetName->Location = System::Drawing::Point(128, 37);
			this->text_streetName->Name = L"text_streetName";
			this->text_streetName->Size = System::Drawing::Size(163, 22);
			this->text_streetName->TabIndex = 38;
			// 
			// text_cityName
			// 
			this->text_cityName->Location = System::Drawing::Point(21, 84);
			this->text_cityName->Name = L"text_cityName";
			this->text_cityName->Size = System::Drawing::Size(163, 22);
			this->text_cityName->TabIndex = 39;
			// 
			// text_ZIPcode
			// 
			this->text_ZIPcode->Location = System::Drawing::Point(223, 84);
			this->text_ZIPcode->Name = L"text_ZIPcode";
			this->text_ZIPcode->Size = System::Drawing::Size(68, 22);
			this->text_ZIPcode->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Order ID";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
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
			// text_articleID
			// 
			this->text_articleID->Location = System::Drawing::Point(49, 39);
			this->text_articleID->Name = L"text_articleID";
			this->text_articleID->Size = System::Drawing::Size(236, 22);
			this->text_articleID->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Article ID (reference)";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// text_paymentDueDate
			// 
			this->text_paymentDueDate->Location = System::Drawing::Point(49, 87);
			this->text_paymentDueDate->Name = L"text_paymentDueDate";
			this->text_paymentDueDate->Size = System::Drawing::Size(102, 22);
			this->text_paymentDueDate->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 16);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Payment due date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Mean of payment";
			// 
			// text_orderID
			// 
			this->text_orderID->Location = System::Drawing::Point(39, 37);
			this->text_orderID->Name = L"text_orderID";
			this->text_orderID->Size = System::Drawing::Size(238, 22);
			this->text_orderID->TabIndex = 32;
			// 
			// text_customerID
			// 
			this->text_customerID->Location = System::Drawing::Point(39, 83);
			this->text_customerID->Name = L"text_customerID";
			this->text_customerID->Size = System::Drawing::Size(238, 22);
			this->text_customerID->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 16);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Customer ID";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(299, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 16);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Quantity";
			// 
			// numericUpDown_quantity
			// 
			this->numericUpDown_quantity->Location = System::Drawing::Point(327, 37);
			this->numericUpDown_quantity->Name = L"numericUpDown_quantity";
			this->numericUpDown_quantity->Size = System::Drawing::Size(46, 22);
			this->numericUpDown_quantity->TabIndex = 32;
			// 
			// addPayment
			// 
			this->addPayment->Location = System::Drawing::Point(522, 511);
			this->addPayment->Name = L"addPayment";
			this->addPayment->Size = System::Drawing::Size(117, 33);
			this->addPayment->TabIndex = 44;
			this->addPayment->Text = L"Add payment";
			this->addPayment->UseVisualStyleBackColor = true;
			this->addPayment->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// addArticle
			// 
			this->addArticle->Location = System::Drawing::Point(645, 511);
			this->addArticle->Name = L"addArticle";
			this->addArticle->Size = System::Drawing::Size(117, 33);
			this->addArticle->TabIndex = 45;
			this->addArticle->Text = L"Add article";
			this->addArticle->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 120);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(150, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Complet payement date";
			// 
			// text_completPayementDate
			// 
			this->text_completPayementDate->Location = System::Drawing::Point(39, 139);
			this->text_completPayementDate->Name = L"text_completPayementDate";
			this->text_completPayementDate->Size = System::Drawing::Size(102, 22);
			this->text_completPayementDate->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(182, 120);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 16);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Delivery date";
			// 
			// text_deliveryDate
			// 
			this->text_deliveryDate->Location = System::Drawing::Point(201, 139);
			this->text_deliveryDate->Name = L"text_deliveryDate";
			this->text_deliveryDate->Size = System::Drawing::Size(76, 22);
			this->text_deliveryDate->TabIndex = 36;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 611);
			this->Controls->Add(this->mainTabControl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->mainTabControl->ResumeLayout(false);
			this->customersTab->ResumeLayout(false);
			this->socityGroupBox->ResumeLayout(false);
			this->socityGroupBox->PerformLayout();
			this->customerGroupBox->ResumeLayout(false);
			this->customerGroupBox->PerformLayout();
			this->BillingGroupBox->ResumeLayout(false);
			this->BillingGroupBox->PerformLayout();
			this->deliveryGroupBox->ResumeLayout(false);
			this->deliveryGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->employeesTab->ResumeLayout(false);
			this->empAdressGroupBox->ResumeLayout(false);
			this->empAdressGroupBox->PerformLayout();
			this->infoEmpGroupBox->ResumeLayout(false);
			this->infoEmpGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ordersTab->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->stockTab->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->statisticTab->ResumeLayout(false);
			this->statisticTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->simulationsTab->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->discount_groupBox->ResumeLayout(false);
			this->discount_groupBox->PerformLayout();
			this->margin_groupBox->ResumeLayout(false);
			this->margin_groupBox->PerformLayout();
			this->VAT_groupBox->ResumeLayout(false);
			this->VAT_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantity))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void margelabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void discount1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void markdown3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void simulationsTab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void margin_groupBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VAT_groupBox_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_4(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_5(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_6(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ZipCodeDel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void streetNameDel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void hireDateEmp_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
