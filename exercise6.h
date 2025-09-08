#pragma once
#define EXERCISE6

#include <iostream>
#include <string>

/*
* Diese Aufgabe befasst sich mit while Schleifen.
* Oft wollen wir Dinge h�ufiger hintereinander ausf�hren solange eine bestimmte Bedingung erf�llt oder nicht erf�llt ist.
* Das Werkzeug daf�r ist eine while Schleife. Sie ist dem if nicht un�hnlich.
*/

void exercise6() {
	std::cout << "Welche Zahlen m�chtest du teilen? ";
	float dividend, divisor;
	std::cin >> dividend;
	std::cin >> divisor;

	while (divisor != 0.0) {
	/*|		|			   |
	* |		|			    \ Mit geschweiften Klammern �ffnen wir den Block, den wir solange ausf�llen wollen, wie die Bedingung erf�llt ist.
	* |		 \ Genau wie beim if geben wir hier eine Bedingung an, die entweder true oder false ist.
	*  \ while leitet eine Bedingung ein.
	*/
		std::cout << dividend << " / " << divisor << " = " << dividend / divisor << std::endl;
		std::cout << "Welche Zahlen m�chtest du teilen? ";
		std::cin >> dividend;
		std::cin >> divisor;
	}

	// TODO: Frage den Nutzer nach seinem Namen. Gr��e ihn solange zur�ck, bis er "Bye" schreibt. Dann verabschiede dich.

	// TODO: Definiere ein Nutzernamen und ein Passwort. Frage den Nutzer nach beidem, solange, bis die Kombination richtig ist.

	// BONUSAUFGABE: Nimm den Rechner der letzten BONUSAUFGABE.
	// Verwandele ihn in eine Schleife und frage den Nutzer solange nach neuen Eingaben, bis er versucht durch 0 zu teilen.
}