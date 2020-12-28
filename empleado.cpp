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
    Empleado(string _nombre, string _primerApellido);
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

class Supervisor {
public:
    Supervisor(string _nombre, string _primerApellido);
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

int main(){

    /* Este código se utiliza sólo para realizar
    una intrucción al concepto de herencia en C++. */

    return 0;
};