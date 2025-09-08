#pragma once
#define SOLUTION3

#include <string>
#include <iostream>

/*
* Diese Aufgabe befasst sich mit Variablen.
* Variablien sind für uns Orte, an denen wir Dinge wie Zahlen, Text, usw. speichern können, um dann mit ihnen zu arbeiten.
* Variablen haben immer einen festen Typ, den wir bei der Deklaration festlegen.
*/

void exercise3() {
	// Das hier ist eine variablen Deklaration
	int number = 5;
	/*| |	   |
	* | |		\ Optional können wir unserer neuen variable gleich zu Beginn einen Wert zusweisen.
	* | |		  Wir müssen das nicht sofort machen, aber wir müssen immer erst einen Wert zuweisen, bevor wir verwenden.
	* |	 \ Das ist der Name der Variable. So wie wir ihn hier festlegen, verwenden wir ihn dann später (inklusive groß und klein Schreibung.
	*  \ Das hier ist der Typ der Variable, in diesem Fall eine Zahl. Er ist unveränderlich, sobald einmal festgelegt.
	*/

	// TODO: Gib die Variable "number" and den Nutzer aus
	std::cout << "number: " << number << std::endl;

	// Wir können den Wert der Variable auch neu zuweisen, es muss aber immer eine Zahl bleiben.
	number = 7;
	/* |   | |
	*  |   |  \ Der neue Wert für die Variable. Später sehen wir noch komplexere Beispiele dafür.
	*  |	\ Ein = zeigt eine Zuweisung an.
	*  |	  Auf der linken Seite steht der "Ort" wo wir etwas hin speichern wollen, auf der rechten Seite das "Was".
	*	\ Das ist der "Ort", an den wir etwas speichern wollen. Üblicherweise ist das einfach ein Variablenname.
	*/

	// TODO: Gib die Variable "number" and den Nutzer aus
	std::cout << "number: " << number << std::endl;

	// Wir können auch den Wert einer Variable relativ zu sich selbst verändern, z.B. um sie um einen bestimmten Betrag zu erhöhen
	number = number + 3;

	// TODO: Gib die Variable "number" and den Nutzer aus, dann verdoppele den Wert von "number" und gib ihn erneut aus.
	std::cout << "number: " << number << std::endl;
	number = number + number;
	std::cout << "number: " << number << std::endl;

	// Das ist jetzt eine Variable vom Typ string. Sie enthält Text, den wir auch verändern können.
	// strings befinden sich im header <string> (siehe include ganz oben).
	// strings implementieren auch den + operator, man kann damit neuen Text hinten anhängen.
	std::string text = "Eins, zwei";
	// TODO: verändere "text" so, dass er "Eins, zwei, drei" enthält und gib ihn an den Nutzer aus.
	text = text + ", drei";
	std::cout << text << std::endl;
}
