//Tarea 4, Main cpp
//Karla Mondragón, A01025108

#include<string>
#include<iostream>

#include"Tarea4Para.h"
#include"Tarea4Rec.h"
#include"Tarea4Trapecio.h"
#include"Tarea4Triangulo.h"
#include"Tarea4Cuadrado.h"
#include"Tarea4Circ.h"

#include"Tarea4PrismaRec.h"
#include"Tarea4Cone.h"
#include"Tarea4Cubo.h"
#include"Tarea4Esfera.h"
#include"Tarea4Tetra.h"

using namespace std;

int main()
{
    //2D
    Circ circulo("círculo", 3.5);
    cout << "El área del círculo es: " << circulo.Area() << endl;
    cout << "El perímetro del círculo es: " << circulo.Per() << endl;
    cout << endl; 

    Cuadrado cuad("cuadrado", 5);
    cout << "El área del cuadrado es: " << cuad.Area() << endl;
    cout << "El perímetro del cuadrado es: " << cuad.Per() << endl;
    cout << endl;

    Para paralelogramo("paralelogramo", 4.3, 9);
    cout << "El área del paralelogramo es: " << paralelogramo.Area() << endl;
    cout << "El perímetro del paralelogramo es: " << paralelogramo.Per() << endl;
    cout << endl;

    Rect recta("rectángulo", 10, 14.5);
    cout << "El área del rectángulo es: " << recta.Area() << endl;
    cout << "El perímetro del rectángulo es: " << recta.Per() << endl;
    cout << endl; 

    Trapecio trap("trapecio", 7.5, 4.3, 5, 6.7, 7.5);
    cout << "El área del trapecio es: " << trap.Area() << endl;
    cout << "El perímetro del trapecio es: " << trap.Per() << endl;
    cout << endl;

    Triang tri("triángulo", "recto", 9.8, 13, 9.8, 17);
    cout << "El área del triángulo " << tri.getType() << " es: " << tri.Area() << endl;
    cout << "El perímetro del triángulo es: " << tri.Per() << endl;
    cout << endl;

    //3D
    Sphere esfera("esféra", 2.5);
    cout << "El área superficial de la esféra es: " << esfera.SurfArea() << endl;
    cout << "El volumen de la esféra es: " << esfera.Volume() << endl;
    cout << endl;

    Cone cono("cono", 3.0, 4.5, 7);
    cout << "El área superficial del cono es: " << cono.SurfArea() << endl;
    cout << "El volumen del cono es: " << cono.Volume() << endl;
    cout << endl; 

    Cube cubo("cubo", 7);
    cout << "El área superficial del cubo es: " << cubo.SurfArea() << endl;
    cout << "El volumen del cubo es: " << cubo.Volume() << endl;
    cout << endl;

    RecPrism prismaRec("prisma rectangular", 4.3, 5, 6.7);
    cout << "El área superficial del prisma rectangular es: " << prismaRec.SurfArea() << endl;
    cout << "El volumen del prisma rectangular es: " << prismaRec.Volume() << endl;
    cout << endl; 

    Tetra tet("tetradro", 12.3);
    cout << "El área superficial del tetraedro es: " << tet.SurfArea() << endl;
    cout << "El volumen del tetraedro es: " << tet.Volume() << endl;
    cout << endl;
}