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
    Empleado(string _nombre, string _primerApellido) : nombre(_nombre), primerApellido(_primerApellido){};
    string nombreCompleto() const;
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

class Supervisor : public Empleado {
public:
    Supervisor(string _nombre, string _primerApellido, int _idEquipo) : Empleado(_nombre, _primerApellido){
        idEquipo = _idEquipo;
    }
private:
    int idEquipo;
};

int main(){
    
    return 0;
};

string Empleado::nombreCompleto() const{
    return (nombre + " " + primerApellido);
}