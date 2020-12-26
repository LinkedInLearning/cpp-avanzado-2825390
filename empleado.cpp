/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>
using namespace std;

class Empleado {

public:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;

    float calcularSueldoMensual();
    string nombreCompleto();

private:

    
};

int main(){

    Empleado *empleado1 = new Empleado();
    empleado1->nombre = "Alex";
    empleado1->primerApellido = "Sampedro";
    empleado1->sueldoAnual = 80000.50;

    cout << "El sueldo anual de " << empleado1->nombreCompleto() << " es " << empleado1->calcularSueldoMensual() << ". " << endl;

    return 0;
}

float Empleado::calcularSueldoMensual(){
    return (sueldoAnual/numeroDePagas);
}

string Empleado::nombreCompleto(){
    return (nombre + " " + primerApellido);
}