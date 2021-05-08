#include <cstdlib>
#define aktif true
#define pasif false

struct beat {
	int vurus;
	bool uzunMu;
};

#pragma once

namespace ElektronikGitar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MelodiEkrani için özet
	/// </summary>
	public ref class MelodiEkrani : public System::Windows::Forms::Form
	{
	public:
		MelodiEkrani(void)
		{
			InitializeComponent();
			//
			//TODO: Oluşturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanılan tüm kaynakları temizleyin.
		/// </summary>
		~MelodiEkrani()
		{
			if (components)
			{
				delete components;
			}

		}
	public: System::Windows::Forms::TextBox^ txtMelodi;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ btnDo;
	private: System::Windows::Forms::Button^ btnRe;
	private: System::Windows::Forms::Button^ btnMi;
	private: System::Windows::Forms::Button^ btnFa;
	private: System::Windows::Forms::Button^ btnSol;
	private: System::Windows::Forms::Button^ btnLa;
	private: System::Windows::Forms::Button^ btnSi;

	private: System::Windows::Forms::Button^ btn4v;
	private: System::Windows::Forms::Button^ btn2v;
	private: System::Windows::Forms::Button^ btn1v;
	private: System::Windows::Forms::Button^ btn1_2v;
	private: System::Windows::Forms::Button^ btn1_4v;
	private: System::Windows::Forms::Button^ btn1_8v;
	private: System::Windows::Forms::Button^ btn1_16v;

	private: System::Windows::Forms::Button^ btnBackSpc;
	private: System::Windows::Forms::Label^ lblSarkiAdi;
	public: System::Windows::Forms::TextBox^ txtSarkiAdi;
	private: System::Windows::Forms::Button^ btnVurusUzat;
	public:

	public:
	private:







	protected:

	protected:

	private:
		/// <summary>
		///Gerekli tasarımcı değişkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarımcı desteği için gerekli metot - bu metodun 
		///içeriğini kod düzenleyici ile değiştirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MelodiEkrani::typeid));
			this->txtMelodi = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDo = (gcnew System::Windows::Forms::Button());
			this->btnRe = (gcnew System::Windows::Forms::Button());
			this->btnMi = (gcnew System::Windows::Forms::Button());
			this->btnFa = (gcnew System::Windows::Forms::Button());
			this->btnSol = (gcnew System::Windows::Forms::Button());
			this->btnLa = (gcnew System::Windows::Forms::Button());
			this->btnSi = (gcnew System::Windows::Forms::Button());
			this->btn4v = (gcnew System::Windows::Forms::Button());
			this->btn2v = (gcnew System::Windows::Forms::Button());
			this->btn1v = (gcnew System::Windows::Forms::Button());
			this->btn1_2v = (gcnew System::Windows::Forms::Button());
			this->btn1_4v = (gcnew System::Windows::Forms::Button());
			this->btn1_8v = (gcnew System::Windows::Forms::Button());
			this->btn1_16v = (gcnew System::Windows::Forms::Button());
			this->btnBackSpc = (gcnew System::Windows::Forms::Button());
			this->lblSarkiAdi = (gcnew System::Windows::Forms::Label());
			this->txtSarkiAdi = (gcnew System::Windows::Forms::TextBox());
			this->btnVurusUzat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtMelodi
			// 
			this->txtMelodi->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtMelodi->Location = System::Drawing::Point(12, 44);
			this->txtMelodi->Multiline = true;
			this->txtMelodi->Name = L"txtMelodi";
			this->txtMelodi->ReadOnly = true;
			this->txtMelodi->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtMelodi->Size = System::Drawing::Size(478, 183);
			this->txtMelodi->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(12, 240);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"_______Notalar_______";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(249, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"_______Vuruşlar_______";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnDo
			// 
			this->btnDo->AccessibleDescription = L"do";
			this->btnDo->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDo->ForeColor = System::Drawing::Color::Transparent;
			this->btnDo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDo.Image")));
			this->btnDo->Location = System::Drawing::Point(38, 266);
			this->btnDo->Name = L"btnDo";
			this->btnDo->Size = System::Drawing::Size(58, 39);
			this->btnDo->TabIndex = 5;
			this->btnDo->UseVisualStyleBackColor = true;
			this->btnDo->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnRe
			// 
			this->btnRe->AccessibleDescription = L"re";
			this->btnRe->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRe->ForeColor = System::Drawing::Color::Transparent;
			this->btnRe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRe.Image")));
			this->btnRe->Location = System::Drawing::Point(102, 266);
			this->btnRe->Name = L"btnRe";
			this->btnRe->Size = System::Drawing::Size(58, 39);
			this->btnRe->TabIndex = 10;
			this->btnRe->UseVisualStyleBackColor = true;
			this->btnRe->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnMi
			// 
			this->btnMi->AccessibleDescription = L"mi";
			this->btnMi->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMi->ForeColor = System::Drawing::Color::Transparent;
			this->btnMi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMi.Image")));
			this->btnMi->Location = System::Drawing::Point(166, 266);
			this->btnMi->Name = L"btnMi";
			this->btnMi->Size = System::Drawing::Size(58, 39);
			this->btnMi->TabIndex = 15;
			this->btnMi->UseVisualStyleBackColor = true;
			this->btnMi->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnFa
			// 
			this->btnFa->AccessibleDescription = L"fa";
			this->btnFa->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFa->ForeColor = System::Drawing::Color::Transparent;
			this->btnFa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFa.Image")));
			this->btnFa->Location = System::Drawing::Point(38, 311);
			this->btnFa->Name = L"btnFa";
			this->btnFa->Size = System::Drawing::Size(58, 39);
			this->btnFa->TabIndex = 20;
			this->btnFa->UseVisualStyleBackColor = true;
			this->btnFa->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnSol
			// 
			this->btnSol->AccessibleDescription = L"sol";
			this->btnSol->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSol->ForeColor = System::Drawing::Color::Transparent;
			this->btnSol->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSol.Image")));
			this->btnSol->Location = System::Drawing::Point(102, 311);
			this->btnSol->Name = L"btnSol";
			this->btnSol->Size = System::Drawing::Size(58, 39);
			this->btnSol->TabIndex = 25;
			this->btnSol->UseVisualStyleBackColor = true;
			this->btnSol->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnLa
			// 
			this->btnLa->AccessibleDescription = L"la";
			this->btnLa->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLa->ForeColor = System::Drawing::Color::Transparent;
			this->btnLa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLa.Image")));
			this->btnLa->Location = System::Drawing::Point(166, 311);
			this->btnLa->Name = L"btnLa";
			this->btnLa->Size = System::Drawing::Size(58, 39);
			this->btnLa->TabIndex = 30;
			this->btnLa->UseVisualStyleBackColor = true;
			this->btnLa->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btnSi
			// 
			this->btnSi->AccessibleDescription = L"si";
			this->btnSi->Font = (gcnew System::Drawing::Font(L"Ink Free", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSi->ForeColor = System::Drawing::Color::Transparent;
			this->btnSi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSi.Image")));
			this->btnSi->Location = System::Drawing::Point(102, 355);
			this->btnSi->Name = L"btnSi";
			this->btnSi->Size = System::Drawing::Size(58, 39);
			this->btnSi->TabIndex = 35;
			this->btnSi->UseVisualStyleBackColor = true;
			this->btnSi->Click += gcnew System::EventHandler(this, &MelodiEkrani::note_Click);
			// 
			// btn4v
			// 
			this->btn4v->AccessibleDescription = L"4";
			this->btn4v->Enabled = false;
			this->btn4v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4v->ForeColor = System::Drawing::Color::Transparent;
			this->btn4v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4v.Image")));
			this->btn4v->Location = System::Drawing::Point(274, 266);
			this->btn4v->Name = L"btn4v";
			this->btn4v->Size = System::Drawing::Size(58, 39);
			this->btn4v->TabIndex = 64;
			this->btn4v->UseVisualStyleBackColor = true;
			this->btn4v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn2v
			// 
			this->btn2v->AccessibleDescription = L"2";
			this->btn2v->Enabled = false;
			this->btn2v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2v->ForeColor = System::Drawing::Color::Transparent;
			this->btn2v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2v.Image")));
			this->btn2v->Location = System::Drawing::Point(338, 266);
			this->btn2v->Name = L"btn2v";
			this->btn2v->Size = System::Drawing::Size(58, 39);
			this->btn2v->TabIndex = 32;
			this->btn2v->UseVisualStyleBackColor = true;
			this->btn2v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn1v
			// 
			this->btn1v->AccessibleDescription = L"1";
			this->btn1v->Enabled = false;
			this->btn1v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1v->ForeColor = System::Drawing::Color::Transparent;
			this->btn1v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1v.Image")));
			this->btn1v->Location = System::Drawing::Point(402, 266);
			this->btn1v->Name = L"btn1v";
			this->btn1v->Size = System::Drawing::Size(58, 39);
			this->btn1v->TabIndex = 16;
			this->btn1v->UseVisualStyleBackColor = true;
			this->btn1v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn1_2v
			// 
			this->btn1_2v->AccessibleDescription = L"1/2";
			this->btn1_2v->Enabled = false;
			this->btn1_2v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1_2v->ForeColor = System::Drawing::Color::Transparent;
			this->btn1_2v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1_2v.Image")));
			this->btn1_2v->Location = System::Drawing::Point(274, 311);
			this->btn1_2v->Name = L"btn1_2v";
			this->btn1_2v->Size = System::Drawing::Size(58, 39);
			this->btn1_2v->TabIndex = 8;
			this->btn1_2v->UseVisualStyleBackColor = true;
			this->btn1_2v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn1_4v
			// 
			this->btn1_4v->AccessibleDescription = L"1/4";
			this->btn1_4v->Enabled = false;
			this->btn1_4v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1_4v->ForeColor = System::Drawing::Color::Transparent;
			this->btn1_4v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1_4v.Image")));
			this->btn1_4v->Location = System::Drawing::Point(338, 311);
			this->btn1_4v->Name = L"btn1_4v";
			this->btn1_4v->Size = System::Drawing::Size(58, 39);
			this->btn1_4v->TabIndex = 4;
			this->btn1_4v->UseVisualStyleBackColor = true;
			this->btn1_4v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn1_8v
			// 
			this->btn1_8v->AccessibleDescription = L"1/8";
			this->btn1_8v->Enabled = false;
			this->btn1_8v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1_8v->ForeColor = System::Drawing::Color::Transparent;
			this->btn1_8v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1_8v.Image")));
			this->btn1_8v->Location = System::Drawing::Point(402, 311);
			this->btn1_8v->Name = L"btn1_8v";
			this->btn1_8v->Size = System::Drawing::Size(58, 39);
			this->btn1_8v->TabIndex = 2;
			this->btn1_8v->UseVisualStyleBackColor = true;
			this->btn1_8v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btn1_16v
			// 
			this->btn1_16v->AccessibleDescription = L"1/16";
			this->btn1_16v->Enabled = false;
			this->btn1_16v->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1_16v->ForeColor = System::Drawing::Color::Transparent;
			this->btn1_16v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1_16v.Image")));
			this->btn1_16v->Location = System::Drawing::Point(338, 355);
			this->btn1_16v->Name = L"btn1_16v";
			this->btn1_16v->Size = System::Drawing::Size(58, 39);
			this->btn1_16v->TabIndex = 1;
			this->btn1_16v->UseVisualStyleBackColor = true;
			this->btn1_16v->Click += gcnew System::EventHandler(this, &MelodiEkrani::beat_Click);
			// 
			// btnBackSpc
			// 
			this->btnBackSpc->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackSpc->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBackSpc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackSpc.Image")));
			this->btnBackSpc->Location = System::Drawing::Point(166, 355);
			this->btnBackSpc->Name = L"btnBackSpc";
			this->btnBackSpc->Size = System::Drawing::Size(166, 39);
			this->btnBackSpc->TabIndex = 3;
			this->btnBackSpc->Text = L"";
			this->btnBackSpc->UseVisualStyleBackColor = true;
			this->btnBackSpc->Click += gcnew System::EventHandler(this, &MelodiEkrani::btnBackSpc_Click);
			// 
			// lblSarkiAdi
			// 
			this->lblSarkiAdi->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->lblSarkiAdi->ForeColor = System::Drawing::Color::Black;
			this->lblSarkiAdi->Location = System::Drawing::Point(12, 12);
			this->lblSarkiAdi->Name = L"lblSarkiAdi";
			this->lblSarkiAdi->Size = System::Drawing::Size(126, 28);
			this->lblSarkiAdi->TabIndex = 129;
			this->lblSarkiAdi->Text = L"Melodinin Adı:";
			// 
			// txtSarkiAdi
			// 
			this->txtSarkiAdi->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtSarkiAdi->Location = System::Drawing::Point(134, 8);
			this->txtSarkiAdi->Name = L"txtSarkiAdi";
			this->txtSarkiAdi->Size = System::Drawing::Size(356, 26);
			this->txtSarkiAdi->TabIndex = 130;
			// 
			// btnVurusUzat
			// 
			this->btnVurusUzat->AccessibleDescription = L".";
			this->btnVurusUzat->Enabled = false;
			this->btnVurusUzat->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVurusUzat->ForeColor = System::Drawing::Color::Transparent;
			this->btnVurusUzat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVurusUzat.Image")));
			this->btnVurusUzat->Location = System::Drawing::Point(402, 355);
			this->btnVurusUzat->Name = L"btnVurusUzat";
			this->btnVurusUzat->Size = System::Drawing::Size(58, 39);
			this->btnVurusUzat->TabIndex = 1;
			this->btnVurusUzat->UseVisualStyleBackColor = true;
			this->btnVurusUzat->Click += gcnew System::EventHandler(this, &MelodiEkrani::btnVurusUzat_Click);
			// 
			// MelodiEkrani
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(502, 483);
			this->Controls->Add(this->txtSarkiAdi);
			this->Controls->Add(this->lblSarkiAdi);
			this->Controls->Add(this->btnBackSpc);
			this->Controls->Add(this->btnLa);
			this->Controls->Add(this->btn1_8v);
			this->Controls->Add(this->btn1v);
			this->Controls->Add(this->btnMi);
			this->Controls->Add(this->btnSol);
			this->Controls->Add(this->btnSi);
			this->Controls->Add(this->btnVurusUzat);
			this->Controls->Add(this->btn1_16v);
			this->Controls->Add(this->btn1_4v);
			this->Controls->Add(this->btn2v);
			this->Controls->Add(this->btn1_2v);
			this->Controls->Add(this->btnFa);
			this->Controls->Add(this->btn4v);
			this->Controls->Add(this->btnRe);
			this->Controls->Add(this->btnDo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtMelodi);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(518, 522);
			this->MinimumSize = System::Drawing::Size(518, 522);
			this->Name = L"MelodiEkrani";
			this->Text = L"Melodi Ekle";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MelodiEkrani::MelodiEkrani_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: int* notes = (int*)malloc(1000 * sizeof(int));
		public: beat* beats = (beat*)malloc(1000 * sizeof(beat));
		public: int lenNote = 0;
		public: int lenBeat = 0;

	void notaAyarla(bool b) {
		btnDo->Enabled = b;
		btnRe->Enabled = b;
		btnMi->Enabled = b;
		btnFa->Enabled = b;
		btnSol->Enabled = b;
		btnLa->Enabled = b;
		btnSi->Enabled = b;
		btnVurusUzat->Enabled = b;

		btn4v->Enabled = !b;
		btn2v->Enabled = !b;
		btn1v->Enabled = !b;
		btn1_2v->Enabled = !b;
		btn1_4v->Enabled = !b;
		btn1_8v->Enabled = !b;
		btn1_16v->Enabled = !b;
	}

	void notaVurusSil(int s, bool b) {
		if (b) {
			txtMelodi->Text = txtMelodi->Text->Remove(txtMelodi->Text->Length - s, s);
			notes[lenNote - 1] = 0;
			lenNote--;
			notaAyarla(aktif);
		}
		else {
			txtMelodi->Text = txtMelodi->Text->Remove(txtMelodi->Text->Length - s, s);
			beats[lenBeat - 1].vurus = 0;
			beats[lenBeat - 1].uzunMu = false;
			lenBeat--;
			notaAyarla(pasif);
		}
	}

	private: System::Void note_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ nota = safe_cast<Button^>(sender);
		if (txtMelodi->Text == "") {
			for (int i = 0; i < 1000; i++) {
				notes[i] = 0;
				beats[i].vurus = 0;
				beats[i].uzunMu = false;
				lenNote = 0;
				lenBeat = 0;
			}
		}
		txtMelodi->Text += " " + nota->AccessibleDescription;
		notes[lenNote] = nota->TabIndex / 5;
		lenNote++;
		notaAyarla(pasif);
	}

	private: System::Void beat_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ vurus = safe_cast<Button^>(sender);
		txtMelodi->Text += "(" + vurus->AccessibleDescription + ") ";
		beats[lenBeat].vurus = vurus->TabIndex;
		lenBeat++;
		notaAyarla(aktif);
	}

	private: System::Void btnVurusUzat_Click(System::Object^ sender, System::EventArgs^ e) {
		beats[lenBeat - 1].vurus *= 1.5;
		beats[lenBeat - 1].uzunMu = true;
		btnVurusUzat->Enabled = false;
		txtMelodi->Text += "× 3/2 ";
	}

	private: System::Void btnBackSpc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtMelodi->Text == "") {
			return;
		}
		else if (btn4v->Enabled) {
			if (notes[lenNote - 1] == 5) {
				notaVurusSil(4, aktif);
			}
			else {
				notaVurusSil(3, aktif);
			}
		}
		else {
			if (beats[lenBeat - 1].vurus >= 16) {
				notaVurusSil((beats[lenBeat - 1].uzunMu ? 10 : 4), pasif);
			}
			else if (beats[lenBeat - 1].vurus >= 2 && beats[lenBeat - 1].vurus <= 8) {
				notaVurusSil((beats[lenBeat - 1].uzunMu ? 12 : 6), pasif);
			}
			else if (beats[lenBeat - 1].vurus == 1) {
				notaVurusSil((beats[lenBeat - 1].uzunMu ? 13 : 7), pasif);
			}
		}
	}
	private: System::Void MelodiEkrani_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (e->CloseReason != System::Windows::Forms::CloseReason::ApplicationExitCall) {
			e->Cancel = true;
			this->Hide();
		}	
	}
};
}
