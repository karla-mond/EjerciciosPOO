
//Tarea 1, ejercicio 2, header
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#include "Tarea1Ej1.h"
#pragma once
using namespace std;

class Person 
{
    protected:
        string name;
        Date BirthDate;
        Person* dad;
        Person* mom;
    public:
        Person();
        Person(string name, Date BirthDate, Person* dad, Person* mom): name(name), BirthDate(BirthDate), dad(dad), mom(mom) {}

        string getName(); 
            
        Person* getDad(); 
        Person* getMom(); 
            
        Date getBirthDate();
        int getAge(); 

        void getAncesters();
        void getNameAnc();
        void getOldest();
        void getYoungest();
};