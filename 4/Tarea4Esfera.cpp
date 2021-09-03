//Tarea 4, Esfera Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include<cmath>
#include"Tarea4Esfera.h"
using namespace std;

Sphere::Sphere() {}
Sphere::Sphere(string figure, float radio): Fig3D(figure), radio(radio) {}

float Sphere::getRadio()
{
    return radio;
}

float Sphere::SurfArea()
{
    float area = 4*M_PI*(pow(radio, 2));
    return area;
}

float Sphere::Volume()
{
    float volume = M_PI*(pow(radio, 3))* 4/3;
    return volume;
}