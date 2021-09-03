//Tarea 5, Linked List Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea5LinkedList.h"
using namespace std;

LinkedList::LinkedList(){}
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

void LinkedList::ShowText()
{
    Element* aux = firstElement;
    cout << "Texto identificador: " << endl;
    while(aux!=0)
    {
        cout << aux->getType() << endl;
        aux = aux->getNext();
    }
}

void LinkedList::AddElement(Element* element)
{
    Element* aux1 = firstElement;
    if (aux1==0)
    {
        firstElement = element;
        element->setNext(0);
        cout << "Se ha añadido el elemento a la lista" << endl;
    }
    else 
    {
        while(aux1->getNext()!=0)
        {
            aux1 = aux1->getNext();
        }
        aux1->setNext(element);
        cout << "Se ha añadido el elemento a la lista" << endl;
        element->setNext(0);
    }
}

void LinkedList::AddElementP(int position, Element* element)
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
    cout << "Se ha añadido el elemento a la lista en la posición " << position << endl;
    element->setNext(aux2);
}

Element LinkedList::GetByIndex(int index)
{
    Element* aux1 = firstElement;
    int count = 2;
    if(aux1==0)
    {
        cout << "La lista esta vacía";
    }

    if(index == 1 && aux1!=0)
    {
        return *firstElement;
    }
    else
    {
        while(aux1!=0)
        {
            count ++;
            if (count == index)
            {
                return *aux1;
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

