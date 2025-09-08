#pragma once
#define EXERCISE5

#include <iostream>

/* 
* Diese Aufgabe befasst sich mit if conditions (zu deutsch "wenn Bedingungen").
* Oft wollen wir manche Teile eines Programms nur ausführen, wenn eine bestimmte Bedingung erfüllt ist.
*/

void exercise5() {
	// Wir fragen den Nutzer nach zwei Zahlen, die er durcheinander teilen möchte.
	// Falls der Divisor null ist, können wir nicht teilen und wollen das dem Nutzer mitteilen.
	// Andernfalls teilen wir die zwei zahlen durcheinander und geben das Ergebnis aus.
	std::cout << "Welche Zahlen möchtest du teilen? ";
	float dividend, divisor;
	std::cin >> dividend;
	std::cin >> divisor;

	if (divisor == 0.0) {
	/*|	|				| 
	* |	|				 \ Mit geschweiften Klammern öffnen wir den Block, den wir ausfüllen wollen, falls die Bedingung erfüllt ist.
	* |	 \ In den runden Klammern schreiben wir eine Bedingung, die entweder true, oder false sein soll.
	* |	   Häufig genutzte Operatoren sind dabei == (gleich), != (ungleich), < (kleiner), > (größer), <= (kleiner oder gleich) und >= (größer oder gleich).
	* |	   Es können aber auch Funktionen verwendet werden, die ein bool zurück geben. Bei einem string z.B. string.empty().
	*  \ if leitet eine Bedingung ein.
	*/
		std::cout << "Man kann nicht durch 0 teilen" << std::endl;
	}
	else if (divisor == 1.0) {
	/*|		 |
	* |		  \ Diese Bedingung wird nur überprüft, falls die erste Bedingung false war.
	*  \ else if leitet eine alternative Bedingung ein. Quasi "Wenn das erste false war und die folgende Bedingung true ist"
	*	 Ein else if kann immer nur nach einem if oder einem else if und nie alleine stehen.
	*/
		std::cout << "Teilen durch 1 ist redundant" << std::endl;
	}
	else {
	/*|	 |
	* |	  \ Hier öffnen wir den Block, der ausgeführt werden soll, falls die Bedingungen davor alle false waren.
	*  \ Ein else muss immer nach einem if oder einem else if kommen und kann nicht alleine stehen.
	*	 Es ist aber optional, ein if kann also auch ohne ein else existieren.
	*/
		std::cout << dividend << " / " << divisor << " = " << dividend / divisor << std::endl;
	}

	// TODO: Frag den Nutzer nach seinem Namen. Wenn er Moritz heißt, sag ihm, er soll weg gehen, andernfalls grüße ihn.

	// TODO: Frag den Nutzer nach der Uhrzeit.
	// Wenn es nach 6 Uhr ist, sag "Guten morgen", wenn es nach 11 ist, sag guten Tag, und wenn es nach 22 Uhr ist sag gute Nacht.
	// Wenn es keine sinnvolle Uhrzeit ist, beschwer dich darüber.

	// BONUSAUFGABE: Frag den Nutzer nach zwei Zahlen und einem von den Rechnzeichen +, -, * und /.
	// Führe je nach Rechenzeichen die entsprechende Operation durch.
	// Ein Nutzer sollte also z.B. "4 + 3" eingeben können und das richtige Ergebnis herausbekommen.
}