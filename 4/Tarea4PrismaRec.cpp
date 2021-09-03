//Tarea 4, Prisma Rectangular Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4PrismaRec.h"
using namespace std;

RecPrism::RecPrism(string figure, float height, float large, float wide): 
                    Fig3D(figure), height(height), large(large), wide(wide) {}

float RecPrism::getHeight()
{
    return height;
}

float RecPrism::getLarge()
{
    return large;
}

float RecPrism::getWide()
{
    return wide;
}

float RecPrism::Volume()
{
    float volume = height*large*wide;
    return volume;
}

float RecPrism::SurfArea()
{
    float area = 2*(height * large) + 2*(wide * large) + 2*(wide * height);
    return area;
}