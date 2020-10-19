#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
using namespace std;

class Computadora
{
    string sistema;
    string nombre;
    int memoria;
    float almacenamiento;

   public:
        Computadora();
        Computadora(const string &sistema,const string &nombre,int memoria,float almacenamiento);
        void setSistema(const string &v);
        string getSistema();
        void setNombre(const string &v);
        string getNombre(); 
        void setMemoria(int v);
        int getMemoria(); 
        void setAlmacenamiento(float v);
        float getAlmacenamiento();  
};
#endif