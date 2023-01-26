#include "hw03.h"

date::date() {

    month = 0;
    day = 0;
    year = 0;
}
date::date(int m, int d, int y) {

    month = m;
    day = d;
    year = y; 
}
date date::today() {

    time_t now = time(0);
    tm *ltm = localtime(&now);
    return {ltm->tm_mon + 1, ltm->tm_mday, ltm->tm_year +1900};
}
void date::printDate() {

    cout << month << "/" << day << "/" << year;

}
