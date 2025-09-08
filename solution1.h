#pragma once
#define SOLUTION1
#include <iostream>

/*
* Diese Aufgabe beschäftigt sich mit Kommentaren (englisch "comment).
* Sie sind die Möglichkeit für den Programmierer den Code mit zusätzlichen Beschreibungen zu versehen.
* Sie werden vom Compiler einfach übersprungen und werden häufig grün oder grau dargestellt.
*/

void exercise1() {
	// Das ist ein line comment
	/*
	* Das ist ein block comment.
	* Es kann über mehrere Zeilen gehen, oder aber auch nur einen Teil einer Zeile.
	*/

	// TODO: kommentiere die nächste Zeile ein
	std::cout << "Jetzt wird diese Zeile ausgeführt" << std::endl;

	// TODO: kommentiere den nächsten Block ein
	std::cout << "Jetzt wird dieser Teil" << ", sowie dieser Teil" << " ausgeführt" << std::endl;

	// TODO: kommentiere die nächste Zeile aus
	// std::cout << "Ihr werdet mich nie zensieren" << std::endl;
}