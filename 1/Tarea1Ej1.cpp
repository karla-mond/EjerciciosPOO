//Tarea 1, ejercicio 1
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#include<ctime>
#include "Tarea1Ej1.h"
using namespace std;

Date::Date(int d, int numM, int y, string m) 
{
    day = d;
    year = y;
    numMonth = numM;
    month = m;
}

int Date::getDay() 
{
    return day;
}

int Date::getYear() 
{
    return year;
}

int Date::getNumMonth() 
{
    return numMonth;
}

string Date::getMonth() 
{
    return month;
}

void Date::getcurrentDate() 
{
    time_t tSac = time(NULL);
    tm tms = *localtime(&tSac);
    cout << tms.tm_mday << "-" << tms.tm_mon+1;
    cout << tms.tm_mday << "-" << tms.tm_mon+1 << "-" << tms.tm_year + 1900;
    cout << tms.tm_mday << "/" << tms.tm_mon+1 << "/" << tms.tm_year + 1900;
    cout << tms.tm_mday << "/" << tms.tm_mon+1;
}

void Date::showDate() 
{
    cout << day << "-" << month;
    cout << day << "-" << month << "-" <<year;
    cout << day << "/" << numMonth << "/" <<year;
    cout << day << "/" << numMonth;

}
