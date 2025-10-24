#include <iostream>
using namespace std;

class Factorial
{
public:
    int calcularFactorial(int n, int resultado = 1)
    {
        if (n == 0)
            return resultado;
        else
            return calcularFactorial(n - 1, n * resultado);
    }
};

int main()
{
    Factorial factorial;
    int numero;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;
    cout << "Facotrial de " << numero << ": "
         << factorial.calcularFactorial(numero) << endl;
    return 0;
}