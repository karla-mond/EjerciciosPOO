//Tarea 4, Trapecio Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once
using namespace std;

class Trapecio : public Fig2D
{
    protected:
        float large;
        float wide;
        float height;
        float otherWide;
        float otherLarge;
    public:
        Trapecio();
        Trapecio(string figure, float large, float wide, float height, float otherWide, float otherLarge);

        float getLarge();
        float getWide();
        float getOtherWide();
        float getOtherLarge();
        float getHeight();
        float Area();
        float Per();
};