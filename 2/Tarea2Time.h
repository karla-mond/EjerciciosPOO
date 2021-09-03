//Tarea 2, Header Time
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#pragma once
using namespace std;

class Time
{
    private:
        int hour;
        int minutes;
        
    public:
        Time();

        Time(int hour, int minutes);

        int getHour();
        int getMinutes();
}; 