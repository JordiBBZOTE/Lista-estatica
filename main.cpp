#include <iostream>
#include<stdlib.h>
#include"Libro.h"
#include"Lista.h"

using namespace std;


//PROTOTIPOS

int main()
{
    Lista L;
    int error =0;
    int opc;
    do{
            system("cls");
    cout<<"       LIBRERIA DE LIBROS"<<endl;
    cout<<"         Menu Principal"<<endl<<endl;
    cout<<" 1)  Registrar Un Nuevo Libro En La Lista: "<<endl;
    cout<<" 2)  Buscar Un Libro Existente"<<endl;
    cout<<" 3)  Modificar Informacion Del Libro"<<endl;
    cout<<" 4)  Ventas"<<endl;
    cout<<" 5)  Mostrar Todo El Catalogo"<<endl;
    cout<<" 6)  Generar 10 Libros Automaticamente"<<endl;
    cout<<" 7)  Salir"<<endl;
    cout<<" Seleccione una opcion... ";
    cin>>opc;

    switch(opc){
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//REGISTRO
    case 1: {

    Libro Lib;
    system("cls");
    cout<<"         REGISTRO"<<endl<<endl;
    double numero;
    string cadena;
    int Rank = 0;

    Lib.setRank(Rank);
    cout<<"Ingrese el ISBN para el libro: "<<endl;                 cin>>numero;         if(L.validar(numero)){     Lib.setISBN(numero);

    cout<<"Ingrese los Ejemplares que quiere registrar: "<<endl;              cin>>numero;            Lib.setEjemplares(numero);

    cout<<"Ingrese el Precio del libro: "<<endl;                              cin>> numero;               Lib.setPrecio(numero);

                                                                              getline(cin,cadena);
    cout<<"Ingrese el Titulo del libro: "<<endl;                              getline(cin,cadena);        Lib.setTitulo(cadena);

    cout<<"Ingrese el Autor del libro: "<<endl;                               getline(cin,cadena);         Lib.setAutor(cadena);

    cout<<"Ingrese la Editorial del libro: "<<endl;                           getline(cin,cadena);     Lib.setEditorial(cadena);

    cout<<"Ingrese la Categoria del libro: "<<endl;                           getline(cin,cadena);     Lib.setCategoria(cadena);

    cout<<"Ingrese la Categoria Secundaria del libro: "<<endl;                getline(cin,cadena);    Lib.setSubcategoria(cadena);


    L.insertar(Lib);
    }
    else{
        cout<<"El ISBN ya existe, reintente denuevo"<<endl;
        system("pause");
    }
break;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//BUSQUEDA


    case 2:  {

    L.busca();


    break;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//MODIFICAR


    case 3: {

    L.modifica();

break;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//VENTAS
    case 4: {
          L.ventas();
break;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//MOSTRAR
    case 5: {


    L.mostrar();


break;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//INSERTA 10
    case 6: {

    Libro Lib;

    if(error == 0){
        {
            Lib.setTitulo("50 Sombras de Gray");
            Lib.setAutor("Dorian Gray");
            Lib.setEditorial("Lumbritas");
            Lib.setCategoria("Romance");
            Lib.setSubcategoria("Ricolino");
            Lib.setISBN(9875);
            Lib.setRank(0);
            Lib.setEjemplares(12);
            Lib.setPrecio(110);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("Maze Runner");
            Lib.setAutor("James Dashner");
            Lib.setEditorial("V&R");
            Lib.setCategoria("Ficcion");
            Lib.setSubcategoria("Accion");
            Lib.setISBN(8899);
            Lib.setRank(0);
            Lib.setEjemplares(3);
            Lib.setPrecio(230);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("El Retrato de Dorian Gray");
            Lib.setAutor("Oscar Wild");
            Lib.setEditorial("Umbrella");
            Lib.setCategoria("Drama");
            Lib.setSubcategoria("Arte Clasico");
            Lib.setISBN(2876);
            Lib.setRank(0);
            Lib.setEjemplares(4);
            Lib.setPrecio(349);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("El mostro y la carmelita");
            Lib.setAutor("El Babo");
            Lib.setEditorial("Los Jefes");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Mafia");
            Lib.setISBN(4563);
            Lib.setRank(0);
            Lib.setEjemplares(6);
            Lib.setPrecio(289);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("Spiderman");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(616);
            Lib.setRank(0);
            Lib.setEjemplares(6);
            Lib.setPrecio(100);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("Iron Man");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(667);
            Lib.setRank(0);
            Lib.setEjemplares(6);
            Lib.setPrecio(120);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("X-MEN");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(44556);
            Lib.setRank(0);
            Lib.setEjemplares(5);
            Lib.setPrecio(129);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("Batman");
            Lib.setAutor("Steve Didco");
            Lib.setEditorial("DC Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(5567);
            Lib.setRank(0);
            Lib.setEjemplares(1);
            Lib.setPrecio(222);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("The Incredible Hulk");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(69797);
            Lib.setRank(0);
            Lib.setEjemplares(3);
            Lib.setPrecio(120);

            L.insertar(Lib);
        }

        {
            Lib.setTitulo("Capitan America");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(6007);
            Lib.setRank(0);
            Lib.setEjemplares(2);
            Lib.setPrecio(170);

            L.insertar(Lib);
        }


cout<<"Se agregaron 10 libros al registro"<<endl;
error = 1;
}else cout<<"ESTA OPCION YA FUE UTILIZADA"<<endl;
    system("pause");
break;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    case 7: {
    break;
    }
    default:    cout<<"\nSeleccione Una Opcion Valida"<<endl<<endl;
    system("pause");
break;
    }
    }while(opc != 7);
    system("cls");
    cout<<"\n\n\n\n\n\n        GRACIAS POR SU VISITA, VUELVA PRONTO\n\n\n\n\n\n\n";
    return 0;
}



