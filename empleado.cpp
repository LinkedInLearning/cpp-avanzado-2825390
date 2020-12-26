/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
using namespace std;

class Empleado{

public:

    float calcularSueldoMensual();
    string nombreCompleto();

    const string* getNombre() const;
    string getPrimerApellido() const;
    float getSueldoAnual() const;
    const int getNumeroDePagas() const;

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

int main(){
    
    return 0;
}

float Empleado::calcularSueldoMensual(){
    return (sueldoAnual/numeroDePagas);
}

string Empleado::nombreCompleto(){
    return (nombre + " " + primerApellido);
}

const string* Empleado::getNombre() const {
    return &nombre;
}

string Empleado::getPrimerApellido() const{
    return primerApellido;
}

float Empleado::getSueldoAnual() const{
    return sueldoAnual;
}

const int Empleado::getNumeroDePagas() const{
    return numeroDePagas;
}

void Empleado::setNombre(string nombre){
    this->nombre = nombre;
}

void Empleado::setPrimerApellido(string primerApellido){
    this->primerApellido = primerApellido;
}

void Empleado::setSueldoAnual(float sueldoAnual){
    this->sueldoAnual = sueldoAnual;
}