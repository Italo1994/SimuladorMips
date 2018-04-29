CPPFLAGS	=	-Wall	-ansi	-pedantic	-g	-O0


all:
	g++	-c	./src/registrador.cpp	-I	./include	-std=c++11	-o	./objs/registrador.o
	
	g++	-c	./src/operador.cpp	-I	./include	-std=c++11	-o	./objs/operador.o
	
	g++	-c	./src/conjuntoInstrucoes.cpp	-I	./include	-std=c++11	-o	./objs/conjuntoInstrucoes.o
	
	g++	-c	./src/tokenizacao.cpp	-I	./include	-std=c++11	-o	./objs/tokenizacao.o
	
	g++	./application/main.cpp	./objs/*.o	-I	./include	-o	./bin/testeMips



run:
	./bin/testeMips	


clean:
	rm	./objs/*.o
	rm	./bin/*
