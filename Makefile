main.o: main.cpp
	g++ -C main.cpp
	
sort.o: sort.h
	gcc -C sort.h
	
programa: main.o sort.o
	g++ main.o sort.o -O programa
