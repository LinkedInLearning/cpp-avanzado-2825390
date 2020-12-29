/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
#include <iostream>
using namespace std;

int main(){

    Empleado* p_empleado = new Empleado("Evan", "Craft");
    cout << p_empleado->nombreCompleto() << endl;
    
    return 0;
}
