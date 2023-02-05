#include "hw03.h"

double employee::numEmployees = 0;

employee::employee() {

    name = "undefined-name";
    title = "undefined-title ";
    pNumber = "undefined-phoneNumber";

	numEmployees++;

	idNum = generateId();

    age = 0;
    gender = 'X';
    salary = 0;
}
employee::employee(string n, string t, string p, int a, char g, int s) : 

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
    
    return numEmployees + 10000;
}
void const employee::printEmployee() {

	cout << "Name : " << name << endl;
	cout << "ID Number: " << idNum << endl;
	cout << "Phone Number: " << pNumber << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Title: " << title << endl;
	cout << "Salary: " <<  salary << endl;
	cout << "Date Hired: " << hired << endl;  
}

