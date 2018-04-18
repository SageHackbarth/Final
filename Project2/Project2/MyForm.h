#pragma once

namespace Project2 {

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
	private: System::Windows::Forms::Button^  restartBut;
	private: System::Windows::Forms::Label^  Description;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Button^  option1;
	private: System::Windows::Forms::Button^  option2;
	private: System::Windows::Forms::Button^  option3;
	private: System::Windows::Forms::Button^  option4;
	private: System::Windows::Forms::Button^  option5;
	private: System::Windows::Forms::Button^  option6;
	protected:

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
			this->restartBut = (gcnew System::Windows::Forms::Button());
			this->Description = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->option1 = (gcnew System::Windows::Forms::Button());
			this->option2 = (gcnew System::Windows::Forms::Button());
			this->option3 = (gcnew System::Windows::Forms::Button());
			this->option4 = (gcnew System::Windows::Forms::Button());
			this->option5 = (gcnew System::Windows::Forms::Button());
			this->option6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// restartBut
			// 
			this->restartBut->Location = System::Drawing::Point(148, 300);
			this->restartBut->Name = L"restartBut";
			this->restartBut->Size = System::Drawing::Size(75, 23);
			this->restartBut->TabIndex = 0;
			this->restartBut->Text = L"&Restart";
			this->restartBut->UseVisualStyleBackColor = true;
			this->restartBut->Click += gcnew System::EventHandler(this, &MyForm::restartBut_Click);
			// 
			// Description
			// 
			this->Description->AutoSize = true;
			this->Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->Location = System::Drawing::Point(118, 52);
			this->Description->Name = L"Description";
			this->Description->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Description->Size = System::Drawing::Size(129, 16);
			this->Description->TabIndex = 1;
			this->Description->Text = L"Match Two of the Six";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(58, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(249, 33);
			this->lblTitle->TabIndex = 2;
			this->lblTitle->Text = L"Scratch Off Game";
			// 
			// option1
			// 
			this->option1->Location = System::Drawing::Point(12, 78);
			this->option1->Name = L"option1";
			this->option1->Size = System::Drawing::Size(97, 81);
			this->option1->TabIndex = 3;
			this->option1->Text = L"Box 1";
			this->option1->UseVisualStyleBackColor = true;
			// 
			// option2
			// 
			this->option2->Location = System::Drawing::Point(137, 78);
			this->option2->Name = L"option2";
			this->option2->Size = System::Drawing::Size(97, 81);
			this->option2->TabIndex = 4;
			this->option2->Text = L"Box 2";
			this->option2->UseVisualStyleBackColor = true;
			// 
			// option3
			// 
			this->option3->Location = System::Drawing::Point(260, 78);
			this->option3->Name = L"option3";
			this->option3->Size = System::Drawing::Size(97, 81);
			this->option3->TabIndex = 5;
			this->option3->Text = L"Box 3";
			this->option3->UseVisualStyleBackColor = true;
			// 
			// option4
			// 
			this->option4->Location = System::Drawing::Point(12, 192);
			this->option4->Name = L"option4";
			this->option4->Size = System::Drawing::Size(97, 81);
			this->option4->TabIndex = 6;
			this->option4->Text = L"Box 4";
			this->option4->UseVisualStyleBackColor = true;
			// 
			// option5
			// 
			this->option5->Location = System::Drawing::Point(137, 192);
			this->option5->Name = L"option5";
			this->option5->Size = System::Drawing::Size(97, 81);
			this->option5->TabIndex = 7;
			this->option5->Text = L"Box 5";
			this->option5->UseVisualStyleBackColor = true;
			// 
			// option6
			// 
			this->option6->Location = System::Drawing::Point(260, 192);
			this->option6->Name = L"option6";
			this->option6->Size = System::Drawing::Size(97, 81);
			this->option6->TabIndex = 8;
			this->option6->Text = L"Box 6";
			this->option6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 335);
			this->Controls->Add(this->option6);
			this->Controls->Add(this->option5);
			this->Controls->Add(this->option4);
			this->Controls->Add(this->option3);
			this->Controls->Add(this->option2);
			this->Controls->Add(this->option1);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->restartBut);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void restartBut_Click(System::Object^  sender, System::EventArgs^  e) {
		option1->Text = "Box 1";
		option2->Text = "Box 2";
		option3->Text = "Box 3";
		option4->Text = "Box 4";
		option5->Text = "Box 5";
		option6->Text = "Box 6";
	}
};
}
