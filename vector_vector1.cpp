#include <iostream>
#include <vector>
#include <stdexcept> //en caso de que std::out_of_range

using namespace std;

int main(){
    vector<int> numeros = {3,10,15,20};

    try{
        cout << "Elemento en posicion 2: " << numeros.at(2) << endl;
        cout << "Elementos en posicion 10: "<< numeros.at(10) << endl; //fuera de rango
    } 
    catch (const std::out_of_range& e){ // usa std::out_of_range explicito
        cout << "Error: " << e.what() << endl; 
    }
    return 0;
}
