#include "timeClass.h"

void Time::printTime() {

	cout << hours << ":" << minutes << ":" << seconds;

}
ostream &operator<<(ostream &cout, extentedTime& exT) {

	// overloaded output for extentedTime
	cout << "Extented Time: ";
	exT.printTime();
	cout << " " << exT.stringTZones[exT.tZone];
	
	return cout;
}
ostream &operator<<(ostream &cout, invoice& iv) {

	// overloaded output for invoice
	cout << "Invoice Time: ";
	iv.purchase.printTime();

	return cout;
}
