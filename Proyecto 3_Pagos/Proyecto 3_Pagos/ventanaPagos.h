#pragma once
#include "Cliente.cpp"
#include <msclr/marshal_cppstd.h>

using namespace std;

namespace Proyecto3Pagos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ventanaPagos
	/// </summary>
	public ref class ventanaPagos : public System::Windows::Forms::Form
	{
	public:

		ventanaPagos(void)
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
		~ventanaPagos()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			System::Windows::Forms::Button^  button1;
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(137, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pagos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->Location = System::Drawing::Point(12, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Codigo de reservacion:";
			// 
			// button1
			// 
			button1->Location = System::Drawing::Point(142, 162);
			button1->Name = L"button1";
			button1->Size = System::Drawing::Size(75, 23);
			button1->TabIndex = 4;
			button1->Text = L"Pagar";
			button1->UseVisualStyleBackColor = true;
			button1->Click += gcnew System::EventHandler(this, &ventanaPagos::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// ventanaPagos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 215);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ventanaPagos";
			this->Text = L"ventanaPagos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ reserva = this -> textBox1 -> Text;
	string reservaStr = msclr::interop::marshal_as<string >(reserva);

	enviarInfo(54000, reservaStr);
}
};
}
