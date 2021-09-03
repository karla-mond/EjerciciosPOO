//Tarea 4, Paralelogramo Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Triangulo.h"
using namespace std;

Triang::Triang(){}
Triang::Triang(string figure, string type, float height, float wide, float l1, float l2):
                Fig2D(figure), type(type), height(height), wide(wide), l1(l1), l2(l2) {}

string Triang::getType()
{
    return type;
}

float Triang::getHeight()
{
    return height;
}

float Triang::getWide()
{
    return wide;
}

float Triang::getL1()
{
    return l1;
}

float Triang::getL2()
{
    return l2;
}

float Triang::Area()
{
    float area = (wide*height)/2;
    return area;
}

float Triang::Per()
{
    float per = wide + l1 + l2;
    return per;
}