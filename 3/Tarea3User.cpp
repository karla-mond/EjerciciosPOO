//Tarea 3 Karla Mondragón, CPP Usuario
#include<string>
#include<iostream>
#include"Tarea3User.h"
using namespace std;

User::User(){}
User::User(string name, int number): name(name), number(number) {}

string User::getName() 
{
    return name;
}

int User::getNumber()
{
    return number;
}