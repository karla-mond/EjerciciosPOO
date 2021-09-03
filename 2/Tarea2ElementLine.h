//Tarea 2, Header ElementLine
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea2Time.h"
#pragma once
using namespace std;

class ElementLine
{   
    private:
        string name;
        Time arrival;
        Time exit;
        ElementLine* nextElement;
    
    public:
        ElementLine(): name("Persona"), arrival(0,0), exit(0,0), nextElement(0)
        {
        }

        ElementLine(string name, Time arrival, Time exit, ElementLine* nextElement);

        string getName();

        Time getArrival();
        Time getExit();

        ElementLine* getNextElement();
};