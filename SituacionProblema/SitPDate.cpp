//Tarea 3, CPP Date
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#include<ctime>
#include"SitPDate.h"
using namespace std;

Date::Date(){}
Date::Date(int day, string month, int year) : day(day), month(month), year(year) {}

int Date::getDay() 
{
    return day;
}

int Date::getYear() 
{
    return year;
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
}
