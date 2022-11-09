// Time Cpp 
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"SitPTime.h"
using namespace std;

Time::Time() {}

Time::Time(int theHour, int theMinutes): hour(hour), minutes(minutes) {}

int Time::getHour()
{
    return hour;
}

int Time::getMinutes()
{
    return minutes;
}
