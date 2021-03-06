/*
  Archivo: Ciudadano.h
  Autor: Manuel Diaz Cod 1741652, Jeffrey Rios Cod 1744831
  Email: manuel.isaza@correounivalle.edu.co, jeffrey.rios@correounivalle.edu.co
  Fecha creación: 2018-04-17
  Fecha Última modificación: 2018-04-18
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Ciudadano
// Responsabilidad: Administrar informacion de un Ciudadano
// Colaboracion: Ninguna

#ifndef PARCIAL1_CIUDADANO_H
#define PARCIAL1_CIUDADANO_H

#include <string>
#include <vector>

using namespace std;

class Ciudadano
{
private:
    string nombre;
    int cedula;
    string ciudad;
    string departamento;
    string partidaPolitico;
    int tipoCiudadano;

public:
    Ciudadano();
    Ciudadano(string nombre, int cedula, string ciudad, string departamento, string partido, int tipoCiudadano);
    ~Ciudadano();
    void setNombre(string nombre);
    string getNombre();
    void setCedula(int cedula);
    int getCedula();
    void setCiudad(string ciudad);
    string getCiudad();
    void setDepartamento(string departamento);
    string getDepartamento();
    void setPartido(string partido);
    string getPartido();
    void setTipo(int tipo);
    int getTipo();

};

#endif //PARCIAL1_CIUDADANO_H


