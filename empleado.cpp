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