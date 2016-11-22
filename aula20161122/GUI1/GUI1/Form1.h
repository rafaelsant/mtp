#pragma once

namespace GUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txb_USER;
	private: System::Windows::Forms::CheckBox^  ckb_NOME;
	protected: 


	public: System::Windows::Forms::Label^  lbl_MENSAGEM;
	private: 

	private: 

	private: 



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::CheckBox^  ckb_IDADE;

	private: System::Windows::Forms::ComboBox^  comboBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txb_USER = (gcnew System::Windows::Forms::TextBox());
			this->ckb_NOME = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_MENSAGEM = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->ckb_IDADE = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Chiller", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(74, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"666";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txb_USER
			// 
			this->txb_USER->Location = System::Drawing::Point(74, 118);
			this->txb_USER->Name = L"txb_USER";
			this->txb_USER->Size = System::Drawing::Size(318, 20);
			this->txb_USER->TabIndex = 1;
			// 
			// ckb_NOME
			// 
			this->ckb_NOME->AutoSize = true;
			this->ckb_NOME->Location = System::Drawing::Point(74, 170);
			this->ckb_NOME->Name = L"ckb_NOME";
			this->ckb_NOME->Size = System::Drawing::Size(54, 17);
			this->ckb_NOME->TabIndex = 2;
			this->ckb_NOME->Text = L"Nome";
			this->ckb_NOME->UseVisualStyleBackColor = true;
			// 
			// lbl_MENSAGEM
			// 
			this->lbl_MENSAGEM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_MENSAGEM->Location = System::Drawing::Point(71, 9);
			this->lbl_MENSAGEM->Name = L"lbl_MENSAGEM";
			this->lbl_MENSAGEM->Size = System::Drawing::Size(647, 89);
			this->lbl_MENSAGEM->TabIndex = 3;
			this->lbl_MENSAGEM->Text = L"Aguardando...";
			this->lbl_MENSAGEM->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(419, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(448, 327);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(247, 216);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(115, 157);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cores";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 88);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Verde";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 65);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Vermelho";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 42);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Azul";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// ckb_IDADE
			// 
			this->ckb_IDADE->AutoSize = true;
			this->ckb_IDADE->Location = System::Drawing::Point(74, 193);
			this->ckb_IDADE->Name = L"ckb_IDADE";
			this->ckb_IDADE->Size = System::Drawing::Size(53, 17);
			this->ckb_IDADE->TabIndex = 8;
			this->ckb_IDADE->Text = L"Idade";
			this->ckb_IDADE->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Ração", L"Cabeças", L"Touros", L"Enxofre"});
			this->comboBox2->Location = System::Drawing::Point(74, 258);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(133, 21);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->Text = L"Selecione uma opção";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 501);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->ckb_IDADE);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbl_MENSAGEM);
			this->Controls->Add(this->ckb_NOME);
			this->Controls->Add(this->txb_USER);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"MrPickles";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ckb_NOME->Checked)
				 lbl_MENSAGEM->Text = lbl_MENSAGEM->Text + "Mr Pickles";
				 if(ckb_IDADE->Checked)
				 lbl_MENSAGEM->Text = lbl_MENSAGEM->Text + " 666";
				 /*switch(comboBox2->SelectedIndex){
				 case 0: ... break;
				 }*/
				 if(
					 lbl_MENSAGEM->Text = lbl_MENSAGEM->Text + " gosta mais de ";
		 }
};
}

