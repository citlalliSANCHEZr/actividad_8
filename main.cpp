#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c01 = Computadora("windos","Citlalli",4,60.1);
    Computadora c02;

    c02.setSistema("ios");
    c02.setNombre("Adela");
    c02.setMemoria(4);
    c02.setAlmacenamiento(59.3);
    
    Laboratorio L;
    L.agregarCo(c01);
    L.agregarCo(c02);

    L.mostrar();

    return 0;
}