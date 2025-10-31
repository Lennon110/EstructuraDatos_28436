#include <iostream>
using namespace std;

// estructura  lista simple
struct NodoSimple
{
    int dato;
    NodoSimple *siguiente;
};

// estructura lista doble enlazada
struct NodoDoble
{
    int dato;
    NodoDoble *anterior;
    NodoDoble *siguiente;
};

// estructura lista circular
struct NodoCircular
{
    int dato;
    NodoCircular *siguiente;
};

//estructura lista doble circukar
struct NodoDobleCircular{
    int dato;
    NodoDobleCircular* anterior;
    NodoDobleCircular* siguiente;
};

// funcion lista simple
void insertarSimple(NodoSimple *&cabeza, int valor)
{
    NodoSimple *nuevo = new NodoSimple();
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
}

void mostrarSimple(NodoSimple *cabeza)
{
    cout << "\n Lista Simple-Enlazada: ";
    NodoSimple *actual = cabeza;
    while (actual != nullptr)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
    cout << "Null\n";
}

// Funcion Lista-doble-enlazada
void insertarDoble(NodoDoble *&cabeza, int valor)
{
    NodoDoble *nuevo = new NodoDoble();
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    nuevo->anterior = nullptr;
    if (cabeza != nullptr)
        cabeza->anterior = nuevo;
    cabeza = nuevo;
}

void mostrarDoble(NodoDoble *cabeza)
{
    cout << "\n Lista doble Enlazada hacia adelante: ";
    NodoDoble *actual = cabeza;
    NodoDoble *ultimo = nullptr;
    while (actual != nullptr)
    {
        cout << actual->dato << "<->";
        ultimo = actual;
        actual = actual->siguiente;
    }
    cout << "Null\n";

    cout << "\n Lista doble Enlazada hacia atras: ";
    while (ultimo != nullptr)
    {
        cout << ultimo->dato << "<->";
        ultimo = ultimo->anterior;
    }
    cout << "Null\n";
}

// Lista doble circular
void insertarDobleCircular()
{

}

// Funcion lista circular
void insertarCircular(NodoCircular *&cabeza, int valor)
{
    NodoCircular *nuevo = new NodoCircular();
    nuevo->dato = valor;
    if (cabeza == nullptr)
    {
        cabeza = nuevo;
        nuevo->siguiente = cabeza;
    }
    else
    {
        NodoCircular *actual = cabeza;
        while (actual->siguiente != cabeza)
            actual = actual->siguiente;
        actual->siguiente = nuevo;
        nuevo->siguiente = cabeza;
    }
}

void mostrarCircular(NodoCircular *cabeza)
{
    if (cabeza == nullptr)
    {
        cout << "\n Lista Circular Vacia..\n";
        return;
    }
    cout << "\n Lista Circular";
    NodoCircular *actual = cabeza;
    do
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    } while (actual != cabeza);
    cout << "Vuelve al inicio \n";
}

//funcion lista doble circular
void insertarDobleCircular(NodoCircular *&cabeza, int valor)
{
    NodoCircular *nuevo = new NodoCircular();
    nuevo->dato = valor;
    if (cabeza == nullptr)
    {
        cabeza = nuevo;
        nuevo->siguiente = cabeza;
    }
    else
    {
        NodoCircular *actual = cabeza;
        while (actual->siguiente != cabeza)
            actual = actual->siguiente;
        actual->siguiente = nuevo;
        nuevo->siguiente = cabeza;
    }
}
int main()
{
    char opcion;
    int valor;
    NodoSimple *nodoSimple = nullptr;
    NodoDoble *nodoDoble = nullptr;
    NodoCircular *nodoCircular = nullptr;

    do
    {
        cout << "Menu" << endl;
        cout << "1. Insertar lista simple" << endl;
        cout << "2. Mostrar lista simple" << endl;
        cout << "3. Insertar lista doblemente enlazada" << endl;
        cout << "4. Mostrar lista doblemente enlazada" << endl;
        cout << "5. Insertar lista circular" << endl;
        cout << "6. Mostrar lista circular" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case '1':
            cout << "Ingrese un valor: ";
            cin >> valor;
            insertarSimple(nodoSimple, valor);
            break;
        case '2':
            mostrarSimple(nodoSimple);
            break;
        case '3':
            cout << "Ingrese un valor: ";
            cin >> valor;
            insertarDoble(nodoDoble, valor);
            break;
        case '4':
            mostrarDoble(nodoDoble);
            break;
        case '5':
            cout << "Ingrese un valor: ";
            cin >> valor;
            insertarCircular(nodoCircular, valor);
            break;
        case '6':
            mostrarCircular(nodoCircular);
            break;
        case '7':
            cout << "Gracias por usar el programa. " << endl;
            break;
        default:
            cout << "Opcion incorrecta." << endl;
            break;
        }
    } while (opcion != '7');
    return 0;
}
