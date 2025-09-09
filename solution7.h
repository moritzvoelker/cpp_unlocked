#pragma once
#define SOLUTION7

#include <iostream>
#include <string>

/*
* Diese Aufgabe befasst sich mit for Schleifen.
* Wie wir bei der letzten Aufgabe gesehen haben, kann es manchmal sein, dass wir etwas eine bestimmt oft ausführen wollen,
* oder das wir irgendetwas mitzählen wollen. Dafür haben wir eine Variable vor der while Schleife erstellt,
* sie im Schleifenkopf überprüft und sie dann am Ende des Durchlaufs um eins erhöht. Dieses Muster kommt so häufig vor,
* dass es dafür ein eigenes Konzept gibt. Die for Schleife.
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

	// Diese schleife ist äquivalent zur while Schleife aus der letzten Aufgabe
	for (int trys = 1; given_username != username && given_password != password && trys < 3; trys = trys + 1) {
		/*|	|			 |																	   |
		* |	|			 |																		\ Der dritte Teil wird nach jedem Schleifendurchlauf genau einmal ausgeführt.
		* |	|			  \ Der zweite Teil ist die Bedingung, ganz genau wie bei der while Schleife.
		* |	 \ Der erste Teil wird genau einmal vor dem ersten Durchlauf der Schleife ausgeführt.
		*  \ for leitet eine for Schleife ein. In den runden Klammern befinden sich drei Teile, jeweils getrennt durch ein Semicolon.
		*	 Diese Teile sind alle optional und können auch einfach leer gelassen werden.
		*/
		std::cout << "Falsche Kombination!" << std::endl;
		std::cout << "Bitte Nutername und Passwort eingeben." << std::endl;
		std::cout << "Username: ";
		std::cin >> given_username;
		std::cout << "Password: ";
		std::cin >> given_password;
	}

	// TODO: Lass dir vom Nutzer eine Zahl geben. Rechne die Fakultät dieser Zahl aus. https://de.wikipedia.org/wiki/Fakult%C3%A4t_(Mathematik)
	int number;
	std::cin >> number;
	int faculty = 1;
	for (int current = 1; current <= number; current = current + 1) {
		faculty = faculty * current;
	}
	std::cout << number << "! = " << faculty << std::endl;

	// TODO: Lass dir vom Nutzer zwei Zahlen geben. Rechne Zahl 1 hoch Zahl 2.
	int number1;
	int number2;
	std::cin >> number1;
	std::cin >> number2;
	int power = 1;

	for (int current = 0; current < number2; current = current + 1) {
		power = power * number1;
	}
	std::cout << number1 << " ^ " << number2 << " = " << power;

	// BONUSAUFGABE: Implementiere ein kleines Spiel.
	// Frage von Spieler 1 eine Zahl zwischen 100 ab. Spieler 2 soll dabei nicht auf den Bildschirm schauen.
	// Printe dann 100 leere Zeilen, sodass die eingegebene Zahl nach oben weg rutscht und von Spieler 2 nicht mehr gesehen werden kann.
	// Spieler 2 hat jetzt 6 Versuche die Zahl zu erraten.
	// Liegt er richtig, gratuliere ihm. Liegt er falsch, gib ihm einen Hinweis, ob er zu hoch oder zu niedrig geraten hat.

	int secret;
	std::cout << "Spieler 1, gib die geheime Zahl zwischen 1 und 100 ein: ";
	std::cin >> secret;

	for (int i = 0; i < 100; i = i + 1) {
		std::cout << std::endl;
	}

	int guess;
	std::cout << "Spieler 2, fang an zu raten:" << std::endl;
	for (int trys = 0; trys < 6; trys = trys + 1) {
		std::cin >> guess;
		if (guess == secret) {
			std::cout << "Herzlichen Glückwunsch!!!" << std::endl;
			break;
		}
		else if (guess < secret) {
			std::cout << "Du hast zu niedrig geraten." << std::endl;
		}
		else {
			std::cout << "Du hast zu hoch geraten." << std::endl;
		}
	}
}