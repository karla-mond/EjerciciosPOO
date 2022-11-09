//Situación problema, Media Cpp
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMedia.h"
using namespace std;

Media::Media() {}
Media::Media(string type, string title, int Id, string genre, Time howLong, int rating, Date releaseDate) : 
            Element(type), title(title), Id(Id), genre(genre), howLong(howLong), rating(rating), releaseDate(releaseDate) {}


string Media::getTitle()
{
    return title;
}

string Media::getGenre()
{
    return genre;
}

int Media::getId()
{
    return Id;
}

int Media::getRating()
{
    return rating;
}

Time Media::getHowLong()
{
    return howLong;
}

Date Media::getReleaseDate()
{
    return releaseDate;
}