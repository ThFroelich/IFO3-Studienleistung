#pragma once

namespace Firmenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Aendern
	/// </summary>
	public ref class Aendern : public System::Windows::Forms::Form
	{
	public:
		Aendern(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Aendern()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label15;
	protected:
	private: System::Windows::Forms::TextBox^  tbSuchEingabe;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  cbAuswahl;
	private: System::Windows::Forms::RadioButton^  rbAbteilung;
	private: System::Windows::Forms::RadioButton^  rbAbteilungsleiter;
	private: System::Windows::Forms::RadioButton^  rbMitarbeiter;
	private: System::Windows::Forms::Button^  btnAbbrechen;
	private: System::Windows::Forms::Panel^  pnlMitarbeiter;
	private: System::Windows::Forms::Panel^  pnlAbteilungsleiter;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterAbteilung;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterFestnummer;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterMobilnummer;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterPLZ;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterHausnummer;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterStadt;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterStrasse;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterMail;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterNachname;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  tbAbteilungsleiterVorname;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tbPersonalnummer;
	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterFestnummer;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterMobilnummer;
	private: System::Windows::Forms::DateTimePicker^  dtpMitarbeiter;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterPLZ;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterHausnummer;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterStadt;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterStrasse;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterMail;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterNachname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterVorname;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  pnlAbteilung;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  tbAbteilungSitz;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  tbAbteilungPLZ;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  tbAbteilungHausnummer;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  tbAbteilungStadt;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  tbAbteilungStrasse;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  tbAbteilungName;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  btnSpeichern;
	private: System::Windows::Forms::Button^  btnAendern;
	private: System::Windows::Forms::Button^  btnLoeschen;
	private: System::Windows::Forms::TextBox^  tbMitarbeiterAbteilung;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbSuchEingabe = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->cbAuswahl = (gcnew System::Windows::Forms::ComboBox());
			this->rbAbteilung = (gcnew System::Windows::Forms::RadioButton());
			this->rbAbteilungsleiter = (gcnew System::Windows::Forms::RadioButton());
			this->rbMitarbeiter = (gcnew System::Windows::Forms::RadioButton());
			this->btnAbbrechen = (gcnew System::Windows::Forms::Button());
			this->pnlMitarbeiter = (gcnew System::Windows::Forms::Panel());
			this->tbMitarbeiterAbteilung = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbPersonalnummer = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterFestnummer = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterMobilnummer = (gcnew System::Windows::Forms::TextBox());
			this->dtpMitarbeiter = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterPLZ = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterHausnummer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterStadt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterStrasse = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterMail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterNachname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbMitarbeiterVorname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlAbteilungsleiter = (gcnew System::Windows::Forms::Panel());
			this->tbAbteilungsleiterAbteilung = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterFestnummer = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterMobilnummer = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterPLZ = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterHausnummer = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterStadt = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterStrasse = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterMail = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterNachname = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungsleiterVorname = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pnlAbteilung = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungSitz = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungPLZ = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungHausnummer = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungStadt = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungStrasse = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tbAbteilungName = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->btnSpeichern = (gcnew System::Windows::Forms::Button());
			this->btnAendern = (gcnew System::Windows::Forms::Button());
			this->btnLoeschen = (gcnew System::Windows::Forms::Button());
			this->pnlMitarbeiter->SuspendLayout();
			this->pnlAbteilungsleiter->SuspendLayout();
			this->pnlAbteilung->SuspendLayout();
			this->SuspendLayout();
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(9, 95);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 15);
			this->label15->TabIndex = 55;
			this->label15->Text = L"Eingabe";
			// 
			// tbSuchEingabe
			// 
			this->tbSuchEingabe->Location = System::Drawing::Point(12, 113);
			this->tbSuchEingabe->Name = L"tbSuchEingabe";
			this->tbSuchEingabe->Size = System::Drawing::Size(142, 20);
			this->tbSuchEingabe->TabIndex = 54;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(11, 136);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 15);
			this->label14->TabIndex = 53;
			this->label14->Text = L"Auswahl";
			// 
			// cbAuswahl
			// 
			this->cbAuswahl->FormattingEnabled = true;
			this->cbAuswahl->Location = System::Drawing::Point(12, 154);
			this->cbAuswahl->Name = L"cbAuswahl";
			this->cbAuswahl->Size = System::Drawing::Size(142, 21);
			this->cbAuswahl->TabIndex = 46;
			// 
			// rbAbteilung
			// 
			this->rbAbteilung->AutoSize = true;
			this->rbAbteilung->Location = System::Drawing::Point(12, 58);
			this->rbAbteilung->Name = L"rbAbteilung";
			this->rbAbteilung->Size = System::Drawing::Size(69, 17);
			this->rbAbteilung->TabIndex = 51;
			this->rbAbteilung->TabStop = true;
			this->rbAbteilung->Text = L"Abteilung";
			this->rbAbteilung->UseVisualStyleBackColor = true;
			this->rbAbteilung->CheckedChanged += gcnew System::EventHandler(this, &Aendern::rbAbteilung_CheckedChanged);
			// 
			// rbAbteilungsleiter
			// 
			this->rbAbteilungsleiter->AutoSize = true;
			this->rbAbteilungsleiter->Location = System::Drawing::Point(12, 35);
			this->rbAbteilungsleiter->Name = L"rbAbteilungsleiter";
			this->rbAbteilungsleiter->Size = System::Drawing::Size(96, 17);
			this->rbAbteilungsleiter->TabIndex = 50;
			this->rbAbteilungsleiter->TabStop = true;
			this->rbAbteilungsleiter->Text = L"Abteilungsleiter";
			this->rbAbteilungsleiter->UseVisualStyleBackColor = true;
			this->rbAbteilungsleiter->CheckedChanged += gcnew System::EventHandler(this, &Aendern::rbAbteilungsleiter_CheckedChanged);
			// 
			// rbMitarbeiter
			// 
			this->rbMitarbeiter->AutoSize = true;
			this->rbMitarbeiter->Location = System::Drawing::Point(12, 12);
			this->rbMitarbeiter->Name = L"rbMitarbeiter";
			this->rbMitarbeiter->Size = System::Drawing::Size(74, 17);
			this->rbMitarbeiter->TabIndex = 49;
			this->rbMitarbeiter->TabStop = true;
			this->rbMitarbeiter->Text = L"Mitarbeiter";
			this->rbMitarbeiter->UseVisualStyleBackColor = true;
			this->rbMitarbeiter->CheckedChanged += gcnew System::EventHandler(this, &Aendern::rbMitarbeiter_CheckedChanged);
			// 
			// btnAbbrechen
			// 
			this->btnAbbrechen->Location = System::Drawing::Point(12, 464);
			this->btnAbbrechen->Name = L"btnAbbrechen";
			this->btnAbbrechen->Size = System::Drawing::Size(140, 30);
			this->btnAbbrechen->TabIndex = 48;
			this->btnAbbrechen->Text = L"Abbrechen";
			this->btnAbbrechen->UseVisualStyleBackColor = true;
			this->btnAbbrechen->Click += gcnew System::EventHandler(this, &Aendern::btnAbbrechen_Click);
			// 
			// pnlMitarbeiter
			// 
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterAbteilung);
			this->pnlMitarbeiter->Controls->Add(this->label13);
			this->pnlMitarbeiter->Controls->Add(this->label12);
			this->pnlMitarbeiter->Controls->Add(this->tbPersonalnummer);
			this->pnlMitarbeiter->Controls->Add(this->label11);
			this->pnlMitarbeiter->Controls->Add(this->label10);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterFestnummer);
			this->pnlMitarbeiter->Controls->Add(this->label9);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterMobilnummer);
			this->pnlMitarbeiter->Controls->Add(this->dtpMitarbeiter);
			this->pnlMitarbeiter->Controls->Add(this->label8);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterPLZ);
			this->pnlMitarbeiter->Controls->Add(this->label7);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterHausnummer);
			this->pnlMitarbeiter->Controls->Add(this->label6);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterStadt);
			this->pnlMitarbeiter->Controls->Add(this->label5);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterStrasse);
			this->pnlMitarbeiter->Controls->Add(this->label4);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterMail);
			this->pnlMitarbeiter->Controls->Add(this->label3);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterNachname);
			this->pnlMitarbeiter->Controls->Add(this->label2);
			this->pnlMitarbeiter->Controls->Add(this->tbMitarbeiterVorname);
			this->pnlMitarbeiter->Controls->Add(this->label1);
			this->pnlMitarbeiter->Location = System::Drawing::Point(171, 12);
			this->pnlMitarbeiter->Name = L"pnlMitarbeiter";
			this->pnlMitarbeiter->Size = System::Drawing::Size(500, 482);
			this->pnlMitarbeiter->TabIndex = 47;
			// 
			// tbMitarbeiterAbteilung
			// 
			this->tbMitarbeiterAbteilung->Location = System::Drawing::Point(275, 287);
			this->tbMitarbeiterAbteilung->Name = L"tbMitarbeiterAbteilung";
			this->tbMitarbeiterAbteilung->ReadOnly = true;
			this->tbMitarbeiterAbteilung->Size = System::Drawing::Size(100, 20);
			this->tbMitarbeiterAbteilung->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(21, 422);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 15);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Eintrittsdatum";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(272, 341);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 15);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Personalnummer";
			// 
			// tbPersonalnummer
			// 
			this->tbPersonalnummer->Location = System::Drawing::Point(275, 359);
			this->tbPersonalnummer->Name = L"tbPersonalnummer";
			this->tbPersonalnummer->ReadOnly = true;
			this->tbPersonalnummer->Size = System::Drawing::Size(100, 20);
			this->tbPersonalnummer->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(272, 269);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 15);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Abteilung";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 341);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 15);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Festnetznummer";
			// 
			// tbMitarbeiterFestnummer
			// 
			this->tbMitarbeiterFestnummer->Location = System::Drawing::Point(21, 359);
			this->tbMitarbeiterFestnummer->Name = L"tbMitarbeiterFestnummer";
			this->tbMitarbeiterFestnummer->ReadOnly = true;
			this->tbMitarbeiterFestnummer->Size = System::Drawing::Size(227, 20);
			this->tbMitarbeiterFestnummer->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(18, 269);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 15);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Mobilnummer";
			// 
			// tbMitarbeiterMobilnummer
			// 
			this->tbMitarbeiterMobilnummer->Location = System::Drawing::Point(21, 287);
			this->tbMitarbeiterMobilnummer->Name = L"tbMitarbeiterMobilnummer";
			this->tbMitarbeiterMobilnummer->ReadOnly = true;
			this->tbMitarbeiterMobilnummer->Size = System::Drawing::Size(227, 20);
			this->tbMitarbeiterMobilnummer->TabIndex = 18;
			// 
			// dtpMitarbeiter
			// 
			this->dtpMitarbeiter->Location = System::Drawing::Point(21, 440);
			this->dtpMitarbeiter->Name = L"dtpMitarbeiter";
			this->dtpMitarbeiter->Size = System::Drawing::Size(200, 20);
			this->dtpMitarbeiter->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(272, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 15);
			this->label8->TabIndex = 16;
			this->label8->Text = L"PLZ";
			// 
			// tbMitarbeiterPLZ
			// 
			this->tbMitarbeiterPLZ->Location = System::Drawing::Point(275, 212);
			this->tbMitarbeiterPLZ->Name = L"tbMitarbeiterPLZ";
			this->tbMitarbeiterPLZ->ReadOnly = true;
			this->tbMitarbeiterPLZ->Size = System::Drawing::Size(100, 20);
			this->tbMitarbeiterPLZ->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(272, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Hausnummer";
			// 
			// tbMitarbeiterHausnummer
			// 
			this->tbMitarbeiterHausnummer->Location = System::Drawing::Point(275, 143);
			this->tbMitarbeiterHausnummer->Name = L"tbMitarbeiterHausnummer";
			this->tbMitarbeiterHausnummer->ReadOnly = true;
			this->tbMitarbeiterHausnummer->Size = System::Drawing::Size(100, 20);
			this->tbMitarbeiterHausnummer->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 15);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Stadt";
			// 
			// tbMitarbeiterStadt
			// 
			this->tbMitarbeiterStadt->Location = System::Drawing::Point(21, 212);
			this->tbMitarbeiterStadt->Name = L"tbMitarbeiterStadt";
			this->tbMitarbeiterStadt->ReadOnly = true;
			this->tbMitarbeiterStadt->Size = System::Drawing::Size(227, 20);
			this->tbMitarbeiterStadt->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Straße";
			// 
			// tbMitarbeiterStrasse
			// 
			this->tbMitarbeiterStrasse->Location = System::Drawing::Point(21, 143);
			this->tbMitarbeiterStrasse->Name = L"tbMitarbeiterStrasse";
			this->tbMitarbeiterStrasse->ReadOnly = true;
			this->tbMitarbeiterStrasse->Size = System::Drawing::Size(227, 20);
			this->tbMitarbeiterStrasse->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(272, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"E-Mailadresse";
			// 
			// tbMitarbeiterMail
			// 
			this->tbMitarbeiterMail->Location = System::Drawing::Point(275, 72);
			this->tbMitarbeiterMail->Name = L"tbMitarbeiterMail";
			this->tbMitarbeiterMail->ReadOnly = true;
			this->tbMitarbeiterMail->Size = System::Drawing::Size(214, 20);
			this->tbMitarbeiterMail->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(145, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nachname";
			// 
			// tbMitarbeiterNachname
			// 
			this->tbMitarbeiterNachname->Location = System::Drawing::Point(148, 72);
			this->tbMitarbeiterNachname->Name = L"tbMitarbeiterNachname";
			this->tbMitarbeiterNachname->ReadOnly = true;
			this->tbMitarbeiterNachname->Size = System::Drawing::Size(100, 20);
			this->tbMitarbeiterNachname->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Vorname";
			// 
			// tbMitarbeiterVorname
			// 
			this->tbMitarbeiterVorname->Location = System::Drawing::Point(21, 72);
			this->tbMitarbeiterVorname->Name = L"tbMitarbeiterVorname";
			this->tbMitarbeiterVorname->ReadOnly = true;
			this->tbMitarbeiterVorname->Size = System::Drawing::Size(100, 20);
			this->tbMitarbeiterVorname->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mitarbeiter";
			// 
			// pnlAbteilungsleiter
			// 
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterAbteilung);
			this->pnlAbteilungsleiter->Controls->Add(this->label16);
			this->pnlAbteilungsleiter->Controls->Add(this->label17);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterFestnummer);
			this->pnlAbteilungsleiter->Controls->Add(this->label23);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterMobilnummer);
			this->pnlAbteilungsleiter->Controls->Add(this->label24);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterPLZ);
			this->pnlAbteilungsleiter->Controls->Add(this->label27);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterHausnummer);
			this->pnlAbteilungsleiter->Controls->Add(this->label28);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterStadt);
			this->pnlAbteilungsleiter->Controls->Add(this->label29);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterStrasse);
			this->pnlAbteilungsleiter->Controls->Add(this->label30);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterMail);
			this->pnlAbteilungsleiter->Controls->Add(this->label31);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterNachname);
			this->pnlAbteilungsleiter->Controls->Add(this->label32);
			this->pnlAbteilungsleiter->Controls->Add(this->tbAbteilungsleiterVorname);
			this->pnlAbteilungsleiter->Controls->Add(this->label33);
			this->pnlAbteilungsleiter->Location = System::Drawing::Point(171, 12);
			this->pnlAbteilungsleiter->Name = L"pnlAbteilungsleiter";
			this->pnlAbteilungsleiter->Size = System::Drawing::Size(500, 482);
			this->pnlAbteilungsleiter->TabIndex = 28;
			// 
			// tbAbteilungsleiterAbteilung
			// 
			this->tbAbteilungsleiterAbteilung->Location = System::Drawing::Point(275, 287);
			this->tbAbteilungsleiterAbteilung->Name = L"tbAbteilungsleiterAbteilung";
			this->tbAbteilungsleiterAbteilung->ReadOnly = true;
			this->tbAbteilungsleiterAbteilung->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungsleiterAbteilung->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(272, 269);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 15);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Abteilung";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(18, 341);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 15);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Festnetznummer";
			// 
			// tbAbteilungsleiterFestnummer
			// 
			this->tbAbteilungsleiterFestnummer->Location = System::Drawing::Point(21, 359);
			this->tbAbteilungsleiterFestnummer->Name = L"tbAbteilungsleiterFestnummer";
			this->tbAbteilungsleiterFestnummer->ReadOnly = true;
			this->tbAbteilungsleiterFestnummer->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungsleiterFestnummer->TabIndex = 20;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(18, 269);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(85, 15);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Mobilnummer";
			// 
			// tbAbteilungsleiterMobilnummer
			// 
			this->tbAbteilungsleiterMobilnummer->Location = System::Drawing::Point(21, 287);
			this->tbAbteilungsleiterMobilnummer->Name = L"tbAbteilungsleiterMobilnummer";
			this->tbAbteilungsleiterMobilnummer->ReadOnly = true;
			this->tbAbteilungsleiterMobilnummer->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungsleiterMobilnummer->TabIndex = 18;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(272, 194);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 15);
			this->label24->TabIndex = 16;
			this->label24->Text = L"PLZ";
			// 
			// tbAbteilungsleiterPLZ
			// 
			this->tbAbteilungsleiterPLZ->Location = System::Drawing::Point(275, 212);
			this->tbAbteilungsleiterPLZ->Name = L"tbAbteilungsleiterPLZ";
			this->tbAbteilungsleiterPLZ->ReadOnly = true;
			this->tbAbteilungsleiterPLZ->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungsleiterPLZ->TabIndex = 15;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(272, 125);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 15);
			this->label27->TabIndex = 14;
			this->label27->Text = L"Hausnummer";
			// 
			// tbAbteilungsleiterHausnummer
			// 
			this->tbAbteilungsleiterHausnummer->Location = System::Drawing::Point(275, 143);
			this->tbAbteilungsleiterHausnummer->Name = L"tbAbteilungsleiterHausnummer";
			this->tbAbteilungsleiterHausnummer->ReadOnly = true;
			this->tbAbteilungsleiterHausnummer->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungsleiterHausnummer->TabIndex = 13;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(18, 194);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(35, 15);
			this->label28->TabIndex = 12;
			this->label28->Text = L"Stadt";
			// 
			// tbAbteilungsleiterStadt
			// 
			this->tbAbteilungsleiterStadt->Location = System::Drawing::Point(21, 212);
			this->tbAbteilungsleiterStadt->Name = L"tbAbteilungsleiterStadt";
			this->tbAbteilungsleiterStadt->ReadOnly = true;
			this->tbAbteilungsleiterStadt->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungsleiterStadt->TabIndex = 11;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(18, 125);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(43, 15);
			this->label29->TabIndex = 10;
			this->label29->Text = L"Straße";
			// 
			// tbAbteilungsleiterStrasse
			// 
			this->tbAbteilungsleiterStrasse->Location = System::Drawing::Point(21, 143);
			this->tbAbteilungsleiterStrasse->Name = L"tbAbteilungsleiterStrasse";
			this->tbAbteilungsleiterStrasse->ReadOnly = true;
			this->tbAbteilungsleiterStrasse->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungsleiterStrasse->TabIndex = 9;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(272, 54);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(87, 15);
			this->label30->TabIndex = 8;
			this->label30->Text = L"E-Mailadresse";
			// 
			// tbAbteilungsleiterMail
			// 
			this->tbAbteilungsleiterMail->Location = System::Drawing::Point(275, 72);
			this->tbAbteilungsleiterMail->Name = L"tbAbteilungsleiterMail";
			this->tbAbteilungsleiterMail->ReadOnly = true;
			this->tbAbteilungsleiterMail->Size = System::Drawing::Size(214, 20);
			this->tbAbteilungsleiterMail->TabIndex = 7;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(145, 54);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(68, 15);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Nachname";
			// 
			// tbAbteilungsleiterNachname
			// 
			this->tbAbteilungsleiterNachname->Location = System::Drawing::Point(148, 72);
			this->tbAbteilungsleiterNachname->Name = L"tbAbteilungsleiterNachname";
			this->tbAbteilungsleiterNachname->ReadOnly = true;
			this->tbAbteilungsleiterNachname->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungsleiterNachname->TabIndex = 3;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(18, 54);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(57, 15);
			this->label32->TabIndex = 2;
			this->label32->Text = L"Vorname";
			// 
			// tbAbteilungsleiterVorname
			// 
			this->tbAbteilungsleiterVorname->Location = System::Drawing::Point(21, 72);
			this->tbAbteilungsleiterVorname->Name = L"tbAbteilungsleiterVorname";
			this->tbAbteilungsleiterVorname->ReadOnly = true;
			this->tbAbteilungsleiterVorname->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungsleiterVorname->TabIndex = 1;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(17, 15);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(118, 20);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Abteilungsleiter";
			// 
			// pnlAbteilung
			// 
			this->pnlAbteilung->Controls->Add(this->label18);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungSitz);
			this->pnlAbteilung->Controls->Add(this->label19);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungPLZ);
			this->pnlAbteilung->Controls->Add(this->label20);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungHausnummer);
			this->pnlAbteilung->Controls->Add(this->label21);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungStadt);
			this->pnlAbteilung->Controls->Add(this->label22);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungStrasse);
			this->pnlAbteilung->Controls->Add(this->label25);
			this->pnlAbteilung->Controls->Add(this->tbAbteilungName);
			this->pnlAbteilung->Controls->Add(this->label26);
			this->pnlAbteilung->Location = System::Drawing::Point(171, 12);
			this->pnlAbteilung->Name = L"pnlAbteilung";
			this->pnlAbteilung->Size = System::Drawing::Size(500, 482);
			this->pnlAbteilung->TabIndex = 52;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(18, 269);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 15);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Abteilungssitz";
			// 
			// tbAbteilungSitz
			// 
			this->tbAbteilungSitz->Location = System::Drawing::Point(21, 287);
			this->tbAbteilungSitz->Name = L"tbAbteilungSitz";
			this->tbAbteilungSitz->ReadOnly = true;
			this->tbAbteilungSitz->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungSitz->TabIndex = 18;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(272, 194);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 15);
			this->label19->TabIndex = 16;
			this->label19->Text = L"PLZ";
			// 
			// tbAbteilungPLZ
			// 
			this->tbAbteilungPLZ->Location = System::Drawing::Point(275, 212);
			this->tbAbteilungPLZ->Name = L"tbAbteilungPLZ";
			this->tbAbteilungPLZ->ReadOnly = true;
			this->tbAbteilungPLZ->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungPLZ->TabIndex = 15;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(272, 125);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 15);
			this->label20->TabIndex = 14;
			this->label20->Text = L"Hausnummer";
			// 
			// tbAbteilungHausnummer
			// 
			this->tbAbteilungHausnummer->Location = System::Drawing::Point(275, 143);
			this->tbAbteilungHausnummer->Name = L"tbAbteilungHausnummer";
			this->tbAbteilungHausnummer->ReadOnly = true;
			this->tbAbteilungHausnummer->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungHausnummer->TabIndex = 13;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(18, 194);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 15);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Stadt";
			// 
			// tbAbteilungStadt
			// 
			this->tbAbteilungStadt->Location = System::Drawing::Point(21, 212);
			this->tbAbteilungStadt->Name = L"tbAbteilungStadt";
			this->tbAbteilungStadt->ReadOnly = true;
			this->tbAbteilungStadt->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungStadt->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(18, 125);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 15);
			this->label22->TabIndex = 10;
			this->label22->Text = L"Straße";
			// 
			// tbAbteilungStrasse
			// 
			this->tbAbteilungStrasse->Location = System::Drawing::Point(21, 143);
			this->tbAbteilungStrasse->Name = L"tbAbteilungStrasse";
			this->tbAbteilungStrasse->ReadOnly = true;
			this->tbAbteilungStrasse->Size = System::Drawing::Size(227, 20);
			this->tbAbteilungStrasse->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(18, 54);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(96, 15);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Abteilungsname";
			// 
			// tbAbteilungName
			// 
			this->tbAbteilungName->Location = System::Drawing::Point(21, 72);
			this->tbAbteilungName->Name = L"tbAbteilungName";
			this->tbAbteilungName->ReadOnly = true;
			this->tbAbteilungName->Size = System::Drawing::Size(100, 20);
			this->tbAbteilungName->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(17, 15);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(76, 20);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Abteilung";
			// 
			// btnSpeichern
			// 
			this->btnSpeichern->Location = System::Drawing::Point(12, 254);
			this->btnSpeichern->Name = L"btnSpeichern";
			this->btnSpeichern->Size = System::Drawing::Size(140, 30);
			this->btnSpeichern->TabIndex = 56;
			this->btnSpeichern->Text = L"Speichern";
			this->btnSpeichern->UseVisualStyleBackColor = true;
			// 
			// btnAendern
			// 
			this->btnAendern->Location = System::Drawing::Point(12, 182);
			this->btnAendern->Name = L"btnAendern";
			this->btnAendern->Size = System::Drawing::Size(142, 30);
			this->btnAendern->TabIndex = 57;
			this->btnAendern->Text = L"Eintrag ändern";
			this->btnAendern->UseVisualStyleBackColor = true;
			// 
			// btnLoeschen
			// 
			this->btnLoeschen->Location = System::Drawing::Point(12, 218);
			this->btnLoeschen->Name = L"btnLoeschen";
			this->btnLoeschen->Size = System::Drawing::Size(140, 30);
			this->btnLoeschen->TabIndex = 58;
			this->btnLoeschen->Text = L"Eintrag löschen";
			this->btnLoeschen->UseVisualStyleBackColor = true;
			// 
			// Aendern
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 509);
			this->Controls->Add(this->btnLoeschen);
			this->Controls->Add(this->btnAendern);
			this->Controls->Add(this->btnSpeichern);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tbSuchEingabe);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->cbAuswahl);
			this->Controls->Add(this->rbAbteilung);
			this->Controls->Add(this->rbAbteilungsleiter);
			this->Controls->Add(this->rbMitarbeiter);
			this->Controls->Add(this->btnAbbrechen);
			this->Controls->Add(this->pnlMitarbeiter);
			this->Controls->Add(this->pnlAbteilung);
			this->Controls->Add(this->pnlAbteilungsleiter);
			this->Name = L"Aendern";
			this->Text = L"Ändern";
			this->Load += gcnew System::EventHandler(this, &Aendern::Aendern_Load);
			this->pnlMitarbeiter->ResumeLayout(false);
			this->pnlMitarbeiter->PerformLayout();
			this->pnlAbteilungsleiter->ResumeLayout(false);
			this->pnlAbteilungsleiter->PerformLayout();
			this->pnlAbteilung->ResumeLayout(false);
			this->pnlAbteilung->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rbMitarbeiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pnlAbteilungsleiter->Visible = false;
		pnlAbteilung->Visible = false;
		pnlMitarbeiter->Visible = true;
	}
	private: System::Void rbAbteilungsleiter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pnlAbteilungsleiter->Visible = true;
		pnlAbteilung->Visible = false;
		pnlMitarbeiter->Visible = false;
	}
	private: System::Void rbAbteilung_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		pnlAbteilungsleiter->Visible = false;
		pnlAbteilung->Visible = true;
		pnlMitarbeiter->Visible = false;
	}
	private: System::Void Aendern_Load(System::Object^  sender, System::EventArgs^  e) {
		rbMitarbeiter->Checked = true;
	}
	private: System::Void btnAbbrechen_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
