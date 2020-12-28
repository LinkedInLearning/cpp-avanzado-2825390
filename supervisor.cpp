/*
 * Curso: C++ Avanzado
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */
#include <string>
#include <iostream>
using namespace std;
class Empleado;

class Supervisor {
public:
    void supervisaA(Empleado& empleado);
private:
    string nombre, primerApellido;
    Empleado* empleadoSupervisado;
};

class Empleado {
public:
    void esSupervisadoPor(Supervisor& supervisor);
private:
    string nombre, primerApellido;
    Supervisor* supervisor;
};

int main(){
    
    Empleado empleado;
    Supervisor supervisor;

    empleado.esSupervisadoPor(supervisor);
    supervisor.supervisaA(empleado);

    empleado.getSupervisor()->getNombre();
    
    return 0;
};

void Supervisor::supervisaA(Empleado& empleado){
    empleadoSupervisado = &empleado;
}

void Empleado::esSupervisadoPor(Supervisor& supervisor){
    this->supervisor = &supervisor;
}
