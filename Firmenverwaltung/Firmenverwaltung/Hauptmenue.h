#pragma once

#include "Aendern.h"
#include "Suchen.h"
#include "NeuerEintrag.h"
#include "Strukturen.h"
#include "Ausgabe.h"



namespace Firmenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptmenue
	/// </summary>
	public ref class Hauptmenue : public System::Windows::Forms::Form
	{
	public:
		Hauptmenue(void)
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
		~Hauptmenue()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  btnSuchen;
	private: System::Windows::Forms::Button^  btnSchliessen;
	private: System::Windows::Forms::Button^  btnAusgeben;
	private: System::Windows::Forms::Button^  btnAendern;
	private: System::Windows::Forms::Label^  lbLogo;
	private: System::Windows::Forms::Button^  btnNeuAnlegen;
	protected:

	protected:

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
			this->btnSuchen = (gcnew System::Windows::Forms::Button());
			this->btnSchliessen = (gcnew System::Windows::Forms::Button());
			this->btnAusgeben = (gcnew System::Windows::Forms::Button());
			this->btnAendern = (gcnew System::Windows::Forms::Button());
			this->lbLogo = (gcnew System::Windows::Forms::Label());
			this->btnNeuAnlegen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSuchen
			// 
			this->btnSuchen->Location = System::Drawing::Point(34, 46);
			this->btnSuchen->Name = L"btnSuchen";
			this->btnSuchen->Size = System::Drawing::Size(130, 30);
			this->btnSuchen->TabIndex = 1;
			this->btnSuchen->Text = L"Suchen";
			this->btnSuchen->UseVisualStyleBackColor = true;
			this->btnSuchen->Click += gcnew System::EventHandler(this, &Hauptmenue::btnSuchen_Click);
			// 
			// btnSchliessen
			// 
			this->btnSchliessen->Location = System::Drawing::Point(34, 154);
			this->btnSchliessen->Name = L"btnSchliessen";
			this->btnSchliessen->Size = System::Drawing::Size(130, 30);
			this->btnSchliessen->TabIndex = 2;
			this->btnSchliessen->Text = L"Beenden";
			this->btnSchliessen->UseVisualStyleBackColor = true;
			this->btnSchliessen->Click += gcnew System::EventHandler(this, &Hauptmenue::btnSchliessen_Click);
			// 
			// btnAusgeben
			// 
			this->btnAusgeben->Location = System::Drawing::Point(34, 82);
			this->btnAusgeben->Name = L"btnAusgeben";
			this->btnAusgeben->Size = System::Drawing::Size(130, 30);
			this->btnAusgeben->TabIndex = 3;
			this->btnAusgeben->Text = L"Ausgabe";
			this->btnAusgeben->UseVisualStyleBackColor = true;
			this->btnAusgeben->Click += gcnew System::EventHandler(this, &Hauptmenue::btnAusgeben_Click);
			// 
			// btnAendern
			// 
			this->btnAendern->Location = System::Drawing::Point(34, 118);
			this->btnAendern->Name = L"btnAendern";
			this->btnAendern->Size = System::Drawing::Size(130, 30);
			this->btnAendern->TabIndex = 4;
			this->btnAendern->Text = L"Eintrag Ändern";
			this->btnAendern->UseVisualStyleBackColor = true;
			this->btnAendern->Click += gcnew System::EventHandler(this, &Hauptmenue::btnAendern_Click);
			// 
			// lbLogo
			// 
			this->lbLogo->AutoSize = true;
			this->lbLogo->Location = System::Drawing::Point(93, 187);
			this->lbLogo->Name = L"lbLogo";
			this->lbLogo->Size = System::Drawing::Size(93, 13);
			this->lbLogo->TabIndex = 5;
			this->lbLogo->Text = L"©daddeldu GmbH";
			// 
			// btnNeuAnlegen
			// 
			this->btnNeuAnlegen->Location = System::Drawing::Point(34, 10);
			this->btnNeuAnlegen->Name = L"btnNeuAnlegen";
			this->btnNeuAnlegen->Size = System::Drawing::Size(130, 30);
			this->btnNeuAnlegen->TabIndex = 6;
			this->btnNeuAnlegen->Text = L"Neuen Eintrag Anlegen";
			this->btnNeuAnlegen->UseVisualStyleBackColor = true;
			this->btnNeuAnlegen->Click += gcnew System::EventHandler(this, &Hauptmenue::btnNeuAnlegen_Click);
			// 
			// Hauptmenue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(198, 207);
			this->Controls->Add(this->btnNeuAnlegen);
			this->Controls->Add(this->lbLogo);
			this->Controls->Add(this->btnAendern);
			this->Controls->Add(this->btnAusgeben);
			this->Controls->Add(this->btnSchliessen);
			this->Controls->Add(this->btnSuchen);
			this->Name = L"Hauptmenue";
			this->Text = L"Hauptmenü";
			this->Load += gcnew System::EventHandler(this, &Hauptmenue::Hauptmenue_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Hauptmenue_Load(System::Object^  sender, System::EventArgs^  e) {
		Show();
	}

	private: System::Void btnSuchen_Click(System::Object^  sender, System::EventArgs^  e) {
		Suchen ^suchen = gcnew Suchen();
		suchen->ShowDialog();
	}

	private: System::Void btnNeuAnlegen_Click(System::Object^  sender, System::EventArgs^  e) {
		NeuerEintrag ^NeuAnlegen = gcnew NeuerEintrag();
		NeuAnlegen->ShowDialog();
	}
	private: System::Void btnAusgeben_Click(System::Object^  sender, System::EventArgs^  e) {
		Ausgabe ^Ausgeben = gcnew Ausgabe();
		Ausgeben->ShowDialog();

	}
	private: System::Void btnAendern_Click(System::Object^  sender, System::EventArgs^  e) {
		Aendern ^aendern = gcnew Aendern();
		aendern->ShowDialog();
	}
	private: System::Void btnSchliessen_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}


	};
}
