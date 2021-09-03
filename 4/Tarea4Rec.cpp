//Tarea 4, Rectángulo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Rec.h"
using namespace std;

Rect::Rect(){}
Rect::Rect(string figure, float large, float wide): 
            Fig2D(figure), large(large), wide(wide){}

float Rect::getLarge()
{
    return large;
}

float Rect::getWide()
{
    return wide;
}

float Rect::Area()
{
    float area = large*wide;
    return area;
}

float Rect::Per()
{
    float per = (2*large) + (2*wide);
    return per;
}