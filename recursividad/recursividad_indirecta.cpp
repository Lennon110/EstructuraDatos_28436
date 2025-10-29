#include <iostream>;
using namespace std;

class SecuenciaParImpar{
    public:
    void generarSecuencia(int n){
        if(n != 0){
            cout << n << " ";
            if(n % 2 == 0){
                generarSecuencia(n/2); //caso recursivo para pares
            } else { 
                generarSecuencia(3 * n + 1); //caso recursivo para impares
            }
        }
    }
};

int main(){
    SecuenciaParImpar spi;
    cout << "Secuencia para 7: " << endl;
    spi.generarSecuencia(4);
    cout << endl;
    return 0;
}
