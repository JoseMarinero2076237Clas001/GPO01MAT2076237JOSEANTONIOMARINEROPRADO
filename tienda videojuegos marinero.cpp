#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numart, opcion, adelanzamiento;
    char nombredelvideojuego(100), caracteristicas(100);
    float impuesto, preciouni= 1000, total = 0.0;
    string articulo, descripcion, categoria, genero;

    cout << "\t ***Tienda de Videojuegos KRYGERS*** \n";
    cout << " 1.Agregar Articulo \n 2.Modificar Articulo\n 3.Eliminar Articulo\n 4.Lista Articulo\n 5.Limpiar Pantalla\n 6.Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese el numero de articulo \n";//numero del articulo
        cin >> numart;
        cout << "ingrese el nombre del articulo\n";//nombre articulo
        cin.ignore();
        getline(cin, articulo);
        cout << "ingrese la descripcion del articulo\n";//descripcion del articulo
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese la categoria del articulo\n";//la categoria del articulo
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese el genero\n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese el year de lanzamiento\n";
        cin >> adelanzamiento;
        cout << "ingrese el precio unitario del articulo\n";
        cin >> preciouni;
        cout << "el impuesto es\n";
        impuesto = (preciouni * .16);
        cout << impuesto;
        cout << "el total es\n";
        total = (preciouni + impuesto);
        cout << total;

        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por nuestro utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion valida \n";
        return main();

    }
}
