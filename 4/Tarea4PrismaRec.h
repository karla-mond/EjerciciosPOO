//Tarea 4, Prisma Rectangular Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig3D.h"
#pragma once
using namespace std;

class RecPrism : public Fig3D
{
    protected:
        float height;
        float large;
        float wide;
    public:
        RecPrism();
        RecPrism(string figure, float height, float large, float wide);

        float getHeight();
        float getLarge();
        float getWide();
        float Volume();
        float SurfArea();
};