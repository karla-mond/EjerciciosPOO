//Tarea 4, Rectángulo Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Trapecio.h"
using namespace std;

Trapecio::Trapecio(){}
Trapecio::Trapecio(string figure, float large, float wide, float height, float otherWide, float otherLarge): 
                Fig2D(figure), large(large), wide(wide), height(height), otherWide(otherWide), otherLarge(otherLarge){}

float Trapecio::getLarge()
{
    return large;
}

float Trapecio::getWide()
{
    return wide;
}

float Trapecio::getOtherWide()
{
    return otherWide;
}

float Trapecio::getOtherLarge()
{
    return otherLarge;
}

float Trapecio::getHeight()
{
    return height;
}

float Trapecio::Area()
{
    float area = height*((wide+otherWide)/2);
    return area;
}

float Trapecio::Per()
{
    float per = wide + otherWide + large + otherLarge;
    return per;
}
