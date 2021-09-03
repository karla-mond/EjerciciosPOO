//Tarea 5, Linked List Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea5ListInterface.h"
#pragma once
using namespace std;

class LinkedList : public ListInterface
{
    protected:
        Element* firstElement;
    public:
        LinkedList();
        LinkedList(Element* firstElement);

        Element* getFirstElement();
        void AddElement(Element* element);
        void AddElementP(int position, Element* element);
        Element GetByIndex(int index);
        void RemoveByIndex(int index);
        void ShowText();
        int Size();
};