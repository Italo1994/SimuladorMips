#ifndef _OPERADOR_H_
#define _OPERADOR_H_

#include <string>

	using namespace std;

	class Operador {
		public:
			string nomeOp;
			int val;
	};

	void criarOperadores(Operador operador[]);

	void mostrarOperadores(Operador operador[]);

#endif