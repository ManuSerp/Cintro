
all : main

triangle.o: triangle.c triangle.h
	gcc -c triangle.c


main.o: main.c
	gcc -c main.c

point.o: point.c point.h
	gcc -c point.c	


main: main.o triangle.o point.o
	gcc -o main main.o triangle.o point.o

clean:
	rm -f *.o ./main
