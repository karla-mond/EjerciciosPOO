//Situación problema, Shows Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMedia.h"
#include"SitPInterface.h"
#pragma once
using namespace std;

class Episode : public Media
{
    protected:
        int season;
        string showName;
        Element* firstElement;
        Episode();
    public:
        Episode(string type, string showName, string title, int Id, string genre, Time howLong, int season, int rating, Date releaseDate);
        
        int getSeason();
        string getShowName();

        int Size();
        void AddEp(Element* newEpisode);
        void AddEpP(Element* newEpisode, int position);
        Element* getEpByIndex(int index);
        void removeByIndex(int index);
};