//Situación problema, Movies Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPMedia.h"
#pragma once
using namespace std;

class Movies : public Media
{
    public:
        Movies();
        Movies(string type, string title, int Id, string genre, Time howLong, int rating, Date releaseDate);
        void playThis();
};