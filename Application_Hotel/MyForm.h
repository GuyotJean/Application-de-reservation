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
			//
			//TODO: Add the constructor code here
			//

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ btnGo;
    private: System::Windows::Forms::Button^ btnBack;
    private: System::Windows::Forms::RichTextBox^ TextTest;


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
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btnGo = (gcnew System::Windows::Forms::Button());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            this->TextTest = (gcnew System::Windows::Forms::RichTextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(192, 15);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(661, 334);
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // btnGo
            // 
            this->btnGo->Location = System::Drawing::Point(93, 712);
            this->btnGo->Margin = System::Windows::Forms::Padding(4);
            this->btnGo->Name = L"btnGo";
            this->btnGo->Size = System::Drawing::Size(191, 90);
            this->btnGo->TabIndex = 1;
            this->btnGo->Text = L"Go";
            this->btnGo->UseVisualStyleBackColor = true;
            this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // btnBack
            // 
            this->btnBack->Location = System::Drawing::Point(762, 680);
            this->btnBack->Margin = System::Windows::Forms::Padding(4);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(191, 90);
            this->btnBack->TabIndex = 2;
            this->btnBack->Text = L"Back";
            this->btnBack->UseVisualStyleBackColor = true;
            this->btnBack->Visible = false;
            this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
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
            this->ClientSize = System::Drawing::Size(1016, 897);
            this->Controls->Add(this->TextTest);
            this->Controls->Add(this->btnBack);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->btnGo);
            this->Margin = System::Windows::Forms::Padding(4);
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
        btnGo->Visible = false;
        btnBack->Visible = true;
        TextTest->Visible = true;
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
        btnGo->Visible = true;
        btnBack->Visible = false;
        TextTest->Visible = false;
    }
    private: System::Void TextTest_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
