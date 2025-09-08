#pragma once
#define SOLUTION3

#include <string>
#include <iostream>

/*
* Diese Aufgabe befasst sich mit Variablen.
* Variablien sind f�r uns Orte, an denen wir Dinge wie Zahlen, Text, usw. speichern k�nnen, um dann mit ihnen zu arbeiten.
* Variablen haben immer einen festen Typ, den wir bei der Deklaration festlegen.
*/

void exercise3() {
	// Das hier ist eine variablen Deklaration
	int number = 5;
	/*| |	   |
	* | |		\ Optional k�nnen wir unserer neuen variable gleich zu Beginn einen Wert zusweisen.
	* | |		  Wir m�ssen das nicht sofort machen, aber wir m�ssen immer erst einen Wert zuweisen, bevor wir verwenden.
	* |	 \ Das ist der Name der Variable. So wie wir ihn hier festlegen, verwenden wir ihn dann sp�ter (inklusive gro� und klein Schreibung.
	*  \ Das hier ist der Typ der Variable, in diesem Fall eine Zahl. Er ist unver�nderlich, sobald einmal festgelegt.
	*/

	// TODO: Gib die Variable "number" and den Nutzer aus
	std::cout << "number: " << number << std::endl;

	// Wir k�nnen den Wert der Variable auch neu zuweisen, es muss aber immer eine Zahl bleiben.
	number = 7;
	/* |   | |
	*  |   |  \ Der neue Wert f�r die Variable. Sp�ter sehen wir noch komplexere Beispiele daf�r.
	*  |	\ Ein = zeigt eine Zuweisung an.
	*  |	  Auf der linken Seite steht der "Ort" wo wir etwas hin speichern wollen, auf der rechten Seite das "Was".
	*	\ Das ist der "Ort", an den wir etwas speichern wollen. �blicherweise ist das einfach ein Variablenname.
	*/

	// TODO: Gib die Variable "number" and den Nutzer aus
	std::cout << "number: " << number << std::endl;

	// Wir k�nnen auch den Wert einer Variable relativ zu sich selbst ver�ndern, z.B. um sie um einen bestimmten Betrag zu erh�hen
	number = number + 3;

	// TODO: Gib die Variable "number" and den Nutzer aus, dann verdoppele den Wert von "number" und gib ihn erneut aus.
	std::cout << "number: " << number << std::endl;
	number = number + number;
	std::cout << "number: " << number << std::endl;

	// Das ist jetzt eine Variable vom Typ string. Sie enth�lt Text, den wir auch ver�ndern k�nnen.
	// strings befinden sich im header <string> (siehe include ganz oben).
	// strings implementieren auch den + operator, man kann damit neuen Text hinten anh�ngen.
	std::string text = "Eins, zwei";
	// TODO: ver�ndere "text" so, dass er "Eins, zwei, drei" enth�lt und gib ihn an den Nutzer aus.
	text = text + ", drei";
	std::cout << text << std::endl;
}
