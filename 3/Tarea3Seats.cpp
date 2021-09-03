//Tarea 3 Karla Mondragón, Header Asientos
#include<string>
#include<iostream>
#include"Tarea3Seats.h"
#include"Tarea3Client.h"
#include"Tarea3Admin.h"
using namespace std;

Seats::Seats(){}
Seats::Seats(string type, int position, float cost, Seats* nextSeat, Admin* reservedBy) : 
        type(type), position(position), isBusy(false), cost(cost), whoBooked(Client()), nextSeat(nextSeat), reservedBy(reservedBy){}

bool Seats::getIsBusy()
{
    return isBusy;
}

string Seats::getType()
{
    return type;
}

int Seats::getPosition()
{
    return position;
}

float Seats::getCost()
{
    return cost;
}

Client Seats::getWhoBooked() 
{
    return whoBooked;
}

Seats* Seats::getNextSeat()
{
    return nextSeat;
}

Admin* Seats::getReservedBy()
{
    return reservedBy;
}
