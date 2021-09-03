//Tarea 4, Cubo Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include<cmath>
#include"Tarea4Cubo.h"
using namespace std;

Cube::Cube(){}
Cube::Cube(string figure, float height): Fig3D(figure), height(height) {}

float Cube::getHeight()
{
    return height;
}

float Cube::Volume()
{
    float volume = pow(height, 3);
    return volume;
}

float Cube::SurfArea()
{
    float area = 6*(pow(height, 2));
    return area;
}