//Tarea 4, Cono Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include<cmath>
#include"Tarea4Cone.h"
using namespace std;

Cone::Cone(){}
Cone::Cone(string figure, float radio, float s, float height): 
            Fig3D(figure), radio(radio), s(s), height(height) {}

float Cone::getRadio()
{
    return radio;
}

float Cone::getS()
{
    return s;
}

float Cone::getHeight()
{
    return height;
}

float Cone::SurfArea()
{
    float area = s*radio*M_PI + M_PI*(pow(radio, 2));
    return area;
}

float Cone::Volume()
{
    float volume = M_PI*(pow(radio, 2))*height*1/3;
    return volume;
}