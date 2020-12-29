/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
#include <iostream>
using namespace std;

class Empleado{

public:

    Empleado();
    Empleado(string n, string pa) : nombre(n), primerApellido(pa) { sueldoAnual = 60000;};
    float calcularSueldoMensual();
    string nombreCompleto();

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

int main(){

    Empleado* p_empleado = new Empleado("Evan", "Craft");
    cout << p_empleado->nombreCompleto() << endl;

    return 0;
}

float Empleado::calcularSueldoMensual(){
    return (sueldoAnual/numeroDePagas);
}

string Empleado::nombreCompleto(){
    return (nombre + " " + primerApellido);
}

void Empleado::setSueldoAnual(float sueldoAnual){
    this->sueldoAnual = sueldoAnual;
}

void Empleado::setNombre(string nombre){
    this->nombre = nombre;
}

void Empleado::setPrimerApellido(string primerApellido){
    this->primerApellido = primerApellido;
}

Empleado::Empleado(){
    nombre = "Eliezer";
    primerApellido = "Lopez";
}