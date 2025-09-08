#pragma once
#define SOLUTION6

#include <iostream>
#include <string>

/*
* Diese Aufgabe befasst sich mit while Schleifen.
* Oft wollen wir Dinge häufiger hintereinander ausführen solange eine bestimmte Bedingung erfüllt oder nicht erfüllt ist.
* Das Werkzeug dafür ist eine while Schleife. Sie ist dem if nicht unähnlich.
*/

void exercise6() {
	std::cout << "Welche Zahlen möchtest du teilen? ";
	float dividend, divisor;
	std::cin >> dividend;
	std::cin >> divisor;

	while (divisor != 0.0) {
	/*|		|			   |
	* |		|			    \ Mit geschweiften Klammern öffnen wir den Block, den wir solange ausfüllen wollen, wie die Bedingung erfüllt ist.
	* |		 \ Genau wie beim if geben wir hier eine Bedingung an, die entweder true oder false ist.
	*  \ while leitet eine Bedingung ein.
	*/
		std::cout << dividend << " / " << divisor << " = " << dividend / divisor << std::endl;
		std::cout << "Welche Zahlen möchtest du teilen? ";
		std::cin >> dividend;
		std::cin >> divisor;
	}

	// TODO: Frage den Nutzer nach seinem Namen. Grüße ihn solange zurück, bis er "Bye" schreibt. Dann verabschiede dich.
	std::string name;
	std::cout << "Wer bist du?" << std::endl;
	std::cin >> name;

	while (name != "Bye") {
		std::cout << "Hey " << name << std::endl;
		std::cout << "Wer bist du jetzt?" << std::endl;
		std::cin >> name;
	}

	// TODO: Definiere ein Nutzernamen und ein Passwort. Frage den Nutzer nach beidem, solange, bis die Kombination richtig ist.
	std::string username = "mv";
	std::string password = "totallysafepassword";
	std::string given_username;
	std::string given_password;
	std::cout << "Bitte Nutername und Passwort eingeben." << std::endl;
	std::cout << "Username: ";
	std::cin >> given_username;
	std::cout << "Password: ";
	std::cin >> given_password;

	while (given_username != username && given_password != password) {
		std::cout << "Falsche Kombination!" << std::endl;
		std::cout << "Bitte Nutername und Passwort eingeben." << std::endl;
		std::cout << "Username: ";
		std::cin >> given_username;
		std::cout << "Password: ";
		std::cin >> given_password;
	}

	// BONUSAUFGABE: Nimm den Rechner der letzten BONUSAUFGABE.
	// Verwandele ihn in eine Schleife und frage den Nutzer solange nach neuen Eingaben, bis er versucht durch 0 zu teilen.
	int lhs = 0, rhs = 0, result = 0;
	std::string op;
	std::cout << "Eine Rechnung bitte: ";
	std::cin >> lhs;
	std::cin >> op;
	std::cin >> rhs;
	while (!(op == "/" && rhs == 0.0)) {
		if (op == "+") {
			result = lhs + rhs;
		}
		else if (op == "-") {
			result = lhs - rhs;
		}
		else if (op == "*") {
			result = lhs * rhs;
		}
		else if (op == "/") {
			result = lhs / rhs;
		}
		std::cout << lhs << " " << op << " " << rhs << " = " << result << std::endl;
		std::cout << "Eine Rechnung bitte: ";
		std::cin >> lhs;
		std::cin >> op;
		std::cin >> rhs;
	}
}