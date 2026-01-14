/*
Desarrolle un programa en C++ que reciba un conjunto de elementos,
donde cada elemento posee un identificador, un costo y un beneficio
asociado. El programa debe determinar el beneficio total máximo que
puede obtenerese sin que la suma de los costos de los elementos
seleccionados supere un límite establecido por el usuario

El programa debe utilizar estructuras de datos para almacenar y procesar
la información de los elementos, y debe construir una solución que permita
evaluar subproblemas intermedios de forma eficiente. Como salida, el 
programa debe mostrar el beneficio máximo alcanzado y el conjunto de
elementos que conforman dicha solución.

Adicionalmente, el programa debe mostrar la tabla de resultados
intermedios utilizada durante el proceso de calculo, indicando claramente
como se construye la solucion final a partir de los valores parciales.
*/

#include <iostream>
#include <vector>
using namespace std;

struct Elemento{
    int identificador;
    double costo;
    double beneficio;
};

double beneficioTotal(int limiteCosto, const vector<Elemento>& elementos){

    double dp[elementos.size()]

}


