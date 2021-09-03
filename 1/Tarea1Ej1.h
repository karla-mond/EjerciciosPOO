//Tarea 1, ejercicio 1, header
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#include<ctime>
#pragma once
using namespace std;

class Date 
{
    Date(): day(16), year(2021), numMonth(5), month("Mayo") 
    {
        //cout << day << "/" << month << "/" <<year; 
    }

    int day;
    int year;
    int numMonth;
    string month;
        
    int getDay();
    int getYear();
    int getNumMonth();
    string getMonth();

    void showDate();
    void getcurrentDate();
};