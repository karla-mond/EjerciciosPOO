//Tarea 3 Karla Mondragón, Cpp Cliente
#include<string>
#include<iostream>
#include"Tarea3Client.h"
using namespace std;

Client::Client(){}
Client::Client(string name, int number, int id_client) : User(name, number), id_client(id_client){}

int Client::getIdClient() 
{
    return id_client;
}