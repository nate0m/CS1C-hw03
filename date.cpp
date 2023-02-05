#include "hw03.h"

ostream &operator<<(ostream &cout, const date& d) {

    cout << d.month << "/" << d.day << "/" << d.year;
	return cout;
}
date::date() {

    // retrieveing curent date and returing as type date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    month = ltm->tm_mon + 1;
	day = ltm->tm_mday;
	year = ltm->tm_year +1900;
}

date::date(int m, int d, int y) : month{m}, day{d}, year{y} {}

date date::today() {

    // retrieveing curent date and returing as type date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    return {ltm->tm_mon + 1, ltm->tm_mday, ltm->tm_year +1900};
}
void date::printDate() const{

    cout << month << "/" << day << "/" << year;
}

