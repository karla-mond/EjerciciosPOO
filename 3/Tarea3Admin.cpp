//Tarea 3 Karla Mondragón, CPP Administrador
#include<string>
#include<iostream>
#include"Tarea3Admin.h"
using namespace std;

Admin::Admin(){}
Admin::Admin(string name, int number, int id_employee, int msalary, Date enter, Seats* firstSeat):
            User(name, number), id_employee(id_employee), msalary(msalary), enter(enter), firstSeat(firstSeat) {}

int Admin::getIDEmployee()
{
    return id_employee;
}

int Admin::getMSalary()
{
    return msalary;
}

Date Admin::getDate()
{
    return enter;
}

Seats* Admin::getFirstSeat()
{
    return firstSeat;
}

void Admin::BookByNum(int position, Client client)
{
    Seats* anSeat = firstSeat;
    while (anSeat->getNextSeat()!= 0)
    {
        if ((anSeat->getPosition() == position) && (anSeat->isBusy == false))
        {
            anSeat->isBusy = true;
            anSeat->whoBooked = client;
            cout << "El asiento " << anSeat->getType() << anSeat->getPosition() << " ha sido reservado" << endl;
            break;
        }
        anSeat = anSeat->getNextSeat();
    }
}

void Admin::BookByType(string type, Client *client)
{
    Seats* anSeat = firstSeat;
    while (anSeat->getNextSeat()!= 0)
    {
        if ((anSeat->getType() == type) && (anSeat->isBusy==false))
        {
            anSeat->isBusy = true;
            anSeat->whoBooked = *client;
            cout << "El asiento " << anSeat->getType() << anSeat->getPosition() << " ha sido reservado" << endl;
            break;
        }
        anSeat = anSeat->getNextSeat();
    }
}

void Admin::NameWhoBooked(Seats seat)
{   
    string nameWhoBooked = seat.getWhoBooked().getName();
    cout << "La persona que reservo el asiento es: " << nameWhoBooked << endl;
}

void Admin::WhatCost(Seats seat)
{
    int cost = seat.getCost();
    cout << "El costo del asiento es: " << cost << endl;
}

void Admin::Cancel(Seats* seat)
{
    bool busy = seat->getIsBusy();
    if (busy == true)
    {
        seat->isBusy = false;
        cout << "Se ha cancelado la reservación del asiento" <<seat->getType() << seat->getPosition() << endl;
    }
    else 
        cout << "El asiento no esta reservado";
}

void Admin::showBusy()
{
    cout << "Los asientos reservados son: " << endl;
    Seats* anSeat = firstSeat;
    while (anSeat->getNextSeat()!=0)
    {
        if (anSeat->isBusy == true)
        {
            cout << anSeat->getType() << anSeat->getPosition() << endl;
        }
        anSeat = anSeat->getNextSeat();
    }
}

void Admin::modifyCost(string type, int newCost) 
{
    Seats* anSeat = firstSeat;
    while(anSeat->getNextSeat()!=0)
    {
        if (anSeat->getType() == type)
        {
            anSeat->cost = newCost;
        }
    }   
}

void Admin::NameByReserved(Seats seat)
{
    string byBooked = seat.getReservedBy()->getName();
    cout << "El administrador que reservo el asiento es: " << byBooked << endl;
}