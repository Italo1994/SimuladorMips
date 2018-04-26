#include "operador.h"
#include <iostream>

	using namespace std;

	void criarOperadores(Operador operador[]) {
		

		operador[0].nomeOp += "add";
		operador[1].nomeOp += "sub";
		operador[2].nomeOp += "beq";
		operador[3].nomeOp += "bne";
		operador[4].nomeOp += "lw";
		operador[5].nomeOp += "sw";
		operador[6].nomeOp += "jump";
		
	}

	void mostrarOperadores(Operador operador[]) {
		int i;
		
		for(i=0; i<7; i++) {
			cout << operador[i].nomeOp << endl;
		}
	}