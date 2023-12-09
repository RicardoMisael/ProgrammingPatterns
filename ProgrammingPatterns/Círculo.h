#pragma once
#include "Prerequisites.h"

//---------------- Ejemplo para el Pattern Adapter ----------------

// En este caso, la clase depreciada es un círculo
class Circulo {
public:
    virtual void dibujarCirculo() {
        cout << "Se ha dibujado un círculo." << endl;
    }
};

// En este caso, la clase depreciada es un cuadrado
class Cuadrado {
public:
    virtual void dibujarCuadrado() {
        cout << "Se ha dibujado un cuadrado." << endl;
    }
};

// Clase que funciona como una nueva interfaz para cuadrado y círculo
class Dibujable {
public:
    virtual void dibujar() {
        cout << "Método nuevo llamado." << endl;
    }
};

// Implementa la clase Dibujable heredando el círculo para poder dibujarlo
class CirculoAdapter : public Dibujable {
public:
    CirculoAdapter(Circulo* circulo) : m_Circulo(circulo) {}

    void dibujar() override {
        cout << "Adaptador llamado para dibujar un círculo." << endl;
        m_Circulo->dibujarCirculo();
    }

private:
    Circulo* m_Circulo;
};

// Implementa la clase Dibujable heredando el cuadrado para poder dibujarlo
class CuadradoAdapter : public Dibujable {
public:
    CuadradoAdapter(Cuadrado* cuadrado) : m_cuadrado(cuadrado) {}

    void dibujar() override {
        cout << "Adaptador llamado para dibujar un cuadrado." << endl;
        m_cuadrado->dibujarCuadrado();
    }

private:
    Cuadrado* m_cuadrado;
};
