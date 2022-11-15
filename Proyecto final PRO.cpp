#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>//archivos
using namespace std;
void alta();
void listas();
void elimin();
void modi();
void archi();
int* articulo, registros, * numa, sn, n = 1;
int* articulo, registros, * numa, n = 1;
string* carac, * desc, * nombre, * gen, * clas;
float* imp, * pu, * tot;
int main() 
{
    int opc;
    do {
        printf(" ***KRYGERS*** \n");
        printf("Ingrese la opcion que desee\n");
        printf(" 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n");
        scanf_s("%d", &opc);
        switch (opc) 
        {
        case 1:
            alta();
            system("pause");
            break;
        case 2:
            modi();
            system("pause");
            break;
        case 3:
            elimin();
            system("pause");
            break;
        case 4:
            listas();
            system("pause");
            break;
        case 5:
            system("pause");
            system("cls");
            break;
        case 6:
            archi();
            system("pause");
            exit(1);
            break;
        default:
            printf("Ingrese una opcion valida\n");
            system("pause");
            break;
        }
    } while (opc != 6);
}
void alta() 
{
    sn = 0;

    printf("inserte la cantidad de registros\n");
    scanf_s("%d", &registros);
    articulo = new int[registros];
    numa = new int[registros];
    imp = new float[registros];
    pu = new float[registros];
    tot = new float[registros];
    carac = new string[registros];
    desc = new string[registros];
    nombre = new string[registros];
    gen = new string[registros];
    clas = new string[registros];
    for (int i = 0; i < registros; i++) 
    {
        printf("inserte el numero de articulo\n");
        scanf_s("%d", &numa[i]);
        if (i > 0) {//para que funcione el ciclo for
            do {
                if (numa[i] == numa[i - n]) 
                {
                    printf("inserte otro numero de articulo\n");
                    scanf_s("%d", &numa[i]);
                }
                else 
                {
                    n = n + 1;
                }
            } while (n < registros);
        }
        printf("ingrese el A%co de lanzamiento:\n", 164);
        scanf_s("%d", &articulo[i]);
        printf("ingrese el nombre del videojuego:\n");
        cin.ignore();
        getline(cin, nombre[i]);
        printf("ingrese la clasificacion:\n");
        getline(cin, clas[i]);
        printf("ingrese las caracteristicas:\n");
        getline(cin, carac[i]);
        printf("ingrese la descripcion:\n");
        getline(cin, desc[i]);
        printf("ingrese el genero:\n");
        getline(cin, gen[i]);
        printf("ingrese el precio unitario:\n");
        scanf_s("%f", &pu[i]);
        imp[i] = pu[i] * .16;
        printf("El impuesto es de %f\n", imp[i]);
        tot[i] = pun[i] * 1.16;
        printf("El total es de %f\n", tot[i]);
        /*if ((registros - 1) == i) 
        {
            do 
            {
                printf("desea agregar otro articulo 1.si 2.no\n");
                scanf_s("%d", &sn);
                switch (sn) 
                {
                case 1:
                    registros = registros + 1;
                    break;
                case 2:
                    break;
                default:
                    printf("opcion no valida\n");
                }
            } while (sn != 1 && sn != 2);
        }*/
    }
}
void listas() 
{
    int op1;
    string bus;
    do {
        printf("1.Clasificacion\n 2.Genero\n 3.Salir\n");
        scanf_s("%d", &op1);
        switch (op1) 
        {
        case 1:
            printf("Ingrese la clasificacion que desea buscar\n");
            cin.ignore();
            getline(cin, bus);
            for (int i = 0; i < regi; i++) 
            {
                if (bus == clas[i] && numa[i] != 0) 
                {
                    printf("numero de articulo: %d\n", numa[i]);
                    printf("nombre del videojuego: %s\n", nombre[i].c_str());
                    printf("a%co de lanzamiento: %d\n", 164, articulo[i]);
                    printf("clasificacion: %s\n", clas[i].c_str());
                    printf("caracteristicas: %s\n", carac[i].c_str());
                    printf("descripcion: %s\n", desc[i].c_str());
                    printf("genero: %s\n", gen[i].c_str());
                    printf("precio unitario: %f \n", pu[i]);
                    printf("el impuesto es de: %f \n", imp[i]);
                    printf("el total es: %f \n", tot[i]);
                }
            }
            break;
        case 2:
            printf("ingrese el genero que desea buscar\n");
            cin.ignore();
            getline(cin, bus);
            for (int i = 0; i < registros; i++) 
            {
                if (bus == gen[i] && numa[i] != 0) 
                {
                    printf("numero de articulo: %d\n", numa[i]);
                    printf("nombre del videojuego: %s\n", nombre[i].c_str());
                    printf("a%co de lanzamiento: %d\n", 164, articulo[i]);
                    printf("clasificacion: %s\n", clas[i].c_str());
                    printf("caracteristicas: %s\n", carac[i].c_str());
                    printf("descripcion: %s\n", desc[i].c_str());
                    printf("genero: %s\n", gen[i].c_str());
                    printf("precio unitario: %f \n", pu[i]);
                    printf("el impuesto es de: %f \n", imp[i]);
                    printf("el total es: %f \n", tot[i]);;
                }
            }
            break;
        case 3:
            break;
        default:
            printf("ingrese una opcion correcta\n");
            break;
        }
    } while (op1 != 3);
}
void elimin() 
{
    int eli, no = 0;
    do 
    {
        printf("ingrese el numero de articulo que desea eliminar\n");
        scanf_s("%d", &eli);
        for (int i = 0; i < registros; i++) 
        {
            if (eli == numa[i]) 
            {
                numa[i] = 0;
                no = no + 1;
            }
        }
        if (no == 0) 
        {
            printf("El numero de articulo no existe\n");
        }
    } while (no == 0);
}
void modi() 
{
    int modif, opcion;
    do {
        printf("Ingrese el numero de articulo que desea modificar\n");
        scanf_s("%d", &modif);
    } while (modif < 0);
    do {
        printf("Que desea modificar\n1.Numero de articulo\n2.Nombre del videojuego\n3.A%co de lanzamiento\n4.Clasificacion\n5.Caracteristicas\n6.Descripcion\n7.Genero\n8.Precio unitario\n9.Salir\n", 164);
        scanf_s("%d", &opcion);
        switch (opcion) {
        case 1:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    scanf_s("%d", &numa[i]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    cin.ignore();
                    getline(cin, nombre[i]);
                }
            }
            break;
        case 3:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    scanf_s("%d", &articulo[i]);
                }
            }
            break;
        case 4:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    cin.ignore();
                    getline(cin, clas[i]);
                }
            }
            break;
        case 5:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    cin.ignore();
                    getline(cin, carac[i]);
                }
            }
            break;
        case 6:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    cin.ignore();
                    getline(cin, desc[i]);
                }
            }
            break;
        case 7:
            for (int i = 0; i < registros; i++)
             {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    cin.ignore();
                    getline(cin, gen[i]);
                }
            }
            break;
        case 8:
            for (int i = 0; i < registros; i++) 
            {
                if (modif == numa[i]) 
                {
                    printf("Ingrese el nuevo dato\n");
                    scanf_s("%d", &pu[i]);
                    imp[i] = pu[i] * .16;
                    tot[i] = pu[i] * 1.16;
                }
            }
            break;
        case 9://Salir
            break;
        default:
            printf("Ingrese una opcion correcta\n");
            break;
        }
    } while (opcion != 9);
}
void archi() 
{
    ofstream archivo;
    string nombre;
    nombre = "KRYGERS";
    archivo.open(nombre.c_str(), ios::out);
    if (archivo.fail()) 
    {
        printf("ERROR EN EL ARCHIVO\n");
        system("pause");
        exit(1);
    }
    archivo << "Se continua en el formato" << "\n";
    archivo << "Numero de articulo" << "\t";
    archivo << "Nombre del videojuego" << "\t";
    archivo << "Año de lanzamiento" << "\t";
    archivo << "Clasificacion" << "\t";
    archivo << "Caracteristicas" << "\t";
    archivo << "Descripcion" << "\t";
    archivo << "Genero" << "\t";
    archivo << "Precio unitario" << "\t";
    archivo << "Impuesto" << "\t";
    archivo << "Total" << "\n";
    for (int i = 0; i < registros; i++) 
    {
        if (numa[i] != 0) {
            archivo << numa[i] << "\t";
            archivo << nombre[i].c_str() << "\t";
            archivo << articulo[i] << "\t";
            archivo << clas[i].c_str() << "\t";
            archivo << carac[i].c_str() << "\t";
            archivo << desc[i].c_str() << "\t";
            archivo << gen[i].c_str() << "\t";
            archivo << pu[i] << "\t";
            archivo << imp[i] << "\t";
            archivo << tot[i] << "\n";
        }
    }
}
