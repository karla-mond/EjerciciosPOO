//Tarea 4, Cono Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig3D.h"
#pragma once
using namespace std;

class Cone : public Fig3D
{
    protected:
        float radio;
        float s; //slant height
        float height;
    public: 
        Cone();
        Cone(string figure, float radio, float s, float height);
        float getHeight();
        float getRadio();
        float getS();
        float Volume();
        float SurfArea();
};