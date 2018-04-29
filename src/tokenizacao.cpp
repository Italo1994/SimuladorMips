#include "tokenizacao.h"

#include <iostream>
#include <vector>
#include <string>
	
	using namespace std;

	void verificarToken(vector<vector<string> > const &matrizInstrucoes, int numInstrucoes, int val) {
		int i, j;
		int c = 0;
		bool validate = false;

		vector<string> estagios(5);

			estagios[0] = "IF";
			estagios[1] = "ID";
			estagios[2] = "EXE";
			estagios[3] = "MEM";
			estagios[4] = "WB";


		string str1, str2, str3, str4, strTotal="";

		string token1 = matrizInstrucoes[val-1][c+1];
		//string token2 = matrizInstrucoes[val-1][c+3];


		for( i = val; i < numInstrucoes; i++ ) {

			for( j = 2; j < 4; j++ ) {
				
				if( token1 == matrizInstrucoes[i][j] ) {
					validate = true;
					str1.assign( matrizInstrucoes[val-1][c] );
					str2.assign( matrizInstrucoes[val-1][c+1] );
					str3.assign( matrizInstrucoes[val-1][c+2] );
					str4.assign( matrizInstrucoes[val-1][c+3] ); 
					strTotal = str1 + " " + str2 + " " + " " + str3 + " " + str4;
					break;
				}

			}
			
		}


		if( validate == true ){

				cout << "----------------------------" << endl;

			for(int i=0; i<5; i++) {

				//cout << "Ciclo " << i+1 << endl;
				if( i == 0 ) {
					cout << estagios[0] << "       " << strTotal << endl;
					cout << estagios[1] << "       " << " 0 " << endl;
					cout << estagios[2] << "       " << " 0 " << endl;
					cout << estagios[3] << "       " << " 0 " << endl;
					cout << estagios[4] << "       " << " 0 " << endl;
					break;
				} else if( i == 1 ) {
					cout << estagios[0] << "       " << " 0 " << endl;
					cout << estagios[1] << "       " << strTotal << endl;
					cout << estagios[2] << "       " << " 0 " << endl;
					cout << estagios[3] << "       " << " 0 " << endl;
					cout << estagios[4] << "       " << " 0 " << endl;
					break;
				} else if( i == 2 ) {
					cout << estagios[0] << "       " << " 0 " << endl;
					cout << estagios[1] << "       " << " 0 " << endl;
					cout << estagios[2] << "       " << strTotal << endl;
					cout << estagios[3] << "       " << " 0 " << endl;
					cout << estagios[4] << "       " << " 0 " << endl;
					break;
				} else if( i == 3 ) {
					cout << estagios[0] << "       " << " 0 " << endl;
					cout << estagios[1] << "       " << " 0 " << endl;
					cout << estagios[2] << "       " << " 0 " << endl;
					cout << estagios[3] << "       " << strTotal << endl;
					cout << estagios[4] << "       " << " 0 " << endl;
					break;
				} else if( i == 4 ) {
					cout << estagios[0] << "       " << " 0 " << endl;
					cout << estagios[1] << "       " << " 0 " << endl;
					cout << estagios[2] << "       " << " 0 " << endl;
					cout << estagios[3] << "       " << " 0 " << endl;
					cout << estagios[4] << "       " << strTotal << endl;
					break;
				}
			
			}
				cout << "----------------------------" << endl << endl;
		}
	}