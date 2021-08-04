#include "Libro.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

Libro::Libro()
{
Rank = 0;
}


int Libro::sumarank(){
    this-> Rank = Rank + 1;
}

double Libro::restaejemplar(){
    this-> ejemplares = ejemplares -1;
}

//SETTERS
void Libro::setISBN(double isbn){
this-> ISBN = isbn;
}

void Libro::setPrecio(double precio){
this -> precio = precio;
}

void Libro::setEjemplares(double ejemplares){
this -> ejemplares = ejemplares;
}

void Libro::setTitulo(string titulo){
this -> titulo = titulo;
}

void Libro::setAutor(string autor){
this -> autor = autor;
}

void Libro::setEditorial(string editorial){
this -> editorial = editorial;
}

void Libro::setCategoria(string categoria){
this -> categoria = categoria;
}

void Libro::setSubcategoria(string subcategoria){
this -> subcategoria = subcategoria;
}

void Libro::setRank(int Rank){
this -> Rank = Rank;
}

//GETTERS

string Libro::getTitulo(){
return titulo;
 }

string Libro::getAutor(){
return autor;
}

string Libro::getEditorial(){
return editorial;
}

string Libro::getCategoria(){
return categoria;
}

string Libro::getSubCategoria(){
return subcategoria;
}

double Libro::getEjemplares(){
return ejemplares;
}

double Libro::getPrecio(){
return precio;
}

double Libro::getISBN(){
return ISBN;
}

int Libro::getRank(){
return Rank;
}
