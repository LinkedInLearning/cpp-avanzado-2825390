/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
#include <iostream>
using namespace std;

class Empleado {

public:

    Empleado();
    Empleado(const Empleado& empleadoOriginal);
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

    Empleado empleado = Empleado();
    empleado.setNombre("Evan");
    empleado.setPrimerApellido("Craft");

    Empleado* p_copia = new Empleado(empleado);
    cout << p_copia->nombreCompleto() << endl;

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

Empleado::Empleado(const Empleado& empleadoOriginal){
    nombre = empleadoOriginal.nombre;
    primerApellido = empleadoOriginal.primerApellido;
    sueldoAnual = empleadoOriginal.sueldoAnual;
}