#pragma once

//typedef struct data {		// Datentyp für Referenzen
//	char typ[15];
//	char keyword[30];
//
//	char author[200];
//	char title[200];
//	char journal[100];
//	char year[5];
//	char volume[10];
//	char number[20];
//	char pages[10];
//	char month[20];
//	char note[200];
//	char publisher[100];
//	char series[100];
//	char address[100];
//	char edition[20];
//	char howpublished[100];
//	char booktitle[200];
//	char editor[100];
//	char chapter[100];
//	char school[100];
//	char type[100];
//	char institution[100];
//	char organization[100];
//} Data;
//
//typedef struct name {		// Datentyp zum Speichern/Manipulieren der Autorennamen
//	char firstName[20];
//	char lastName[20];
//};

#include <array>
#include <string>

struct Datensatz {        // Datentyp für Referenzen
	std::array<char, 15> typ;
	std::array<char, 30> keyword;

	std::array<char, 200> author;
	std::array<char, 200> title;
	std::array<char, 100> journal;
	std::array<char, 5> year;
	std::array<char, 10> volume;
	std::array<char, 20> number;
	std::array<char, 10> pages;
	std::array<char, 20> month;
	std::array<char, 200> note;
	std::array<char, 100> publisher;
	std::array<char, 100> series;
	std::array<char, 100> address;
	std::array<char, 20> edition;
	std::array<char, 100> howpublished;
	std::array<char, 200> booktitle;
	std::array<char, 100> editor;
	std::array<char, 100> chapter;
	std::array<char, 100> school;
	std::array<char, 100> type;
	std::array<char, 100> institution;
	std::array<char, 100> organization;
};

struct Name {        // Datentyp zum Speichern/Manipulieren der Autorennamen
	std::array<char, 20> firstName;
	std::array<char, 20> lastName;
};