#ifndef _DATE_H_
#define _DATE_H_

#include <ctime>
#include <iostream>
using namespace std;

// --CLASS DATE-- used to create date object that is used for employee information within employee class
class date {

	friend ostream &operator<<(ostream &cout, const date& d); // PRECONDITION  - date object created
															  // POSTCONDITION - date object output

    public:
    	date(); // default construct sets date to the current date
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

#endif
