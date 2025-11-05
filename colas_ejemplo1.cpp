#include <iostream>
using namespace std;

#define MAX 5 //tamaño máximo de la cola

//Aquí  define la estructura y define una cola estática
struct Cola{
    int datos[MAX]; //arreglo para almacenar los datos
    int front; //indice del frente
    int rear; //indice del final
};

//inicializa la cola vacía
void inicializar(Cola &c){
    c.front = 0;
    c.rear = -1; 
}

//verifica si la cola esta vacia
bool estaVacia(Cola c){
    return c.front > c.rear;
}

//verifica si la cola esta llena
bool estaLlena(Cola c){
    return c.rear == MAX - 1;
}

//inserta un nuevo elemento al final de la cola
void encolar(Cola &c, int valor){
    if(!estaLlena(c)){
        c.datos[++c.rear] = valor;
        cout << "Elemento " << valor << " encolado.\n";
    } else {
        cout << "Cola llena.\n";
    }
}

// elimina el elemento del frente
int desencolar(Cola &c){
    if(!estaVacia(c)){
        return c.datos[c.front++];
    } else {
        cout << "Cola vacía.\n";
        return -1;
    }
}

//funcion principal
int main(){
    Cola c;
    inicializar(c);

    //pruebas
    encolar(c, 10);
    encolar(c, 20);
    encolar(c, 30);

    cout << "Desencolado: " << desencolar(c) << endl;
    cout << "Desencolado: " << desencolar(c) << endl;

    encolar(c, 40);
    encolar(c, 50);
    encolar(c, 60); //intentara encolar cuando esta llena

    cout << "Desencolado: " << desencolar(c) << endl;
    /* Para comprobacion - imprime direcciones de memoria contiguas
    cout << "Direccion de la cola: " << &c << endl;
    cout << "Direccion del arreglo datos: " <<< &c.datos << endl;
    cout << "Direccion del primer elemento: " << &d.datos[0] << endl; 
    */
   return 0;
}