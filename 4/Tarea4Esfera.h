//Tarea 4, Esfera Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig3D.h"
#pragma once
using namespace std;

class Sphere : public Fig3D
{
    protected:
        float radio;
    public:
        Sphere();
        Sphere(string figure, float radio);

        float getRadio();
        float Volume();
        float SurfArea();
};