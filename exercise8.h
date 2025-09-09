#pragma once
#define SOLUTION8

#include <iostream>

/*
* Diese Aufgabe befasst sich mit arrays.
* Oft haben wir eine Liste von Dingen des gleichen Typens, die wir speichern wollen,
* z.B. eine Liste von Namen, eine Liste von Schulnoten, usw.
*/

void exercise8() {
	int numbers[4];
	/*| |		|
	* |	|		 \ In eckigen Klammern geben wir die Länge des arrays an.
	* |	|		   Das muss immer eine feste Zahl, keine Variable sein.
	* |	 \ Wir geben dem array ganz normal einen Namen, wie auch bei anderen Variablen.
	*  \ Das vorne bestimmt den Datentyp des arrays. Wir haben hier also eine Liste von vier int.
	*/
	numbers[0] = 0;
	/*		|
	*		 \ Wir greifen auf einzelne Elemente eines arrays zu, in dem wir die eckigen Klammern benutzen.
	*		   Wichtig ist, dass wir dabei bei 0 anfangen zu zählen.
	*		   Ein array der Länge 4 hat also die gültigen Indices 0, 1, 2 und 3.
	*		   In der Zeile oben setzten wir also das erste element des arrays auf 0.
	*/
	// Hier füllen wir die übrigen drei Elemente mit Zahlen durch den Nutzer auf
	std::cout << "Gib drei Zahlen ein: ";
	for (int index = 1; index < 4; index = index + 1) {
		// Wir können zum indizieren auch variablen benutzen, z.B. um in einer Schleife alle Elemente durchzugehen.
		std::cin >> numbers[index];
	}

	// TODO: Summiere alle Elemente des arrays auf und gib die Summe aus.

	// TODO: Lass dir fünf Namen geben und grüße alle zurück.

	// BONUSAUFGABE: Erstelle ein int array der Länge 10. Fülle es mit den ersten 10 Zahlen der Fibonacci Reihe. https://de.wikipedia.org/wiki/Fibonacci-Folge

	// BONUSAUFGABE: Erstelle ein int array der Länge 10. Fülle es mit den ersten 10 Primzahlen.
	// Um zu schauen, ob eine Zahl durch eine andere Teilbar ist kann man den Modolu Operator benutzen.
	// Man schreibt ihn % und er teilt die erste Zahl durch die zweite und gibt nur den Rest zurück.
	// z.B.: 0 % 3 == 0, 3 % 3 == 0, 4 % 3 == 1, 5 % 3 == 2 oder 6 % 3 == 0
	// Immer wenn zwei Zahlen durcheinander teilbar sind ergibt der Modolu 0
}

