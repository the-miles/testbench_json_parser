all: CVelocity.o
	g++ src/main.cpp CVelocity.o -Iinclude/ -Isrc/classes/ -o main

CVelocity.o:
	g++ src/classes/CVelocity.cpp -Isrc/classes/ -c

execute:
	./main

clean:
	rm -rf *.o
	rm -rf main
