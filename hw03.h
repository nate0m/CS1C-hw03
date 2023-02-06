#ifndef _HW03_H
#define _HW03_H

#include <string>
#include <iostream> 
#include <ctime>
using namespace std;

class date {

	friend ostream &operator<<(ostream &cout, const date& d);	

    public:
    	date();
    	date(int m, int d, int y) : month{m}, day{d}, year{y} {}

		date today();

    	void printDate() const;
    
    private:
        int month;
        int day;
        int year;
};
class employee {

    public:

    	employee();
    	employee(string n, string t, string p, int a, char g, int s); // contructor for new hire

		void const printEmployee();

    	void changeName     (string n)  {name = n;}
    	void changeTitle    (string t)  {title = t;}
		void changePnumber  (string p)  {pNumber = p;}
    	void changeId       (double id) {idNum = id;}
    	void changeSalary   (int s)     {salary = s;}
    	void changeAge      (int a)     {age = a;}
    	void changeGender   (char g)    {gender = g;}
    	void changeHiredDate(date d)    {hired = d;}

    	double generateId();

    private:
        string name;
        string title;
        string pNumber;
        double idNum;
        int age;
        char gender;
        int salary;
        date hired;
        static double numEmployees;
};




#endif
