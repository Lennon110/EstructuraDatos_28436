#include <iostream>
using namespace std;

class CalculadoraSuma
{
public:
    int sumaRecursiva(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return n + sumaRecursiva(n - 1);
        }
    }
};

    int main()
    {
        CalculadoraSuma objetoSuma;
        int numero = 5;
        int resultado = objetoSuma.sumaRecursiva(numero);
        cout <<  "El resultado es " << resultado;
        return 0;
    }