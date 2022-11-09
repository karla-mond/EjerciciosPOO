//Tarea 5, Linked List Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"SitPInterface.h"
#pragma once
using namespace std;

class LinkedList : public Interface
{
    protected:
        Element* firstElement;
    public:
        LinkedList();
        LinkedList(Element* firstElement);

        void AddMedia(Element* element);
        void AddEp(Element* element, string name);
        void AddEpP(int position, Element* element);
        Element* GetByIndex(int index);
        Element* GetByName(string name);
        void RemoveByIndex(int index);
        void ShowTitleANDRating();
        void ShowChaptersANDRating(Element* element);
        void ShowMoviesANDRating();
        int Size();

        Element* getFirstElement();
};