#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "date.h"
#include <string>
#include <iostream>
using namespace std;

// --CLASS EMPLOYEE-- used to store employee information like (name, id number, etc)
// CLASS PRECONDITIONS - some constructors use a type date via user input or date default constructor
class employee {

    public:

    	employee();
    	employee(string n, string t, string p, int a, char g, int s); // contructor for new hire

		void printEmployee() const; // PRECONDITION  - employee object created
									// POSTCONDITION - employee object create

		/**********************************************
		 POSTCONDITON FOR ALL CHANGE FUNCTIONS
		 - employee object made
		 PRECONDITION FOR ALL CHAGNE FUNCTIONS
		 - private data member chagned
		 ********************************************/
		void changeName     (string n)  {name = n;} 
		void changeTitle    (string t)  {title = t;}
		void changePnumber  (string p)  {pNumber = p;}
    	void changeId       (double id) {idNum = id;}
    	void changeSalary   (int s)     {salary = s;}
    	void changeAge      (int a)     {age = a;}
    	void changeGender   (char g)    {gender = g;}
    	void changeHiredDate(date d)    {hired = d;}

    	double generateId(); // POSTCONDITION - generated unique id for employee

    private:
        string name;
        string title;
        string pNumber;
        double idNum;
        int age;
        char gender;
        int salary;
        date hired;
        static double numEmployees; // tracks number of employees used to generate ids
};


#endif
