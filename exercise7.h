#pragma once
#define EXERCISE7

#include <iostream>
#include <string>

/*
* Diese Aufgabe befasst sich mit for Schleifen.
* Wie wir bei der letzten Aufgabe gesehen haben, kann es manchmal sein, dass wir etwas eine bestimmt oft ausf�hren wollen,
* oder das wir irgendetwas mitz�hlen wollen. Daf�r haben wir eine Variable vor der while Schleife erstellt,
* sie im Schleifenkopf �berpr�ft und sie dann am Ende des Durchlaufs um eins erh�ht. Dieses Muster kommt so h�ufig vor,
* dass es daf�r ein eigenes Konzept gibt. Die for Schleife.
*/

void exercise7() {
	std::cout << "Bitte Nutername und Passwort eingeben." << std::endl;
	std::string username = "mv";
	std::string password = "totallysafepassword";
	std::string given_username;
	std::string given_password;
	std::cout << "Username: ";
	std::cin >> given_username;
	std::cout << "Password: ";
	std::cin >> given_password;

	// Diese schleife ist �quivalent zur while Schleife aus der letzten Aufgabe
	for (int trys = 1; given_username != username && given_password != password && trys < 3; trys = trys + 1) {
	/*|	|			 |																	   |
	* |	|			 |																		\ Der dritte Teil wird nach jedem Schleifendurchlauf genau einmal ausgef�hrt.
	* |	|			  \ Der zweite Teil ist die Bedingung, ganz genau wie bei der while Schleife.
	* |	 \ Der erste Teil wird genau einmal vor dem ersten Durchlauf der Schleife ausgef�hrt.
	*  \ for leitet eine for Schleife ein. In den runden Klammern befinden sich drei Teile, jeweils getrennt durch ein Semicolon.
	*	 Diese Teile sind alle optional und k�nnen auch einfach leer gelassen werden.
	*/
		std::cout << "Falsche Kombination!" << std::endl;
		std::cout << "Bitte Nutername und Passwort eingeben." << std::endl;
		std::cout << "Username: ";
		std::cin >> given_username;
		std::cout << "Password: ";
		std::cin >> given_password;
	}

	// TODO: Lass dir vom Nutzer eine Zahl geben. Rechne die Fakult�t dieser Zahl aus. https://de.wikipedia.org/wiki/Fakult%C3%A4t_(Mathematik)

	// TODO: Lass dir vom Nutzer zwei Zahlen geben. Rechne Zahl 1 hoch Zahl 2.

	// BONUSAUFGABE: Implementiere ein kleines Spiel.
	// Frage von Spieler 1 eine Zahl zwischen 100 ab. Spieler 2 soll dabei nicht auf den Bildschirm schauen.
	// Printe dann 100 leere Zeilen, sodass die eingegebene Zahl nach oben weg rutscht und von Spieler 2 nicht mehr gesehen werden kann.
	// Spieler 2 hat jetzt 6 Versuche die Zahl zu erraten.
	// Liegt er richtig, gratuliere ihm. Liegt er falsch, gib ihm einen Hinweis, ob er zu hoch oder zu niedrig geraten hat.
}