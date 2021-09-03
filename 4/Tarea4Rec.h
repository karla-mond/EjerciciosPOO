//Tarea 4, Rectángulo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once
using namespace std;

class Rect : public Fig2D
{
    protected:
        float large;
        float wide;
    public:
        Rect();
        Rect(string figure, float large, float wide);

        float getLarge();
        float getWide();
        float Area();
        float Per();
};