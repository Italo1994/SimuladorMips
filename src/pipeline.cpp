#include "pipeline.h"

#include <vector>
#include <string>
#include <iostream>

	using namespace std;

	int pipeline(int linha, vector<vector<string> > matrizInstrucoes, int teste, int cicle) {
		int line = linha;
		int i;
		int ciclo = cicle;


		cout << matrizInstrucoes[line][0];

		string inst1, inst2, inst3, inst4, instCat = "";

		inst1.assign(matrizInstrucoes[line][0]);
		inst2.assign(matrizInstrucoes[line][1]);
		inst3.assign(matrizInstrucoes[line][2]);
		inst4.assign(matrizInstrucoes[line][3]);

		instCat += inst1 + " " + inst2 + " " + inst3 + " " + inst4;


		if(teste == true) {

			
			for(i = 0; i < 5; i++) {

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << instCat << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << instCat << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << instCat << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}


				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << instCat << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}


				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << instCat << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

			
			}

		}


		else{

			for(i = 0; i < 5; i++) {

				ciclo = ciclo;

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << instCat << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << instCat << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << instCat << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}


				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << instCat << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}


				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << instCat << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

			
			}

		}

	

	}