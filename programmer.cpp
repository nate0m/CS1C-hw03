#include "programmer.h"

programmer::programmer() : employee(),
                           suprName{"undefined-name"},
	                       departNum{0},
	                       lSalInc{0},
	                       cpp{0},
	                       java{0} {}
                           
void programmer::printProgrammer() const {

	employee::printEmployee();
	
	cout << "Superior Name: " << suprName << endl;
	cout << "Depart Number: " << departNum << endl;
	cout << "Last Salary Inc: " << lSalInc << endl;
	
	if(cpp == true)
		cout << "Cpp dev" << endl;

	if(java == true)
		cout << "Java dev" << endl;
}
