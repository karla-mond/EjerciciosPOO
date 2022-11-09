//Situación problema, Movies Cpp
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMovies.h"
using namespace std;

Movies::Movies(){}
Movies::Movies(string type, string title, int Id, string genre, Time howLong, int rating, Date releaseDate):
                Media(type, title, Id, genre, howLong, rating, releaseDate) {}

void Movies::playThis()
{
    cout << "Estás viendo la película " << this->getTitle();
}