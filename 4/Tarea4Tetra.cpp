//Tarea 4, Cono Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include<cmath>
#include"Tarea4Tetra.h"
using namespace std;

Tetra::Tetra(){}
Tetra::Tetra(string figure, float large) : Fig3D(figure), large(large){}

float Tetra::getLarge()
{
    return large;
}

float Tetra::SurfArea()
{
    float area = pow(3, 1/2)*pow(large, 2);
    return area;
}

float Tetra::Volume()
{
    float volume = ((pow(2, 1/2))/12)*pow(large, 3);
    return volume;
}