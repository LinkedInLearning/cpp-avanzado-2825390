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

    float calcularSueldoMensual();
    string nombreCompleto();
    friend class Supervisor;

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

class Supervisor {
public:
    void mostrarSueldoAnualEmpleado(const Empleado* empleado);
private:
};

int main(){

    Empleado* p_empleado = new Empleado();
    p_empleado->setSueldoAnual(50500);
    Supervisor* p_supervisor = new Supervisor();
    p_supervisor->mostrarSueldoAnualEmpleado(p_empleado);

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

void Supervisor::mostrarSueldoAnualEmpleado(const Empleado* empleado){
    cout << "El sueldo anual del empleado es: " << empleado->sueldoAnual << endl;
}