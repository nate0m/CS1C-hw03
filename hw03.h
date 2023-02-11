#ifndef _HW03_H
#define _HW03_H

#include <string>
#include <iostream> 
#include <ctime>
using namespace std;

class date {

	friend ostream &operator<<(ostream &cout, const date& d); // PRECONDITION  - date object created
															  // POSTCONDITION - date object output

    public:
    	date();
    	date(int m, int d, int y) : month{m}, day{d}, year{y} {}

		date today(); // PRECONDITION - date object created
					  // POSTCONDITION - date object = todays date

    	void printDate() const; // PRECONDITION  - date object created
								// POSTCONDITION - date object printed
    
    private:
        int month;
        int day;
        int year;
};
class employee {

    public:

    	employee();
    	employee(string n, string t, string p, int a, char g, int s); // contructor for new hire

		void const printEmployee(); // PRECONDITION  - employee object created
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
