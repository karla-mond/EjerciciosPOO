//Tarea 5, Cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea5ListInterface.h"
#include"Tarea5LinkedList.h"
using namespace std;

int main()
{
    Element uno("rosa");
    Element dos("verde");
    Element tres("azul");
    Element cuatro("amarillo");
    Element cinco("rojo");

    LinkedList* l = new LinkedList;

    l->AddElement(&uno);
    l->AddElement(&dos);
    l->AddElement(&tres);
    l->AddElement(&cuatro);
    l->AddElement(&cinco);

    cout << "El tamaño de la lista es: " << l->Size() << endl;
    l->ShowText();
    Element cual = l->GetByIndex(1);
    cout << "El elemento en el índice 1 es: " << cual.getType() << endl;

    Element seis("violeta");
    l->AddElementP(3, &seis);
    l->ShowText();

    l->RemoveByIndex(2);
    l->ShowText();

    delete l;
}