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

    Empleado(string n, string pa):nombre(n),primerApellido(pa){};
    float calcularSueldoMensual();
    string nombreCompleto();

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);

    string getNombre() const;
    string getPrimerApellido() const;
    float getSueldoAnual() const;

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

class Supervisor {
public:
    Supervisor(const Empleado empleado);
    string nombreCompleto();
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

int main(){

    Empleado empleado = Empleado("Pepe","Moreno");
    Supervisor supervisor = empleado;

    cout << supervisor.nombreCompleto() << endl;

    return 0;
}

float Empleado::calcularSueldoMensual(){
    return (sueldoAnual/numeroDePagas);
}

string Empleado::nombreCompleto(){
    return (nombre + " " + primerApellido);
}

string Supervisor::nombreCompleto(){
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

string Empleado::getNombre() const{
    return nombre;
}

string Empleado::getPrimerApellido() const{
    return primerApellido;
}

float Empleado::getSueldoAnual() const{
    return sueldoAnual;
}

Supervisor::Supervisor(const Empleado empleado){
    nombre = empleado.getNombre();
    primerApellido = empleado.getPrimerApellido();
    sueldoAnual = empleado.getSueldoAnual();
}