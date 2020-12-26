/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
using namespace std;

class Empleado {

public:

    float calcularSueldoMensual();
    string nombreCompleto();

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

int main(){
    
    // Manejo automático de memoria
    Empleado empleado1;
    float sueldoEmpleado1 = empleado1.calcularSueldoMensual();

    // Manejo NO automático de memoria
    Empleado *p = new Empleado();
    float sueldoEmpleado2 = p->calcularSueldoMensual();
    
    return 0;
}

float Empleado::calcularSueldoMensual(){
    return (sueldoAnual/numeroDePagas);
}

string Empleado::nombreCompleto(){
    return (nombre + " " + primerApellido);
}