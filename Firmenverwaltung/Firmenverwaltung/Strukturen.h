#pragma once
typedef struct {
	char suchercb[30];
	char checkedBox[5];
}einstellungCombokbox;

typedef struct {
	char checkBoxfuellungVorname[30];
	char checkBoxfuellungNachname[30];
}comboBoxfuellung[100];


typedef struct
{
	char strasse[30];
	char hausnummer[10];
	char postleitzahl[10];
	char stadt[30];
} adresse;

typedef struct
{
	char nachname[30];
	char vorname[30];
	char abtRef[30];
	char mobilnummer[30];
	char festnetznummer[30];
	char email[74];
} abteilungsleiter;

typedef struct
{
	char name[30];
	adresse adresseAbt;
	char abteilungssitz[50];
	char ltrRef[30];																							// Initialisierung auf -1 um Fehler zu vermeiden
} abteilung;

typedef struct
{
	char personalnummer[4];
	char nachname[30];
	char vorname[30];
	char eintrittsdatum[8];																						// Länge vorgesehen für ein MM/JJJJ Format (Bsp.: '11/2016')
	adresse adresseMA;
	char mobilnummer[30];
	char festnetznummer[30];
	char email[74];
	char abtRef [30];
} mitarbeiter;

typedef struct
{
	int mitarbeiter;
	int abteilung;
	int abteilungsleiter;
} index;

extern void laden(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20]);

extern void initialisierung(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20]);

extern void saveAll(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], index ind);

extern void comboboxfuellen(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], einstellungCombokbox einstellung, comboBoxfuellung cbf[100]);