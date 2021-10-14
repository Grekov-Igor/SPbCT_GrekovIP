#pragma once

namespace ЛР15инд {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пример: S=78*(a/b+c/d) ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"c = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"d =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(59, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(59, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(59, 203);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(261, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(302, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 46);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Вычилсить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 280);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, c, d, s;
		try {
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			c = Convert::ToDouble(textBox3->Text);
			d = Convert::ToDouble(textBox4->Text);
			s = 78 * (a / b + c / d);
			label6->Text = "Ответ: " + Convert::ToString(s);
		}
		catch (System::FormatException^ ex) {
			MessageBox::Show(
				"Надо ввести исходные данные", "ОШИБКА!!!!!!!!!",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			textBox1->Focus();
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox1->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox2->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox3->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox4->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
};
}
