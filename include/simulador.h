#ifndef _SIMULADOR_H_
#define _SIMULADOR_H_

#include <string>
#include <vector>

using namespace std;

class Simulador {
	public:
	string nomeRegistrador;
	string nomeOperador;

};

	void criarRegistradores(Simulador registrador[], int numRegistradores);

	void mostrarRegistradores(Simulador registrador[], int numRegistradores);

	void criarOperadores(Simulador operador[]);

	void mostrarOperadores(Simulador operador[]);

	void inicializarInstrucoes(vector<vector<string>> *matrizInstrucoes, int numInstrucoes);

	void mostrarInstrucoes(vector<vector<string>> const & matrizInstrucoes);

	void verificarDependencias(vector<vector<string>> const & matrizInstrucoes, int numInstrucoes, Simulador registrador[], Simulador operador[]);

	void verificarToken(vector<vector<string>> const &matrizInstrucoes, int numInstrucoes, int val);

#endif