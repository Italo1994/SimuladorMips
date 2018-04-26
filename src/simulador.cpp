#include "simulador.h"
#include <iostream>
#include <string>
#include <vector>

	using namespace std;

	void criarRegistradores(Simulador registrador[], int numRegistradores){
		//int i;
		
		cout << endl;
		cout << "CRIAR REGISTRADORES" << endl;

		registrador[0].nomeRegistrador = "$t0";
		registrador[1].nomeRegistrador = "$t1";
		registrador[2].nomeRegistrador = "$t2";
		registrador[3].nomeRegistrador = "$t3";
		registrador[4].nomeRegistrador = "$s0";
		registrador[5].nomeRegistrador = "$s1";
		registrador[6].nomeRegistrador = "$s2";
		registrador[7].nomeRegistrador = "$s3";
	}

	void mostrarRegistradores(Simulador registrador[], int numRegistradores) {
		int i;
		

		for(i=0; i<numRegistradores; i++) {
			cout << registrador[i].nomeRegistrador << endl;
		}
	}

	void criarOperadores(Simulador operador[]) {
		

		operador[0].nomeOperador += "add";
		operador[1].nomeOperador += "sub";
		operador[2].nomeOperador += "beq";
		operador[3].nomeOperador += "bne";
		operador[4].nomeOperador += "lw";
		operador[5].nomeOperador += "sw";
		operador[6].nomeOperador += "jump";
		
	}

	void mostrarOperadores(Simulador operador[]) {
		int i;
		
		cout << endl;
		cout << "OPERADORES" << endl;

		for(i=0; i<7; i++) {
			cout << operador[i].nomeOperador << endl;
		}
	}

	void inicializarInstrucoes(vector<vector<string>> *matrizInstrucoes, int numInstrucoes) {
		int i, j;
		string inst;

		cout << endl;
		cout << "INICIALIZAR AS INSTRUÇÕES" << endl;

		for(i=0; i<numInstrucoes; i++){
			vector<string> vetor;
			for(j=0; j<4; j++){
				cin >> inst;
				vetor.push_back(inst); 
			}

			matrizInstrucoes->push_back(vetor);
		}
		
	}


	void mostrarInstrucoes(vector<vector<string>> const & matrizInstrucoes) {

		cout << endl;
		cout << "INSTRUÇÕES" << endl;

		for (auto const & string_vec : matrizInstrucoes) {
    		for (auto const & str : string_vec) {
        		cout << str << " ";
    		}
    		cout << endl;
		}
		
	}

	void verificarDependencias(vector<vector<string>> const & matrizInstrucoes, int numInstrucoes, Simulador registrador[], Simulador operador[]) {
		int i, j;
		//int totalEstagios = 5;
		//int cout = 0;
		//int numCiclos = 0;
		vector<string> estagios(5);

		estagios[0] = "IF";
		estagios[1] = "ID";
		estagios[2] = "EXE";
		estagios[3] = "MEM";
		estagios[4] = "WB";

		cout << endl << endl;

		for (i = 0; i < numInstrucoes; i++) {

			/**
			*recebe o primeiro parâmetro de cada linda, por exemplo add
			*/

			for(j = 1; j < 4; j++) {
				
				
				verificarToken(matrizInstrucoes, numInstrucoes, i+1);
			}

	
		}

		
	}

	
	void verificarToken(vector<vector<string>> const &matrizInstrucoes, int numInstrucoes, int val) {
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


