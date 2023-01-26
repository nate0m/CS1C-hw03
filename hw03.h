#ifndef _HW03_H
#define _HW03_H

#include <ctime>
#include <string>
#include <iostream> 
using namespace std;

class date {

    public:

    date();
    date(int m, int d, int y);

    date today();

    void printDate();
    
    private:
        int month;
        int day;
        int year;
};
struct id {

    double number;
    id() : number(00000000) {}
};
class employee {

    public:

    employee();
    employee(string n, string t, string p, int a, char g, int s); // contructor for new hire

    void changeName();
    void changeTitle();
    void changeSalary();
    void changeId();
    void changeAge();
    void changeGender();
    void changeHiredDate();

    double generateId();

    private:
        string name;
        string title;
        string pNumber;
        id idNum;
        int age;
        char gender;
        int salary;
        date hired;
        static id numEmployees;
};




#endif
