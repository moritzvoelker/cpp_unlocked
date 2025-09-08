#pragma once
#define EXERCISE2

// Die nächste Zeile sagt dem Compiler, dass er alles was im Header <iostream> ist mit kompilieren soll
#include <iostream>

/* 
* Diese Aufgabe befasst sich mit dem Ausgeben von Daten an den Nutzer.
* In der Aufgabe vorher haben wir schon Beispiele dafür gesehen, die wir jetzt ein besser verstehen wollen.
*/

// Das ist der Beginn einer Funktion.
// Eine Funktion ist eine Andeinanderreihung von Statements, die dem Computer sagen, was er nacheinander zu tun hat.
// Statements werden durch Semicolons ; getrennt.
void exercise2() {
	// Die nächste Zeile gibt den Text "Hallo" aus und wechselt dann in eine neue Zeile
	std::cout << "Hallo" << std::endl;
	/*	 |	  |	  |				 |	 |
	*	 |	  |	  |				 |	  \ Das Semicolon beendet das Statement. Wir drücken hier "Gib 'Hallo' an den Nutzer aus" aus.
	*	 |	  |	  |				  \ "endl" steht für "end line". Es verursacht einen Wechsel in eine neue Zeile
	*	 |	  |	   \ Das ist das, was ausgegeben werden soll. In diesem Fall ist es Text, es könnten aber z.B. auch Zahlen sein
	*	 |	   \ Das hier ist der shift operator. Er nimmt das was rechts steht und schiebt es in das was links steht hinein.
	*	 |		 Es lassen sich mehrere Dinge nacheinander hängen, wie hier das endl nach dem "Hallo"
	*	  \ "cout" ist der "Ausgang" des Programms. Wir benutzen ihn immer, wenn wir irgendwas an den Nutzer ausgeben wollen.
	*		Alles was mit Ein- und Ausgabe zu tun hat befindet sich im Header <iostream> (siehe include ganz oben)
	*/

	// TODO: füge ein endl an die nächste Zeile an	
	std::cout << "Das hier sollte in einer eigenen Zeile stehen";

	// TODO: füge einen weiteren string deiner Wahl vor dem endl ein
	std::cout << "Ich habe etwas zu sagen: " << std::endl;

	// TODO: füge eine neue Zeile hinzu, die eine Rechnung deiner Wahl ausdruckt
	std::cout << "3 + 4 = " << 3 + 4 << std::endl;
}