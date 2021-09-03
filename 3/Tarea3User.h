//Tarea 3 Karla Mondragón, Header Usuario
#include<string>
#include<iostream>
#pragma once
using namespace std;

class User
{
    protected:
        string name;
        int number;
    public:
        User();
        User(string name, int number);
        string getName();
        int getNumber();
};