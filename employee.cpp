#include "hw03.h"

employee::employee() {

    name = "undefined-name";
    title = "undefined-title ";
    pNumber = "undefined-phoneNumber";

  //  id = generateId();

    age = 0;
    gender = 'X';
    salary = 0;
}
employee::employee(string n, string t, string p, int a, char g, int s) {

    date h;
    hired = h.today();

//    id = generateId();

    name = n;
    title = t;
    pNumber = p;
    age = a;
    gender = g;
    salary = s;
}
double employee::generateId() {
    
    return numEmployees.number + 1;
}
