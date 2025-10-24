#include <iostream>
using namespace std;

class CalculadoraPotencia
{
public:
    int potenciaRecursiva(int n)
    {
        if (n == 0)
            return 1;
        else

            return n * potenciaRecursiva(n - 1);
    }
};

int main()
{
    CalculadoraPotencia objetoPotencia;
    int numero = 5;
    int resultado = objetoPotencia.potenciaRecursiva(numero);
    cout << "El resultado es " << resultado;
    return 0;
}