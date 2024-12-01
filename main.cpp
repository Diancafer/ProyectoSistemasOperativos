#include <iostream>
#include <iomanip>
#include <chrono>

#include "main.h"
#include "tiempo.h"

using namespace std::chrono;
using namespace std;

int main()
{
    microseconds fifosec, lifosec, rrsec;

    cls();
    ask();
    cls();

    
    cout << endl << endl << endl;

    cout << "FIFO";
    cout << endl;
    cout << setw(6) << "LETRA";
    cout << setw(6) <<"ti";
    cout << setw(6) <<"t";
    cout << setw(6) <<"tf";
    cout << setw(6) <<"T";
    cout << setw(6) <<"E";
    cout << setw(8) <<"I";

    correr_algoritmo(0, fifosec);

    calculos_basicos(arr);

    arr_temp_efectividad[contador_temp] = efectividad*100;
    contador_temp++;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << setw(4) << alfabeto[i];
        cout << setw(6) << arr[i].ti;
        cout << setw(6) << arr[i].t;
        cout << setw(6) << arr[i].tf;
        cout << setw(6) << arr[i].T;
        cout << setw(6) << arr[i].E;
        cout << setprecision(4) << setw(10) << arr[i].I;
        cout << endl;
    }

    cout << setw(30) << tiempo_servicio;
    cout << setw(6) << tiempo_espera;
    cout << setw(8) << efectividad;
    cout << endl;

    
    cout << endl << endl << endl;
    
    presiona_continuar();
    cls();
    vacio(arr);

    cout << endl << endl << endl;

    cout << "LIFO";
    cout << endl;
    cout << setw(6) << "LETRA";
    cout << setw(6) <<"ti";
    cout << setw(6) <<"t";
    cout << setw(6) <<"tf";
    cout << setw(6) <<"T";
    cout << setw(6) <<"E";
    cout << setw(8) <<"I";

    correr_algoritmo(1, lifosec);

    calculos_basicos(arr);

    arr_temp_efectividad[contador_temp] = efectividad*100;
    contador_temp++;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << setw(4) << alfabeto[i];
        cout << setw(6) << arr[i].ti;
        cout << setw(6) << arr[i].t;
        cout << setw(6) << arr[i].tf;
        cout << setw(6) << arr[i].T;
        cout << setw(6) << arr[i].E;
        cout << setprecision(4) << setw(10) << arr[i].I;
        cout << endl;
    }

    cout << setw(30) << tiempo_servicio;
    cout << setw(6) << tiempo_espera;
    cout << setw(8) << efectividad;
    cout << endl;

    cout << endl << endl << endl;
    presiona_continuar();
    cls();
    vacio(arr);
    cout << endl << endl << endl;

    cout << "RR";
    cout << endl;
    cout << setw(6) << "LETRA";
    cout << setw(6) <<"ti";
    cout << setw(6) <<"t";
    cout << setw(6) <<"tf";
    cout << setw(6) <<"T";
    cout << setw(6) <<"E";
    cout << setw(8) <<"I";

    correr_algoritmo(2, rrsec);

    cout << endl;
    calculos_basicos(arr);

    arr_temp_efectividad[contador_temp] = efectividad*100;
    contador_temp++;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << setw(4) << alfabeto[i];
        cout << setw(6) << arr[i].ti;
        cout << setw(6) << arr[i].t;
        cout << setw(6) << arr[i].tf;
        cout << setw(6) << arr[i].T;
        cout << setw(6) << arr[i].E;
        cout << setprecision(4) << setw(10) << arr[i].I;
        cout << endl;
    }

    cout << setw(30) << tiempo_servicio;
    cout << setw(6) << tiempo_espera;
    cout << setw(8) << efectividad;
    cout << endl;

    cout << endl << endl << endl;
    presiona_continuar();

    cls();

    cout << endl;
    cout << "Efectividad de los algoritmos: ";
    cout << endl;

    cout << "FIFO: " << arr_temp_efectividad[0] << "%";
    cout << endl;

    cout << "LIFO: " << arr_temp_efectividad[1] << "%";
    cout << endl;

    cout << "RR: " << arr_temp_efectividad[2] << "%";
    cout << endl;

    if (arr_temp_efectividad[0] > (arr_temp_efectividad[1] || arr_temp_efectividad[2]))
    {
        cout << "FIFO ESTA MAS OPTIMIZADO PARA ESTA TAREA. ";
    }
    else if (arr_temp_efectividad[1] > (arr_temp_efectividad[0] || arr_temp_efectividad[2]))
    {
        cout << "LIFO ESTA MAS OPTIMIZADO PARA ESTA TAREA. ";
    }
    else if (arr_temp_efectividad[3] > (arr_temp_efectividad[0] || arr_temp_efectividad[1]))
    {
        cout << "RR ESTA MAS OPTIMIZADO PARA ESTA TAREA. ";
    }

    cout << endl << endl;

    cout << "Tiempos de realizacion: ";
    cout << endl;

    cout << "FIFO: " << fifosec.count() << "mics";
    cout << endl;

    cout << "LIFO: " << lifosec.count() << "mics";
    cout << endl;

    cout << "RR: " << rrsec.count() << "mics";
    cout << endl;

    cout << endl;

    if (fifosec.count() < (lifosec.count() || rrsec.count()))
    {
        cout << "FIFO ES EL DE MENOR DURACION";
    }
    else if (lifosec.count() < (fifosec.count() || rrsec.count()))
    {
        cout << "LIFO ES EL DE MENOR DURACION";
    }
    else if (rrsec.count() < (fifosec.count() || lifosec.count()))
    {
        cout << "RR ES EL DE MENOR DURACION";
    }

    cout << endl << endl;



    cout << endl << endl;
   
}


