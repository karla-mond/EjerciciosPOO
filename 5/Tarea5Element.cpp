//Tarea 5, Element Cpp
//Karla Mondragón, A01025108
#include<string>
#include<iostream>
#include"Tarea5Element.h"
using namespace std;

Element::Element() {}
Element::Element(string type): type(type) {}

string Element::getType()
{
    return type;
}

Element* Element::getNext()
{
    return next;
}

void Element::setNext(Element* Next)
{
    next = Next;
}