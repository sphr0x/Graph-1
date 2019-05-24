#include <iostream>
#include "Node.h"
#include "Edge.h"

		/* ### C23 – Laborübung 4 - Graph, Knoten, Kanten, Exceptions, dynamische Objekte ### */

int main(){
	Node* k3 = nullptr;
	Node* k4 = nullptr;

	try{															// 2 c)
		Node k1;													// 2 b)
		Node k2("right");
		k3 = new Node("i_am");										// 3)
		k4 = new Node("i_am_not%");
		//std::cout << k4->getID() << "\n" << std::endl;
		Edge e2(*k3, k1);
		//std::cout << e2.toString() << std::endl;
		Edge e1("valid", "not%valid");								// 5 a)
	}/*
	catch (const char* except) {									// catch, what was thrown | std::string ==> const char*
		std::cerr << "Exception( caught const char*)" << std::endl;
	}*/
	catch (const NodeIdException &except) {							// 4 a+b)
		std::cerr << except.getError() << std::endl;
	}
	std::cout << "continue in main" << std::endl;
	delete k3;														// only neccessary if "new" was successful
	delete k4;
	return 0;
}
		/*							### Kommentar zu Aufgabe 2 b) ### 
	Wenn man den try-catch-Block weglässt und nur eine Exception via "throw" wirft, erscheint folgende Fehler-
	meldung:
	"Ausnahme ausgelöst bei 0x77861942 in Labor4.exe: Microsoft C++-Ausnahme: char bei Speicherort 0x005AF558.
	Unbehandelte Ausnahme bei 0x77861942 in Labor4.exe: Microsoft C++-Ausnahme: char bei Speicherort 0x005AF558."
	Eine nicht gefangene Exception landet im Laufzeitsystem und führt zum Programmabsturz.
		*/

		/*							### Kommentar zu Aufgabe 2 b) ###
	Wenn im Konstruktor eine Exception stattfindet, dann wird das Objekt nicht erzeugt und das Programm springt
	direkt zum catch-Block und wird erst NACH diesem fortgeführt.
		*/

		/*							### Kommentar zu Aufgabe 4 b) ### 
	Diese Funktion musst const sein, da sie sonst nicht als const gefangen werden kann.
	Compiler: "1>C:\***\main.cpp(23): note: Durch die Konvertierung gehen Qualifizierer verloren"
		*/

		/*							### Kommentar zu Aufgabe 5 b) ###
	Das Objekt von Typ Edge wird nicht erzeugt, wenn eine Exception (fehlerhafte Bezeichnung der Node) auftritt.
		*/