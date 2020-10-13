#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont=0;
}
void Laboratorio::agregarCo(const Computadora &c)
{
    if(cont<5)
    {
        arreglo[cont]=c;
        cont++;
    }
    else
    {
        cout<<"arreglo lleno"<<endl;

    }
}
void Laboratorio::mostrar()
{
    for(size_t i=0;i<cont;i++)
    {
  Computadora &c = arreglo[i];

    cout<<"Sistema: "<<c.getSistema()<<endl;
    cout<<"Nombre: "<<c.getNombre()<<endl;
    cout<<"Memoria: "<<c.getMemoria()<<endl;
    cout<<"Almacenamiento: "<<c.getAlmacenamiento()<<endl;
    cout<<endl;
    }
}
