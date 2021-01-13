#pragma once

#include <string>
using namespace std;

void writeFile(string fileName, System::String^ data);

namespace redditRequest {

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

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(108, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(168, 20);
			this->textBox3->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 20);
			this->textBox4->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(108, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(168, 20);
			this->textBox5->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(108, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(168, 20);
			this->textBox6->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(108, 168);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(168, 20);
			this->textBox7->TabIndex = 0;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(108, 194);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(168, 20);
			this->textBox8->TabIndex = 0;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(108, 220);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(168, 20);
			this->textBox9->TabIndex = 0;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(108, 246);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(168, 20);
			this->textBox10->TabIndex = 0;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(394, 12);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(168, 20);
			this->textBox11->TabIndex = 0;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(394, 38);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(168, 20);
			this->textBox12->TabIndex = 0;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(394, 64);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(168, 20);
			this->textBox13->TabIndex = 0;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(394, 90);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(168, 20);
			this->textBox14->TabIndex = 0;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(394, 116);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(168, 20);
			this->textBox15->TabIndex = 0;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(394, 142);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(168, 20);
			this->textBox16->TabIndex = 0;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(394, 168);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(168, 20);
			this->textBox17->TabIndex = 0;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(394, 194);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(168, 20);
			this->textBox18->TabIndex = 0;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(394, 220);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(168, 20);
			this->textBox19->TabIndex = 0;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(394, 246);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(168, 20);
			this->textBox20->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Winners Semi A :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Winners Semi B :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Winners Semi C :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Winners Semi D :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Losers Semi A :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Losers Semi B :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Losers Semi C :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Losers Semi D :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Winners Final A :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 249);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Winners Final B :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(289, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Losers Quarters A :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(289, 41);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Losers Quarters B :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(289, 67);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Losers Quarters C :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(289, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Losers Quarters D :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(289, 119);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Losers Semis A :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(289, 145);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(85, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Losers Semis B :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(289, 171);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(79, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Losers Final A :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(289, 197);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(79, 13);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Losers Final B :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(289, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Grand Final A :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(289, 249);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(77, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Grand Final B :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(145, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 318);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Score Tracker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	writeFile(string("Winners Semi A.txt"), this->textBox1->Text);
	writeFile(string("Winners Semi B.txt"), this->textBox2->Text);
	writeFile(string("Winners Semi C.txt"), this->textBox3->Text);
	writeFile(string("Winners Semi D.txt"), this->textBox4->Text);
	writeFile(string("Losers Semi A.txt"), this->textBox5->Text);
	writeFile(string("Losers Semi B.txt"), this->textBox6->Text);
	writeFile(string("Losers Semi C.txt"), this->textBox7->Text);
	writeFile(string("Losers Semi D.txt"), this->textBox8->Text);
	writeFile(string("Winners Final A.txt"), this->textBox9->Text);
	writeFile(string("Winners Final B.txt"), this->textBox10->Text);
	writeFile(string("Losers Quarters A.txt"), this->textBox11->Text);
	writeFile(string("Losers Quarters B.txt"), this->textBox12->Text);
	writeFile(string("Losers Quarters C.txt"), this->textBox13->Text);
	writeFile(string("Losers Quarters D.txt"), this->textBox14->Text);
	writeFile(string("Losers Semis A.txt"), this->textBox15->Text);
	writeFile(string("Losers Semis B.txt"), this->textBox16->Text);
	writeFile(string("Losers Final A.txt"), this->textBox17->Text);
	writeFile(string("Losers Final B.txt"), this->textBox18->Text);
	writeFile(string("Grand Final A.txt"), this->textBox19->Text);
	writeFile(string("Grand Final A.txt"), this->textBox20->Text);

}
};
}
