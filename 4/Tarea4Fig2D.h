//Tarea 4, Fig 2D Header
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea4Fig.h"
#pragma once
using namespace std;

class Fig2D : public Fig
{
    public:
        Fig2D();
        Fig2D(string figure);
        virtual float Area();
        virtual float Per();
};