//Situación Problema, Linked List Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"LinkedList.h"
#include"SitPMedia.h"
#include"SitPMovies.h"
#include"SitPShows.h"
using namespace std;

LinkedList::LinkedList(): firstElement(0) {} 
LinkedList::LinkedList(Element* firstElement): firstElement(firstElement) {}

Element* LinkedList::getFirstElement()
{
    return firstElement;
}

int LinkedList::Size()
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

void LinkedList::ShowTitleANDRating()
{
    Element* aux = firstElement;
    cout << "Tipo de multimedia - Título - Rating:" << endl;
    while(aux!=0)
    {
        cout << aux->getType() << " - " << static_cast<Media*>(aux)->getTitle() << " - " << static_cast<Media*>(aux)->getRating() << endl; 
        aux = aux->getNext();
    }
}

void LinkedList::ShowMoviesANDRating()
{
    Element* aux = firstElement;
    cout << "Películas-Rating: " << endl;
    while(aux!=0)
    {
        if (aux->getType()=="Película")
        {
            cout << static_cast<Movies*>(aux)->getTitle() << " - " << static_cast<Movies*>(aux)->getRating() << endl; 
        }
        aux = aux->getNext();
    }
}

void LinkedList::ShowChaptersANDRating(Element* element)
{   
    cout << "Episodios-Rating: " << endl;
    int count = static_cast<Shows*>(element)->getEpisodeList()->Size();
    if(count==0)
    {
        cout << "Esta serie no tiene capítulos" << endl;
    }
    else
    {
        Shows* show = static_cast<Shows*>(element);
        for(int i=1; i<=count; i++)
        {
            Episode* episode = static_cast<Episode*>(show->getEpisodeList()->GetByIndex(i));
            if(episode!=0)
            {
                cout << episode->getShowName() << " - " << episode->getTitle() << " - " << episode->getRating() << endl;
            }
        }
    }
}

void LinkedList::AddMedia(Element* element)
{
    Element* aux1 = firstElement;
    if (aux1==0)
    {
        firstElement = element;
        element->setNext(0);
        cout << "Se ha añadido el video a la lista" << endl;
    }
    else 
    {
        while(aux1->getNext()!=0)
        {
            aux1 = aux1->getNext();
        }
        aux1->setNext(element);
        cout << "Se ha añadido video a la lista" << endl;
        element->setNext(0);
    }
}

void LinkedList::AddEp(Element* element, string name)
{
    Element* aux1 = firstElement;
    if (aux1==0)
    {
        firstElement = element;
        element->setNext(0);
        cout << "Se ha añadido el episodio a la lista" << endl;
    }
    else 
    {
        while(aux1->getNext()!=0)
        {
            aux1 = aux1->getNext();
        }
        aux1->setNext(element);
        cout << "Se ha añadido el episodio a la lista" << endl;
        element->setNext(0);
    }
}

void LinkedList::AddEpP(int position, Element* element)
{
    int count=(position-1);
    Element* aux1 = firstElement;
    Element* aux2 = firstElement->getNext();
    if (position == 1)
    {
        element->setNext(firstElement);
        firstElement = element;
    }
    while(count!=position)
    {
        count ++;
        aux1 = aux1->getNext();
        aux2 = aux2->getNext();
    }
    aux1->setNext(element);
    cout << "Se ha añadido el capítulo a la lista en la posición " << position << endl;
    element->setNext(aux2);
}

Element* LinkedList::GetByIndex(int index)
{
    Element* aux1 = firstElement;
    int count = 2;
    if(aux1==0)
    {
        cout << "La lista esta vacía";
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

Element* LinkedList::GetByName(string name)
{
    Element* aux1 = firstElement;
    int count = 2;
    if(aux1==0)
    {
        cout << "La lista esta vacía";
    }

    if(name == static_cast<Media*>(aux1)->getTitle() && aux1!=0)
    {
        return firstElement;
    }
    else
    {
        while(aux1!=0)
        {
            if (name == static_cast<Media*>(aux1)->getTitle())
            {
                return aux1;
            }
            else
                aux1 = aux1->getNext();
        }
    }
}

void LinkedList::RemoveByIndex(int index)
{
    if(firstElement==0)
    {
        cout << "La lista esta vacía";
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
        cout << "Se ha eliminado el elemento en el índice " << index << endl;
    }
}

