//Tarea 4, Cuadrado Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once
using namespace std;

class Cuadrado : public Fig2D
{
    protected:
        float large;
    public:
        Cuadrado();
        Cuadrado(string figure, float large);

        float getLarge();
        float Area();
        float Per();
};