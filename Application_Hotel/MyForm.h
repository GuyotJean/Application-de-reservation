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
    private: System::Windows::Forms::Button^ btnTrier;
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
            this->btnTrier = (gcnew System::Windows::Forms::Button());
            this->btnStats = (gcnew System::Windows::Forms::Button());
            this->btnQuitter = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->btnOk = (gcnew System::Windows::Forms::Button());
            this->btnRetour = (gcnew System::Windows::Forms::Button());
            this->labelNom = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
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
            this->flowLayoutPanel1->Location = System::Drawing::Point(1087, 570);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(371, 134);
            this->flowLayoutPanel1->TabIndex = 3;
            this->flowLayoutPanel1->Visible = false;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint_1);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(249, 142);
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
            this->btnChanger->Text = L"Changer";
            this->btnChanger->UseVisualStyleBackColor = false;
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
            // 
            // btnTrier
            // 
            this->btnTrier->AutoSize = true;
            this->btnTrier->BackColor = System::Drawing::Color::Bisque;
            this->btnTrier->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnTrier->FlatAppearance->BorderSize = 4;
            this->btnTrier->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnTrier->Location = System::Drawing::Point(1282, 350);
            this->btnTrier->Margin = System::Windows::Forms::Padding(4);
            this->btnTrier->Name = L"btnTrier";
            this->btnTrier->Size = System::Drawing::Size(131, 54);
            this->btnTrier->TabIndex = 14;
            this->btnTrier->Text = L"Trier";
            this->btnTrier->UseVisualStyleBackColor = false;
            // 
            // btnStats
            // 
            this->btnStats->AutoSize = true;
            this->btnStats->BackColor = System::Drawing::Color::Bisque;
            this->btnStats->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnStats->FlatAppearance->BorderSize = 4;
            this->btnStats->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnStats->Location = System::Drawing::Point(1125, 430);
            this->btnStats->Margin = System::Windows::Forms::Padding(4);
            this->btnStats->Name = L"btnStats";
            this->btnStats->Size = System::Drawing::Size(131, 54);
            this->btnStats->TabIndex = 15;
            this->btnStats->Text = L"Stats";
            this->btnStats->UseVisualStyleBackColor = false;
            // 
            // btnQuitter
            // 
            this->btnQuitter->AutoSize = true;
            this->btnQuitter->BackColor = System::Drawing::Color::Bisque;
            this->btnQuitter->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnQuitter->FlatAppearance->BorderSize = 4;
            this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnQuitter->Location = System::Drawing::Point(1282, 430);
            this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
            this->btnQuitter->Name = L"btnQuitter";
            this->btnQuitter->Size = System::Drawing::Size(131, 54);
            this->btnQuitter->TabIndex = 16;
            this->btnQuitter->Text = L"Quitter";
            this->btnQuitter->UseVisualStyleBackColor = false;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(1119, 514);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(144, 32);
            this->label3->TabIndex = 17;
            this->label3->Text = L"labelMixte";
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
            this->labelNom->Location = System::Drawing::Point(36, 16);
            this->labelNom->Name = L"labelNom";
            this->labelNom->Size = System::Drawing::Size(95, 32);
            this->labelNom->TabIndex = 0;
            this->labelNom->Text = L"Nom : ";
            this->labelNom->Visible = false;
            this->labelNom->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->textBoxPrenom);
            this->panel1->Controls->Add(this->textBoxNom);
            this->panel1->Controls->Add(this->labelPrenom);
            this->panel1->Controls->Add(this->labelNom);
            this->panel1->Location = System::Drawing::Point(1099, 570);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(408, 161);
            this->panel1->TabIndex = 20;
            this->panel1->Visible = false;
            // 
            // textBoxPrenom
            // 
            this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxPrenom->Location = System::Drawing::Point(155, 102);
            this->textBoxPrenom->Name = L"textBoxPrenom";
            this->textBoxPrenom->Size = System::Drawing::Size(146, 34);
            this->textBoxPrenom->TabIndex = 3;
            // 
            // textBoxNom
            // 
            this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxNom->Location = System::Drawing::Point(155, 16);
            this->textBoxNom->Name = L"textBoxNom";
            this->textBoxNom->Size = System::Drawing::Size(146, 34);
            this->textBoxNom->TabIndex = 2;
            // 
            // labelPrenom
            // 
            this->labelPrenom->AutoSize = true;
            this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrenom->Location = System::Drawing::Point(3, 102);
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
            this->Controls->Add(this->btnQuitter);
            this->Controls->Add(this->btnStats);
            this->Controls->Add(this->btnTrier);
            this->Controls->Add(this->btnEchanger);
            this->Controls->Add(this->btnTrouver);
            this->Controls->Add(this->btnListe);
            this->Controls->Add(this->btnChanger);
            this->Controls->Add(this->btnModify);
            this->Controls->Add(this->btnAnnul);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->flowLayoutPanel1);
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
    private: System::Void OnCheckBoxCheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
           //Boutton de Réservation
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Condition pour que en appuyant une seule fois sur Réserver la liste ne soit faite qu'une fois
        if (flowLayoutPanel1->Visible == false) {
            //Creation des checkbox
            for (int i = 0; i < chambres.size(); ++i) {
                // Verification que les chambres sont bien libre
                if (chambres[i].isReserved == false) {
                    System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
                    checkBox->Text = "Numero : " + chambres[i].numero.ToString();
                    checkBox->AutoSize = true;
                    checkBox->Name = L"checkBox" + i;

                    checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckBoxCheckedChanged);

                    // Ajouter la CheckBox à une cellule de TableLayoutPanel
                    flowLayoutPanel1->Controls->Add(checkBox);
                }
            }
        }


        //Affichage des chambres a réserver
        flowLayoutPanel1->Visible = true;
        label3->Visible = true;
        label3->Text = "Chambres disponibles : ";
        btnOk->Text = "Suivant";
        btnRetour->Text = "Retour";
        btnOk->Visible = true;
        btnRetour->Visible = true;

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
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //Bouton de validation
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
    bool validateReserv = false;
    if (labelNom->Visible == true && textBoxNom->Text != "" && textBoxPrenom->Text != "") {
        for (int i = 0; i < chambres.size(); i++) {
            if (chambres[i].isReserved == true && chambres[i].nom == "") {
                chambres[i].prenom = msclr::interop::marshal_as<std::string>(textBoxPrenom->Text);
                chambres[i].nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
    
                doReserv(i);
                validateReserv = true;
            }
        }
        flowLayoutPanel1->Controls->Clear();
        labelNom->Visible = false;
        labelPrenom->Visible = false;
        labelNom->Text = "";
        labelPrenom->Text = "";
        panel1->Visible = false;
        label3->Visible = false;
        btnOk->Visible = false;
        btnRetour->Visible = false;
    }

        
    //Modification graphique pour la deuxieme partie de validation pour faire une reservation
    if (validateReserv == false) {
        labelNom->Visible = true;
        labelPrenom->Visible = true;
        labelNom->Text = "Nom : ";
        labelPrenom->Text = "Prenom : ";
        flowLayoutPanel1->Visible = false;
        panel1->Visible = true;
        btnOk->Text = "Valider";
    }
}
private: System::Void labelPrenom_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
