#pragma once
#define EXERCISE9

#include <iostream>

/*
* In dieser Aufgabe befassen wir uns mit Funktionen.
* Bis jetzt haben wir alles was alle Programmschritte einfach untereinander geschrieben.
* Eine Möglichkeit, das besser zu strukturieren und auch wiederverwertbarer zu machen sind Funktionen.
*/

int add(int lhs, int rhs) {
/*| |	|
* |	|	 \ In den Runden Klammern steht die Parameterliste. 
* | |	   Das sind Dinge, die wir unserer Funktion mitgeben müssen, damit sie die Berechnungen machen kann.
* | |	   In diesem Fall sind es die beiden ints, die wir addieren wollen.
* |	 \ Eine Funktion bekommt genau wie eine Variable einen Namen.
*  \ Eine Funktion hat immer einen Rückgabewert. Das ist quasi das Ergebnis der Berechnung.
*	 Er wird wie bei einer Variablendeklaration angegeben. Sollte eine Funktion mal keinen sinnvollen Rückgabewert haben,
*	 dann können wir den Typen void angeben. Er drückt aus, das wir nichts zurück geben wollen.
*/
	int sum = lhs + rhs;
	return sum;
	/*|
	*  \ Am Ende der Funktion geben wir einen Wert zurück, der vom Typ her zur Funktion passt.
	*	 Bei void Funktionen können wir das auch einfach weglassen.
	*/
}

// TODO: Schreibe eine Funktion mul, die zwei int multipliziert und das Ergebnis zurück gibt.

float div(float lhs, float rhs) {
	if (rhs == 0.0) {
		std::cout << "Man kann nicht durch 0 teilen." << std::endl;
		return NAN;
		// returns müssen nicht immer am Ende einer Funktion stehen. Sie können auch vorher kommen,
		// aber meistens macht das nur in einem if Sinn, da bei einem return sofort die Funktion beendet wird.
	}
	return lhs / rhs;
}

// TODO: Schreibe eine Funktion is_divisible, die schaut, ob zwei zahlen durcheinander teilbar sind
// (wenn du nicht weißt wie, schau in die zweite BONUSAUFGABE von exercise 8, da wird das erklärt)
// Sollte die zweite Zahl 0 sein, gib eine Fehlermeldung aus und gib false zurück.

bool contains(int array[], int length, int element) {
	for (int index = 0; index < length; index = index + 1) {
		if (array[index] == element) {
			return true;
		}
	}
	return false;
}

// TODO: Schreibe eine Funktion print_array, die ein int array beliebiger länge entgegen nimmt und alle Elemente printet.

// TODO: Die folgende Funktion hat drei Fehler. Finde und korrigiere sie.
int find_max(int array[], int length) {
	int max = 0;
	for (int i = 1; i <= length; i = i + 1) {
		if (max > array[i]) {
			max = array[i];
		}
	}
}


// BONUSAUFGABE: Schreibe eine Funktion is_divisible_any, die ein int array beliebiger Länge und ein int nimmt und schaut,
// ob das int durch mindestens eines der array Elemente teilbar ist. Benutze dabei is_divisible von vorher.

void exercise9() {
	std::cout << "4 * 4 = " << mul(4, 4) << std::endl;
	if (is_divisible(15, 5)) {
		std::cout << "15 ist durch 5 teilbar" << std::endl;
	}
	else {
		std::cout << "15 ist nicht durch 5 teilbar" << std::endl;
	}
	if (is_divisible(16, 0)) {
		std::cout << "16 ist durch 0 teilbar" << std::endl;
	}
	else {
		std::cout << "16 ist nicht durch 0 teilbar" << std::endl;
	}
	int array[10] = { 97, 3, 56, 43, 12, 87, 1, 0, 88, 43 };
	print_array(array, 10);

	int max = find_max(array, 10);
	if (max == 97) {
		std::cout << max << " ist das maximum" << std::endl;
	}
	else {
		std::cout << max << " ist nicht das maximum" << std::endl;
	}

	// BONUSAUFGABE: Schreibe die Berechnung der Primzahlen von der letzten Aufgabe neu mit der funktion is_divisible_any
}
