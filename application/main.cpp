#include "conjuntoInstrucoes.h"
#include "operador.h"
#include "registrador.h"
#include "tokenizacao.h"
#include "pipeline.h"
#include "dependencias.h"
//#include "tela.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//Simulador simulador;

	//simulador.criarInstrucoes();

	//mostrarNaTela(9);

	//Registrador registrador[32];
	//Operador operador[7];
	vector<vector<string> > matrizInstrucoes;

	//criarRegistradores(registrador);

	//mostrarRegistradores(registrador);

	//criarOperadores(operador);

	//mostrarOperadores(operador);

	cout << endl;


	inicializarInstrucoes(&matrizInstrucoes, 3);

	//mostrarInstrucoes(matrizInstrucoes);

	//pipeline(2, matrizInstrucoes, 1);

	verificarDependencias(matrizInstrucoes, 3);


	//verificarDependencias(matrizInstrucoes, 2);

	return 0;
}