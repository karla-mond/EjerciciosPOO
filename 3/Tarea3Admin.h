//Tarea 3 Karla Mondragón, Header Administrador
#include<string>
#include<iostream>
#include"Tarea3User.h"
#include"Tarea3Client.h"
#include"Tarea3Date.h"
#include"Tarea3Seats.h"
#pragma once
using namespace std;

class Seats;
class Admin : public User
{
    protected:
        int id_employee;
        int msalary;
        Date enter;
        Seats* firstSeat;
    public:
        Admin();
        Admin(string name, int number, int id_employee, int msalary, Date enter, Seats* firstSeat);

        int getIDEmployee();
        int getMSalary();
        Date getDate();
        Seats* getFirstSeat();

        void BookByNum(int position, Client client);
        void BookByType(string type, Client* client);
        void NameWhoBooked(Seats seat);
        void WhatCost(Seats seat);
        void Cancel(Seats* seat);
        void showBusy();
        void modifyCost(string type, int newCost);
        void NameByReserved(Seats seat);
};      