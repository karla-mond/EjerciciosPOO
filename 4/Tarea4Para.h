//Tarea 4, Paralelogramo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once 
using namespace std;

class Para : public Fig2D
{
    protected:
        float large;
        float height;
    public:
        Para();
        Para(string figure, float large, float height);

        float getLarge();
        float getHeight();
        float Area();
        float Per();
};