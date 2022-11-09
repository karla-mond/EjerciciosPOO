//Situación problema, Netflix Manager Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMovies.h"
#include"SitPShows.h"
#include"LinkedList.h"
#include"SitPInterface.h"
#include"SitPElement.h"
#pragma once
using namespace std;

class Manager
{
    protected:
        Interface* listMedia;
    public:
        Manager();

        void AddMedia(Element* element); //
        void AddEp(Element* element, string name); //
        void AddEpP(int position, Element* element, string name); //
        Element* GetByIndex(int index);
        Element* GetByName(string name);
        void RemoveByIndex(int index);
        void ShowTitleANDRating(); //
        void ShowChaptersANDRating(string name); //
        void ShowMoviesANDRating(); //
        int Size(); // 

        ~Manager();

};

