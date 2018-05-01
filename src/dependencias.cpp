#include "dependencias.h"
#include "pipeline.h"

#include <string>
#include <vector>
#include <iostream>

	using namespace std;

	void verificarDependencias(vector<vector<string> > matrizInstrucoes, int numIntrucoes){
		int i, j;
		int c = 0;
		int ciclo = 1;
		int totalCiclos = 0;
		bool teste = false;

		string strOperacao = "";

		string strToken = "";


		for(i = 0; i < numIntrucoes; i++) {

			cout << "I = " << i << endl;
			strOperacao += matrizInstrucoes[i][0];
			strToken += matrizInstrucoes[i][c+1];

			ciclo = ciclo;
				

					if(strToken == matrizInstrucoes[i+1][c+2] || strToken == matrizInstrucoes[i+1][c+3]) {
						teste = true;
						ciclo = pipeline(i, matrizInstrucoes, teste, ciclo);

					}

					else if(strToken != matrizInstrucoes[i][c+2] || strToken != matrizInstrucoes[i][c+3]) {
						teste = false;
						ciclo = pipeline(i, matrizInstrucoes, teste, ciclo);

					}


					cout << "CICLO DEPOIS DA 1a ITERAÇÃO " << ciclo << endl;


		}

			strOperacao.erase();
			strToken.erase();
	}