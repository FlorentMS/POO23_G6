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

	private: System::Windows::Forms::TextBox^ textBox1;
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
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
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
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ text_socityName;



















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
			this->serviceNum = (gcnew System::Windows::Forms::Label());
			this->socityName = (gcnew System::Windows::Forms::Label());
			this->customerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->birthDateCust = (gcnew System::Windows::Forms::Label());
			this->firstName = (gcnew System::Windows::Forms::Label());
			this->lastName = (gcnew System::Windows::Forms::Label());
			this->custID = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->stockTab = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->statisticTab = (gcnew System::Windows::Forms::TabPage());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_socityName = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->mainTabControl->Size = System::Drawing::Size(782, 615);
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
			this->customersTab->Size = System::Drawing::Size(774, 586);
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
			this->socityGroupBox->Controls->Add(this->textBox3);
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
			this->customerGroupBox->Controls->Add(this->birthDateCust);
			this->customerGroupBox->Controls->Add(this->firstName);
			this->customerGroupBox->Controls->Add(this->lastName);
			this->customerGroupBox->Controls->Add(this->custID);
			this->customerGroupBox->Controls->Add(this->textBox1);
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
			this->birthDateCust->Location = System::Drawing::Point(306, 28);
			this->birthDateCust->Name = L"birthDateCust";
			this->birthDateCust->Size = System::Drawing::Size(62, 16);
			this->birthDateCust->TabIndex = 23;
			this->birthDateCust->Text = L"birth date";
			// 
			// firstName
			// 
			this->firstName->AutoSize = true;
			this->firstName->Location = System::Drawing::Point(238, 18);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(60, 16);
			this->firstName->TabIndex = 22;
			this->firstName->Text = L"fist name";
			this->firstName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_5);
			// 
			// lastName
			// 
			this->lastName->AutoSize = true;
			this->lastName->Location = System::Drawing::Point(114, 18);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(65, 16);
			this->lastName->TabIndex = 21;
			this->lastName->Text = L"last name";
			this->lastName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_4);
			// 
			// custID
			// 
			this->custID->AutoSize = true;
			this->custID->Location = System::Drawing::Point(26, 33);
			this->custID->Name = L"custID";
			this->custID->Size = System::Drawing::Size(52, 16);
			this->custID->TabIndex = 20;
			this->custID->Text = L"custRef";
			this->custID->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 22);
			this->textBox1->TabIndex = 19;
			// 
			// BillingGroupBox
			// 
			this->BillingGroupBox->Controls->Add(this->cityNameBil);
			this->BillingGroupBox->Controls->Add(this->ZipCodeBil);
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
			this->cityNameBil->Location = System::Drawing::Point(163, 47);
			this->cityNameBil->Name = L"cityNameBil";
			this->cityNameBil->Size = System::Drawing::Size(64, 16);
			this->cityNameBil->TabIndex = 26;
			this->cityNameBil->Text = L"city name";
			// 
			// ZipCodeBil
			// 
			this->ZipCodeBil->AutoSize = true;
			this->ZipCodeBil->Location = System::Drawing::Point(251, 31);
			this->ZipCodeBil->Name = L"ZipCodeBil";
			this->ZipCodeBil->Size = System::Drawing::Size(61, 16);
			this->ZipCodeBil->TabIndex = 25;
			this->ZipCodeBil->Text = L"ZIP code";
			// 
			// streetNumBil
			// 
			this->streetNumBil->AutoSize = true;
			this->streetNumBil->Location = System::Drawing::Point(26, 31);
			this->streetNumBil->Name = L"streetNumBil";
			this->streetNumBil->Size = System::Drawing::Size(88, 16);
			this->streetNumBil->TabIndex = 23;
			this->streetNumBil->Text = L"street number";
			// 
			// streetNameBil
			// 
			this->streetNameBil->AutoSize = true;
			this->streetNameBil->Location = System::Drawing::Point(137, 31);
			this->streetNameBil->Name = L"streetNameBil";
			this->streetNameBil->Size = System::Drawing::Size(77, 16);
			this->streetNameBil->TabIndex = 24;
			this->streetNameBil->Text = L"street name";
			// 
			// deliveryGroupBox
			// 
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
			this->cityNameDel->Location = System::Drawing::Point(163, 47);
			this->cityNameDel->Name = L"cityNameDel";
			this->cityNameDel->Size = System::Drawing::Size(64, 16);
			this->cityNameDel->TabIndex = 26;
			this->cityNameDel->Text = L"city name";
			// 
			// ZipCodeDel
			// 
			this->ZipCodeDel->AutoSize = true;
			this->ZipCodeDel->Location = System::Drawing::Point(251, 31);
			this->ZipCodeDel->Name = L"ZipCodeDel";
			this->ZipCodeDel->Size = System::Drawing::Size(61, 16);
			this->ZipCodeDel->TabIndex = 25;
			this->ZipCodeDel->Text = L"ZIP code";
			// 
			// streetNumDel
			// 
			this->streetNumDel->AutoSize = true;
			this->streetNumDel->Location = System::Drawing::Point(26, 31);
			this->streetNumDel->Name = L"streetNumDel";
			this->streetNumDel->Size = System::Drawing::Size(88, 16);
			this->streetNumDel->TabIndex = 23;
			this->streetNumDel->Text = L"street number";
			// 
			// streetNameDel
			// 
			this->streetNameDel->AutoSize = true;
			this->streetNameDel->Location = System::Drawing::Point(137, 31);
			this->streetNameDel->Name = L"streetNameDel";
			this->streetNameDel->Size = System::Drawing::Size(77, 16);
			this->streetNameDel->TabIndex = 24;
			this->streetNameDel->Text = L"street name";
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
			this->employeesTab->Size = System::Drawing::Size(774, 586);
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
			this->empAdressGroupBox->Controls->Add(this->cityNameEmp);
			this->empAdressGroupBox->Controls->Add(this->streetNameEmp);
			this->empAdressGroupBox->Controls->Add(this->ZIPcodeEmp);
			this->empAdressGroupBox->Controls->Add(this->streetNumEmp);
			this->empAdressGroupBox->Location = System::Drawing::Point(398, 298);
			this->empAdressGroupBox->Name = L"empAdressGroupBox";
			this->empAdressGroupBox->Size = System::Drawing::Size(323, 164);
			this->empAdressGroupBox->TabIndex = 20;
			this->empAdressGroupBox->TabStop = false;
			this->empAdressGroupBox->Text = L"Adress";
			// 
			// cityNameEmp
			// 
			this->cityNameEmp->AutoSize = true;
			this->cityNameEmp->Location = System::Drawing::Point(157, 61);
			this->cityNameEmp->Name = L"cityNameEmp";
			this->cityNameEmp->Size = System::Drawing::Size(64, 16);
			this->cityNameEmp->TabIndex = 30;
			this->cityNameEmp->Text = L"city name";
			// 
			// streetNameEmp
			// 
			this->streetNameEmp->AutoSize = true;
			this->streetNameEmp->Location = System::Drawing::Point(131, 45);
			this->streetNameEmp->Name = L"streetNameEmp";
			this->streetNameEmp->Size = System::Drawing::Size(77, 16);
			this->streetNameEmp->TabIndex = 28;
			this->streetNameEmp->Text = L"street name";
			// 
			// ZIPcodeEmp
			// 
			this->ZIPcodeEmp->AutoSize = true;
			this->ZIPcodeEmp->Location = System::Drawing::Point(245, 45);
			this->ZIPcodeEmp->Name = L"ZIPcodeEmp";
			this->ZIPcodeEmp->Size = System::Drawing::Size(61, 16);
			this->ZIPcodeEmp->TabIndex = 29;
			this->ZIPcodeEmp->Text = L"ZIP code";
			// 
			// streetNumEmp
			// 
			this->streetNumEmp->AutoSize = true;
			this->streetNumEmp->Location = System::Drawing::Point(20, 45);
			this->streetNumEmp->Name = L"streetNumEmp";
			this->streetNumEmp->Size = System::Drawing::Size(88, 16);
			this->streetNumEmp->TabIndex = 27;
			this->streetNumEmp->Text = L"street number";
			// 
			// infoEmpGroupBox
			// 
			this->infoEmpGroupBox->Controls->Add(this->chiefIDemp);
			this->infoEmpGroupBox->Controls->Add(this->lastNameEmp);
			this->infoEmpGroupBox->Controls->Add(this->hireDateEmp);
			this->infoEmpGroupBox->Controls->Add(this->IDemp);
			this->infoEmpGroupBox->Controls->Add(this->firstNameEmp);
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
			this->chiefIDemp->Location = System::Drawing::Point(108, 71);
			this->chiefIDemp->Name = L"chiefIDemp";
			this->chiefIDemp->Size = System::Drawing::Size(51, 16);
			this->chiefIDemp->TabIndex = 28;
			this->chiefIDemp->Text = L"chief ID";
			this->chiefIDemp->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_6);
			// 
			// lastNameEmp
			// 
			this->lastNameEmp->AutoSize = true;
			this->lastNameEmp->Location = System::Drawing::Point(63, 29);
			this->lastNameEmp->Name = L"lastNameEmp";
			this->lastNameEmp->Size = System::Drawing::Size(65, 16);
			this->lastNameEmp->TabIndex = 25;
			this->lastNameEmp->Text = L"last name";
			// 
			// hireDateEmp
			// 
			this->hireDateEmp->AutoSize = true;
			this->hireDateEmp->Location = System::Drawing::Point(195, 55);
			this->hireDateEmp->Name = L"hireDateEmp";
			this->hireDateEmp->Size = System::Drawing::Size(59, 16);
			this->hireDateEmp->TabIndex = 27;
			this->hireDateEmp->Text = L"hire date";
			// 
			// IDemp
			// 
			this->IDemp->AutoSize = true;
			this->IDemp->Location = System::Drawing::Point(18, 55);
			this->IDemp->Name = L"IDemp";
			this->IDemp->Size = System::Drawing::Size(84, 16);
			this->IDemp->TabIndex = 24;
			this->IDemp->Text = L"employee ID";
			// 
			// firstNameEmp
			// 
			this->firstNameEmp->AutoSize = true;
			this->firstNameEmp->Location = System::Drawing::Point(127, 45);
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
			this->ordersTab->Controls->Add(this->groupBox4);
			this->ordersTab->Controls->Add(this->groupBox3);
			this->ordersTab->Controls->Add(this->groupBox2);
			this->ordersTab->Controls->Add(this->button2);
			this->ordersTab->Controls->Add(this->button3);
			this->ordersTab->Controls->Add(this->button4);
			this->ordersTab->Controls->Add(this->button5);
			this->ordersTab->Controls->Add(this->dataGridView3);
			this->ordersTab->Location = System::Drawing::Point(4, 25);
			this->ordersTab->Name = L"ordersTab";
			this->ordersTab->Size = System::Drawing::Size(774, 586);
			this->ordersTab->TabIndex = 2;
			this->ordersTab->Text = L"Orders";
			this->ordersTab->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 33);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Display employees";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(383, 511);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 33);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Change employee";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(583, 511);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 33);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Erase employee";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(196, 511);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 33);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Add employee";
			this->button5->UseVisualStyleBackColor = true;
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
			this->stockTab->Size = System::Drawing::Size(774, 586);
			this->stockTab->TabIndex = 5;
			this->stockTab->Text = L"Stock";
			this->stockTab->UseVisualStyleBackColor = true;
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
			this->statisticTab->Size = System::Drawing::Size(774, 586);
			this->statisticTab->TabIndex = 3;
			this->statisticTab->Text = L"Statistics";
			this->statisticTab->UseVisualStyleBackColor = true;
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
			this->simulationsTab->Size = System::Drawing::Size(774, 586);
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
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(25, 289);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 191);
			this->groupBox2->TabIndex = 41;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Global info";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(334, 289);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(387, 92);
			this->groupBox3->TabIndex = 42;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Article";
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(334, 395);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(387, 85);
			this->groupBox4->TabIndex = 43;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"mean of payment";
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
			// button10
			// 
			this->button10->Location = System::Drawing::Point(80, 361);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(232, 26);
			this->button10->TabIndex = 20;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
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
			// button12
			// 
			this->button12->Location = System::Drawing::Point(80, 469);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(232, 26);
			this->button12->TabIndex = 22;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
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
			// button14
			// 
			this->button14->Location = System::Drawing::Point(428, 414);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(232, 26);
			this->button14->TabIndex = 24;
			this->button14->Text = L"Calculate total amout of customer";
			this->button14->UseVisualStyleBackColor = true;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"label1";
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(425, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"label3";
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(425, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"label5";
			// 
			// text_socityName
			// 
			this->text_socityName->Location = System::Drawing::Point(36, 44);
			this->text_socityName->Name = L"text_socityName";
			this->text_socityName->Size = System::Drawing::Size(175, 22);
			this->text_socityName->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(36, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 22);
			this->textBox3->TabIndex = 27;
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
};
}
