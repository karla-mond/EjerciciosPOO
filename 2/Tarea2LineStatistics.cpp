//Tarea 2, CPP LineStatistics
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea2LineStatistics.h"
using namespace std;

LineStatistics::LineStatistics() {}

LineStatistics::LineStatistics(ElementLine whosLast): whosLast(whosLast) {}

ElementLine LineStatistics::getWhosLast()
{
    return whosLast;
}

int LineStatistics::getMinArrival() 
{
    int total_1 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
    int total_2 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();
    
    int res21 = total_2 - total_1;
    
    int min = res21;

    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {   
        aux1 = aux1->getNextElement();

        int total_3 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();

        int res32 = total_3 - total_2;

        if (res21 < min)
        {
            min = res21;
        }
        else if (res32 < min) 
        {
            min = res32;
        }
        else 
        {
            continue;
        }  
        total_2 = total_3;
        res21 = res32;
    }
    return min;
}

int LineStatistics::getMaxArrival() 
{
    int total_1 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
    int total_2 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();
    
    int res21 = total_2 - total_1;
    
    int max = 0;

    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {   
        aux1 = aux1->getNextElement();

        int total_3 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();

        int res32 = total_3 - total_2;

        if (res21 > max)
        {
            max = res21;
        }
        else if (res32 > max) 
        {
            max = res32;
        }
        else 
        {
            continue;
        }  
        total_2 = total_3;
        res21 = res32;
    }
    return max;
}

int LineStatistics::getPromArrival() 
{   
    int sum=0, count=0;
    
    int total_1 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
    int total_2 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();
    
    int res21 = total_2 - total_1;

    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {
        aux1 = aux1->getNextElement();

        int total_3 = (whosLast.getNextElement()->getArrival().getHour() * 60) + whosLast.getNextElement()->getArrival().getMinutes();
        int res32 = total_3 - total_2;

        int total = res21 + res32;

        sum = sum + total;

        count++;

        total_2 = total_3;
        res21 = res32;
    }
    float prom = sum/count;
    return prom;
}

int LineStatistics::getMinAt() 
{
    int houra_1 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
    int houre_1 = (whosLast.getExit().getHour() * 60) + whosLast.getExit().getMinutes();

    int total_1 = houre_1 - houra_1;
    
    int min = total_1;

    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {   
        aux1 = aux1->getNextElement();

        int houra_2 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
        int houre_2 = (whosLast.getExit().getHour() * 60) + whosLast.getExit().getMinutes();

        int total_2 = houre_2 - houra_2;

        if (total_1 < min)
        {
            min = total_1;
        }
        else if (total_2 < min) 
        {
            min = total_2;
        }
        else 
        {
            continue;
        }  
        total_1 = total_2;
    }
    return min;
}

int LineStatistics::getMaxAt() 
{
    int houra_1 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
    int houre_1 = (whosLast.getExit().getHour() * 60) + whosLast.getExit().getMinutes();

    int total_1 = houre_1 - houra_1;
    
    int max = 0;

    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {   
        aux1 = aux1->getNextElement();

        int houra_2 = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
        int houre_2 = (whosLast.getExit().getHour() * 60) + whosLast.getExit().getMinutes();

        int total_2 = houre_2 - houra_2;

        if (total_1 > max)
        {
            max = total_1;
        }
        else if (total_2 > max) 
        {
            max = total_2;
        }
        else 
        {
            continue;
        }  
        total_1 = total_2;
    }
    return max;
}

int LineStatistics::getPromAt() 
{   
    int sum = 0, count = 0;
    ElementLine* aux2 = whosLast.getNextElement();
    ElementLine* aux1 = &whosLast;
    while(aux2!=0)
    {   
        int houra = (whosLast.getArrival().getHour() * 60) + whosLast.getArrival().getMinutes();
        int houre = (whosLast.getExit().getHour() * 60) + whosLast.getExit().getMinutes();

        int total_1 = houre - houra;

        sum = sum + total_1;
        count ++;

        aux1 = aux1->getNextElement();
    }
    float prom = sum/count;
    return prom;
}

void LineStatistics::getWhosBefore(string name)
{
    ElementLine* aux = whosLast.getNextElement();  
    while(aux!=0)
    {
        if (name == aux->getName())
        {
            cout << "Última persona en la fila";
            break;
        }
        else if(name == aux->getNextElement()->getName())
        {
            cout << "El anterior a " << name << " es: " << aux->getName();
            break; 
        }
        aux = aux->getNextElement();
    }
}

void LineStatistics::getWhosAfter(string name)
{
    ElementLine* aux = &whosLast;  
    while(aux!=0)
    {
        if (name == aux->getName())
        {
            cout << "Persona adelante: "<< aux->getNextElement()->getName() << endl;
            break;
        }
        aux = aux->getNextElement();
    }
}