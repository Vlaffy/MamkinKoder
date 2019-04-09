build: main.o util.o algorithm.o io.o
	gcc main.o util.o algorithm.o io.o -o program
main.o: 
	gcc -c main.c -o main.o
util.o: 
	gcc -c util.c -o util.o
algorithm.o:
	gcc -c algorithm.c -o algorithm.o
io.o:
	gcc -c io.c -o io.o
clean:
	rm -f program *.o
