/*In dieser Datei werden alle Fubnktionen 
zusammengefasst und beschrieben, die das 
Programm zum arbeiten braucht.*/

#include "Strukturen.h"
#include <stdio.h>
#include <string.h>

void laden(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20]) {
	/*In dieser Funktion werden die Datensätze aus den Dateien ausgelesen. 
	Dies wurde bewusst mit der Funktion fgetc() gemacht und nicht mit fread(), 
	da mit fgetc() das Dateiformat .csv keine Probleme mach. Alle , und ; werden 
	herausgefiltert und nur der Eintrag in die vorinitialisierte Variable 
	geschrieben. */
	FILE * maDtb;
	FILE * abtDtb;
	FILE * ltrDtb;

	int i = 0;//Eintrag
	int j = 0;//Einzelzeichen
	int k = 0;//Wort
	char temp;//Temporäre Variable

	//Auslesen der Mitarbeiter-Datei
	maDtb = fopen("maDtb.csv", "r");//Öffnen der Datei mit Lesezugriff

	if (!(maDtb == NULL))//Datei lesen sofern sie existiert
	{
		while ((temp = fgetc(maDtb)) != EOF) {
			//Der Pointer durchläuft jeder Zeichen und "sucht" nach Zeilenumbrüchen/;/,/dem Ende der Datei
			if ((temp == ';') || (temp == ',')) {
				//Die Variable wird weiter gezählt und die Zeichen auf 0 gesetzt
				++k;
				j = 0;
			}
			else if (temp == '\n') {
				//Das Ende einer Zeile/eines Eintrags wurde erreicht
				++i;
				k = 0;
				j = 0;
			}
			else {
				//Die Variablen werden Char-Weise gefüllt
				switch (k) {
				case 0: {
					ma[i].nachname[j] = temp;
				}break;
				case 1: {
					ma[i].vorname[j] = temp;
				}break;
				case 2: {
					ma[i].eintrittsdatum[j] = temp;
				}break;
				case 3: {
					ma[i].adresseMA.strasse[j] = temp;
				}break;
				case 4: {
					ma[i].adresseMA.hausnummer[j] = temp;
				}break;
				case 5: {
					ma[i].adresseMA.postleitzahl[j] = temp;
				}break;
				case 6: {
					ma[i].adresseMA.stadt[j] = temp;
				}break;
				case 7: {
					ma[i].mobilnummer[j] = temp;
				}break;
				case 8: {
					ma[i].festnetznummer[j] = temp;
				}break;
				case 9: {
					ma[i].email[j] = temp;
				}break;
				case 10: {
					ma[i].personalnummer[j] = temp;
				} break;
				case 11: {
					ma[i].abtRef[j] = temp;
				} break;
				}
				++j;
			}
		}
	};
	fclose(maDtb);

	i = 0;
	j = 0;
	k = 0;
	//Auslesen der Abteilungs-Datei
	abtDtb = fopen("abtDtb.csv", "r");//Öffnen der Datei mit Lesezugriff

	if (!(abtDtb == NULL))//Datei lesen sofern sie existiert
	{
		while ((temp = fgetc(abtDtb)) != EOF) {
			//Der Pointer durchläuft jeder Zeichen und "sucht" nach Zeilenumbrüchen/;/,/dem Ende der Datei
			if ((temp == ';') || (temp == ',')) {
				//Die Variable wird weiter gezählt und die Zeichen auf 0 gesetzt
				++k;
				j = 0;
			}
			else if (temp == '\n') {
				//Das Ende einer Zeile/eines Eintrags wurde erreicht
				++i;
				k = 0;
				j = 0;
			}
			else {
				//Die Variablen werden Char-Weise gefüllt
				switch (k)
				{
				case 0:
					abt[i].name[j] = temp;
					break;
				case 1:
					abt[i].ltrRef[j] = temp;
					break;
				case 2:
					abt[i].adresseAbt.strasse[j] = temp;
					break;
				case 3:
					abt[i].adresseAbt.hausnummer[j] = temp;
					break;
				case 4:
					abt[i].adresseAbt.postleitzahl[j] = temp;
					break;
				case 5:
					abt[i].adresseAbt.stadt[j] = temp;
					break;
				case 6:
					abt[i].abteilungssitz[j] = temp;
					break;
				}
				++j;
			}
		}
	}
	fclose(abtDtb);
	i = 0;
	j = 0;
	k = 0;
	//Auslesen der Abteilungsleiter-Datei
	ltrDtb = fopen("abtltrDtb.csv", "r");//Öffnen der Datei mit Lesezugriff 

	if (!(ltrDtb == NULL))//Datei lesen sofern sie existiert
	{
		while ((temp = fgetc(ltrDtb)) != EOF) {
			//Der Pointer durchläuft jeder Zeichen und "sucht" nach Zeilenumbrüchen/;/,/dem Ende der Datei
			if ((temp == ';') || (temp == ',')) {
				//Die Variable wird weiter gezählt und die Zeichen auf 0 gesetzt
				++k;
				j = 0;
			}
			else if (temp == '\n') {
				//Das Ende einer Zeile/eines Eintrags wurde erreicht
				++i;
				k = 0;
				j = 0;
			}
			else {
				//Die Variablen werden Char-Weise gefüllt
				switch (k)
				{
				case 0:
					abtlLtr[i].vorname[j] = temp;
					break;
				case 1:
					abtlLtr[i].nachname[j] = temp;
					break;
				case 2:
					abtlLtr[i].mobilnummer[j] = temp;
					break;
				case 3:
					abtlLtr[i].festnetznummer[j] = temp;
					break;
				case 4:
					abtlLtr[i].abtRef[j] = temp;
					break;
				case 5:
					abtlLtr[i].email[j] = temp;
					break;
				}
				++j;
			}
		}
	}
	fclose(ltrDtb);
}

void initialisierung(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20]) {
	/*Um an den unbeschriebenen Stellen der Struktur ein definiertes Nichts zu haben werden 
	alle Variablen der vier Hauptstrukturen mit einer NULL an jeder Stelle versehen. So wird 
	vermieden das beim Speichern, undefinierte Fragmente, welche im schlimmsten Fall zu 
	Stackoverflow-Fehlern füren könnten mit abgespeichert werden.*/
	int i = 0;
	int j = 0;

	for (i = 0; i != 100; i++) {//Betrifft nur die Mitarbeitervariablen
		for (j = 0; j != 30; j++) {
			ma[i].abtRef[j] = NULL;
			ma[i].nachname[j] = NULL;
			ma[i].vorname[j] = NULL;
			ma[i].mobilnummer[j] = NULL;
			ma[i].festnetznummer[j] = NULL;
			ma[i].abtRef[j] = NULL;
			ma[i].adresseMA.strasse[j] = NULL;
			ma[i].adresseMA.stadt[j] = NULL;
		}
		for (j = 0; j != 10; j++) {
			ma[i].adresseMA.postleitzahl[j] = NULL;
			ma[i].adresseMA.hausnummer[j] = NULL;
		}
		for (j = 0; j != 74; j++) {
			ma[i].email[j] = NULL;
		}
		for (j = 0; j != 4; j++) {
			ma[i].personalnummer[j] = NULL;
		}
		for (j = 0; j != 8; j++) {
			ma[i].eintrittsdatum[j] = NULL;
		}
	}
	for (i = 0; i != 20; i++) {//Betrifft die Variablen von Abteilungen und Abteilungsleitern
		for (j = 0; j != 30; j++) {
			abtlLtr[i].abtRef[j] = NULL;
			abtlLtr[i].vorname[j] = NULL;
			abtlLtr[i].nachname[j] = NULL;
			abtlLtr[i].mobilnummer[j] = NULL;
			abtlLtr[i].festnetznummer[j] = NULL;
			abt[i].name[j] = NULL;
			abt[i].ltrRef[j] = NULL;
			abt[i].adresseAbt.stadt[j] = NULL;
			abt[i].adresseAbt.strasse[j] = NULL;
		}
		for (j = 0; j != 50; j++) {
			abt[i].abteilungssitz[j] = NULL;
		}
		for (j = 0; j != 74; j++) {
			
			abtlLtr[i].email[j] = NULL;
		}
		for (j = 0; j != 10; j++) {
			abt[i].adresseAbt.hausnummer[j] = NULL;
			abt[i].adresseAbt.postleitzahl[j] = NULL;
		}
	}

}

void saveAll(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], index ind)			// alle Structs abspeichern in einer Binär-Datei
{/*In dieser Funktion werden alle zwischengespeicherten Einträge in die dazu gehörige Datei 
 geschrieben. Der Einfachheit halber werden dazu die bestehenden Datenbanken zerstört und neu 
 erstellt. Anschließend werden alle Einträge in einem .csv Dateiformat gespeichert. 
 So ist eine Ausgabe über z.B. EXCEL problemlos möglich.*/
	FILE *maDtb;
	FILE *abtDtb;
	FILE *ltrDtb;

	int i = 0;

	maDtb = fopen("maDtb.csv", "w+");//Die Datei wird neu erstellt 
									 //und die Datensätze werden mit ";" als Trennzeichen eingetragen
	for (i = 0; i < ind.mitarbeiter; ++i) {
		fprintf(maDtb, "%s", ma[i].vorname);
		fprintf(maDtb, ";%s", ma[i].nachname);
		fprintf(maDtb, ";%s", ma[i].eintrittsdatum);
		fprintf(maDtb, ";%s", ma[i].adresseMA.strasse);
		fprintf(maDtb, ";%s", ma[i].adresseMA.hausnummer);
		fprintf(maDtb, ";%s", ma[i].adresseMA.postleitzahl);
		fprintf(maDtb, ";%s", ma[i].adresseMA.stadt);
		fprintf(maDtb, ";%s", ma[i].mobilnummer);
		fprintf(maDtb, ";%s", ma[i].festnetznummer);
		fprintf(maDtb, ";%s", ma[i].email);
		fprintf(maDtb, ";%s", ma[i].personalnummer);
		fprintf(maDtb, ";%s\n", ma[i].abtRef);
	}
	fclose(maDtb);

	abtDtb = fopen("abtDtb.csv", "w+");;//Die Datei wird neu erstellt 
										//und die Datensätze werden mit ";" als Trennzeichen eingetragen
	for (i = 0; i < ind.abteilung; ++i) {
		fprintf(abtDtb, "%s", abt[i].name);
		fprintf(abtDtb, ";%s", abt[i].ltrRef);
		fprintf(abtDtb, ";%s", abt[i].adresseAbt.strasse);
		fprintf(abtDtb, ";%s", abt[i].adresseAbt.hausnummer);
		fprintf(abtDtb, ";%s", abt[i].adresseAbt.postleitzahl);
		fprintf(abtDtb, ";%s", abt[i].adresseAbt.stadt);
		fprintf(abtDtb, ";%s\n", abt[i].abteilungssitz);
	}
	fclose(abtDtb);

	ltrDtb = fopen("abtltrDtb.csv", "w+");;//Die Datei wird neu erstellt 
										   //und die Datensätze werden mit ";" als Trennzeichen eingetragen
	for (i = 0; i < ind.abteilungsleiter; ++i) {
		fprintf(ltrDtb, "%s", abtlLtr[i].vorname);
		fprintf(ltrDtb, ";%s", abtlLtr[i].nachname);
		fprintf(ltrDtb, ";%s", abtlLtr[i].mobilnummer);
		fprintf(ltrDtb, ";%s", abtlLtr[i].festnetznummer);
		fprintf(ltrDtb, ";%s", abtlLtr[i].email);
		fprintf(ltrDtb, ";%s\n", abtlLtr[i].abtRef);
	}
	fclose(ltrDtb);

}

void indexzaehler(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], index ind) {
	/*Die Datensätze werden ausgezählt und die Anzahl in die ind Variable geschrieben.
	Diese Funktion funktioniert nur NACHDEM die laden()-Funktion ausgefürt wurde.*/
	ind.mitarbeiter = 0;
	ind.abteilung = 0;
	ind.abteilungsleiter = 0;

	while (ma[ind.mitarbeiter].vorname[0] != '\0') {
		++ind.mitarbeiter;
	}
	while (abt[ind.abteilung].name[0] != '\0') {
		++ind.abteilung;
	}
	while (abtlLtr[ind.abteilungsleiter].vorname[0] != '\0') {
		++ind.abteilungsleiter;
	}
}

void comboboxfuellen(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], einstellungComboBox einstellung, comboBoxfuellung cbf[100]){
	/*Diese Funktion ist eine Multifunktion welche ComboBoxen füllen soll, oder zumindest die Werte dafür berreitstellt.
	Ist eine Allgemeine Ausgabe gewünscht (wie bei Ausgeben.h) so muss die Variable einstellung.suchercb an der stelle [0] = NULL sein.
	Ist eine Suche gewünscht, so wird nach dem string in der Variable einstellung.suchercb gesucht.
	Alle Ergebnisse werden in eine Struktur geschrieben und anschließend in der .h, wo diese Funktion aufgerufen wurde,
	in die Combobox eingelesen*/
	
	int i = 0;
	
	if (einstellung.suchercb[0] == NULL) {
		if (einstellung.checkedBox == "mitarb") {//Überprüfen mit was die Combobox gefüllt werden soll
			for (i = 0; (ma[i].vorname[0] != NULL) || (i = 100); i++) {
				strcpy(cbf[i].checkBoxfuellungVorname, ma[i].vorname);
				strcpy(cbf[i].checkBoxfuellungNachname, ma[i].nachname);
			}
		}
		if (einstellung.checkedBox == "abtlei") {//Überprüfen mit was die Combobox gefüllt werden soll
			for (i = 0; (ma[i].vorname[0] != NULL) || (i = 100); i++) {
				strcpy(cbf[i].checkBoxfuellungVorname, abtlLtr[i].vorname);
				strcpy(cbf[i].checkBoxfuellungNachname, abtlLtr[i].nachname);
			}
		}
		if (einstellung.checkedBox == "abteil") {//Überprüfen mit was die Combobox gefüllt werden soll
			for (i = 0; (ma[i].vorname[0] != NULL) || (i = 100); i++) {
				strcpy(cbf[i].checkBoxfuellungVorname, abt[i].name);
				strcpy(cbf[i].checkBoxfuellungNachname, abt[i].ltrRef);
			}
		}
	}



}