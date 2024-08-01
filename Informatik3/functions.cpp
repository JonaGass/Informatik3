// Bibliotheken
//test1
#include "datatypes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <cstring>



//Deklaration arry
data kopie[100];
data array[999];





// Funktion zum Initalisieren -> setzt alle Bytes einer Referenz auf 0
void initializeData(Data * data) {
	memset(data, 0, sizeof(Data));
}





// Funktionen für verschiedene Fehler/Erfolgs/Info-Meldungen

void dataError() {
	system("cls");
	system("color C0");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                         Dateifehler!                       |\n");
	printf("                              +------------------------------------------------------------+\n");
	Sleep(1500);
	system("color 70");
	system("cls");
}

void noEntries() {
	system("cls");
	system("color C0");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                       keine Referenzen!                    |\n");
	printf("                              +------------------------------------------------------------+\n");
	Sleep(1500);
	system("color 70");
	system("cls");
}

void falseInput() {
	system("cls");
	system("color C0");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                       Falsche Eingabe!                     |\n");
	printf("                              +------------------------------------------------------------+\n");
	Sleep(1500);
	system("color 70");
	system("cls");
}

void entrySaved(int i) {
	system("cls");
	system("color A0");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if (i > -1) {
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                    Eintrag %d gespeichert      \n", i + 1);
		printf("                              +------------------------------------------------------------+\n");
	}
	else {
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                     Eintrag gespeichert      \n");
		printf("                              +------------------------------------------------------------+\n");
	}

	Sleep(1500);
	system("color 70");
	system("cls");
}

void entryDeleted() {
	system("cls");
	system("color A0");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                     Eintrag entfernt      \n");
	printf("                              +------------------------------------------------------------+\n");
	Sleep(1500);
	system("color 70");
	system("cls");
}







// Funktion für das schrittweise Anzeigen des Boot-Logos. Gibt immer 3 Zeichen zur Zeit aus
void printSlow(char * text) {
	int length = strlen(text);
	for (int i = 0; i < length - 3; i += 3) {
		printf("%c%c%c", text[i], text[i + 1], text[i + 2]);
		fflush(stdout); // Ausgabepuffer leeren
		Sleep(5);
	}

}



// Boot Animation / ASCII Logo
void boot() {
	char logo[] =
		"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		"      ________      ___      ________      _________    _______       ___    ___  ________    ________      ________     \n"
		"     |\\   __  \\    |\\  \\    |\\   __  \\    |\\___   ___\\ |\\  ___ \\     |\\  \\  /  /||\\   __  \\  |\\   __  \\    |\\   __  \\    \n"
		"     \\ \\  \\|\\ /_   \\ \\  \\   \\ \\  \\|\\ /_   \\|___ \\  \\_| \\ \\   __/|    \\ \\  \\/  / /\\ \\  \\|\\  \\ \\ \\  \\|\\  \\   \\ \\  \\|\\  \\   \n"
		"      \\ \\   __  \\   \\ \\  \\   \\ \\   __  \\       \\ \\  \\   \\ \\  \\_|/__   \\ \\    / /  \\ \\   ____\\ \\ \\   _  _\\   \\ \\  \\\\\\  \\  \n"
		"       \\ \\  \\|\\  \\   \\ \\  \\   \\ \\  \\|\\  \\       \\ \\  \\   \\ \\  \\_|\\ \\   /     \\/    \\ \\  \\___|  \\ \\  \\\\  \\|   \\ \\  \\\\\\  \\ \n"
		"        \\ \\_______\\   \\ \\__\\   \\ \\_______\\       \\ \\__\\   \\ \\_______\\ /  /\\   \\     \\ \\__\\      \\ \\__\\\\ _\\    \\ \\_______\\\n"
		"         \\|_______|    \\|__|    \\|_______|        \\|__|    \\|_______|/__/ /\\ __\\     \\|__|       \\|__|\\|__|    \\|_______|\n"
		"                                                                     |__|/ \\|__|                                     \n";

	printSlow(logo);
	Sleep(3000);
}





int menu(int i) {
	int Auswahl;
	system("cls");

	// Menu anzeigen
	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                            MENU                            |\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  1. Neue Referenz                          |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  2. Referenzen ansehen                     |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  3. Referenzen durchsuchen                 |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  4. Referenz bearbeiten                    |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  5. Referenz entfernen                     |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  6. Daten auf HD speichern                 |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                  7. Export als .bib-Datei                  |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                Anzahl Referenzen: %d/1000        \n", i);
	printf("                              +------------------------------------------------------------+\n");
	printf("\n\n\n");
	printf("                                                      Mit 0 beenden           \n");

	// Auswahl einlesen und an Hauptfunktion zurückliefern

	scanf("%d", &Auswahl);
	getchar();
	return Auswahl;
}





// Funktion zum Einlesen von nicht-optionalen Feldern. Eingabe kann nicht durch Enter übersprungen werden. 
// Fehlermeldung bei Überschreitung der Maximallänge
void getInput(const char * element, char * field, size_t fieldSize) {

	int empty = 0;
	char buffer[1000] = "";

	while (empty == 0) {

		printf("\n                               %s: ", element);


		fgets(buffer, sizeof(buffer), stdin);					// Eingabe einlesen

		strtok(buffer, "\n");									// Entfernen des Enter-Zeichens

		if (strlen(buffer) < fieldSize && buffer[0] != '\n') {	// Überprüfen, ob die Eingabe länger als die Maximallänge ist und ob das erste Zeichen ungleich Enter ist
			strncpy(field, buffer, fieldSize);					// Buffer inhalt in Array schreiben
			empty++;
		}
		else if (buffer[0] != '\n') {							// Fehlermeldung ausgeben wenn Eingabe zu lang ist & while Schleife erneut durchlaufen
			printf("                               Eingabe zu lang. Maximal %zu Zeichen erlaubt.", fieldSize - 1);
			while (getchar() != '\n');							// Puffer leeren
		}
	}

}


// Funktion zum Einlesen von optionalen Feldern. Eingabe kann durch Enter übersprungen werden. 
// Fehlermeldung bei Überschreitung der Maximallänge
void getOptionalInput(const char * element, char * field, size_t fieldSize) {

	char buffer[1000] = "";
	int maxed = 0;

	do {
		printf("\n                               %s: ", element);

		fgets(buffer, sizeof(buffer), stdin);					// Eingabe einlesen
		strtok(buffer, "\n");									// Zeilenumbruch entfernen

		if (strlen(buffer) < fieldSize && buffer[0] != '\n') {	// Überprüfen, ob die Eingabe länger als die Maximallänge ist und ob das erste Zeichen ungleich Enter ist

			strncpy(field, buffer, fieldSize);					// Buffer inhalt in Array schreiben
			maxed = 0;
		}
		else if (buffer[0] != '\n') {							// Fehlermeldung ausgeben wenn Eingabe zu lang ist & while Schleife erneut durchlaufen

			printf("                               Eingabe zu lang. Maximal %zu Zeichen erlaubt.", fieldSize - 1);
			maxed = 1;
			while (getchar() != '\n');
		}
	} while (maxed == 1);

}



// Funktion um eingelesene Namen ins BibTex Format zu bringen: Nachname1, Vorname1 and Nachname2, Vorname2 and ...
char * getNames(int x) {

	name names[5];												// Array zum Speichern von 5 Autoren
	static char formattedNames[200];							// Puffer zum Speichern der formatierten Namen
	int numNames = 0;											// Anzahl der Namen
	char addMore = 'y';											// Auswahlvariable des Nutzers
	printf("\n                               author:");

	if (x == 1) {												// Wenn Autor optional ist kann der Nutzer die Eingabe überspringen ohne einen Namen einzugeben
		printf("\n                                    Autor angeben? (y/n): ");
		scanf(" %c", &addMore);
		getchar();
	}

	while (addMore == 'y' || addMore == 'Y') {
		printf("\n\n                                    Bitte geben Sie den Vornamen ein: ");
		fgets(names[numNames].firstName, sizeof(names[numNames].firstName), stdin);				// Eingabe in firstName einlesen
		names[numNames].firstName[strcspn(names[numNames].firstName, "\n")] = '\0';				// Entfernt das Zeilenumbruchzeichen

		printf("\n                                    Bitte geben Sie den Nachnamen ein: ");
		fgets(names[numNames].lastName, sizeof(names[numNames].lastName), stdin);				// Eingabe in lastName einlesen
		names[numNames].lastName[strcspn(names[numNames].lastName, "\n")] = '\0';				// Entfernt das Zeilenumbruchzeichen

		numNames++;

		if (numNames >= 5) {																	// Prüfen ob maximale Anzahl an Autoren erreicht ist
			printf("\n\n                                    Sie haben die maximale Anzahl an Namen erreicht.\n");
			addMore = 'N';
			getchar();
		}

		else {
			printf("\n                                    Weiteren Autor angeben? (y/n): ");
			scanf(" %c", &addMore);
			getchar();
		}
	}

	// Setzt den Inhalt von 'formattedNames' auf einen leeren String.
	strcpy(formattedNames, "");

	for (int i = 0; i < numNames; i++) {				// Schleife durchläuft die Liste der Namen.
		strcat(formattedNames, names[i].lastName);		// Fügt den Nachnamen an formattedNames an.
		strcat(formattedNames, ", ");					// Fügt ein Komma und Leerzeichen an.
		strcat(formattedNames, names[i].firstName);		// Fügt den Vornamen an.

		if (i < numNames - 1) {							// Falls es nicht der letzte Name ist " and " anfügen
			strcat(formattedNames, " and ");
		}
	}

	return formattedNames;								// Gibt die formatierten Namen zurück.
}



// Funktion zum Hinzufügen einer neuen Referenz
void add(data array[999], int i) {
	system("cls");
	int selection;
	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");			// Anzeigen der unterschiedlichen Quellenarten
	printf("                              |                        Neue Referenz                       |\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        1. article                          |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        2. book                             |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        3. booklet                          |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        4. conference                       |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        5. inbook                           |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        6. incollection                     |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        7. inproceedings                    |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        8. manual                           |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        9. mastersthesis                    |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        10. misc                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        11. phdthesis                       |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        12. proceedings                     |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        13. techreport                      |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              |                        14. unpublished                     |\n");
	printf("                              |                                                            |\n");
	printf("                              |                                                            |\n");
	printf("                              +------------------------------------------------------------+\n");

	scanf("%d", &selection);	// Auswahl auslesen
	getchar();

	switch (selection) {		// Switch-case für die Quellenarten
	case 1: {
		strcpy(array[i].typ, "article");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                           article                          |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));												// Zwingende Felder werden per getInput() eingelesen
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("journal", array[i].journal, sizeof(array[i].journal));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));																			// Autor per getNames() einlesen

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                           article                          |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("volume", array[i].volume, sizeof(array[i].volume));											// Optionale Felder werden per getOptionalInput() eingelesen
		getOptionalInput("number", array[i].number, sizeof(array[i].number));
		getOptionalInput("pages", array[i].pages, sizeof(array[i].pages));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);																									// Erfolgsmeldung

		break;
	}

	case 2: {
		strcpy(array[i].typ, "book");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                             book                           |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getInput("year", array[i].year, sizeof(array[i].year));

		printf("\n                               1) author oder 2) editor? \n");

		do {
			char cr;
			cr = _getch();

			if (cr == '1') {
				strcpy(array[i].author, getNames(0));
				break;
			}

			if (cr == '2') {
				getInput("editor", array[i].editor, sizeof(array[i].editor));
				break;
			}

		} while (1);

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                             book                           |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("volume", array[i].volume, sizeof(array[i].volume));
		getOptionalInput("series", array[i].series, sizeof(array[i].series));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("edition", array[i].edition, sizeof(array[i].edition));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 3: {
		strcpy(array[i].typ, "booklet");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                            booklet                         |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                            booklet                         |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("howpublished", array[i].howpublished, sizeof(array[i].howpublished));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("year", array[i].year, sizeof(array[i].year));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));
		strcpy(array[i].author, getNames(1));

		entrySaved(i);

		break;
	}

	case 4: {
		strcpy(array[i].typ, "conference");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         conference                         |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("booktitle", array[i].booktitle, sizeof(array[i].booktitle));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         conference                         |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("editor", array[i].editor, sizeof(array[i].editor));
		getOptionalInput("pages", array[i].pages, sizeof(array[i].pages));
		getOptionalInput("organization", array[i].organization, sizeof(array[i].organization));
		getOptionalInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 5: {
		strcpy(array[i].typ, "inbook");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                            inbook                          |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));

		printf("\n                               1) chapter oder 2) pages oder 3) chaper&pages? \n");

		do {
			char cr;
			cr = _getch();

			if (cr == '1') {
				getInput("chapter", array[i].chapter, sizeof(array[i].chapter));
				break;
			}

			if (cr == '2') {
				getInput("pages", array[i].pages, sizeof(array[i].pages));
				break;
			}

			if (cr == '3') {
				getInput("chapter", array[i].chapter, sizeof(array[i].chapter));
				getInput("pages", array[i].pages, sizeof(array[i].pages));
				break;
			}

		} while (1);
		getInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getInput("year", array[i].year, sizeof(array[i].year));
		printf("\n                               1) author oder 2) editor? \n");

		do {
			char cr;
			cr = _getch();

			if (cr == '1') {
				strcpy(array[i].author, getNames(0));
				break;
			}

			if (cr == '2') {
				getInput("editor", array[i].editor, sizeof(array[i].editor));
				break;
			}

		} while (1);

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                            inbook                          |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("volume", array[i].volume, sizeof(array[i].volume));
		getOptionalInput("series", array[i].series, sizeof(array[i].series));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("edition", array[i].edition, sizeof(array[i].edition));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 6: {
		strcpy(array[i].typ, "incollection");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         incollection                       |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("booktitle", array[i].booktitle, sizeof(array[i].booktitle));
		getInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         incollection                       |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("editor", array[i].editor, sizeof(array[i].editor));
		getOptionalInput("chapter", array[i].chapter, sizeof(array[i].chapter));
		getOptionalInput("pages", array[i].pages, sizeof(array[i].pages));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 7: {
		strcpy(array[i].typ, "inproceedings");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                        inproceedings                       |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("booktitle", array[i].booktitle, sizeof(array[i].booktitle));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                        inproceedings                       |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("editor", array[i].editor, sizeof(array[i].editor));
		getOptionalInput("pages", array[i].pages, sizeof(array[i].pages));
		getOptionalInput("organization", array[i].organization, sizeof(array[i].organization));
		getOptionalInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 8: {
		strcpy(array[i].typ, "manual");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                             manual                         |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                             manual                         |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("organization", array[i].organization, sizeof(array[i].organization));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("edition", array[i].edition, sizeof(array[i].edition));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("year", array[i].year, sizeof(array[i].year));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));
		strcpy(array[i].author, getNames(1));

		entrySaved(i);

		break;
	}

	case 9: {
		strcpy(array[i].typ, "mastersthesis");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         mastersthesis                      |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("school", array[i].school, sizeof(array[i].school));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         mastersthesis                      |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 10: {
		strcpy(array[i].typ, "misc");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                              misc                          |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                              misc                          |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("title", array[i].title, sizeof(array[i].title));
		getOptionalInput("howpublished", array[i].howpublished, sizeof(array[i].howpublished));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("year", array[i].year, sizeof(array[i].year));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));
		strcpy(array[i].author, getNames(1));

		entrySaved(i);

		break;
	}

	case 11: {
		strcpy(array[i].typ, "phdthesis");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          phdthesis                         |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("school", array[i].school, sizeof(array[i].school));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          phdthesis                         |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 12: {
		strcpy(array[i].typ, "proceedings");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          proceedings                       |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("year", array[i].year, sizeof(array[i].year));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          proceedings                       |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("editor", array[i].editor, sizeof(array[i].editor));
		getOptionalInput("publisher", array[i].publisher, sizeof(array[i].publisher));
		getOptionalInput("organization", array[i].organization, sizeof(array[i].organization));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 13: {
		strcpy(array[i].typ, "techreport");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          techreport                        |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("institution", array[i].institution, sizeof(array[i].institution));
		getInput("year", array[i].year, sizeof(array[i].year));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                          techreport                        |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("type", array[i].type, sizeof(array[i].type));
		getOptionalInput("number", array[i].number, sizeof(array[i].number));
		getOptionalInput("address", array[i].address, sizeof(array[i].address));
		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("note", array[i].note, sizeof(array[i].note));

		entrySaved(i);

		break;
	}

	case 14: {
		strcpy(array[i].typ, "unpublished");
		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         unpublished                        |\n");
		printf("                              |                      -Zwingende Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");
		getInput("keyword", array[i].keyword, sizeof(array[i].keyword));
		getInput("title", array[i].title, sizeof(array[i].title));
		getInput("note", array[i].note, sizeof(array[i].note));
		strcpy(array[i].author, getNames(0));

		system("cls");
		printf("                              +------------------------------------------------------------+\n");
		printf("                              |                         unpublished                        |\n");
		printf("                              |                      -Optionale Felder-                    |\n");
		printf("                              +------------------------------------------------------------+\n");

		getOptionalInput("month", array[i].month, sizeof(array[i].month));
		getOptionalInput("year", array[i].year, sizeof(array[i].year));

		entrySaved(i);

		break;
	}

	default: {
		falseInput();		// Fehlermeldung bei ungültigem Input
		break;
	}

	}

}


// Funktion zum Anzeigen einer bestimmten Referenz. Es werden nur Felder mit hinterlegten Informationen angezeigt.
void view(data array[999], int index) {


	printf("\n                                 @%s\n\n", array[index].typ);

	if (array[index].keyword != NULL && array[index].keyword[0] != '\0') {
		std::strcpy(kopie[1].keyword, array[index].keyword);
	}

	if (array[index].author != NULL && array[index].author[0] != '\0') {
		printf("                                 Author: %s\n\n", array[index].author);
	}

	if (array[index].title != NULL && array[index].title[0] != '\0') {
		printf("                                 Title: %s\n\n", array[index].title);
	}

	if (array[index].journal != NULL && array[index].journal[0] != '\0') {
		printf("                                 Journal: %s\n\n", array[index].journal);
	}

	if (array[index].year != NULL && array[index].year[0] != '\0') {
		printf("                                 Year: %s\n\n", array[index].year);
	}

	if (array[index].volume != NULL && array[index].volume[0] != '\0') {
		printf("                                 Volume: %s\n\n", array[index].volume);
	}

	if (array[index].number != NULL && array[index].number[0] != '\0') {
		printf("                                 Number: %s\n\n", array[index].number);
	}

	if (array[index].pages != NULL && array[index].pages[0] != '\0') {
		printf("                                 Pages: %s\n\n", array[index].pages);
	}

	if (array[index].month != NULL && array[index].month[0] != '\0') {
		printf("                                 Month: %s\n\n", array[index].month);
	}

	if (array[index].note != NULL && array[index].note[0] != '\0') {
		printf("                                 Note: %s\n\n", array[index].note);
	}

	if (array[index].publisher != NULL && array[index].publisher[0] != '\0') {
		printf("                                 Publisher: %s\n\n", array[index].publisher);
	}

	if (array[index].series != NULL && array[index].series[0] != '\0') {
		printf("                                 Series: %s\n\n", array[index].series);
	}

	if (array[index].address != NULL && array[index].address[0] != '\0') {
		printf("                                 Address: %s\n\n", array[index].address);
	}

	if (array[index].edition != NULL && array[index].edition[0] != '\0') {
		printf("                                 Edition: %s\n\n", array[index].edition);
	}

	if (array[index].howpublished != NULL && array[index].howpublished[0] != '\0') {
		printf("                                 How Published: %s\n\n", array[index].howpublished);
	}

	if (array[index].booktitle != NULL && array[index].booktitle[0] != '\0') {
		printf("                                 Book Title: %s\n\n", array[index].booktitle);
	}

	if (array[index].editor != NULL && array[index].editor[0] != '\0') {
		printf("                                 Editor: %s\n\n", array[index].editor);
	}

	if (array[index].chapter != NULL && array[index].chapter[0] != '\0') {
		printf("                                 Chapter: %s\n\n", array[index].chapter);
	}

	if (array[index].school != NULL && array[index].school[0] != '\0') {
		printf("                                 School: %s\n\n", array[index].school);
	}

	if (array[index].type != NULL && array[index].type[0] != '\0') {
		printf("                                 Type: %s\n\n", array[index].type);
	}

	if (array[index].institution != NULL && array[index].institution[0] != '\0') {
		printf("                                 Institution: %s\n\n", array[index].institution);
	}

	if (array[index].organization != NULL && array[index].organization[0] != '\0') {
		printf("                                 Organization: %s\n\n", array[index].organization);
	}

}


// Funktion zum Bearbeiten einer bestimmten Referenz
void edit(data array[999], int i) {
	char choice;

	do {
		system("cls");
		printf("\n\n\n");
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                          Bearbeiten                      \n");
		printf("                              +------------------------------------------------------------+\n");
		view(array, i); // Zeige den aktuellen Eintrag

		printf("\n\n");

		printf("                               Welches Feld wollen Sie bearbeiten?\n\n");
		printf("                               A: Keyword\n");

		if (strcmp(array[i].typ, "article") == 0) {							// Anzeigen aller Quellenspezifischen Felder
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               D: journal\n");
			printf("                               E: year\n");
			printf("                               F: volume\n");
			printf("                               G: number\n");
			printf("                               H: pages\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "book") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               K: publisher\n");
			printf("                               E: year\n");
			printf("                               F: volume\n");
			printf("                               L: series\n");
			printf("                               M: address\n");
			printf("                               N: edition\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
			printf("                               Q: editor\n");
		}

		if (strcmp(array[i].typ, "booklet") == 0) {
			printf("                               C: title\n");
			printf("                               B: author\n");
			printf("                               O: howpublished\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               E: year\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "conference") == 0 || strcmp(array[i].typ, "inproceedings") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               P: booktitle\n");
			printf("                               E: year\n");
			printf("                               Q: editor\n");
			printf("                               R: chapter\n");
			printf("                               G: pages\n");
			printf("                               V: organization\n");
			printf("                               K: publisher\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "inbook") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               R: chapter\n");
			printf("                               K: publisher\n");
			printf("                               E: year\n");
			printf("                               F: volume\n");
			printf("                               H: pages\n");
			printf("                               L: series\n");
			printf("                               M: address\n");
			printf("                               N: edition\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
			printf("                               Q: editor\n");
		}

		if (strcmp(array[i].typ, "incollection") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               P: booktitle\n");
			printf("                               K: publisher\n");
			printf("                               E: year\n");
			printf("                               Q: editor\n");
			printf("                               R: chapter\n");
			printf("                               G: pages\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "manual") == 0) {
			printf("                               C: title\n");
			printf("                               B: author\n");
			printf("                               U: institution\n");
			printf("                               M: address\n");
			printf("                               N: edition\n");
			printf("                               I: month\n");
			printf("                               E: year\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "mastersthesis") == 0 || strcmp(array[i].typ, "phdthesis") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               S: school\n");
			printf("                               E: year\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "proceedings") == 0) {
			printf("                               C: title\n");
			printf("                               E: year\n");
			printf("                               Q: editor\n");
			printf("                               K: publisher\n");
			printf("                               V: organization\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "techreport") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               U: institution\n");
			printf("                               E: year\n");
			printf("                               T: type\n");
			printf("                               G: number\n");
			printf("                               M: address\n");
			printf("                               I: month\n");
			printf("                               J: note\n");
		}

		if (strcmp(array[i].typ, "unpublished") == 0) {
			printf("                               B: author\n");
			printf("                               C: title\n");
			printf("                               J: note\n");
			printf("                               I: month\n");
			printf("                               E: year\n");
		}
		printf("\n\n                               0: Zurueck\n");


		choice = _getch();		// Auf Nutzereingabe warten und direkt in Variable speichern

		if (choice == '0') {	// Abbrechen mit 0
			break;
		}
		else if (choice >= 'A' && choice <= 'V' || choice >= 'a' && choice <= 'v') { // Falls der Benutzer eine gültige Option ausgewählt hat...

			const char * fieldName;
			char * fieldValue;
			size_t fieldSize;

			if (choice == 'A' || choice == 'a') {									//... werden auf deren Grundlage mehrere Variablen gesetzt
				fieldName = "Keyword";
				fieldValue = array[i].keyword;
				fieldSize = sizeof(array[i].keyword);
			}
			else if (choice == 'B' || choice == 'b') {
				fieldName = "author";
				fieldValue = array[i].author;
				fieldSize = sizeof(array[i].author);
			}
			else if (choice == 'C' || choice == 'c') {
				fieldName = "title";
				fieldValue = array[i].title;
				fieldSize = sizeof(array[i].title);
			}
			else if (choice == 'D' || choice == 'd') {
				fieldName = "journal";
				fieldValue = array[i].journal;
				fieldSize = sizeof(array[i].journal);
			}
			else if (choice == 'E' || choice == 'e') {
				fieldName = "year";
				fieldValue = array[i].year;
				fieldSize = sizeof(array[i].year);
			}
			else if (choice == 'F' || choice == 'f') {
				fieldName = "volume";
				fieldValue = array[i].volume;
				fieldSize = sizeof(array[i].volume);
			}
			else if (choice == 'G' || choice == 'g') {
				fieldName = "number";
				fieldValue = array[i].number;
				fieldSize = sizeof(array[i].number);
			}
			else if (choice == 'H' || choice == 'h') {
				fieldName = "pages";
				fieldValue = array[i].pages;
				fieldSize = sizeof(array[i].pages);
			}
			else if (choice == 'I' || choice == 'i') {
				fieldName = "month";
				fieldValue = array[i].month;
				fieldSize = sizeof(array[i].month);
			}
			else if (choice == 'J' || choice == 'j') {
				fieldName = "note";
				fieldValue = array[i].note;
				fieldSize = sizeof(array[i].note);
			}
			else if (choice == 'K' || choice == 'k') {
				fieldName = "publisher";
				fieldValue = array[i].publisher;
				fieldSize = sizeof(array[i].publisher);
			}
			else if (choice == 'L' || choice == 'l') {
				fieldName = "series";
				fieldValue = array[i].series;
				fieldSize = sizeof(array[i].series);
			}
			else if (choice == 'M' || choice == 'm') {
				fieldName = "address";
				fieldValue = array[i].address;
				fieldSize = sizeof(array[i].address);
			}
			else if (choice == 'N' || choice == 'n') {
				fieldName = "edition";
				fieldValue = array[i].edition;
				fieldSize = sizeof(array[i].edition);
			}
			else if (choice == 'O' || choice == 'o') {
				fieldName = "howpublished";
				fieldValue = array[i].howpublished;
				fieldSize = sizeof(array[i].howpublished);
			}
			else if (choice == 'P' || choice == 'p') {
				fieldName = "booktitle";
				fieldValue = array[i].booktitle;
				fieldSize = sizeof(array[i].booktitle);
			}
			else if (choice == 'Q' || choice == 'q') {
				fieldName = "editor";
				fieldValue = array[i].editor;
				fieldSize = sizeof(array[i].editor);
			}
			else if (choice == 'R' || choice == 'r') {
				fieldName = "chapter";
				fieldValue = array[i].chapter;
				fieldSize = sizeof(array[i].chapter);
			}
			else if (choice == 'S' || choice == 's') {
				fieldName = "school";
				fieldValue = array[i].school;
				fieldSize = sizeof(array[i].school);
			}
			else if (choice == 'T' || choice == 't') {
				fieldName = "type";
				fieldValue = array[i].type;
				fieldSize = sizeof(array[i].type);
			}
			else if (choice == 'U' || choice == 'u') {
				fieldName = "institution";
				fieldValue = array[i].institution;
				fieldSize = sizeof(array[i].keyword);
			}
			else if (choice == 'V' || choice == 'v') {
				fieldName = "organization";
				fieldValue = array[i].organization;
				fieldSize = sizeof(array[i].organization);
			}

			system("cls");
			printf("\n\n\n");
			printf("                              +------------------------------------------------------------+\n");
			printf("                                                          Bearbeiten                      \n");
			printf("                              +------------------------------------------------------------+\n");
			printf("\n                               %s: %s\n", fieldName, fieldValue);									// Ausgabe ist-Wert
			printf("\n                               Geben Sie den neuen Wert ein:\n");

			getInput(fieldName, fieldValue, fieldSize);																	// Neue Eingabe Einlesen

		}
		else {
			falseInput();																								// Fehlermeldung bei ungültiger Eingabe
		}
	} while (1);

	entrySaved(-1);																										// Erfolgsmeldung
}


// Blätterfunktion
int scroll(data array[999], int max, int b, int l) {

	system("cls");
	int index = 0;
	char ch;

	if (max <= 0) {																										// Überprüfen ob Referenzen vorhanden sind
		printf("Es gibt keine Einträge zum Anzeigen.\n");
		return 0;
	}

	while (1) {																											// Dauerschleife
		printf("\n\n\n");
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                        Referenz %d/%d                      \n", index + 1, max);
		printf("                              +------------------------------------------------------------+\n");
		view(array, index);																								// Anzeigen der aktuellen Referenz via view() Funktion


		printf("                              +------------------------------------------------------------+\n");

		printf("\n                               <-- A        D -->                           0 = Abbrechen");

		if (b) {
			printf("\n                                                                            B = Bearbeiten");		// Falls die Scoll Funktion über das Löschen/Bearbeitungs-menü aufgerufen wurde
		}																												// werden entsprechende Optionen angezeigt
		if (l) {
			printf("\n                                                                            L = Loeschen");
		}

		ch = _getch();																									// Einlesen einer Tastenbetätigung ohne Warten

		if (ch == 'D' || ch == 'd') {
			index = (index + 1) % max;																					// Zyklisches Blättern (Vorwärts)
		}
		else if (ch == 'A' || ch == 'a') {
			index = (index - 1 + max) % max;																			// Zyklisches Blättern (Rückwärts)
		}

		if (b) {
			if (ch == 'B' || ch == 'b') {
				edit(array, index);																						// Aufrufen der Bearbeitungsfunktion falls B betätigt wurde
			}
		}

		if (l) {
			if (ch == 'L' || ch == 'l') {
				return index;																							// Ausgabe des Index's der aktuelle angezeigten Referenz
			}
		}

		if (ch == '0') {
			return -1;
		}
		system("cls");
	}

}


// Suchfunktion/Algorithmus zum Suchen eines Substrings innerhalb eines Strings. Groß/Kleinschreibung wird nicht beachtet
char *strcasestr(const char *text, const char *searchTerm) {
	while (*text) {
		const char *t = text;
		const char *s = searchTerm;

		while (*t && *s && (tolower((unsigned char)*t) == tolower((unsigned char)*s))) {			// Überprüfen ob es eine Übereinstimmung gibt
			t++;
			s++;
		}

		if (!*s) {
			return (char *)text;																	 // Zeiger auf den gefundenen Text zurückgeben
		}

		text++;
	}

	return NULL;
}


// Suchfunktion. Durchsucht gleichzeitig Titel, Autor und Keywords
int search(data array[999], int b, int l) {
	system("cls");
	char ch;
	char searchTerm[200];																			// Variable für Suchbegriff
	int searchResults[999];																			// Array zum Speichern der Ergebnisse
	int numResults = 0;																				// Zähler der Ergebnisse

	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                            Suchen                          \n");
	printf("                              +------------------------------------------------------------+\n");
	printf("\n                                 Suchbegriff (Title/Author/Keyword): ");
	scanf(" %[^\n]", searchTerm);
	getchar();

	for (int i = 0; searchTerm[i]; i++) {
		searchTerm[i] = tolower(searchTerm[i]);														// Kleinbuchstaben für die Suche verwenden
	}


	for (int i = 0; i < 999; i++) {																	// Durchsuchen aller Referenzen nach Übereinstimmungen. Mit strcasestr() Funktion
		char *keyword = strcasestr(array[i].keyword, searchTerm);
		char *author = strcasestr(array[i].author, searchTerm);
		char *title = strcasestr(array[i].title, searchTerm);

		if (keyword || author || title) {
			searchResults[numResults] = i;															// Ergebnisse Speichern
			numResults++;
		}
	}

	if (numResults > 0) {																			// Anzeigen der Suchergebnisse
		system("cls");
		for (int i = 0; i < numResults; i++) {
			while (1) {

				printf("\n\n\n");
				printf("                              +------------------------------------------------------------+\n");
				printf("                                                     Suchergebniss %d/%d                      \n", i + 1, numResults);
				printf("                              +------------------------------------------------------------+\n");
				view(array, searchResults[i]);																					// Anzeigen der Ergebnisse mit view() Funktion


				printf("                              +------------------------------------------------------------+\n");

				printf("\n                               <-- A        D -->                           0 = Abbrechen");

				if (b) {
					printf("\n                                                                            B = Bearbeiten");		// Wenn search() über Bearbeitungs/Löschfunktion aufgerufen wurde werden die entsprechenden Optionen angezeigt
				}

				if (l) {
					printf("\n                                                                            L = Loeschen");
				}

				ch = _getch();

				if (ch == 'D' || ch == 'd') {
					i = (i + 1) % numResults;														// Zyklisches Blätternn (Vorwärts)
				}
				else if (ch == 'A' || ch == 'a') {
					i = (i - 1 + numResults) % numResults;											// Zyklisches Blättern (Rückwärts)
				}
				if (b) {
					if (ch == 'B' || ch == 'b') {
						edit(array, searchResults[i]);												// Aufrufen der edit() Funktion (falls ausgewählt)
					}
				}
				if (l) {
					if (ch == 'L' || ch == 'l') {
						return searchResults[i];													// Ausgabe des Index's des gerade angezeigten Suchtreffers
					}
				}
				if (ch == '0') {
					break;
				}
				system("cls");
			}

			if (ch == '0') {
				return -1;
			}

		}

	}
	else {
		noEntries();
	}

}


// Funktion fragt den Nutzer wie er die zu bearbeitende Referenz finden will und leitet dann entsprechend an scroll() oder search() weiter.
void editDialog(data array[999], int i) {
	char ch;

	system("cls");
	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                          Bearbeiten                      \n");
	printf("                              +------------------------------------------------------------+\n");

	printf("\n                                                     Eintrag finden                      \n\n");

	printf("\n                                                     1. per Suche                     \n");
	printf("\n                                                     2. alle Durchsuchen                     \n");

	ch = _getch();

	if (ch == '1') {
		search(array, 1, 0);
	}

	if (ch == '2') {
		scroll(array, i, 1, 0);
	}
}



// Funktion fragt den Nutzer wie er die zu löschende Funktion finden will. Hat der Nutzer eine Referenz gewählt wird sie gelöscht
void deleteDialog(data array[999], int * i) {
	char ch;
	int indexToDelete;
	int index = *i;

	system("cls");
	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                           Loeschen                      \n");
	printf("                              +------------------------------------------------------------+\n");

	printf("\n                                                     Eintrag finden                      \n\n");

	printf("\n                                                     1. per Suche                     \n");
	printf("\n                                                     2. alle Durchsuchen                     \n");

	ch = _getch();

	if (ch == '1') {
		indexToDelete = search(array, 0, 1);					// Referenzauswahl durch Suche
	}

	if (ch == '2') {
		indexToDelete = scroll(array, index, 0, 1);				// Referenzauswahl durch Blättern
	}

	if (indexToDelete != -1) {
		for (int x = indexToDelete; x < *i - 1; x++) {			// Den zu löschenden Eintrag mit dem nächsthöheren Eintrag überschreiben (Ab dem Löschindex werden alle Einträge um eine Position nach links verschoben)
			array[x] = array[x + 1];
		}

		(*i)--;

		initializeData(&array[*i]);								// Den Letzten Eintrag des Arrays bereinigen, damit er nicht doppelt vorhanden ist

		entryDeleted();											// Erfolgsmeldung
	}

}


// Funktion zum Speichern auf HD
void save(data array[999], int i) {
	FILE * file = fopen("data.bin", "wb");						// Datei öffnen/erstellen

	if (file == NULL) {											// Überprüfen ob Datei erfolgreich geöffnet wurde
		dataError();
	}

	size_t savedIndex = fwrite(&i, sizeof(int), 1, file);		// "index" in "file" speichern und Anzahl der geschriebenen Elemente auslesen
	size_t savedArray = fwrite(array, sizeof(data), 999, file); // "array" in "file" speichern und Anzahl der geschriebenen Elemente auslesen

	if (savedArray != 999 || savedIndex != 1) {					// Prüfen ob alle Elemente erfolgreich gespeichert wurden
		dataError();											// Und ggf. Fehler ausgeben
	}
	else {														// Meldung über erfolgreiche Speicherung anzeigen
		system("cls");
		system("color A0");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                     Speichern erfolgreich      \n");
		printf("                              +------------------------------------------------------------+\n");
		Sleep(1500);
		system("color 70");
		system("cls");
	}

	fclose(file);												// Datei schließen
}


// Funktion zum Laden von HD
void load(data array[999], int * i)
{
	FILE * file = fopen("data.bin", "rb");						// Datei "data.bin" zum Lesen im "Binärmodus" öffnen

	if (file == NULL) {											// Überprüfen ob Datei erfolgreich ob Datei noch nicht vorhanden war
		//system("cls");
		//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		//printf("                              +------------------------------------------------------------+\n");
		//printf("                                                Keine Referenzen von HD geladen      \n");
		//printf("                              +------------------------------------------------------------+\n");
		//Sleep(1500);
		//system("cls");
		//getchar();
	}
	else {
		size_t readIndex = fread(&* i, sizeof(int), 1, file);		// "index" aus "file" lesen und Anzahl der gelesenen Elemente speichern
		size_t readArray = fread(array, sizeof(data), 999, file);	// "array" aus "file" lesen und Anzahl der gelesenen Elemente speichern

		if (readArray != 999 || readIndex != 1) {					// Prüfen ob alle Elemente erfolgreich gelesen wurden
			dataError();
		}
		else {														// Meldung über erfolgreichen Import anzeigen
		//	system("cls");
		//	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		//	printf("                              +------------------------------------------------------------+\n");
		//	printf("                                                  Referenzen von HD geladen      \n");
		//	printf("                              +------------------------------------------------------------+\n");
		//	Sleep(1500);
		//	system("cls");
		}
		fclose(file);												// Datei Schließen
	}

}


// Funktion für BibTex-Export
void writeFile(data array[999], int x, FILE * file, char * path) {
	if (file == NULL) {
		dataError();																// Prüfen ob Datei in Ordnung ist
		return;
	}
	else {
		for (int i = 0; i < x; i++) {

			if (strlen(array[i].typ) > 0 && strlen(array[i].keyword) > 0) {

				fprintf(file, "@%s{%s,\n", array[i].typ, array[i].keyword);			// Daten in entsprechender Formatierung in Datei schreiben

				if (strlen(array[i].author) > 0) {
					fprintf(file, " author = {%s},\n", array[i].author);
				}
				if (strlen(array[i].title) > 0) {
					fprintf(file, " title = {{%s}},\n", array[i].title);
				}
				if (strlen(array[i].journal) > 0) {
					fprintf(file, " journal = {%s},\n", array[i].journal);
				}
				if (strlen(array[i].year) > 0) {
					fprintf(file, " year = {%s},\n", array[i].year);
				}
				if (strlen(array[i].volume) > 0) {
					fprintf(file, " volume = {%s},\n", array[i].volume);
				}
				if (strlen(array[i].number) > 0) {
					fprintf(file, " number = {%s},\n", array[i].number);
				}
				if (strlen(array[i].pages) > 0) {
					fprintf(file, " pages = {%s},\n", array[i].pages);
				}
				if (strlen(array[i].month) > 0) {
					fprintf(file, " month = {%s},\n", array[i].month);
				}
				if (strlen(array[i].note) > 0) {
					fprintf(file, " note = {%s},\n", array[i].note);
				}
				if (strlen(array[i].publisher) > 0) {
					fprintf(file, " publisher = {%s},\n", array[i].publisher);
				}
				if (strlen(array[i].series) > 0) {
					fprintf(file, " series = {%s},\n", array[i].series);
				}
				if (strlen(array[i].address) > 0) {
					fprintf(file, " address = {%s},\n", array[i].address);
				}
				if (strlen(array[i].edition) > 0) {
					fprintf(file, " edition = {%s},\n", array[i].edition);
				}
				if (strlen(array[i].howpublished) > 0) {
					fprintf(file, " howpublished = {%s},\n", array[i].howpublished);
				}
				if (strlen(array[i].booktitle) > 0) {
					fprintf(file, " booktitle = {%s},\n", array[i].booktitle);
				}
				if (strlen(array[i].editor) > 0) {
					fprintf(file, " editor = {%s},\n", array[i].editor);
				}
				if (strlen(array[i].chapter) > 0) {
					fprintf(file, " chapter = {%s},\n", array[i].chapter);
				}
				if (strlen(array[i].school) > 0) {
					fprintf(file, " school = {%s},\n", array[i].school);
				}
				if (strlen(array[i].type) > 0) {
					fprintf(file, " type = {%s},\n", array[i].type);
				}
				if (strlen(array[i].institution) > 0) {
					fprintf(file, " institution = {%s},\n", array[i].institution);
				}
				if (strlen(array[i].organization) > 0) {
					fprintf(file, " organization = {%s},\n", array[i].organization);
				}

				fprintf(file, "}\n\n");
			}
		}
		fclose(file);														// Datei Schließen
		system("cls");
		system("color A0");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                     Export erfolgreich      \n");
		printf("                              +------------------------------------------------------------+\n\n\n\n");
		printf("                                                 Dateipfad wird aufgerufen...      \n");
		Sleep(1500);
		system("color 70");
		system("cls");
		char explorerCommand[600];
		sprintf(explorerCommand, "explorer /select,\"%s\"", path);						// Kommando für system() zusammensetzen 
		system(explorerCommand);														// Exportierte Datei im Windows-Explorer anzeigen
	}
}


// Funktion fragt Nutzer nach Dateinamen und Dateipfad für Export
void createBibTex(data array[999], int x) {

	char ch;
	char filename[50];
	char path[500];
	system("cls");
	printf("\n\n\n");
	printf("                              +------------------------------------------------------------+\n");
	printf("                                                         Exportieren                      \n");
	printf("                              +------------------------------------------------------------+\n\n");

	printf("                              Dateiname:");
	scanf(" %[^\n]", filename);
	getchar();
	printf("\n\n                                                     Speicherort:\n");
	printf("\n                                                     1. Standart                     \n");
	printf("\n                                                     2. Dateipfad wählen                     \n");

	ch = _getch();

	if (ch == '1') {
		char filePath[55];
		sprintf(filePath, "%s.bib", filename);			// Dateipfad mit .bib Endung zusammensetzen
		FILE * file = fopen(filePath, "w");				// Datei erstellen
		writeFile(array, x, file, filePath);			// writeFile() aufrufen
	}

	if (ch == '2') {
		system("cls");
		printf("\n\n\n");
		printf("                              +------------------------------------------------------------+\n");
		printf("                                                         Exportieren                      \n");
		printf("                              +------------------------------------------------------------+\n\n");

		printf("                              Dateipfad angeben (z.B. C:/Users/MaxMustermann/Desktop/):\n");
		printf("                              ");
		scanf(" %[^\n]", path);
		getchar();

		char filePath[555];
		sprintf(filePath, "%s%s.bib", path, filename);	// Dateipfad mit .bib Endung zusammensetzen
		FILE * file = fopen(filePath, "w");				// Datei erstellen
		writeFile(array, x, file, filePath);			// writeFile() aufrufen
	}

}