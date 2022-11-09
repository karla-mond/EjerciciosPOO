//Situación Problema, Element Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#pragma once
using namespace std;

class Element
{
    protected:
        string type;
        Element* next;
    public:
        Element();
        Element(string type);
        string getType();
        Element* getNext();
        void setNext(Element* Next);
};