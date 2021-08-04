#include "Lista.h"
#include<iostream>
#include<stdlib.h>
#include"Libro.h"

using namespace std;

Lista::Lista(){
cont = 0;
}

//===============================================================================================================================

void Lista::insertar(Libro Lib){
if(cont == N)
    return;
else
arreglo[cont++] = Lib;
}

//===========================================================================================================================================

void Lista::busca(){

    int rpt;
    do{system("cls");
    cout<<"LIBRERIA DE LIBROS - BUSQUEDA"<<endl<<endl;
    cout<<"1) Buscar Por ISBN. "<<endl;
    cout<<"2) Buscar Por Titulo. "<<endl;
    cout<<"3) Regresar. "<<endl;
    cin>>rpt;
    switch(rpt){
case 1: {
    double ISBN;
    system("cls");
    cout<<"Ingrese el ISBN: "; cin>>ISBN;
    for(int i = 0; i < cont; i++){
        if(arreglo[i].getISBN()== ISBN){
        cout<<"Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<"Autor: " << arreglo[i].getAutor() << endl;
        cout<<"Editorial: "<< arreglo[i].getEditorial() << endl;
        cout<<"Categoria: " << arreglo[i].getCategoria() << endl;
        cout<<"SubCategoria: "<< arreglo[i].getSubCategoria()<<endl;
        cout<<"Ejemplares: "<< arreglo[i].getEjemplares()<<endl;
        cout<<"Precio: "<< arreglo[i].getPrecio()<<endl;
        cout<<"ISBN: "<<arreglo[i].getISBN()<<endl<<endl;
        system("pause");
        }else{

        }
    }
    break;
    }
case 2: {
    string titulo;
    system("cls");
    cout<<"Ingrese el Titulo: "; getline(cin,titulo); getline(cin,titulo);
    for(int i = 0; i < cont; i++){
        if(arreglo[i].getTitulo()== titulo){
        cout<<"Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<"Autor: " << arreglo[i].getAutor() << endl;
        cout<<"Editorial: "<< arreglo[i].getEditorial() << endl;
        cout<<"Categoria: " << arreglo[i].getCategoria() << endl;
        cout<<"SubCategoria: "<< arreglo[i].getSubCategoria()<<endl;
        cout<<"Ejemplares: "<< arreglo[i].getEjemplares()<<endl;
        cout<<"Precio: "<< arreglo[i].getPrecio()<<endl;
        cout<<"ISBN: "<<arreglo[i].getISBN()<<endl<<endl;
        system("pause");
        }else{

        }
    }
    break;
    }
case 3: break;
default:    cout<<"Opcion Invalida" <<endl; system("pause");
    }
    }while(rpt != 3);
system("pause");

}

//===================================================================================================================================

void Lista::modifica(){
int rpt;
do{
    system("cls");
    cout<<"LIBRERIA DE LIBROS - BUSQUEDA Y MODIFICA"<<endl<<endl;
    cout<<"1) Buscar Por ISBN: "<<endl;
    cout<<"2) Buscar Por Titulo: "<<endl;
    cout<<"3) Regresar: "; cin>>rpt;

    switch(rpt){
case 1: {
    double ISBN;
    int opc;
    system("cls");
    cout<<"Ingrese el ISBN: "; cin>>ISBN;
    for(int i = 0; i <cont; i++){
        if(arreglo[i].getISBN()==ISBN){
        do{
                system("cls");
                string cad;
                double num;
            cout<<"LIBRERIA DE LIBROS - MODIFICAR LIBRO"<<endl<<endl;
        cout<<"1) Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<"2) Autor: " << arreglo[i].getAutor() << endl;
        cout<<"3) Editorial: "<< arreglo[i].getEditorial() << endl;
        cout<<"4) Categoria: " << arreglo[i].getCategoria() << endl;
        cout<<"5) SubCategoria: "<< arreglo[i].getSubCategoria()<<endl;
        cout<<"6) Ejemplares: "<< arreglo[i].getEjemplares()<<endl;
        cout<<"7) Precio: "<< arreglo[i].getPrecio()<<endl;
        cout<<"8) ISBN: "<<arreglo[i].getISBN()<<endl;
        cout<<"9) Regresar: "<<endl<<endl;
        cout<<"Seleccione Una Opcion: ";cin>>opc;
        switch(opc){

    case 1: {

        cout<<"\nIngrese el nuevo Titulo: ";               getline(cin,cad); getline(cin,cad);    arreglo[i].setTitulo(cad);
        break;}
    case 2: {
        cout<<"\nIngrese el nuevo Autor: ";                getline(cin,cad); getline(cin,cad);    arreglo[i].setAutor(cad);
        break;}
    case 3: {
        cout<<"\nIngrese la nueva Editorial: ";            getline(cin,cad); getline(cin,cad);    arreglo[i].setEditorial(cad);
        break;}
    case 4: {
        cout<<"\nIngrese la nueva Categoria: ";            getline(cin,cad);getline(cin,cad);     arreglo[i].setCategoria(cad);
        break;}
    case 5: {
        cout<<"\nIngrese la nueva Categoria Secundaria: "; getline(cin,cad);getline(cin,cad);     arreglo[i].setSubcategoria(cad);
        break;}
    case 6: {
        cout<<"\nIngrese el numero de Ejemplares: ";       cin>>num;

          if(num >=0)
          arreglo[i].setEjemplares(num);


        break;}
    case 7: {
        cout<<"\nIngrese el nuevo Precio: ";               cin>>num;

         if(num >=0)
         arreglo[i].setPrecio(num);


        break;}
    case 8: {
        cout<<"\nIngrese el nuevo ISBN: ";                 cin>>num;


        for(int i = 0; i < cont; i++){
            if(arreglo[i].getISBN()== num){
                cout<<"ISBN EXISTENTE"<<endl; system("pause");
                return;
            }}arreglo[i].setISBN(num);

        break;}
    case 9: { break;}
    default:    cout<<"Opcion Invalida" <<endl; system("pause");
        }
        }while (opc != 9);

        }
    }
    break;
}
case 2: {
    string titulo;
    int opc;
    system("cls");
    cout<<"Ingrese el Titilo: "; getline(cin,titulo); getline(cin,titulo);
    for(int i = 0; i <cont; i++){
        if(arreglo[i].getTitulo()==titulo){
        do{
                system("cls");
                string cad;
                double num;
            cout<<"LIBRERIA DE LIBROS - MODIFICAR LIBRO"<<endl<<endl;
        cout<<"1) Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<"2) Autor: " << arreglo[i].getAutor() << endl;
        cout<<"3) Editorial: "<< arreglo[i].getEditorial() << endl;
        cout<<"4) Categoria: " << arreglo[i].getCategoria() << endl;
        cout<<"5) SubCategoria: "<< arreglo[i].getSubCategoria()<<endl;
        cout<<"6) Ejemplares: "<< arreglo[i].getEjemplares()<<endl;
        cout<<"7) Precio: "<< arreglo[i].getPrecio()<<endl;
        cout<<"8) ISBN: "<<arreglo[i].getISBN()<<endl;
        cout<<"9) Regresar: "<<endl<<endl;
        cout<<"Seleccione Una Opcion: ";cin>>opc;
        switch(opc){

    case 1: {

        cout<<"\nIngrese el nuevo Titulo: ";               getline(cin,cad); getline(cin,cad);    arreglo[i].setTitulo(cad);
        break;}
    case 2: {
        cout<<"\nIngrese el nuevo Autor: ";                getline(cin,cad); getline(cin,cad);    arreglo[i].setAutor(cad);
        break;}
    case 3: {
        cout<<"\nIngrese la nueva Editorial: ";            getline(cin,cad); getline(cin,cad);    arreglo[i].setEditorial(cad);
        break;}
    case 4: {
        cout<<"\nIngrese la nueva Categoria: ";            getline(cin,cad);getline(cin,cad);     arreglo[i].setCategoria(cad);
        break;}
    case 5: {
        cout<<"\nIngrese la nueva Categoria Secundaria: "; getline(cin,cad);getline(cin,cad);     arreglo[i].setSubcategoria(cad);
        break;}
    case 6: {
        cout<<"\nIngrese el numero de Ejemplares: ";       cin>>num;                              arreglo[i].setEjemplares(num);
        break;}
    case 7: {
        cout<<"\nIngrese el nuevo Precio: ";               cin>>num;                              arreglo[i].setPrecio(num);
        break;}
    case 8: {
        cout<<"\nIngrese el nuevo ISBN: ";                 cin>>num;




          arreglo[i].setISBN(num);




        break;}
    case 9: { break;}
    default:    cout<<"Opcion Invalida" <<endl; system("pause");
        }
        }while (opc != 9);

        }
    }
    break;
}
case 3: break;
default: cout<<"\nOpcion invalida"<<endl; system("pause");

    }
}while(rpt != 3);

}

//===================================================================================================================================

void Lista::mostrar(){
    system("cls");
    cout<<"         LIBRERIA DE LIBROS - CATALOGO"<<endl<<endl;
    cout<<"         NUMERO DE LIRBOS EN EL CATALOGO: "<< cont <<endl<<endl;
    if(cont){
    for(int i = 0; i < cont; i++){
        cout<<"Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<"Autor: " << arreglo[i].getAutor() << endl;
        cout<<"Editorial: "<< arreglo[i].getEditorial() << endl;
        cout<<"Categoria: " << arreglo[i].getCategoria() << endl;
        cout<<"SubCategoria: "<< arreglo[i].getSubCategoria()<<endl;
        cout<<"Ejemplares: "<< arreglo[i].getEjemplares()<<endl;
        cout<<"Precio: "<< arreglo[i].getPrecio()<<endl;
        cout<<"ISBN: "<<arreglo[i].getISBN()<<endl<<endl;
        cout<<"====================================================="<<endl<<endl;
    }
    }system("pause");
}

//====================================================================================================================================

void Lista::ventas(){
    int opc;
        system("cls");
        do{

                system("cls");cout<<"\n     LIBRERIA DE LIBROS - VENTAS"<<endl<<endl;
        for(int i=0; i<cont; i++){
        cout<<" Titulo: " << arreglo[i].getTitulo() << endl;
        cout<<" Autor: "<<arreglo[i].getAutor()<<endl;
        cout<<" Precio: " << arreglo[i].getPrecio();      cout<<"        Rank: "<<arreglo[i].getRank();
        cout<<"          Ejemplares "<<arreglo[i].getEjemplares()<<endl;
        cout<<" ISBN: "<<arreglo[i].getISBN()<<endl;
        cout<<"================================================="<<endl<<endl;
        }

        cout<<"  1)  Comprar Ingresando ISBN. "<<endl;
        cout<<"  2)  Comprar Ingresando Titulo. "<<endl;
        cout<<"  3)  Regresar Al Menu.  ";
        cin>>opc;
    switch(opc){
    case 1: {
        double ISBN;
        cout<<"Ingrese el ISBN: "; cin>>ISBN;
        for(int i = 0; i < cont; i++){
            if(arreglo[i].getISBN()==ISBN && arreglo[i].getEjemplares() > 0){
                arreglo[i].sumarank();
                arreglo[i].restaejemplar();
            }

        }


        break;}
    case 2: {
        string titulo;
        cout<<"Ingrese el Titulo: "; getline(cin,titulo);   getline(cin,titulo);
        for(int i = 0; i < cont; i++){
            if(arreglo[i].getTitulo()==titulo && arreglo[i].getEjemplares() > 0){
                arreglo[i].sumarank();
                arreglo[i].restaejemplar();
        }
    }
    }

    case 3: break;
    default:  cout<<"Opcion invalida" <<endl; system("pause");

        }}while (opc != 3);
   system("pause");

 }

//====================================================================================================================================


///////////////////////////////////// NO FUNCIONAN AUN (REPARAR)


bool Lista::validar(double numero){
    for(int i = 0; i < cont; i++){
        if(arreglo[i].getISBN() == numero){
            return 0;
            }}
    return 1;
}
