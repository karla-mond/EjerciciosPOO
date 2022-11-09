//Situación problema, Shows Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMedia.h"
#include"SitPEp.h"
#include"LinkedList.h"
#include"SitPInterface.h"
#pragma once
using namespace std;

class Shows : public Media
{
    protected:
        int numSeasons;
        Interface* listEpisodes;
        Shows();

    public:
        Shows(string type, string title, int Id, string genre, Time howLong, int numSeasons, int rating, Date releaseDate);

        int getNumSeasons();
        Interface* getEpisodeList();

        void addEp(Element* element);
        void addEpP(int position, Element* element);
        void playThis();
        ~Shows();
};