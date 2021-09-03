//Tarea 3 Karla Mondragón, Header Asientos
#include<string>
#include<iostream>
#include"Tarea3Client.h"
#pragma once
using namespace std;

class Admin;
class Seats
{
    protected:
        int position;
        string type;
        Seats* nextSeat;
        Admin* reservedBy;
    public:
        bool isBusy;
        float cost;
        Client whoBooked;
        Seats();
        Seats(string type, int position, float cost, Seats* nextSeat, Admin* reservedBy);

        string getType();
        bool getIsBusy();
        int getPosition();
        float getCost();
        Client getWhoBooked();
        Seats* getNextSeat();
        Admin* getReservedBy();
};