//Tarea 4, Cuadrado CPP
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Cuadrado.h"
using namespace std;

Cuadrado::Cuadrado() {}
Cuadrado::Cuadrado(string figure, float large): Fig2D(figure), large(large) {}

float Cuadrado::getLarge()
{
    return large;
}

float Cuadrado::Area()
{
    float area = large*large;
    return area;
}

float Cuadrado::Per()
{
    float per = 4*large;
    return per;
}