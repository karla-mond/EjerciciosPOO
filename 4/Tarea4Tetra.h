//Tarea 4, Tetraedro Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig3D.h"
#pragma once
using namespace std;

class Tetra : public Fig3D
{
    protected:
        float large;
    public:
        Tetra();
        Tetra(string figure, float large);

        float getLarge();
        float SurfArea();
        float Volume();
};