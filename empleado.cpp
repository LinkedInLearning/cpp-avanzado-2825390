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
    void setNumeroDePagas(int numeroDePagas);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    int numeroDePagas;
};

int main(){

    Empleado* p_empleado = new Empleado("Evan", "Craft");
    
    p_empleado->setSueldoAnual(90294);
    p_empleado->setNumeroDePagas(0);

    return 0;
}

float Empleado::calcularSueldoMensual(){
    
    float sueldoMensual;
    string tipoDeError;

    try{
        if (numeroDePagas == 0){
            tipoDeError = "El número de pagas es cero.";
            throw tipoDeError;
        }
    } catch (const string& tipoDeError) {
        cout << "Error: " << tipoDeError << endl;
    }
    
    sueldoMensual = sueldoAnual/numeroDePagas;
    
    return sueldoMensual;
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

void Empleado::setNumeroDePagas(int numeroDePagas){
    this->numeroDePagas = numeroDePagas;
}