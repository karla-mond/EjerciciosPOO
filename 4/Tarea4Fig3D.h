//Tarea 4, Fig 3D Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig.h"
#pragma once
using namespace std;

class Fig3D : public Fig
{
    public:
        Fig3D();
        Fig3D(string figure);
        virtual float Volume();
        virtual float SurfArea();
};