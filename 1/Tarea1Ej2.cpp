//Tarea 1, ejercicio 2
//Karla Mondrgón, AO1O25108

#include<string>
#include<iostream>
#include<ctime>
using namespace std;

Person::Person(string Name, Date BDate, Person* Dad, Person* Mom)
{
    name = Name;
    BirthDate = BDate;
    dad = Dad;
    mom = Mom;
}

string Person::getName()
{
    return name;
}

Date Person::getBirthDate()
{
    return BirthDate;
}

int Person::getAge()
{
    int age;
    int y = BirthDate.year;
    time_t tSac = time(NULL);
    tm tms = *localtime(&tSac);
    age = (tms.tm_year + 1900)-y;
    return age; 
}

Person* Person::getDad()
{
    return dad;
}

Person* Person::getMom()
{
    return mom;
}

void Person::getAncesters()
{
    int count = 0;
    Person* antc = getMom();
    while(mom!=0)
    {
        count ++;
        antc = antc->getMom();
    }
    cout << "El número de antecesores es: " << count;
}

void Person::getNameAnc()
{
    Person* antc = getMom();
    while(mom!=0)
    {
        cout << "Nombre del antecesor: " << mom->name() << "\n";
        antc = antc->getMom();
    }
}

void Person::getOldest()
{
    Person* antc = getMom();   
    string OldestName = mom->name();
    int OldestAge = mom->getAge();

    while(mom=!0)
    {
        antc = antc->getMom();
        if(OldestAge < mom->getAge())
        {
            OldestAge = mom->getAge();
            OldestName = mom->name;
        }
        if (mom==NULL)
        {
            break;
        }
    }

    cout << "El antecesor más viejx es: " << OldestName << "\n Tiene " << OldestAge << " años";
}

void Person::getYoungest()
{
    Person* antc = getMom();   
    string YoungestName = mom->name;
    int YoungestAge = mom->getAge();

    while(mom=!0)
    {
        antc = antc->getMom();
        if(YoungestAge > mom->getAge())
        {
            YoungestAge = mom->getAge();
            YoungestName = mom->name;
        }
        if (mom==NULL)
        {
            break;
        }
    }

    cout << "El antecesor más joven es: " << YoungestName << "\n Tiene " << YoungestAge << " años";
}

