#include "pipeline.h"

#include <vector>
#include <string>
#include <iostream>

	using namespace std;

	int pipeline(int linha, vector<vector<string> > matrizInstrucoes, int teste, int cicle) {
		
		int line = linha;
		int i;
		int ciclo = cicle;


		matrizInstrucoes[line][0];

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

				if(i == 1) {

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

				if(i == 2) {

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


				if(i == 3) {

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


				if(i == 4) {

					string instTemp1, instTemp2, instTemp3, instTemp4, instTempCat = "";

					instTemp1.assign(matrizInstrucoes[line+1][0]);
					instTemp2.assign(matrizInstrucoes[line+1][1]);
					instTemp3.assign(matrizInstrucoes[line+1][2]);
					instTemp4.assign(matrizInstrucoes[line+1][3]);

					instTempCat += instTemp1 + " " + instTemp2 + " " + instTemp3 + " " + instTemp4;

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << instTempCat << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << instCat << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << instTempCat << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << instTempCat << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << instTempCat << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << instTempCat << endl;

					cout << "-------------------------" << endl << endl;


				}

			
			}

		}

	

		else{

			for(i = 0; i < 5; i++) {

				ciclo = ciclo;

					string instTemp1, instTemp2, instTemp3, instTemp4, instTempCat = "";

					instTemp1.assign(matrizInstrucoes[line+1][0]);
					instTemp2.assign(matrizInstrucoes[line+1][1]);
					instTemp3.assign(matrizInstrucoes[line+1][2]);
					instTemp4.assign(matrizInstrucoes[line+1][3]);

					instTempCat += instTemp1 + " " + instTemp2 + " " + instTemp3 + " " + instTemp4;

				if(i == 0) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << instCat << endl;
						cout << "ID:     " << instTempCat << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 1) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << instCat << endl;
						cout << "EX:     " << instTempCat << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}

				if(i == 2) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << instCat << endl;
						cout << "MEM:    " << instTempCat << endl;
						cout << "WB:     " << endl;

					cout << "-------------------------" << endl << endl;

					ciclo++;

				}


				if(i == 3) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << instCat << endl;
						cout << "WB:     " << instTempCat << endl;

					cout << "-------------------------" << endl << endl;

					ciclo += 2;

				}


				if(i == 4) {

					cout << "-------------------------" << endl;
						cout << "Ciclo " << ciclo << endl;
						
						cout << "IF:     " << endl;
						cout << "ID:     " << endl;
						cout << "EX:     " << endl;
						cout << "MEM:    " << endl;
						cout << "WB:     " << instCat << endl;

					cout << "-------------------------" << endl << endl;

					

				}

			
			}

		}
	
		return ciclo;

	}