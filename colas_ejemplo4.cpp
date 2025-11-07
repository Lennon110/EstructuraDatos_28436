#include <iostream>
using namespace std;

// nodo con valor y prioridad
struct Node
{
    int val;      // valor del elemento
    int priority; // prioridad (mayor = más importante)
    Node *next;   // puntero al siguiente
};

// estructura de la cola de prioridad
struct PQueue
{
    Node *head;
};

// inicializa la cola vacia
void init(PQueue &q) { q.head = nullptr; }
bool empty(const PQueue &q) { return q.head == nullptr; }

// inserta ordenando por prioridad (descendente)
void push(PQueue &q, int v, int p)
{
    Node *n = new Node{v, p, nullptr};
    if (empty(q) || p > q.head->priority)
    {
        n->next = q.head;
        q.head = n;
        return;
    }
    Node *cur = q.head;
    while (cur->next && cur->next->priority >= p)
        cur = cur->next;
    n->next = cur->next;
    cur->next = n;
}

// elimina el elemento de mayor prioridad (al frente)
bool pop(PQueue &q, int &outVal, int &outPri)
{
    if (empty(q))
        return false;
    Node *t = q.head;
    outVal = t->val;
    outPri = t->priority;
    q.head = t->next;
    delete t;
    return true;
}

int main()
{
    PQueue q;
    init(q);

    // insertamos elementos con distintas prioridades
    push(q, 100, 1); // prioridad baja
    push(q, 200, 3); // prioridad alta
    push(q, 300, 2); // prioridad media

    int v, p;

    while (pop(q, v, p))
        cout << " Elemento " << v << " con prioridad " << p << " eliminado.\n";
    return 0;
}