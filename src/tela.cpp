#include "tela.h"
#include <iostream>

using namespace std;

	void mostrarNaTela(int numCiclos) {
		int i;

		for(i = 0; i < numCiclos; i++) {
			cout << "-------------------------" << endl;
			cout << "Ciclo " << i+1 << endl;
			
			cout << "IF:     " << endl;
			cout << "ID:     " << endl;
			cout << "EX:     " << endl;
			cout << "MEM:    " << endl;
			cout << "WB:     " << endl;

			cout << "-------------------------" << endl << endl;
		}
	}