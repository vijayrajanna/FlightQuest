#pragma once

namespace FlightQuestChallenge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	
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
	private: System::Windows::Forms::FolderBrowserDialog^  browseFolder;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  submitButton;
	private: OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^  outPut;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->browseFolder = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->outPut = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(43, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(197, 63);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(523, 40);
			this->textBox1->TabIndex = 1;
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->submitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(747, 63);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(108, 40);
			this->submitButton->TabIndex = 2;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &Form1::submitButton_Click);
			// 
			// outPut
			// 
			this->outPut->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->outPut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->outPut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->outPut->Location = System::Drawing::Point(43, 123);
			this->outPut->Multiline = true;
			this->outPut->Name = L"outPut";
			this->outPut->ReadOnly = true;
			this->outPut->Size = System::Drawing::Size(432, 244);
			this->outPut->TabIndex = 3;
			this->outPut->UseWaitCursor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1089, 544);
			this->Controls->Add(this->outPut);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1105, 584);
			this->MinimumSize = System::Drawing::Size(1105, 584);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Flight Quest Challenge";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				  Stream^ myStream;
				  openFileDialog1 = gcnew OpenFileDialog;

				  openFileDialog1->InitialDirectory = "c:\\";
				  openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				  openFileDialog1->FilterIndex = 2;
				  openFileDialog1->RestoreDirectory = true;

				  if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				  {
						    String^ submissionFile =  openFileDialog1->FileName ;
							textBox1->Text = submissionFile;
				  }
		}
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				Process^ cmdProcess = gcnew Process;
				cmdProcess->StartInfo->FileName = "J:\\Projects\\Git\\FlightQuest\\Test_Data\\FQ2_Simulator_v2.0.1\\FQ2_Simulator_v2.0.1\\FlightQuest_Simulator_Executable\\RunSimulation.exe";
				cmdProcess->StartInfo->UseShellExecute = false;
				cmdProcess->StartInfo->CreateNoWindow = true;
				cmdProcess->StartInfo->Arguments = openFileDialog1->FileName;
				cmdProcess->StartInfo->RedirectStandardOutput = true;
				cmdProcess->Start();	

				StreamReader^ myStreamReader = cmdProcess->StandardOutput;
				String^ myString ;

				while ( myString = myStreamReader->ReadLine() )
				{
					outPut->Text += myString ;
				}


				//String^ myString = myStreamReader->ReadToEnd();
				cmdProcess->WaitForExit();

				//outPut->Text = myString ;
				cmdProcess->Close();
			 }
};
}

