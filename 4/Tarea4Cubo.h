//Tarea 4, Cubo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig3D.h"
#pragma once
using namespace std;

class Cube : public Fig3D
{
    protected:
        float height;
    public:
        Cube();
        Cube(string figure, float height);

        float getHeight();
        float getLarge();
        float getWide();
        float Volume();
        float SurfArea();
};