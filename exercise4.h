#pragma once
#define EXERCISE4

#include <string>
#include <iostream>

/* 
* Diese Aufgabe befasst sich mit Eingaben von Nutzern.
* Das ist quasi das Gegenst�ck zur Ausgabe an den Nutzer.
* Es erm�glicht uns w�hrend der Laufzeit des Programms Abfragen an den Nutzer zu machen.
*/

void exercise4() {
	// Erst deklarieren wir eine variable vom Typ string, dann lesen wir ein Wort vom Nutzer ein und geben es wieder zur�ck aus.
	std::string echo;
	std::cin >> echo;
	/*	 |	 |	|
	*	 |	 |	 \ Das ist die Variable, in die wir das n�chste Wort einlesen. Zwei W�rter werden durch ein Leerzeichen oder eine neue Zeile getrennt.
	*	 |	  \ Hier ist wieder der shift operator, aber dieses Mal anders herum. Wir "ziehen" etwas aus cin heraus und "schieben" es in echo hinein.
	*	  \ cin ist quasi das gegenst�ck zu cout. Wir benutzen es immer, wenn wir Eingaben vom Nutzer haben wollen.
	*		Es befindet sich ebenfalls im Header <iostream> (siehe include ganz oben).
	*/
	std::cout << echo << std::endl;

	// TODO: Frage den Nutzer nach seinem Namen und gr��e ihn mit "Hallo xyz", wobei xyz der eingegebene Name ist.

	// Das gleiche funktioniert auch mit anderen Datentypen, wie zum Beispiel int.
	int number;
	std::cin >> number;
	std::cout << number << std::endl;
	
	// TODO: Frage den Nutzer nach zwei zahlen, die er addieren m�chte und gib das Ergebnis in der Form "x + y = z" aus, wobei x und y die Eingaben und z das Ergebnis ist.
}
