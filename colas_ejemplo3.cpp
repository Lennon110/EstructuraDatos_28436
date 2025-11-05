// COLA CIRCULAR
// Variante de la cola estática que reutiliza el espacio del arreglo
// cuando el final llega al final del arreglo, se "regresa" al inicio
// utilizando la operacion modulo(%)

#include <iostream>
using namespace std;

const int MAXQ = 5; // capacidad de la cola

// estrucutura de la cola circular
struct ColaCircular
{
    int data[MAXQ]; // arreglo que almacena los elementos
    int front;      // indice del frente
    int rear;       // indice del final
    int count;      // cantidad de elementos en la cola
};

// incializa la cola circular vacía
void inicializar(ColaCircular &c)
{
    c.front = 0;
    c.rear = -1;
    c.count = 0;
}

// verifica si esta vacia o llena
bool vacia(const ColaCircular &c) { return c.count == 0; }
bool llena(const ColaCircular &c) { return c.count == MAXQ; }

// inserta un elemento al final de la cola
bool encolar(ColaCircular &c, int v)
{
    if (llena(c))
        return false;
    c.rear = (c.rear + 1) % MAXQ; // avanza el índice circularmente
    c.data[c.rear] = v;
    c.count++;
    return true;
}

// elimina un elemento del frente
bool desencolar(ColaCircular &c, int &out)
{
    if (vacia(c))
        return false;
    out = c.data[c.front];
    c.front = (c.front + 1) % MAXQ; // avanza circularmente
    c.count--;
    return true;
}

// ejemplo de uso
int main()
{
    ColaCircular c;
    inicializar(c);

    // insertamos cinco elementos
    for (int i = 1; i <= 5; i++)
    cout << (encolar(c,i*10)? "Encolado.\n" : "Cola llena.\n");

    int x;
    // quitamos uno y volvemos a insertar
    desencolar(c, x);
    cout << "Desencolado: " << x << "\n";
    encolar(c, 60); // reutiliza el espacio liberado

    // mostramos el contenido restante
    while (desencolar(c, x))
        cout << "Desencolado: " << x << "\n";

    return 0;
}