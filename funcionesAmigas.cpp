/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
#include <iostream>
using namespace std;

class Supervisor;

class Empleado {

public:

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);
    friend float calcularSueldoMedioAnualPorDepartamento(Supervisor* supervisor, Empleado* empleado1, Empleado* empleado2);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

class Supervisor {

public:

    void setNombre(string nombre);
    void setPrimerApellido(string primerApellido);
    void setSueldoAnual(float sueldoAnual);
    friend float calcularSueldoMedioAnualPorDepartamento(Supervisor* supervisor, Empleado* empleado1, Empleado* empleado2);

private:

    string nombre, primerApellido;
    float sueldoAnual;
    static const int numeroDePagas = 12;
};

float calcularSueldoMedioAnualPorDepartamento(Supervisor* supervisor, Empleado* empleado1, Empleado* empleado2){
    return (supervisor->sueldoAnual + empleado1->sueldoAnual + empleado2->sueldoAnual)/3;
}

int main(){

    Empleado* p_empleado1 = new Empleado();
    Empleado* p_empleado2 = new Empleado();
    Supervisor* p_supervisor = new Supervisor();

    p_empleado1->setSueldoAnual(50500);
    p_empleado2->setSueldoAnual(120800);
    p_supervisor->setSueldoAnual(150000);

    cout << "Sueldo medio: " << calcularSueldoMedioAnualPorDepartamento(p_supervisor, p_empleado1, p_empleado2) << "€" << endl;
    return 0;
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

void Supervisor::setNombre(string nombre){
    this->nombre = nombre;
}
void Supervisor::setPrimerApellido(string primerApellido){
    this->primerApellido = primerApellido;
}
void Supervisor::setSueldoAnual(float sueldoAnual){
    this->sueldoAnual = sueldoAnual;
}