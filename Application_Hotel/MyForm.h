#pragma once
#include "header.h"

namespace ApplicationHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
        
    	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ btnGo;

    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ btnAnnul;
    private: System::Windows::Forms::Button^ btnModify;
    private: System::Windows::Forms::Button^ btnChanger;
    private: System::Windows::Forms::Button^ btnListe;
    private: System::Windows::Forms::Button^ btnTrouver;
    private: System::Windows::Forms::Button^ btnEchanger;

    private: System::Windows::Forms::Button^ btnStats;
    private: System::Windows::Forms::Button^ btnQuitter;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ btnOk;



    private: System::Windows::Forms::Button^ btnRetour;
    private: System::Windows::Forms::Label^ labelNom;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ labelPrenom;
    private: System::Windows::Forms::TextBox^ textBoxPrenom;

    private: System::Windows::Forms::TextBox^ textBoxNom;
    private: System::Windows::Forms::ListView^ listView1;
    private: System::Windows::Forms::ColumnHeader^ columnHeader1;
    private: System::Windows::Forms::ColumnHeader^ columnHeader2;
    private: System::Windows::Forms::ColumnHeader^ columnHeader3;
    private: System::Windows::Forms::TextBox^ textBoxStats;










    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->btnGo = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->btnAnnul = (gcnew System::Windows::Forms::Button());
            this->btnModify = (gcnew System::Windows::Forms::Button());
            this->btnChanger = (gcnew System::Windows::Forms::Button());
            this->btnListe = (gcnew System::Windows::Forms::Button());
            this->btnTrouver = (gcnew System::Windows::Forms::Button());
            this->btnEchanger = (gcnew System::Windows::Forms::Button());
            this->btnStats = (gcnew System::Windows::Forms::Button());
            this->btnQuitter = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->btnOk = (gcnew System::Windows::Forms::Button());
            this->btnRetour = (gcnew System::Windows::Forms::Button());
            this->labelNom = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBoxStats = (gcnew System::Windows::Forms::TextBox());
            this->listView1 = (gcnew System::Windows::Forms::ListView());
            this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
            this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
            this->labelPrenom = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // btnGo
            // 
            this->btnGo->AutoSize = true;
            this->btnGo->BackColor = System::Drawing::Color::Bisque;
            this->btnGo->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnGo->FlatAppearance->BorderSize = 4;
            this->btnGo->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnGo->Location = System::Drawing::Point(1125, 128);
            this->btnGo->Margin = System::Windows::Forms::Padding(4);
            this->btnGo->Name = L"btnGo";
            this->btnGo->Size = System::Drawing::Size(131, 54);
            this->btnGo->TabIndex = 1;
            this->btnGo->Text = L"Réserver";
            this->btnGo->UseVisualStyleBackColor = false;
            this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
            this->flowLayoutPanel1->Location = System::Drawing::Point(1080, 586);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(371, 134);
            this->flowLayoutPanel1->TabIndex = 3;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint_1);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(252, 150);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(806, 592);
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(498, 9);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(317, 101);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Hotel Yolo";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(1215, 36);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(198, 72);
            this->label2->TabIndex = 7;
            this->label2->Text = L"Menu : ";
            // 
            // btnAnnul
            // 
            this->btnAnnul->AutoSize = true;
            this->btnAnnul->BackColor = System::Drawing::Color::Bisque;
            this->btnAnnul->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnAnnul->FlatAppearance->BorderSize = 4;
            this->btnAnnul->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAnnul->Location = System::Drawing::Point(1282, 128);
            this->btnAnnul->Margin = System::Windows::Forms::Padding(4);
            this->btnAnnul->Name = L"btnAnnul";
            this->btnAnnul->Size = System::Drawing::Size(131, 54);
            this->btnAnnul->TabIndex = 8;
            this->btnAnnul->Text = L"Annuler";
            this->btnAnnul->UseVisualStyleBackColor = false;
            this->btnAnnul->Click += gcnew System::EventHandler(this, &MyForm::btnAnnul_Click);
            // 
            // btnModify
            // 
            this->btnModify->AutoSize = true;
            this->btnModify->BackColor = System::Drawing::Color::Bisque;
            this->btnModify->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnModify->FlatAppearance->BorderSize = 4;
            this->btnModify->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnModify->Location = System::Drawing::Point(1125, 202);
            this->btnModify->Margin = System::Windows::Forms::Padding(4);
            this->btnModify->Name = L"btnModify";
            this->btnModify->Size = System::Drawing::Size(131, 54);
            this->btnModify->TabIndex = 9;
            this->btnModify->Text = L"Modifier";
            this->btnModify->UseVisualStyleBackColor = false;
            this->btnModify->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
            // 
            // btnChanger
            // 
            this->btnChanger->AutoSize = true;
            this->btnChanger->BackColor = System::Drawing::Color::Bisque;
            this->btnChanger->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnChanger->FlatAppearance->BorderSize = 4;
            this->btnChanger->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnChanger->Location = System::Drawing::Point(1282, 202);
            this->btnChanger->Margin = System::Windows::Forms::Padding(4);
            this->btnChanger->Name = L"btnChanger";
            this->btnChanger->Size = System::Drawing::Size(131, 54);
            this->btnChanger->TabIndex = 10;
            this->btnChanger->Text = L"Envoyer";
            this->btnChanger->UseVisualStyleBackColor = false;
            this->btnChanger->Click += gcnew System::EventHandler(this, &MyForm::btnChanger_Click);
            // 
            // btnListe
            // 
            this->btnListe->AutoSize = true;
            this->btnListe->BackColor = System::Drawing::Color::Bisque;
            this->btnListe->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnListe->FlatAppearance->BorderSize = 4;
            this->btnListe->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnListe->Location = System::Drawing::Point(1125, 275);
            this->btnListe->Margin = System::Windows::Forms::Padding(4);
            this->btnListe->Name = L"btnListe";
            this->btnListe->Size = System::Drawing::Size(131, 54);
            this->btnListe->TabIndex = 11;
            this->btnListe->Text = L"Liste";
            this->btnListe->UseVisualStyleBackColor = false;
            this->btnListe->Click += gcnew System::EventHandler(this, &MyForm::btnListe_Click);
            // 
            // btnTrouver
            // 
            this->btnTrouver->AutoSize = true;
            this->btnTrouver->BackColor = System::Drawing::Color::Bisque;
            this->btnTrouver->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnTrouver->FlatAppearance->BorderSize = 4;
            this->btnTrouver->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnTrouver->Location = System::Drawing::Point(1282, 275);
            this->btnTrouver->Margin = System::Windows::Forms::Padding(4);
            this->btnTrouver->Name = L"btnTrouver";
            this->btnTrouver->Size = System::Drawing::Size(131, 54);
            this->btnTrouver->TabIndex = 12;
            this->btnTrouver->Text = L"Trouver";
            this->btnTrouver->UseVisualStyleBackColor = false;
            this->btnTrouver->Click += gcnew System::EventHandler(this, &MyForm::btnTrouver_Click);
            // 
            // btnEchanger
            // 
            this->btnEchanger->AutoSize = true;
            this->btnEchanger->BackColor = System::Drawing::Color::Bisque;
            this->btnEchanger->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnEchanger->FlatAppearance->BorderSize = 4;
            this->btnEchanger->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEchanger->Location = System::Drawing::Point(1125, 350);
            this->btnEchanger->Margin = System::Windows::Forms::Padding(4);
            this->btnEchanger->Name = L"btnEchanger";
            this->btnEchanger->Size = System::Drawing::Size(131, 54);
            this->btnEchanger->TabIndex = 13;
            this->btnEchanger->Text = L"Echanger";
            this->btnEchanger->UseVisualStyleBackColor = false;
            this->btnEchanger->Click += gcnew System::EventHandler(this, &MyForm::btnEchanger_Click);
            // 
            // btnStats
            // 
            this->btnStats->AutoSize = true;
            this->btnStats->BackColor = System::Drawing::Color::Bisque;
            this->btnStats->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnStats->FlatAppearance->BorderSize = 4;
            this->btnStats->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnStats->Location = System::Drawing::Point(1282, 350);
            this->btnStats->Margin = System::Windows::Forms::Padding(4);
            this->btnStats->Name = L"btnStats";
            this->btnStats->Size = System::Drawing::Size(131, 54);
            this->btnStats->TabIndex = 15;
            this->btnStats->Text = L"Stats";
            this->btnStats->UseVisualStyleBackColor = false;
            this->btnStats->Click += gcnew System::EventHandler(this, &MyForm::btnStats_Click);
            // 
            // btnQuitter
            // 
            this->btnQuitter->AutoSize = true;
            this->btnQuitter->BackColor = System::Drawing::Color::Bisque;
            this->btnQuitter->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnQuitter->FlatAppearance->BorderSize = 4;
            this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnQuitter->Location = System::Drawing::Point(1209, 422);
            this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
            this->btnQuitter->Name = L"btnQuitter";
            this->btnQuitter->Size = System::Drawing::Size(131, 54);
            this->btnQuitter->TabIndex = 16;
            this->btnQuitter->Text = L"Quitter";
            this->btnQuitter->UseVisualStyleBackColor = false;
            this->btnQuitter->Click += gcnew System::EventHandler(this, &MyForm::btnQuitter_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(1119, 514);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 32);
            this->label3->TabIndex = 17;
            this->label3->Visible = false;
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // btnOk
            // 
            this->btnOk->AutoSize = true;
            this->btnOk->BackColor = System::Drawing::Color::Bisque;
            this->btnOk->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnOk->FlatAppearance->BorderSize = 4;
            this->btnOk->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnOk->Location = System::Drawing::Point(1125, 738);
            this->btnOk->Margin = System::Windows::Forms::Padding(4);
            this->btnOk->Name = L"btnOk";
            this->btnOk->Size = System::Drawing::Size(131, 54);
            this->btnOk->TabIndex = 18;
            this->btnOk->UseVisualStyleBackColor = false;
            this->btnOk->Visible = false;
            this->btnOk->Click += gcnew System::EventHandler(this, &MyForm::btnOk_Click);
            // 
            // btnRetour
            // 
            this->btnRetour->AutoSize = true;
            this->btnRetour->BackColor = System::Drawing::Color::Bisque;
            this->btnRetour->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnRetour->FlatAppearance->BorderSize = 4;
            this->btnRetour->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRetour->Location = System::Drawing::Point(1282, 738);
            this->btnRetour->Margin = System::Windows::Forms::Padding(4);
            this->btnRetour->Name = L"btnRetour";
            this->btnRetour->Size = System::Drawing::Size(131, 54);
            this->btnRetour->TabIndex = 19;
            this->btnRetour->UseVisualStyleBackColor = false;
            this->btnRetour->Visible = false;
            this->btnRetour->Click += gcnew System::EventHandler(this, &MyForm::btnRetour_Click);
            // 
            // labelNom
            // 
            this->labelNom->AutoSize = true;
            this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNom->Location = System::Drawing::Point(39, 72);
            this->labelNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelNom->Name = L"labelNom";
            this->labelNom->Size = System::Drawing::Size(95, 32);
            this->labelNom->TabIndex = 0;
            this->labelNom->Text = L"Nom : ";
            this->labelNom->Visible = false;
            this->labelNom->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->textBoxStats);
            this->panel1->Controls->Add(this->listView1);
            this->panel1->Controls->Add(this->textBoxPrenom);
            this->panel1->Controls->Add(this->textBoxNom);
            this->panel1->Controls->Add(this->labelPrenom);
            this->panel1->Controls->Add(this->labelNom);
            this->panel1->Location = System::Drawing::Point(1090, 514);
            this->panel1->Margin = System::Windows::Forms::Padding(2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(472, 218);
            this->panel1->TabIndex = 20;
            this->panel1->Visible = false;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // textBoxStats
            // 
            this->textBoxStats->BackColor = System::Drawing::Color::OldLace;
            this->textBoxStats->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBoxStats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxStats->Location = System::Drawing::Point(35, 31);
            this->textBoxStats->Multiline = true;
            this->textBoxStats->Name = L"textBoxStats";
            this->textBoxStats->ReadOnly = true;
            this->textBoxStats->Size = System::Drawing::Size(362, 96);
            this->textBoxStats->TabIndex = 22;
            this->textBoxStats->Visible = false;
            this->textBoxStats->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxStats_TextChanged);
            // 
            // listView1
            // 
            this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
                this->columnHeader1, this->columnHeader2,
                    this->columnHeader3
            });
            this->listView1->HideSelection = false;
            this->listView1->Location = System::Drawing::Point(35, 2);
            this->listView1->Margin = System::Windows::Forms::Padding(2);
            this->listView1->Name = L"listView1";
            this->listView1->Size = System::Drawing::Size(372, 206);
            this->listView1->TabIndex = 21;
            this->listView1->UseCompatibleStateImageBehavior = false;
            this->listView1->View = System::Windows::Forms::View::Details;
            this->listView1->Visible = false;
            this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged_1);
            // 
            // columnHeader1
            // 
            this->columnHeader1->Text = L"Numero";
            this->columnHeader1->Width = 100;
            // 
            // columnHeader2
            // 
            this->columnHeader2->Text = L"Prenom";
            this->columnHeader2->Width = 100;
            // 
            // columnHeader3
            // 
            this->columnHeader3->Text = L"Nom";
            this->columnHeader3->Width = 100;
            // 
            // textBoxPrenom
            // 
            this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxPrenom->Location = System::Drawing::Point(176, 120);
            this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
            this->textBoxPrenom->Name = L"textBoxPrenom";
            this->textBoxPrenom->Size = System::Drawing::Size(146, 34);
            this->textBoxPrenom->TabIndex = 3;
            // 
            // textBoxNom
            // 
            this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxNom->Location = System::Drawing::Point(176, 70);
            this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
            this->textBoxNom->Name = L"textBoxNom";
            this->textBoxNom->Size = System::Drawing::Size(146, 34);
            this->textBoxNom->TabIndex = 2;
            // 
            // labelPrenom
            // 
            this->labelPrenom->AutoSize = true;
            this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrenom->Location = System::Drawing::Point(16, 120);
            this->labelPrenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelPrenom->Name = L"labelPrenom";
            this->labelPrenom->Size = System::Drawing::Size(128, 32);
            this->labelPrenom->TabIndex = 1;
            this->labelPrenom->Text = L"Prenom :";
            this->labelPrenom->Visible = false;
            this->labelPrenom->Click += gcnew System::EventHandler(this, &MyForm::labelPrenom_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->BackColor = System::Drawing::Color::OldLace;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1605, 952);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->btnRetour);
            this->Controls->Add(this->btnOk);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->flowLayoutPanel1);
            this->Controls->Add(this->btnQuitter);
            this->Controls->Add(this->btnStats);
            this->Controls->Add(this->btnEchanger);
            this->Controls->Add(this->btnTrouver);
            this->Controls->Add(this->btnListe);
            this->Controls->Add(this->btnChanger);
            this->Controls->Add(this->btnModify);
            this->Controls->Add(this->btnAnnul);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->btnGo);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        //Methode pour rendre tout en majuscule
private: string toUpperCase(const std::string& str);
        //Methode voir dans MyForm.cpp
private: System::Void btnSuivantEchanger();
       //Methode voir dans MyForm.cpp
private: System::Void btnSuivantTrouver();
        //Methode pour bien mettre à jour vector global Chambres à chaque click des boutons
private: System::Void RenduChambres();
        //Declaration de methode pour gerer la liste
private: System::Void ClickList();
        //Declaration de methode pour mettre a jours les checkbox quand elle sont clickés
private: System::Void OnCheckBoxCheckedChanged(System::Object^ sender, System::EventArgs^ e);
       //Declaration de methode pour trier la liste
       //quand on click sur le titres des colonnes de la liste
private: System::Void OnClickColumn(System::Object^ sender, ColumnClickEventArgs^ e);
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
        //Boutton de Réservation
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    textBoxStats->Visible = false;
    //Verification que le tableau concorde bien avec la bdd
    RenduChambres();
    //Changement du label du nom
    labelNom->Text = "";
    //Clear sur le Layout Panel pour ne pas re ecrire les box a chaque click
    flowLayoutPanel1->Controls->Clear();
    //Rend invisible le panel qui contient les textBox et la liste
    panel1->Visible = false;
    //Rend invisible la liste
    listView1->Visible = false;
    //Creation des checkbox
    for (int i = 0; i < chambres.size(); ++i) {
        // Verification que les chambres sont bien libre
        if (chambres[i].isReserved == false) {
            System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
            checkBox->Text = "Numero : " + chambres[i].numero.ToString();
            checkBox->AutoSize = true;
            checkBox->Name = L"checkBox" + i;
            //Ajout d'une methode sur chaque checkbox
            checkBox->CheckedChanged += gcnew EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);
            // Ajouter la CheckBox à une cellule de TableLayoutPanel
            flowLayoutPanel1->Controls->Add(checkBox);
        }
    }
    //Affichage des chambres a réserver et des boutons quand utilisateur
    //click sur le bouton de reservation
    flowLayoutPanel1->Visible = true;
    label3->Visible = true;
    label3->Text = "Chambres disponibles : ";
    btnOk->Text = "Suivant";
    btnRetour->Text = "Retour";
    btnOk->Visible = true;
    btnRetour->Visible = true;
    textBoxNom->Text = "";
    textBoxPrenom->Text = "";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //Bouton de modification -> Changer le nom et le prenom d'une reservation
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    textBoxStats->Visible = false;
    //Verification que le tableau concorde bien avec la bdd
    RenduChambres();
    //Changement du label du nom
    labelNom->Text = "";
    //Clear sur le Layout Panel pour ne pas re ecrire les box a chaque click
    flowLayoutPanel1->Controls->Clear();
    //Rend invisible le panel qui contient les textBox et la liste
    panel1->Visible = false;
    //Rend invisible la liste
    listView1->Visible = false;
    //Creation des checkbox
    for (int i = 0; i < chambres.size(); ++i) {
        // Verification que les chambres sont bien libre
        if (chambres[i].isReserved == true) {
            System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
            checkBox->Text = "Numero : " + chambres[i].numero.ToString();
            checkBox->AutoSize = true;
            checkBox->Name = L"checkBox" + i;
            //Ajout d'une methode sur chaque checkbox
            checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);
            // Ajouter la CheckBox à une cellule de TableLayoutPanel
            flowLayoutPanel1->Controls->Add(checkBox);
        }
    }

    //Affichage des chambres réservées quand utilisateur
    //click sur bouton de modification
    flowLayoutPanel1->Visible = true;
    label3->Visible = true;
    label3->Text = "Chambres modifiables : ";
    btnOk->Text = "Suivant";
    btnRetour->Text = "Retour";
    btnOk->Visible = true;
    btnRetour->Visible = true;

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //Bouton de validation
            //Ce bouton est utilisé pour differentes requetes
            //Beaucoup de code dans cette methode
       //Bouton de validation
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
    //Click sur btn suivant quand rechercher reservation
    bool clickedEchanger = false;
    if (label3->Text == "Réservation :") {
        btnSuivantEchanger();
        clickedEchanger = true;
    }
    cout << "clickedEchanger : " << clickedEchanger;
    //Click sur btn suivant quand rechercher reservation
    bool clickedTrouver = false;
    if (labelNom->Text == "Trouver : ") {
        btnSuivantTrouver();
        clickedTrouver = true;
    }
    //PARTIE DE RESERVATION
    //Valeur booleanne qui a pour but que l'interface graphique ne se reecrive pas apres l'envoi de la requete
    bool validateReserv = false;
    //Validation d'inscription
    //Verification que les deux textBox ont des valeurs avant d'accepter l'inscription
    //Verification aussi sur valeur du label3 pour que ce code ne soit pas envoye quand
    //utilisateur veut annuler
    if (labelNom->Visible == true && textBoxNom->Text != "" && textBoxPrenom->Text != ""
        && label3->Text == "Chambres disponibles : ") {
        for (int i = 0; i < chambres.size(); i++) {
            //Verification que la chambre n'est pas réservée
            if (chambres[i].isReserved == true && chambres[i].nom == "") {
                chambres[i].prenom = msclr::interop::marshal_as<std::string>(textBoxPrenom->Text);
                chambres[i].nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
                doReserv(i);
                validateReserv = true;
            }
        }
        //Reset de l'interface graphique au moment de la validation
        flowLayoutPanel1->Controls->Clear();
        flowLayoutPanel1->Visible = false;
        labelNom->Visible = false;
        labelPrenom->Visible = false;
        labelNom->Text = "";
        labelPrenom->Text = "";
        panel1->Visible = false;
        label3->Visible = false;
        btnOk->Visible = false;
        btnRetour->Visible = false;
        textBoxNom->Text = "";
        textBoxPrenom->Text = "";
        //Debug
        cout << "Chambres disponibles, prete";
    }   
    //Modification graphique pour la deuxieme partie de validation pour faire une reservation
    //Comportemnt de base uniquement si certaine boolenne sont false
    if (validateReserv == false && clickedTrouver == false && clickedEchanger == false) {
        cout << "Comportement de base de bouton suivant active";
        labelNom->Visible = true;
        labelPrenom->Visible = true;
        labelNom->Text = "Nom : ";
        labelPrenom->Text = "Prenom : ";
        textBoxPrenom->Visible = true;
        //Echange automatiquement le flowlayoutpanel avec le panel au moment
        //du deuxieme click du bouton suivant
        flowLayoutPanel1->Visible = false;
        panel1->Visible = true;
        btnOk->Text = "Valider";
        textBoxNom->Visible = true;
        textBoxNom->BackColor = System::Drawing::Color::White;
        textBoxPrenom->BackColor = System::Drawing::Color::White;   
    }
        //PARTIE ANNULATION DU BOUTON       
    //Valeur booleanne qui a pour but que l'interface graphique ne se reecrive pas apres l'envoi de la requete
    bool validateAnnul = false;
    //Remise à jour graphique
    if (label3->Text == "Chambres réservées : ") {
        textBoxNom->BackColor = System::Drawing::Color::White;
        textBoxPrenom->BackColor = System::Drawing::Color::White;
    }
    //Annulation d'inscription
    //Verification que les deux textBox ont des valeurs avant d'accepter l'inscription
    //Verification aussi sur valeur du label3 pour que ce code ne soit pas envoye quand
    //utilisateur veut réserver
    if (labelNom->Visible == true && textBoxNom->Text != "" && textBoxPrenom->Text != ""
        && label3->Text == "Chambres réservées : ") {
        for (int i = 0; i < chambres.size(); i++) {           
            //Verification que la chambre est reservée
            //Verification aussi que le nom et le prenom correspondent a la reservation
                if (chambres[i].isReserved == false 
                    && toUpperCase(chambres[i].nom) == msclr::interop::marshal_as<std::string>(textBoxNom->Text->ToUpper())
                    && toUpperCase(chambres[i].prenom) == msclr::interop::marshal_as<std::string>(textBoxPrenom->Text->ToUpper())
                    ) {
                //Si le nom le prenom correspondent on met a jour notre vector global
                chambres[i].prenom = "";
                chambres[i].nom = "";
                chambres[i].isReserved = false;
                //Puis appel de la fonction pour mettre a jour la table SQL par
                updateReserv(i);
                validateAnnul = true;
                //Reset de l'interface graphique au moment de la validation
                //pour annuler une reservation
                flowLayoutPanel1->Controls->Clear();
                flowLayoutPanel1->Visible = false;
                labelNom->Visible = false;
                labelPrenom->Visible = false;
                labelNom->Text = "";
                labelPrenom->Text = "";
                panel1->Visible = false;
                label3->Visible = false;
                btnOk->Visible = false;
                btnRetour->Visible = false;
                textBoxNom->Text = "";
                textBoxPrenom->Text = "";
                textBoxNom->BackColor = System::Drawing::Color::White;
                textBoxPrenom->BackColor = System::Drawing::Color::White;
            }
            //Comportenment si les noms et prenoms ne correspondent pas
            else {
                textBoxNom->BackColor = System::Drawing::Color::Red;
                textBoxPrenom->BackColor = System::Drawing::Color::Red;
            }
        }   
    }
    ////PARTIE MODIFICATION DU BOUTON
    if (labelNom->Visible == true && textBoxNom->Text != "" && textBoxPrenom->Text != ""
        && label3->Text == "Chambres modifiables : ") {
        for (int i = 0; i < chambres.size(); i++) {
            //Verification que la chambre est reservée
            //Verification aussi que le nom et le prenom correspondent a la reservation
            if (chambres[i].isReserved == false
                && chambres[i].nom != ""
                ) {
                //Si le nom le prenom correspondent on met a jour notre vector global
                chambres[i].prenom = msclr::interop::marshal_as<std::string>(textBoxPrenom->Text);
                chambres[i].nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
                chambres[i].isReserved = true;
                //Puis appel de la fonction pour mettre a jour la table SQL par
                doReserv(i);
                //Reset de l'interface graphique au moment de la validation
                //pour annuler une reservation
                flowLayoutPanel1->Controls->Clear();
                flowLayoutPanel1->Visible = false;
                labelNom->Visible = false;
                labelPrenom->Visible = false;
                labelNom->Text = "";
                labelPrenom->Text = "";
                panel1->Visible = false;
                label3->Visible = false;
                btnOk->Visible = false;
                btnRetour->Visible = false;
                textBoxNom->Text = "";
                textBoxPrenom->Text = "";
                textBoxNom->BackColor = System::Drawing::Color::White;
                textBoxPrenom->BackColor = System::Drawing::Color::White;
            }
            //Comportenment si les noms et prenoms ne correspondent pas
            else {
                textBoxNom->BackColor = System::Drawing::Color::Red;
                textBoxPrenom->BackColor = System::Drawing::Color::Red;
            }
        }
        cout << "Chambres modofiable, prete";
    }
    //PARTIE POUR ENVOYER LES RESERVATIONS
    if (label3->Text == "Chambres à envoyer : ") {
        bool isEchanged = false;
        //Clear de toutes les checkbox
        flowLayoutPanel1->Controls->Clear();
        //Creation du nombre de checkbox egal au nombre de chambre libres
        for (int i = 0; i < chambres.size(); ++i) {
            // Verification que les chambres sont bien libre
            if (chambres[i].isReserved == false && chambres[i].nom == "") {
                System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
                checkBox->Text = "Numero : " + chambres[i].numero.ToString();
                checkBox->AutoSize = true;
                checkBox->Name = L"checkBox" + i;
                //Ajout d'une methode sur chaque checkbox
                checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);
                // Ajouter la CheckBox à une cellule de TableLayoutPanel
                flowLayoutPanel1->Controls->Add(checkBox);
            }
        }
        if (btnOk->Text == "Valider") {
            //Partie de validation, quand les deux chambres à échangés on été selectionnées
            int chambreAvider, chambreAremplir = -1;
            //Premiere modification se fait dans le vector global chambres
            for (int i = 0; i < chambres.size(); ++i) {
                if (chambres[i].isReserved == false && chambres[i].nom != "") {
                    chambreAvider = i;
                }
                if (chambres[i].isReserved == true && chambres[i].nom == "") {
                    chambreAremplir = i;
                }
            }
            if (chambreAremplir >= 0) {
                //Les données dans le vector chambres sont échangé
                chambres[chambreAremplir].nom = chambres[chambreAvider].nom;
                chambres[chambreAremplir].prenom = chambres[chambreAvider].prenom;
                chambres[chambreAvider].prenom = "";
                chambres[chambreAvider].nom = "";
                //Puis la fonction pour mettre a jour la table SQL est envoyé 
                //Elle est utilisé deux fois, une fois pour chaque ligne
                doReserv(chambreAvider);
                doReserv(chambreAremplir);
                //Mise a jour graphique 
                isEchanged = true;
                flowLayoutPanel1->Visible = false;
                btnOk->Visible = false;
                btnRetour->Visible = false;
                panel1->Visible = false;
                label3->Visible = false;
            }
        }
        if (isEchanged == false) {
            //debugage
            cout << "Chambres a envoyer, prete";
            panel1->Visible = false;
            flowLayoutPanel1->Visible = true;
        }
    }
}
private: System::Void labelPrenom_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //Bouton d'ANNULATION DE RESERVATION
private: System::Void btnAnnul_Click(System::Object^ sender, System::EventArgs^ e)   {
    textBoxStats->Visible = false;
    //Verification que le tableau concorde bien avec la bdd
    RenduChambres();
    //Condition pour que en appuyant une seule fois sur Annuler la liste ne soit faite qu'une fois
    flowLayoutPanel1->Controls->Clear();
    //Rend invisible le panel qui contient les textBox
    panel1->Visible = false;
    //Rend invisible la liste
    listView1->Visible = false;
    //Changement du label du nom
    labelNom->Text = "";
    //Creation des checkbox
    for (int i = 0; i < chambres.size(); ++i) {
        // Verification que les chambres ne sont pas libres
        if (chambres[i].isReserved == true) {
            System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
            checkBox->Text = "Numero : " + chambres[i].numero.ToString();
            checkBox->AutoSize = true;
            checkBox->Name = L"checkBox" + i;
            //Ajout de la meme methode sur chaque checkbox
            checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);

            // Ajouter la CheckBox à une cellule de TableLayoutPanel
            flowLayoutPanel1->Controls->Add(checkBox);
        }
    }
    //Affichage des chambres réservées quand utilisateur
    //click sur bouton d'annulation
    flowLayoutPanel1->Visible = true;
    label3->Visible = true;
    label3->Text = "Chambres réservées : ";
    btnOk->Text = "Suivant";
    btnRetour->Text = "Retour";
    btnOk->Visible = true;
    btnRetour->Visible = true;
    textBoxNom->Text = "";
    textBoxPrenom->Text = "";
    textBoxNom->BackColor = System::Drawing::Color::White;
    textBoxPrenom->BackColor = System::Drawing::Color::White;
}
       //Modifier la réservation de la chambre
       //ENVOYER la réservation à une autre chambre
private: System::Void btnChanger_Click(System::Object^ sender, System::EventArgs^ e) {
    //
    textBoxStats->Visible = false;
    //Verification que le tableau concorde bien avec la bdd
    RenduChambres();
    //Condition pour que en appuyant une seule fois sur Echanger la liste ne soit faite qu'une fois
    flowLayoutPanel1->Controls->Clear();
    //Rend invisible le panel qui contient les textBox et la liste
    panel1->Visible = false;
    //Rendre invisible la liste
    listView1->Visible = false;
        //Creation des checkbox
            for (int i = 0; i < chambres.size(); ++i) {
            // Verification que les chambres ne sont pas libres
            if (chambres[i].isReserved == true) {
                System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
                checkBox->Text = "Numero : " + chambres[i].numero.ToString();
                checkBox->AutoSize = true;
                checkBox->Name = L"checkBox" + i;
                //Ajout de la meme methode sur chaque checkbox
                checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);

                // Ajouter la CheckBox à une cellule de TableLayoutPanel
                flowLayoutPanel1->Controls->Add(checkBox);
            }
        }
        //Affichage des chambres réservées quand utilisateur
        //click sur bouton d'annulation
        flowLayoutPanel1->Visible = true;
        label3->Visible = true;
        label3->Text = "Chambres à envoyer : ";
        btnOk->Text = "Suivant";
        btnRetour->Text = "Retour";
        btnOk->Visible = true;
        btnRetour->Visible = true;
}
       //Boutton pour lister toutes les réservations
private: System::Void btnListe_Click(System::Object^ sender, System::EventArgs^ e) {
    //utilisation d'une valeur global booléenne pour rénitialiser la liste a chaque click sur btn Liste
    listPage = false;
    ClickList();
    textBoxStats->Visible = false;
    textBoxNom->Visible = false;
    textBoxPrenom->Visible = false;
    btnOk->Visible = false;
}
       //Boutton pour QUITTER L'APPLICATION
private: System::Void btnQuitter_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}           
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
       //TROUVER LES RESERVATION PAR UNE VALEUR
private: System::Void btnTrouver_Click(System::Object^ sender, System::EventArgs^ e) {
    //Modification graphique quand utilisateur appuie sur bouton Liste
    textBoxStats->Visible = false;
    panel1->Visible = true;
    flowLayoutPanel1->Visible = false;
    labelNom->Visible = true;
    textBoxPrenom->Visible = false;
    textBoxNom->Visible = true;
    labelNom->Text = "Trouver : ";
    btnOk->Visible = true;
    btnOk->Text = "Suivant";
    btnRetour->Visible = true;
    btnRetour->Text = "Retour";
    listView1->Visible = false;  
}
    //ECHANGER RESERVATION AVEC CHAMBRE LIBRE
private: System::Void btnEchanger_Click(System::Object^ sender, System::EventArgs^ e) {
    //Recyclage de la valeur boolenne pour limiter a deux fois apparition des checkbox
    listPage = false;
    //MMise a jour graphique
    panel1->Visible = false;
    //Verification que le tableau concorde bien avec la bdd
    RenduChambres();    
    //Clear sur le Layout Panel pour ne pas re ecrire les box a chaque click
    flowLayoutPanel1->Controls->Clear();
    //Rend invisible la liste
    listView1->Visible = false;
    //Creation des checkbox
    for (int i = 0; i < chambres.size(); ++i) {
        // Verification que les chambres sont bien libre
        if (chambres[i].isReserved == true) {
            System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
            checkBox->Text = "Numero : " + chambres[i].numero.ToString();
            checkBox->AutoSize = true;
            checkBox->Name = L"checkBox" + i;
            //Ajout d'une methode sur chaque checkbox
            checkBox->CheckedChanged += gcnew EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);
            // Ajouter la CheckBox à une cellule de TableLayoutPanel
            flowLayoutPanel1->Controls->Add(checkBox);
        }
    }
    //Etre sur que le panel qui contient les box soit visible
    flowLayoutPanel1->Visible = true;
    //label titre est visible
    label3->Visible = true;
    //text du label
    label3->Text = "Réservation :";
    //Valeur text du bouton suivant
    btnOk->Text = "Suivant";
    //Valeur text du bouton Retour
    btnRetour->Text = "Retour";
    //Affichage du bouton suivant
    btnOk->Visible = true;
    //Affichage du bouton retour
    btnRetour->Visible = true;
    //Cacher le btnStats
    textBoxStats->Visible = false;
}
private: System::Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
    //Peu de choses sont visible avec ce bouton
    panel1->Visible = false;
    flowLayoutPanel1->Visible = false;
    labelNom->Visible = false;
    textBoxPrenom->Visible = false;
    textBoxNom->Visible = false;
    labelNom->Text = "";
    btnOk->Visible = false;
    btnRetour->Visible = false;
    listView1->Visible = false;
    labelPrenom->Visible = false;
    label3->Visible = false;

    int compteur = 0;
    for (int i = 0; i < chambres.size(); i++) {
        if (chambres[i].isReserved == true) {
            compteur++;
        }
    }

    cout << compteur * 10;
    textBoxStats->Visible = true;
    textBoxStats->Text = "Il y a actuellement " + compteur * 10 + "% des chambres réservées";
    btnRetour->Visible = true;
    btnRetour->Text = "Retour";
    panel1->Visible = true;
}
private: System::Void textBoxStats_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

