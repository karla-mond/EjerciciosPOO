//Tarea 2, Header LineStatistics
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea2ElementLine.h"
#pragma once
using namespace std;

class LineStatistics 
{
    private:
        ElementLine whosLast;

    public:
        LineStatistics();

        LineStatistics(ElementLine whosLast);

        int getMinArrival();
        int getMaxArrival();
        int getPromArrival();
        
        int getMinAt();
        int getMaxAt();
        int getPromAt();

        void getWhosAfter(string name);
        void getWhosBefore(string name);

        ElementLine getWhosLast();
};