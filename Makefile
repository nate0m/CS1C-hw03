CC = g++

all: hw03

hw03: date.o employee.o hw03.cpp hw03.h
	$(CC) hw03.cpp -o hw03 date.o employee.o

date.o: date.cpp hw03.h
	$(CC) -c date.cpp -o date.o

employee.o: employee.cpp hw03.h
	$(CC) -c employee.cpp -o employee.o

clean: 
	rm hw03 *.o

tar:
	tar cf hw03.tar hw03.src Makefile hw03.cpp hw03.h date.cpp employee.cpp 
