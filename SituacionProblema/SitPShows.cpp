//Situación problema, Shows Cpp
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPShows.h"
using namespace std;

Shows::Shows(){}
Shows::Shows(string type, string title, int Id, string genre, Time howLong, int numSeasons, int rating, Date releaseDate):
            Media(type, title, Id, genre, howLong, rating, releaseDate), numSeasons(numSeasons), listEpisodes(new LinkedList) {}

int Shows::getNumSeasons()
{
    return numSeasons;
}

Interface* Shows::getEpisodeList()

{
    return listEpisodes;
}

void Shows::playThis()
{
    cout << "Estás viendo la serie " << this->getTitle();
}

void Shows::addEp(Element* episode)
{
    listEpisodes->AddEp(episode, static_cast<Episode*>(episode)->getTitle());
}

void Shows::addEpP(int position, Element*episode)
{
    listEpisodes->AddEpP(position, episode);
}

Shows::~Shows()
{
    delete listEpisodes;
}

