#include "employee.h"

double employee::numEmployees = 0;

employee::employee() :
    name{"undefined-name"},
    title{"undefined-title "},
    pNumber{"undefined-phoneNumber"},
    age{0},
    salary{0},
    gender{'X'} {

	numEmployees++;

	idNum = generateId();
}
employee::employee(string n, string t, string p, int a, char g, int s) : 

	// initializes employee object to set passed values
	name{n},
	title{t},
	pNumber{p},
	age{a},
	gender{g},
	salary{s} {

    date h;
    hired = h.today();
	numEmployees++;

    idNum = generateId();
}
double employee::generateId() {

	// takes number of employees and adds 10000 as the employees id number and returns as double    
    return numEmployees + 10000;
}
void employee::printEmployee() const {

	cout << "Name : " << name << endl;
	cout << "ID Number: " << idNum << endl;
	cout << "Phone Number: " << pNumber << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Title: " << title << endl;
	cout << "Salary: " <<  salary << endl;
	cout << "Date Hired: " << hired << endl;  
}

