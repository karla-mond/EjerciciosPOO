//Situación problema, Shows Header
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"SitPEp.h"
using namespace std;

Episode::Episode(){}
Episode::Episode(string type, string showName, string title, int Id, string genre, Time howLong, int season, int rating, Date releaseDate):
                Media(type, title, Id, genre, howLong, rating, releaseDate), season(season), showName(showName) {}

int Episode::getSeason()
{
    return season;
}

string Episode::getShowName()
{
    return showName;
}

int Episode::Size()
{
    int count = 1;
    Element* aux = firstElement;
    while(aux->getNext())
    {
        count ++;
        aux = aux->getNext();
    }
    return count;
}

Element* Episode::getEpByIndex(int index)
{
    Element* aux1 = firstElement;
    int count = 2;
    if(aux1==0)
    {
        cout << "No existen capítulos";
    }

    if(index == 1 && aux1!=0)
    {
        return firstElement;
    }
    else
    {
        while(aux1!=0)
        {
            count ++;
            if (count == index)
            {
                return aux1;
            }
            else
                aux1 = aux1->getNext();
        }
    }
}

void Episode::AddEp(Element* newEpisode)
{
    Element* aux1 = firstElement;
    if (aux1==0)
    {
        firstElement = newEpisode;
        newEpisode->setNext(0);
        cout << "Se ha añadido el capítulo" << endl;
    }
    else 
    {
        while(aux1->getNext()!=0)
        {
            aux1 = aux1->getNext();
        }
        aux1->setNext(newEpisode);
        cout << "Se ha añadido el capítulo" << endl;
        newEpisode->setNext(0);
    }
}

void Episode::AddEpP(Element* newEpisode, int position)
{
    int count=(position-1);
    Element* aux1 = firstElement;
    Element* aux2 = firstElement->getNext();
    if (position == 1)
    {
        newEpisode->setNext(firstElement);
        firstElement = newEpisode;
    }
    while(count!=position)
    {
        count ++;
        aux1 = aux1->getNext();
        aux2 = aux2->getNext();
    }
    aux1->setNext(newEpisode);
    cout << "Se ha añadido el capítulo a la serie en la posición " << position << endl;
    newEpisode->setNext(aux2);
}

void Episode::removeByIndex(int index)
{
    if(firstElement==0)
    {
        cout << "No existen capítulos";
    }

    if(index==1 && firstElement!=0)
    {
        firstElement = firstElement->getNext();
    }
    else
    {
        Element* aux1 = firstElement;
        Element* aux2 = firstElement->getNext();
        for(int i=2; i<index; i++)
        {
            aux1 = aux1->getNext();
            aux2 = aux2->getNext();
        }
        aux1->setNext(aux2->getNext());
        aux2->setNext(0);
        cout << "Se ha eliminado el capítulo en el índice " << index << endl;
    }
}
