#include "MelodiEkrani.h"
#include "MelodiSil.h"
#include <Windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <locale.h>
#include <set>

#pragma once

namespace ElektronikGitar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO::Ports;
	using namespace msclr::interop;

	/// <summary>
	/// Gitar için özet
	/// </summary>
	public ref class Gitar : public System::Windows::Forms::Form
	{
	public:
		Gitar(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Gitar()
		{
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::Label^ lblPortSec;
	protected:

	protected:


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnMelodiEkle;
	private: System::Windows::Forms::FlowLayoutPanel^ btnPanel;
	private: System::Windows::Forms::Label^ lblYerTutan;
	private: System::Windows::Forms::Panel^ panel_melodiEkleSil;
	private: System::Windows::Forms::Button^ btnMelodiSil;
	private: System::Windows::Forms::CheckBox^ checkBoxDuzenle;
	private: System::Windows::Forms::ImageList^ imageList;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;



























	protected:

	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gitar::typeid));
			this->lblPortSec = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnMelodiEkle = (gcnew System::Windows::Forms::Button());
			this->btnPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->lblYerTutan = (gcnew System::Windows::Forms::Label());
			this->checkBoxDuzenle = (gcnew System::Windows::Forms::CheckBox());
			this->panel_melodiEkleSil = (gcnew System::Windows::Forms::Panel());
			this->btnMelodiSil = (gcnew System::Windows::Forms::Button());
			this->imageList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnPanel->SuspendLayout();
			this->panel_melodiEkleSil->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblPortSec
			// 
			this->lblPortSec->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->lblPortSec->ForeColor = System::Drawing::Color::Black;
			this->lblPortSec->Location = System::Drawing::Point(3, 0);
			this->lblPortSec->Name = L"lblPortSec";
			this->lblPortSec->Size = System::Drawing::Size(98, 28);
			this->lblPortSec->TabIndex = 1;
			this->lblPortSec->Text = L"Port Seçin:";
			this->lblPortSec->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(107, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(86, 26);
			this->comboBox1->TabIndex = 2;
			// 
			// btnMelodiEkle
			// 
			this->btnMelodiEkle->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnMelodiEkle->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMelodiEkle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMelodiEkle.Image")));
			this->btnMelodiEkle->Location = System::Drawing::Point(0, 0);
			this->btnMelodiEkle->Name = L"btnMelodiEkle";
			this->btnMelodiEkle->Size = System::Drawing::Size(120, 32);
			this->btnMelodiEkle->TabIndex = 0;
			this->btnMelodiEkle->Text = L"MELODÝ EKLE";
			this->btnMelodiEkle->UseVisualStyleBackColor = true;
			this->btnMelodiEkle->Click += gcnew System::EventHandler(this, &Gitar::btnMelodiEkle_Click);
			// 
			// btnPanel
			// 
			this->btnPanel->BackColor = System::Drawing::Color::LightGray;
			this->btnPanel->Controls->Add(this->lblPortSec);
			this->btnPanel->Controls->Add(this->comboBox1);
			this->btnPanel->Controls->Add(this->lblYerTutan);
			this->btnPanel->Controls->Add(this->checkBoxDuzenle);
			this->btnPanel->Controls->Add(this->panel_melodiEkleSil);
			this->btnPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnPanel->ForeColor = System::Drawing::Color::Gray;
			this->btnPanel->Location = System::Drawing::Point(0, 0);
			this->btnPanel->Name = L"btnPanel";
			this->btnPanel->Size = System::Drawing::Size(857, 661);
			this->btnPanel->TabIndex = 3;
			// 
			// lblYerTutan
			// 
			this->lblYerTutan->BackColor = System::Drawing::Color::LightGray;
			this->lblYerTutan->Enabled = false;
			this->lblYerTutan->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->lblYerTutan->ForeColor = System::Drawing::Color::Gray;
			this->lblYerTutan->Location = System::Drawing::Point(199, 0);
			this->lblYerTutan->Name = L"lblYerTutan";
			this->lblYerTutan->Size = System::Drawing::Size(563, 28);
			this->lblYerTutan->TabIndex = 4;
			this->lblYerTutan->Text = L"Düzenlenecek Melodiyi Seçiniz";
			this->lblYerTutan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBoxDuzenle
			// 
			this->checkBoxDuzenle->Font = (gcnew System::Drawing::Font(L"Verdana", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->checkBoxDuzenle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->checkBoxDuzenle->Location = System::Drawing::Point(768, 3);
			this->checkBoxDuzenle->Name = L"checkBoxDuzenle";
			this->checkBoxDuzenle->Size = System::Drawing::Size(85, 28);
			this->checkBoxDuzenle->TabIndex = 6;
			this->checkBoxDuzenle->Text = L"Düzenle";
			this->checkBoxDuzenle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxDuzenle->UseVisualStyleBackColor = true;
			this->checkBoxDuzenle->CheckedChanged += gcnew System::EventHandler(this, &Gitar::checkBoxDuzenle_CheckedChanged);
			// 
			// panel_melodiEkleSil
			// 
			this->panel_melodiEkleSil->Controls->Add(this->btnMelodiEkle);
			this->panel_melodiEkleSil->Controls->Add(this->btnMelodiSil);
			this->panel_melodiEkleSil->Location = System::Drawing::Point(3, 37);
			this->panel_melodiEkleSil->Name = L"panel_melodiEkleSil";
			this->panel_melodiEkleSil->Size = System::Drawing::Size(120, 64);
			this->panel_melodiEkleSil->TabIndex = 5;
			// 
			// btnMelodiSil
			// 
			this->btnMelodiSil->Font = (gcnew System::Drawing::Font(L"Verdana", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnMelodiSil->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMelodiSil->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMelodiSil.Image")));
			this->btnMelodiSil->Location = System::Drawing::Point(0, 31);
			this->btnMelodiSil->Name = L"btnMelodiSil";
			this->btnMelodiSil->Size = System::Drawing::Size(120, 32);
			this->btnMelodiSil->TabIndex = 0;
			this->btnMelodiSil->Text = L"MELODÝ SÝL";
			this->btnMelodiSil->UseVisualStyleBackColor = true;
			this->btnMelodiSil->Click += gcnew System::EventHandler(this, &Gitar::btnMelodiSil_Click);
			// 
			// imageList
			// 
			this->imageList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList.ImageStream")));
			this->imageList->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList->Images->SetKeyName(0, L"EKLE.png");
			this->imageList->Images->SetKeyName(1, L"SÝL.png");
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"output-onlinepngtools.png");
			// 
			// Gitar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(857, 661);
			this->Controls->Add(this->btnPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(280, 207);
			this->Name = L"Gitar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Melodiler: Gitar";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Gitar::Gitar_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Gitar::Gitar_Load);
			this->Resize += gcnew System::EventHandler(this, &Gitar::Gitar_Resize);
			this->btnPanel->ResumeLayout(false);
			this->panel_melodiEkleSil->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		MelodiEkrani^ melodiEkrani = gcnew MelodiEkrani();
		MelodiSil^ melodiSil = gcnew MelodiSil();
		int ekleSay = 0;
		int silSay = 0;

	bool ozelKarakterVarMi(String^ sarki) {
		for each (char s in sarki) {
			if (s == '"' || s == '\\' || s == '/' || s == ':' || s == '?' || s == '<' || s == '>' || s == '|') {
				return true;
			}
		}
		return false;
	}

	bool ayniAddaVarMi(String^ sarki) {

		ifstream fin("arduino/txts/_butonlar.txt");
		string buttonname;
		while (getline(fin, buttonname)) {
			if (buttonname == msclr::interop::marshal_as<std::string>(sarki)) {
				fin.close();
				return true;
			}
		}
		fin.close();
		return false;
	}
		
	void yenile() {
		btnPanel->Controls->Clear();
		btnPanel->Controls->Add(lblPortSec);
		btnPanel->Controls->Add(comboBox1);
		btnPanel->Controls->Add(lblYerTutan);
		//btnPanel->Controls->Add(checkBoxDuzenle);
		ifstream fin("arduino/txts/_butonlar.txt");
		string buttonname;
		while (getline(fin, buttonname)) {
			Button^ button2 = gcnew System::Windows::Forms::Button();
			this->Controls->Add(button2);
			button2->Size = System::Drawing::Size(120, 64);
			//button2->AutoSize = true;
			button2->Image = imageList1->Images[0];
			button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowOnly;
			button2->Text = marshal_as<String^>(buttonname);
			button2->ForeColor = System::Drawing::SystemColors::Control;
			button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			button2->Click += gcnew System::EventHandler(this, &Gitar::btnClick);
			btnPanel->Controls->Add(button2);
		}
		btnPanel->Controls->Add(panel_melodiEkleSil);
		fin.close();
	}

	private: System::Void Gitar_Load(System::Object^ sender, System::EventArgs^ e) {
		melodiSil->Resize += gcnew System::EventHandler(this, &Gitar::MelodiSil_Resize);
		for each (String ^ s in SerialPort::GetPortNames()) {
			comboBox1->Items->Add(s);
			comboBox1->SelectedIndex = 0;
		}
		//checkBoxDuzenle->Checked = false;
		lblYerTutan->Text = "";
		yenile();
	}

	private: System::Void btnClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btnMelodi = safe_cast<Button^>(sender);
		string name = "\"" + msclr::interop::marshal_as<std::string>(btnMelodi->Text) + ".txt\"";
		string port = msclr::interop::marshal_as<std::string>(comboBox1->Text);

		if (checkBoxDuzenle->Checked) {
			//düzenleme ekraný
		}
		else {
			string komut = "";
			komut += "cd arduino";
			komut += "&& arduino-cli.exe config init --overwrite";
			komut += "&& arduino-cli.exe core update-index";
			komut += "&& arduino-cli.exe core install arduino:avr";
			komut += "&& arduino-cli core upgrade";
			system(&komut[0]);
			komut = "cd arduino";
			komut += "&& arduino-cli.exe sketch new main";
			komut += "&& type bas.txt > main/main.ino";
			komut += "&& cd txts && type " + name + " >> ../main/main.ino && cd ..";
			komut += "&& type son.txt >> main/main.ino";

			komut += "&& arduino-cli.exe compile --fqbn arduino:avr:uno main";
			system(&komut[0]);

			komut = "cd arduino && arduino-cli upload -p " + port + " -b arduino:avr:uno main";
			if (system(&komut[0])) {
				MessageBox::Show("Karta Yüklenirken Bir Sorun Oluþtu (Geçerli Bir Port Seçtiðinize Emin Olun)");
			}

			system("rd /s /q \"arduino/main\"");
		}
	}

	private: System::Void Yenile(System::Object^ sender, System::EventArgs^ e) {
		Button^ btnEkleSil = safe_cast<Button^>(sender);
		if (btnEkleSil->AccessibleDescription == "Ekle") {
			if (ozelKarakterVarMi(melodiEkrani->txtSarkiAdi->Text)) {
				MessageBox::Show("Melodinin Adý \\ / : \" ? < > | Karakterlerini Ýçermemelidir.");
			}
			else if (melodiEkrani->txtSarkiAdi->Text == "") {
				MessageBox::Show("Melodinin Bir Adý Olmalý.");
			}
			else if (ayniAddaVarMi(melodiEkrani->txtSarkiAdi->Text)) {
				MessageBox::Show("Ayný Adda Birden Fazla Melodi Olamaz.");
			}
			else if (melodiEkrani->txtMelodi->Text == "") {
				MessageBox::Show("Lütfen Melodinize Nota ve Vuruþ Bilgisi Girin.");
			}
			else if (melodiEkrani->txtSarkiAdi->Text == "_butonlar") {
				MessageBox::Show("Bu Ad Kullanýlamaz.");
			}
			else if (melodiEkrani->lenBeat == 0) {
				MessageBox::Show("Lütfen Vuruþ Bilgisi Girin.");
			}
			else {
				String^ melodi;
				string Melodi;
				string sarki = msclr::interop::marshal_as<std::string>(melodiEkrani->txtSarkiAdi->Text);
				
				for (int i = 0; i < melodiEkrani->lenBeat; i++) {
					melodi += "{" + System::Convert::ToString(melodiEkrani->notes[i]) + ",";
					if (i == melodiEkrani->lenBeat - 1) {
						melodi += System::Convert::ToString(melodiEkrani->beats[i].vurus) + "}";
					}
					else {
						melodi += System::Convert::ToString(melodiEkrani->beats[i].vurus) + "},\n";
					}
				}
				Melodi = msclr::interop::marshal_as<std::string>(melodi);
				string dizin = "arduino/txts/" + sarki + ".txt";
				ofstream fout(dizin);
				fout << Melodi;
				fout.close();
				ofstream foutt("arduino/txts/_butonlar.txt", std::ios::app);
				foutt << sarki + "\n";
				foutt.close();
				melodiEkrani->txtSarkiAdi->Text = "";
				melodiEkrani->txtMelodi->Text = "";
				yenile();
			}
		}
		else if (btnEkleSil->AccessibleDescription == "Sil") {
			remove("arduino/txts/_butonlar.txt");
			ofstream fouttt("arduino/txts/_butonlar.txt");
			String^ buttons = "";
			string sarkii;
			for each (CheckBox^ c in melodiSil->chckBxPanel->Controls) {
				if(c->Checked){
					sarkii = "arduino/txts/" + msclr::interop::marshal_as<std::string>(c->Text) + ".txt";
					remove(&*sarkii.begin());
				}
				else {
					buttons += c->Text + "\n";
				}
			}
			fouttt << msclr::interop::marshal_as<std::string>(buttons);
			fouttt.close();
			melodiSil->Hide();
			yenile();
		}
	}

	void btnEkle_Kaydet(MelodiEkrani^ melodiEkrani, int ekleSay) {
		if (ekleSay == 1) {
			Button^ button3 = gcnew System::Windows::Forms::Button();
			button3->Size = System::Drawing::Size(120, 47);
			button3->Location = System::Drawing::Point(189, 421);
			button3->AccessibleDescription = "Ekle";
			button3->Image = imageList->Images[0];
			button3->Click += gcnew System::EventHandler(this, &Gitar::Yenile);
			melodiEkrani->Controls->Add(button3);
		}
		melodiEkrani->Show();
	}

	void btnSil_Kaydet(MelodiSil^ melodiSil, int silSay) {
		if (silSay == 1) {
			Button^ button4 = gcnew System::Windows::Forms::Button();
			button4->Name = "buton_sil";
			button4->Size = System::Drawing::Size(120, 47);
			button4->Location = System::Drawing::Point(191, 376);
			button4->AccessibleDescription = "Sil";
			button4->Image = imageList->Images[1];
			button4->Click += gcnew System::EventHandler(this, &Gitar::Yenile);
			melodiSil->Controls->Add(button4);
		}
		melodiSil->Show();
	}

	private: System::Void btnMelodiEkle_Click(System::Object^ sender, System::EventArgs^ e) {
		ekleSay++;
		btnEkle_Kaydet(melodiEkrani, ekleSay);
	}

	private: System::Void btnMelodiSil_Click(System::Object^ sender, System::EventArgs^ e) {
		silSay++;
		btnSil_Kaydet(melodiSil, silSay);
	}
	
	private: System::Void Gitar_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}

	private: System::Void Gitar_Resize(System::Object^ sender, System::EventArgs^ e) {
		lblYerTutan->Width = this->Width - 310;
	}

	private: System::Void checkBoxDuzenle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		lblYerTutan->Text = checkBoxDuzenle->Checked ? "Düzenlenecek Melodiyi Seçiniz" : "";
	}

	private: System::Void MelodiSil_Resize(System::Object^ sender, System::EventArgs^ e) {
		melodiSil->lblMelodiSil->Size = System::Drawing::Size(melodiSil->Width - 40, 30);
		melodiSil->chckBxPanel->Size = System::Drawing::Size(melodiSil->Width - 40, melodiSil->Height - 143);
		for each (Control ^ t in melodiSil->Controls) {
			if (t->Name == "buton_sil") {
				t->Location = System::Drawing::Point(melodiSil->Width / 2 - 70, melodiSil->Height - 95);
			}
		}
	}
};
}
