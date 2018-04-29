#include "conjuntoInstrucoes.h"
#include <vector>
#include <string>

	using namespace std;

	void inicializarInstrucoes(vector<vector<string> > *matrizInstrucoes, int numInstrucoes) {
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

	void mostrarInstrucoes(vector<vector<string> > const & matrizInstrucoes) {

		cout << endl;
		cout << "INSTRUÇÕES" << endl;

		for (auto const & string_vec : matrizInstrucoes) {
    		for (auto const & str : string_vec) {
        		cout << str << " ";
    		}
    		cout << endl;
		}

		
	}
