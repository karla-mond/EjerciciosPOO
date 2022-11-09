//Situación problema, Netflix Manager Cpp
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"NetflixManager.h"
using namespace std;

Manager::Manager():listMedia(new LinkedList) {}

void Manager::AddMedia(Element* element)
{
    listMedia->AddMedia(element);
}

void Manager::AddEp(Element* element, string name)
{
    Shows* otro = static_cast<Shows*>(listMedia->GetByName(name)); 
    otro->addEp(element);
}

void Manager::AddEpP(int position, Element* element, string name) //chance incluir el name en las otras clases
{
    Shows* otro = static_cast<Shows*>(listMedia->GetByName(name)); 
    otro->addEpP(position, element);
}

Element* Manager::GetByIndex(int index)
{
    listMedia->GetByIndex(index);
}

Element* Manager::GetByName(string name)
{
    listMedia->GetByName(name);
}

void Manager::RemoveByIndex(int index)
{
    listMedia->RemoveByIndex(index);
}

void Manager::ShowTitleANDRating()
{
    listMedia->ShowTitleANDRating();
}

void Manager::ShowMoviesANDRating()
{
    listMedia->ShowMoviesANDRating();
}

void Manager::ShowChaptersANDRating(string name)
{
    Element* otro = listMedia->GetByName(name);
    if (static_cast<Shows*>(otro)->getTitle()==name)
    {
        listMedia->ShowChaptersANDRating(otro);
    }
}

int Manager::Size()
{
    int tam = listMedia->Size();
}

Manager::~Manager()
{
    delete listMedia;
}



