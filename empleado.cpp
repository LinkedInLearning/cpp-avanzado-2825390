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
    Empleado(string _nombre, string _primerApellido) : nombre(_nombre), primerApellido(_primerApellido){};
    string nombreCompleto() const;
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

int main(){
    
    return 0;
};

string Empleado::nombreCompleto() const{
    return (nombre + " " + primerApellido);
}