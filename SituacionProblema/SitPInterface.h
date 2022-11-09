//Situación Problema Interface Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPElement.h"
using namespace std;
#pragma once

class Interface
{
    public:
        virtual void AddMedia(Element* element)=0;
        virtual void AddEp(Element* element, string name)=0;
        virtual void AddEpP(int position, Element* element)=0;
        virtual Element* GetByIndex(int index)=0;
        virtual Element* GetByName(string name)=0;
        virtual void RemoveByIndex(int index)=0;
        virtual void ShowTitleANDRating()=0;
        virtual void ShowChaptersANDRating(Element* element)=0;
        virtual void ShowMoviesANDRating()=0;
        virtual int Size()=0;
};