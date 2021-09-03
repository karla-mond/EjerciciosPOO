//Tarea 3 Karla Mondragón, Main
#include<string>
#include<iostream>
#include"Tarea3Client.h"
#include"Tarea3Admin.h"
#include"Tarea3Seats.h"
using namespace std;

int main()
{
    Seats V12("V", 12, 180, 0, 0);
    Seats V11("V", 11, 180, &V12, 0);
    Seats V10("V", 10, 180, &V11, 0);
    Seats V9("V", 9, 180, &V10, 0);
    Seats R8("R", 8, 90, &V9, 0);
    Seats R7("R", 7, 90, &R8, 0);
    Seats R6("R", 6, 90, &R7, 0);
    Seats R5("R", 5, 90, &R6, 0);
    Seats S4("S", 4, 40, &R5, 0);
    Seats S3("S", 3, 40, &S4, 0);
    Seats S2("S", 2, 40, &S3, 0);
    Seats S1("S", 1, 40, &S2, 0); 

    Date entRose(3, 3, "marzo", 2021);
    Date entMary(29, 8, "agosto", 2019);
    Admin rose("Rose", 551674, 1, 5000, entRose, &S1);
    Admin mary("Mary", 554362, 2, 6000, entMary, &S1);

    Client peter("Peter", 552309, 1);
    Client mark("Mark", 558645, 2);
    Client robert("Robert", 554189, 3);
    Client danny("Danny", 553462, 4);

    rose.BookByNum(5, peter);
    rose.BookByType("V", &mark);
    mary.BookByType("S", &robert);
    mary.BookByNum(7, danny);

    rose.showBusy();
}