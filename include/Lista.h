#ifndef LISTA_H
#define LISTA_H
#include "Libro.h"

using namespace std;

#define N 100

class Lista
{
private:
    Libro arreglo[N];
    int cont;
public:
    Lista();
    void insertar(Libro Lib);
    void busca();
    void modifica();
    void ventas();
    void mostrar();
    bool validar(double numero);
};

#endif // LISTA_H
