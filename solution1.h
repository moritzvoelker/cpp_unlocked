#pragma once
#define SOLUTION1
#include <iostream>

/*
* Diese Aufgabe besch�ftigt sich mit Kommentaren (englisch "comment).
* Sie sind die M�glichkeit f�r den Programmierer den Code mit zus�tzlichen Beschreibungen zu versehen.
* Sie werden vom Compiler einfach �bersprungen und werden h�ufig gr�n oder grau dargestellt.
*/

void exercise1() {
	// Das ist ein line comment
	/*
	* Das ist ein block comment.
	* Es kann �ber mehrere Zeilen gehen, oder aber auch nur einen Teil einer Zeile.
	*/

	// TODO: kommentiere die n�chste Zeile ein
	std::cout << "Jetzt wird diese Zeile ausgef�hrt" << std::endl;

	// TODO: kommentiere den n�chsten Block ein
	std::cout << "Jetzt wird dieser Teil" << ", sowie dieser Teil" << " ausgef�hrt" << std::endl;

	// TODO: kommentiere die n�chste Zeile aus
	// std::cout << "Ihr werdet mich nie zensieren" << std::endl;
}