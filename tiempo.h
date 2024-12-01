#pragma once
#include "fifo.h"
#include "lifo.h"
#include "RR.h"

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void correr_algoritmo(int num, microseconds &tiempo)
{
    high_resolution_clock::time_point inicio, final;    

    inicio = high_resolution_clock::now();
    switch (num)
    {
    case 0:
        fifo();
        break;
    case 1:
        lifo();
        break;
    case 2:
        RR();
        break;
    }
    final = high_resolution_clock::now();
    tiempo = duration_cast<microseconds>(final - inicio);
}