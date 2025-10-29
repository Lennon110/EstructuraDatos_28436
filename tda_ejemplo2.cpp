#include <iostream>
#include <string>

using namespace std;

/*
Definicion del TDA Alumno 
*/

class Alumno{

    private:

    //valores (estado interno)
    string nombre;
    string cedula;
    int edad;
    string carrera;

    public:

    //constructor: inicializa los atributos (operacion inicializacion/inserccion)
    void crearAlumno(string nombre, string cedula, int edad, string carrera){
        if (edad <= 0 || cedula.empty()){
            cout << "Error! Datos invalidos al crear el alumno." << endl;
            return;
        }

        this->nombre = nombre;
        this->cedula = cedula;
        this->edad = edad;
        this->carrera = carrera;
    }

    //operacion de consulta (muestra informacion)
    void mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "Cedula: " << cedula << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;
    }

    //operacion de modificacion (actualiza un valor existente)
    void actualizarEdad(int nuevaEdad){
        if (nuevaEdad > 0){
            edad = nuevaEdad;
        } else {
            cout << "Error! Edad invalida." << endl;
        }
    }
};

//Programa principal

int main(){
    Alumno alumno1; //declaramos un objeto del TDA alumno

    //1. Inicializacion (crear alumno)
    alumno1.crearAlumno("Andres", "123", 20, "Informatica");
    cout << "Alumno registrado." << endl;

    //2. Consulta (mostrar datos)
    alumno1.mostrar();

    //3. Modificacion (actulizar edad)
    alumno1.actualizarEdad(21);
    cout << "Actulizando edad..." << endl;

    //4. Consulta posterior
    cout << "Datos despues de la actualizacion: " << endl;
    alumno1.mostrar();

    return 0;
}