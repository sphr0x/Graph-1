#include <iostream>
#include "Node.h"
#include "Edge.h"

int main()
{
	Node k1;											// 2 b)
	std::cout << k1.getID() << "\n" << std::endl;		// test    1 a2)
	Node k2("wr0ng$%&");
	std::cout << k2.getID() << "\n" << std::endl;

	// ab hier: sollte im bereits existierenden trycatch implementiert werden -> inf objekte erzeugt ?
	Node* k3 = nullptr;
	Node* k4 = nullptr;
	try {
	throw k3 = new Node("te1t$%ds");
	throw k4 = new Node;
	
	}
	catch(const Node*){
		std::cout << "exception!" << std::endl;
	}
	
	delete k3;
	delete k4;
	// bis hier

	return 0;
}

		/*							### Kommentar zu Aufgabe 2 b) ### 
	Wenn man den try-catch-Block weglässt und nur eine Exception via "throw" wirft, erscheint folgende Fehler-
	meldung:
	"Ausnahme ausgelöst bei 0x77861942 in Labor4.exe: Microsoft C++-Ausnahme: char bei Speicherort 0x005AF558.
	Unbehandelte Ausnahme bei 0x77861942 in Labor4.exe: Microsoft C++-Ausnahme: char bei Speicherort 0x005AF558."
	???
	Die Folge davon ist, dass das Programm HIER zwar weiter läuft, allerdings keine Behandlung vom Programm 
	durchgeführt wird und mit ungewünschten Parametern/Werten weiter operiert.
	???
	Normalerweise landet eine nicht gefangene Exception im Laufzeitsystem und führt zum Programmabsturz.
		*/

		/*										### 2DO ###
		X   1 done
			2 a) done 
			  b) try catch in fkt, not in konst ...
			  c) done
			3 in main, not in existing try catch, works but localization ok ?
			4 a) throw NodeIdException
			  b) ### Kommentar zu Aufgabe 4 b) ### -> Diese Funktion musst const sein, da sie sonst nciht als const
			  gefangen werden kann.
			5 a)
			  b)





*/