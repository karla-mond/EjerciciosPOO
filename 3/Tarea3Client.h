//Tarea 3 Karla Mondragón, Header Cliente
#include<string>
#include<iostream>
#include"Tarea3User.h"
#pragma once
using namespace std;

class Client : public User
{
    protected:
        int id_client;
    public:
        Client();
        Client(string name, int number, int id_client);
        int getIdClient();
};