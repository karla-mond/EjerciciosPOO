//Tarea 4, Círculo Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include<cmath>
#include"Tarea4Circ.h"
using namespace std;

Circ::Circ(){}
Circ::Circ(string figure, float radio): Fig2D(figure), radio(radio){}

float Circ::getRadio()
{
    return radio;
}

float Circ::Area()
{
    float area = M_PI*pow(radio, 2);
    return area;
}

float Circ::Per()
{
    float per = M_PI*radio*2;
    return per;
}