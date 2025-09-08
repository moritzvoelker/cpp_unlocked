#pragma once
#define EXERCISE4

#include <string>
#include <iostream>

/* 
* Diese Aufgabe befasst sich mit Eingaben von Nutzern.
* Das ist quasi das Gegenstück zur Ausgabe an den Nutzer.
* Es ermöglicht uns während der Laufzeit des Programms Abfragen an den Nutzer zu machen.
*/

void exercise4() {
	// Erst deklarieren wir eine variable vom Typ string, dann lesen wir ein Wort vom Nutzer ein und geben es wieder zurück aus.
	std::string echo;
	std::cin >> echo;
	/*	 |	 |	|
	*	 |	 |	 \ Das ist die Variable, in die wir das nächste Wort einlesen. Zwei Wörter werden durch ein Leerzeichen oder eine neue Zeile getrennt.
	*	 |	  \ Hier ist wieder der shift operator, aber dieses Mal anders herum. Wir "ziehen" etwas aus cin heraus und "schieben" es in echo hinein.
	*	  \ cin ist quasi das gegenstück zu cout. Wir benutzen es immer, wenn wir Eingaben vom Nutzer haben wollen.
	*		Es befindet sich ebenfalls im Header <iostream> (siehe include ganz oben).
	*/
	std::cout << echo << std::endl;

	// TODO: Frage den Nutzer nach seinem Namen und grüße ihn mit "Hallo xyz", wobei xyz der eingegebene Name ist.

	// Das gleiche funktioniert auch mit anderen Datentypen, wie zum Beispiel int.
	int number;
	std::cin >> number;
	std::cout << number << std::endl;
	
	// TODO: Frage den Nutzer nach zwei zahlen, die er addieren möchte und gib das Ergebnis in der Form "x + y = z" aus, wobei x und y die Eingaben und z das Ergebnis ist.
}
