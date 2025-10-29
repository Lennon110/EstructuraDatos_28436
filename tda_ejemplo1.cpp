/*
Realizar un programa que guarde el nombre, ciudad y edad de 3 personas usando un arreglo 
en donde cada elemento es una estructura y posteriormente muestre los datos de cada persona en una línea.
*/

#include <iostream>

using namespace std;

int main(){

    struct persona{
        char nombre[15];
        int edad;
        char ciudad[15];
    };

    struct persona personas[3];

    for(int i=0; i<3; i++){
        cout << "Ingresa el nombre " << i+1 << endl;
        cin.getline(personas[i].nombre, 15);
        cout << "Ingresa la edad de " << personas[i].nombre << endl;
        cin >> personas[i].edad;
        cin.ignore();
        cout << "Ingresa la ciudad de " << personas[i].nombre << endl;
        cin.getline(personas[i].ciudad, 15);
    }

    for(int i=0; i<=2; i++){
        cout << personas[i].nombre << " tiene " << personas[i].edad << " y vive en " << personas[i].ciudad << endl;
    }
    
    return 0;
}