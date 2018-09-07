#include "Strukturen.h"
#include <stdio.h>

void laden(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], index ind){

	FILE * maDtb;
	FILE * abtDtb;
	FILE * ltrDtb;
	//FILE * inDtb;

	int i = 0;
	int j = 0;
	/*
	//Durchinitialisierung der Strukturen, Mitarbeiter
	for (j = 0; j != 100; j++) {

		ma[j].adresseMA.postleitzahl = NULL;
		ma[j].abtRef = NULL;
		ma[j].personalnummer = NULL;

		for (i = 0; i != 10; i++) {
			ma[j].adresseMA.hausnummer[i] = NULL;
		}
		for (i = 0; i != 8; i++) {
			ma[j].eintrittsdatum[i] = NULL;
		}
		for (i = 0; i != 74; i++) {
			ma[j].email[i] = NULL;
		}

		for (i = 0; i != 30; i++) {
			ma[j].adresseMA.stadt[i] = NULL;
			ma[j].adresseMA.strasse[i] = NULL;
			ma[j].nachname[i] = NULL;
			ma[j].vorname[i] = NULL;
			ma[j].mobilnummer[i] = NULL;
			ma[j].festnetznummer[i] = NULL;
		}

	}
	//Durchinitialisierung der Strukturen, Abteilungen und Abteilungsleiter
	for (j = 0; j != 20; j++) {

		abtlLtr[j].abtRef = NULL;

		for (i = 0; i != 10; i++) {
			abt[0].adresseAbt.hausnummer[i] = NULL;
		}
		for (i = 0; i != 30; i++) {
			abt[j].name[i] = NULL;
			abt[j].adresseAbt.stadt[i] = NULL;
			abt[j].adresseAbt.strasse[i] = NULL;
			abtlLtr[j].nachname[i] = NULL;
			abtlLtr[j].vorname[i] = NULL;
			abtlLtr[j].mobilnummer[i] = NULL;
			abtlLtr[j].festnetznummer[i] = NULL;
		}
		for (i = 0; i != 74; i++) {
			abtlLtr[j].email[i] = NULL;
		}
		for (i = 0; i != 50; i++) {
			abt[j].abteilungssitz[i] = NULL;
		}

	}
	*/

	maDtb = fopen("maDtb.dtb", "rb");
	abtDtb = fopen("abtDtb.dtb", "rb");
	ltrDtb = fopen("ltrDtb.dtb", "rb");
	//inDtb = fopen("inDtb.dtb", "rb");

	if (!(maDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(ma, sizeof(mitarbeiter), 100, maDtb);
		fclose(maDtb);
	}

	if (!(abtDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(abt, sizeof(abteilung), 20, abtDtb);
		fclose(abtDtb);
	}

	if (!(ltrDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(abtlLtr, sizeof(abteilungsleiter), 20, ltrDtb);
		fclose(ltrDtb);
	}

	//if (!(inDtb == NULL))											//Datei lesen sofern sie existiert
	//{
	//	fread(&ind, sizeof(index), 1, inDtb);
	//	fclose(inDtb);
	//}
	
	//Index wird eingelesen
	/*
	for (i = 0; (abt[i].name[0] != NULL) || (i != 20); i++) {
		ind.abteilung = i;
	}
	for (i = 0; (abtlLtr[i].vorname[0] != NULL) || (i != 20); i++) {
		ind.abteilungsleiter = i;
	}
	for (i = 0; (ma[i].vorname[0] != NULL) || (i != 100); i++) {
		ind.abteilungsleiter = i;
	}
	*/
}

void saveAll(mitarbeiter ma[100], abteilung abt[20], abteilungsleiter abtlLtr[20], index ind)			// alle Structs abspeichern in einer Binär-Datei
{
	FILE *maDtb;
	FILE *abtDtb;
	FILE *ltrDtb;
	//FILE *inDtb;

	maDtb = fopen("maDtb.dtb", "wb");
	abtDtb = fopen("abtDtb.dtb", "wb");
	ltrDtb = fopen("ltrDtb.dtb", "wb");
	//inDtb = fopen("inDtb.dtb", "wb");

	fwrite(ma, sizeof(mitarbeiter), ind.mitarbeiter, maDtb);
	fwrite(abt, sizeof(abteilung), ind.abteilung, abtDtb);
	fwrite(abtlLtr, sizeof(abteilungsleiter), ind.abteilungsleiter, ltrDtb);
	//fwrite(&ind, sizeof(index), 1, inDtb);

	fclose(maDtb);
	fclose(abtDtb);
	fclose(ltrDtb);
	//fclose(inDtb);
}