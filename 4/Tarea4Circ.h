//Tarea 4, Círculo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once
using namespace std;

class Circ : public Fig2D
{
    protected:
        float radio;
    public:
        Circ();
        Circ(string figure, float radio);

        float getRadio();
        float Area();
        float Per();
};