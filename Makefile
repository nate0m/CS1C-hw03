CC = g++

all: hw03

hw03: date.o employee.o programmer.o architech.o timeClass.o hw03.cpp
	$(CC) hw03.cpp -o hw03 date.o employee.o programmer.o architech.o timeClass.o

date.o: date.cpp date.h
	$(CC) -c date.cpp -o date.o

employee.o: employee.cpp employee.h
	$(CC) -c employee.cpp -o employee.o

programmer.o: programmer.cpp programmer.h
	$(CC) -c programmer.cpp -o programmer.o

architech.o: architech.cpp architech.h
	$(CC) -c architech.cpp -o architech.o

timeClass.o: timeClass.cpp timeClass.h
	$(CC) -c timeClass.cpp -o timeClass.o

clean: 
	rm hw03 *.o

tar:
	tar cf hw03.tar hw03.src Makefile hw03.cpp date.h employee.h programmer.h architech.h timeClass.h date.cpp employee.cpp programmer.cpp architech.cpp timeClass.cpp 
