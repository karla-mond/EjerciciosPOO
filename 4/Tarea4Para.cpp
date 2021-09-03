//Tarea 4, Paralelogramo Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Para.h"
using namespace std;

Para::Para(){}
Para::Para(string figure, float large, float height): 
            Fig2D(figure), large(large), height(height){}

float Para::getLarge()
{
    return large;
}

float Para::getHeight()
{
    return height;
}

float Para::Area()
{
    float area = large*height;
    return area;
}

float Para::Per()
{
    float per = (2*large) + (2*height);
    return per;
}