//Situación problema, Main
//Karla Mondragón, A01025108

#include<iostream>
#include<string>
#include"NetflixManager.h"
using namespace std;

int main()
{
    Manager lista;

    Time duracion(1, 56);
    Date fecha(3, "mayo", 1998);
    Movies peli1("Película", "Anastasia", 1, "Animada", duracion, 5, fecha);
    Movies peli2("Película", "La Momia", 4, "Acción", duracion, 5, fecha);
    Shows serie1("Serie", "Modern Family", 2, "Comedia", Time(0, 24), 11, 5, Date(4, "junio", 2010));
    Shows serie2("Serie", "Brooklyn-99", 3, "Comedia", Time(0, 24), 11, 5, Date(7, "octubre", 2014));
    Episode ep1("Episodio", "Modern Family", "Piloto", 21, "Comedia", Time(0, 24), 1, 5, Date(4, "junio", 2010));
    Episode ep2("Episodio", "Brooklyn-99", "Piloto", 31, "Comedia", Time(0, 24), 1, 5, Date(7, "octubre", 2014));

    lista.AddMedia(&peli1);
    lista.AddMedia(&peli2);
    lista.AddMedia(&serie1);
    lista.AddMedia(&serie2);
    lista.AddEp(&ep1, ep1.getShowName());
    lista.AddEp(&ep2, ep2.getShowName());

    lista.ShowTitleANDRating();
    lista.ShowMoviesANDRating();
    lista.ShowChaptersANDRating("Modern Family");
    lista.ShowChaptersANDRating("Brooklyn-99");
}