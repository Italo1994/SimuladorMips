#include "dependencias.h"
#include "pipeline.h"

#include <string>
#include <vector>
#include <iostream>

	using namespace std;

	void verificarDependencias(vector<vector<string> > matrizInstrucoes, int numIntrucoes){
		int i, j;
		int c = 1;
		int ciclo = 1;
		//int totalCiclos = 0;
		bool teste = false;

		string strOperacao = "";

		string strToken = "";


		for(i = 0; i < numIntrucoes; i++) {


			strOperacao += matrizInstrucoes[i][0];
			strToken += matrizInstrucoes[i][c];

			ciclo = ciclo;

			for(j = 0; j < 4; j++) {


				if(i != 0) {

					if(strToken != matrizInstrucoes[i][c+1] || strToken != matrizInstrucoes[i][c+2]) {
						teste = true;
						pipeline(i, matrizInstrucoes, teste, ciclo);

					}

				}

				else if(strToken == matrizInstrucoes[i][c+1] || strToken != matrizInstrucoes[i][c+2]) {
					teste = false;
					pipeline(i, matrizInstrucoes, teste, ciclo);

				}


			}

			strOperacao.erase();
			strToken.erase();

		}
	}