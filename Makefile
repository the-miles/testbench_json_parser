all: CVelocity.o CResistance.o CBaudrate.o
	g++ src/main.cpp CVelocity.o CResistance.o CBaudrate.o -Iinclude/ -Isrc/classes/ -o main -Wall

CVelocity.o:
	g++ src/classes/CVelocity.cpp -Isrc/classes/ -c -Wall

CResistance.o:
	g++ src/classes/CResistance.cpp -Isrc/classes/ -c -Wall

CBaudrate.o:
	g++ src/classes/CBaudrate.cpp -Isrc/classes/ -c -Wall

execute:
	./main

clean:
	rm -rf *.o
	rm -rf main
