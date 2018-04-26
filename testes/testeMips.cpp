#include <iostream>
#include <vector>
#include <string>

#include "registrador.h"

using namespace std;

int main(int argc, char* argv[]) {

	Registrador registrador[32];

	criarRegistradores(registrador);

	mostrarRegistradores(registrador);




	registrador[0].nomeReg = "$zero";
		registrador[1].nomeReg = "$at";
		registrador[2].nomeReg = "$v0";
		registrador[3].nomeReg = "$v1";
		registrador[4].nomeReg = "$a0";
		registrador[5].nomeReg = "$a1";
		registrador[6].nomeReg = "$a2";
		registrador[7].nomeReg = "$a3";
		registrador[8].nomeReg = "$t0";
		registrador[9].nomeReg = "$t1";
		registrador[10].nomeReg = "$t2";
		registrador[11].nomeReg = "$t3";
		registrador[12].nomeReg = "$t4";
		registrador[13].nomeReg = "$t5";
		registrador[14].nomeReg = "$t6";
		registrador[15].nomeReg = "$t7";
		registrador[16].nomeReg = "$s0";
		registrador[17].nomeReg = "$s1";
		registrador[18].nomeReg = "$s2";
		registrador[19].nomeReg = "$s3";
		registrador[20].nomeReg = "$s4";
		registrador[21].nomeReg = "$s5";
		registrador[22].nomeReg = "$s6";
		registrador[23].nomeReg = "$s7";
		registrador[24].nomeReg = "$t8";
		registrador[25].nomeReg = "$t9";
		registrador[26].nomeReg = "$k0";
		registrador[27].nomeReg = "$k1";
		registrador[28].nomeReg = "$gp";
		registrador[29].nomeReg = "$sp";
		registrador[30].nomeReg = "$fp";
		registrador[31].nomeReg = "$ra";




	return 0;
}