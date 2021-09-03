//Tarea 2, CPP Main
// Karla Mondragón, A01025108

#include<string>
#include<iostream>
#include"Tarea2Time.h"
#include"Tarea2ElementLine.h"
#include"Tarea2LineStatistics.h"
using namespace std;

int main()
{
    Time ArrivalLuisa(11, 0);
    Time ExitLuisa(11, 25);
    Time ArrivalPedro(11, 25);
    Time ExitPedro(12, 16);
    Time ArrivalJuana(12, 15);
    Time ExitJuana(13, 22);
    Time ArrivalRoberto(12, 17);
    Time ExitRoberto(13, 20);
    Time ArrivalRubi(12, 54);
    Time ExitRubi(14,0);
    Time ArrivalEmilio(13, 24);
    Time ExitEmilio(13, 57);
    Time ArrivalLuz(13, 48);
    Time ExitLuz(14, 22);
    Time ArrivalRicardo(13, 59);
    Time ExitRicardo(14, 19);
    Time ArrivalKarla(14, 5);
    Time ExitKarla(14, 52);
    Time ArrivalCecilia(14, 27);
    Time ExitCecilia(15, 1);

    ElementLine luisa("Luisa", ArrivalLuisa, ExitLuisa, 0);
    ElementLine pedro("Pedro", ArrivalPedro, ExitPedro, &luisa);
    ElementLine juana("Juana", ArrivalJuana, ExitJuana, &pedro);
    ElementLine roberto("Roberto", ArrivalRoberto, ExitRoberto, &juana);
    ElementLine rubi("Rubí", ArrivalRubi, ExitRubi, &roberto);
    ElementLine emilio("Emilio", ArrivalEmilio, ExitEmilio, &rubi);
    ElementLine luz("Luz", ArrivalLuz, ExitLuz, &emilio);
    ElementLine ricardo("Ricardo", ArrivalRicardo, ExitRicardo, &luz);
    ElementLine karla("Karla", ArrivalKarla, ExitKarla, &ricardo);
    ElementLine cecilia("Cecilia", ArrivalCecilia, ExitCecilia, &karla);

    LineStatistics ceci(cecilia);
    ceci.getWhosAfter("Rubí");
    ceci.getWhosBefore("Rubí");
}