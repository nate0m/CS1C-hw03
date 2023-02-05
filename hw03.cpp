#include "hw03.h"
#include "programmer.h"
#include "architech.h"

int main() {

 date random(12, 7, 02);
	employee tod("tod", "janitor", "900-123-777", 17, 'M', 30000);
	programmer bill("bill", "programmer", "777-777-7777", 42, 'M', 99000, "Jacob", 7, 5, true, true);
	architech joe("joe", "architech", "222-222-2222", 67, 'F', 12000, "Cob", 3, 8, 25);

	tod.printEmployee();
	cout << endl;
	bill.printProgrammer();
	cout << endl;
	joe.printArchitech();
	cout << endl;

	tod.changeName("Bill");
	tod.changeTitle("Landscaper");
	tod.changePnumber("888-888-8888");
	tod.changeId(87878);
	tod.changeSalary(999999);
	tod.changeAge(14);
	tod.changeGender('X');
	tod.changeHiredDate(random);
		
	bill.changeName("Tod");
	bill.changeTitle("Different-Programmer");
	bill.changePnumber("555-555-5555");
	bill.changeId(00000);
	bill.changeSalary(77777);
	bill.changeAge(88);
	bill.changeGender('F');
	bill.changeHiredDate(random);
	bill.changeSuprName("Boof");
	bill.changeDepartNum(3);
	bill.changeLSalInc(27);
	bill.changeCpp(false);
	bill.changeJava(false);

	joe.changeName("Po");
	joe.changeTitle("Other-Architech");
	joe.changePnumber("444-444-4444");
	joe.changeId(21293);
	joe.changeSalary(4444444);
	joe.changeAge(99);
	joe.changeGender('M');
	joe.changeHiredDate(random);
	joe.changeSuprName("Jeff");
	joe.changeDepartNum(8);
	joe.changeLSalInc(10);
	joe.changeYearsExp(30);

	tod.printEmployee();
	cout << endl;
	bill.printProgrammer();
	cout << endl;
	joe.printArchitech();
	cout << endl;	

    return 0;
}


