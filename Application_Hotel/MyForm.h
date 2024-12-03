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
			
            // Ajouter des cases à cocher à la table
            for (int i = 0; i < chambres.size(); ++i) {
                // Créer une CheckBox
                System::Windows::Forms::CheckBox^ checkBox = gcnew System::Windows::Forms::CheckBox();
                checkBox->Text = "Numero : " + chambres[i].numero.ToString();
                checkBox->AutoSize = true;  

                // Ajouter la CheckBox à une cellule de TableLayoutPanel
                flowLayoutPanel1->Controls->Add(checkBox);
            }


        
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
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;









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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // btnGo
            // 
            this->btnGo->BackColor = System::Drawing::Color::Bisque;
            this->btnGo->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnGo->FlatAppearance->BorderSize = 4;
            this->btnGo->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnGo->Location = System::Drawing::Point(900, 169);
            this->btnGo->Name = L"btnGo";
            this->btnGo->Size = System::Drawing::Size(118, 57);
            this->btnGo->TabIndex = 1;
            this->btnGo->Text = L"Réserver";
            this->btnGo->UseVisualStyleBackColor = false;
            this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
            this->flowLayoutPanel1->Location = System::Drawing::Point(889, 492);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(249, 200);
            this->flowLayoutPanel1->TabIndex = 3;
            this->flowLayoutPanel1->Visible = false;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint_1);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(132, 158);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(738, 534);
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
            // 
            // label1
            // 
            this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(347, 29);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(254, 105);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Hotel Yolo";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(929, 75);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(153, 59);
            this->label2->TabIndex = 7;
            this->label2->Text = L"Menu : ";
            // 
            // btnAnnul
            // 
            this->btnAnnul->BackColor = System::Drawing::Color::Bisque;
            this->btnAnnul->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnAnnul->FlatAppearance->BorderSize = 4;
            this->btnAnnul->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAnnul->Location = System::Drawing::Point(1047, 169);
            this->btnAnnul->Name = L"btnAnnul";
            this->btnAnnul->Size = System::Drawing::Size(118, 57);
            this->btnAnnul->TabIndex = 8;
            this->btnAnnul->Text = L"Annuler";
            this->btnAnnul->UseVisualStyleBackColor = false;
            // 
            // btnModify
            // 
            this->btnModify->BackColor = System::Drawing::Color::Bisque;
            this->btnModify->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->btnModify->FlatAppearance->BorderSize = 4;
            this->btnModify->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnModify->Location = System::Drawing::Point(900, 242);
            this->btnModify->Name = L"btnModify";
            this->btnModify->Size = System::Drawing::Size(118, 57);
            this->btnModify->TabIndex = 9;
            this->btnModify->Text = L"Modifier";
            this->btnModify->UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Bisque;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button1->FlatAppearance->BorderSize = 4;
            this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(1047, 242);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(118, 57);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Changer";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Bisque;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button2->FlatAppearance->BorderSize = 4;
            this->button2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(900, 314);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(118, 57);
            this->button2->TabIndex = 11;
            this->button2->Text = L"Liste";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Bisque;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button3->FlatAppearance->BorderSize = 4;
            this->button3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(1047, 314);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(118, 57);
            this->button3->TabIndex = 12;
            this->button3->Text = L"Trouver";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // TextTest
            // 
            this->TextTest->Location = System::Drawing::Point(192, 367);
            this->TextTest->Name = L"TextTest";
            this->TextTest->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
            this->TextTest->Size = System::Drawing::Size(661, 306);
            this->TextTest->TabIndex = 3;
            this->TextTest->Text = L"";
            this->TextTest->Visible = false;
            this->TextTest->TextChanged += gcnew System::EventHandler(this, &MyForm::TextTest_TextChanged);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::OldLace;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1214, 761);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->btnModify);
            this->Controls->Add(this->btnAnnul);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->flowLayoutPanel1);
            this->Controls->Add(this->btnGo);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        
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
};
}
