//Tarea 2, CPP ElementLine
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea2ElementLine.h"
using namespace std;

ElementLine::ElementLine(string theName, Time theArrival, Time theExit, ElementLine* theNext)
{
    name = theName; //checar por qué marca error
    arrival = theArrival;
    exit = theExit;
    nextElement = theNext;
}

string ElementLine::getName() 
{
    return name;
}

Time ElementLine::getArrival()
{
    return arrival;
}

Time ElementLine::getExit()
{
    return exit;
}

ElementLine* ElementLine::getNextElement()
{
    return nextElement;
}
