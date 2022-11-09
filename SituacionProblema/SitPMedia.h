//Situación problema, Media Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPTime.h"
#include"SitPElement.h"
#include"SitPDate.h"
#pragma once
using namespace std;

class Media : public Element
{
    protected:
        string title;
        string genre;
        int Id;
        int rating;
        Time howLong;
        Date releaseDate;
    public:
        Media();
        Media(string type, string title, int Id, string genre, Time howLong, int rating, Date releaseDate);
        
        string getTitle();
        string getGenre();
        int getId();
        int getRating();
        Time getHowLong(); 
        Date getReleaseDate();
};