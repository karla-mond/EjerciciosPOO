//Tarea 4, Triángulo Header
//Karla Mondragón, A01025108
#include<string>
#include<iostream>
#include"Tarea4Fig2D.h"
#pragma once 
using namespace std;

class Triang : public Fig2D
{
    protected:
        string type;
        float height;
        float wide;
        float l1;
        float l2;
    public:
        Triang();
        Triang(string figure, string type, float height, float wide, float l1, float l2);

        string getType();
        float getHeight();
        float getWide();
        float getL1();
        float getL2();

        float Area();
        float Per();
};