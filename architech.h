#ifndef _ARCHITECH_H
#define _ARCHITECH_H

#include "hw03.h"


class architech: public employee {

	public:
		architech();
		architech(string n, string t, string pNum, int a, char g, int s, 
				   string sN, int dNum, int lSInc, int yE) : employee(n, t, pNum, a, g, s),
															 suprName{sN},
															 departNum{dNum},
															 lSalInc{lSInc} {}

		void const printArchitech(); // PRECONDITION  - architech object created
									 // POSTCONDITION - architech object printed

 		/**********************************************
    	 POSTCONDITON FOR ALL CHANGE FUNCTIONS
         - employee object made
         PRECONDITION FOR ALL CHAGNE FUNCTIONS
         - private data member chagned
        ********************************************/
		void changeSuprName (string sN) {suprName = sN;}
		void changeDepartNum(int dN)    {departNum = dN;}
		void changeLSalInc  (int lSInc) {lSalInc = lSInc;}
		void changeYearsExp (int yE)    {yearsExp = yE;}

	private:
		string suprName;
		int departNum;
		int lSalInc;
		int yearsExp;
};

#endif
