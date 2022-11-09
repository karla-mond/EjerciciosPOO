//Tarea 3, Header Date
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#pragma once
using namespace std;

class Date 
{
    protected:
        int day;
        int year;
        string month;
    
    public:
        Date();
        Date(int day, string month, int year);
        int getDay();
        int getYear();
        string getMonth();

        void showDate();
        void getcurrentDate();
};