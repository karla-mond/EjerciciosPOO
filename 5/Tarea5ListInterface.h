//Tarea 5, List Interface Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"Tarea5Element.h"
using namespace std;
#pragma once

class ListInterface
{
    public:
        virtual void AddElement(Element* element) = 0;
        virtual void AddElementP(int position, Element* element) = 0;
        virtual Element GetByIndex(int index) = 0;
        virtual void RemoveByIndex(int index) = 0;
        virtual void ShowText() = 0;
        virtual int Size() = 0;
};