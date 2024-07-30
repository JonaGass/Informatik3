#pragma once

typedef struct data {		// Datentyp für Referenzen
	char typ[15];
	char keyword[30];

	char author[200];
	char title[200];
	char journal[100];
	char year[5];
	char volume[10];
	char number[20];
	char pages[10];
	char month[20];
	char note[200];
	char publisher[100];
	char series[100];
	char address[100];
	char edition[20];
	char howpublished[100];
	char booktitle[200];
	char editor[100];
	char chapter[100];
	char school[100];
	char type[100];
	char institution[100];
	char organization[100];
} Data;

typedef struct name {		// Datentyp zum Speichern/Manipulieren der Autorennamen
	char firstName[20];
	char lastName[20];
};