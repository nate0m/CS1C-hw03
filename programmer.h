#ifndef _PROGRAMMER_H
#define _PROGRAMMER_H

#include "employee.h"

// --CLASS-- derived from employee class added specific programmer private date members
// used to store data of programmer employees
class programmer: public employee {

	public:
		programmer();
		programmer(string n, string t, string pNum, int a, char g, int s, 
				   string sN, int dNum, int lSInc, bool c, bool j) : 
			employee(n, t, pNum, a, g, s), // using employee constructor
			suprName{sN},
			departNum{dNum},
			lSalInc{lSInc},
			cpp{c},
			java{j} {}

		void printProgrammer() const; // PRECONDITION  - programmer object created
									  // POSTCONDITION - programmer object printed

		/**********************************************
		POSTCONDITON FOR ALL CHANGE FUNCTIONS
		- employee object made
		PRECONDITION FOR ALL CHAGNE FUNCTIONS
		- private data member chagned
		********************************************/
		void changeSuprName (string sN) {suprName = sN;}
		void changeDepartNum(int dN)    {departNum = dN;}
		void changeLSalInc  (int lSInc) {lSalInc = lSInc;}
		void changeCpp      (bool c)    {cpp = c;}
		void changeJava     (bool j)    {java = j;} 

	private:
		string suprName;
		int departNum;
		int lSalInc;
		bool cpp;
		bool java;	
};

#endif
