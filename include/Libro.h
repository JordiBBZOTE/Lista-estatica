#ifndef LIBRO_H
#define LIBRO_H
#include<iostream>

using namespace std;

class Libro
{
    private:
    int Rank;
    double ISBN;
    double precio;
    double ejemplares;
    string titulo;
    string autor;
    string editorial;
    string categoria;
    string subcategoria;

    public:
    Libro();
    void setISBN(double isbn);
    void setPrecio(double precio);
    void setEjemplares(double ejemplares);
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setEditorial(string editorial);
    void setCategoria(string categoria);
    void setSubcategoria(string subcategoria);
    void setRank(int Rank);
    string getTitulo();
    string getAutor();
    string getEditorial();
    string getCategoria();
    string getSubCategoria();
    double getEjemplares();
    double getPrecio();
    double getISBN();

    int sumarank();
    double restaejemplar();

    int getRank();
};

#endif // LIBRO_H
