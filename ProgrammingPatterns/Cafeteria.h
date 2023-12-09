﻿#pragma once
#include "Prerequisites.h"

//---------------- Ejemplo para el Pattern Decorator ----------------

// Clase concreta para la cafetería
class Cafeteria {
public:
    void prepararCafe() {
        cout << "Café preparado" << endl;
    }
};

// Clase base para los condimentos
class Condimento {
public:
    virtual void decorar() = 0;
};

// Decorador base para añadir la leche usando Condimento
class Leche : public Condimento {
public:
    Leche(Cafeteria* _condimento) : m_component(_condimento) {}

    void decorar() override {
        m_component->prepararCafe();
        cout << "Café con leche" << endl;
    }

private:
    Cafeteria* m_component;
};

// Decorador base para añadir el azúcar usando Condimento
class Azucar : public Condimento {
public:
    Azucar(Cafeteria* _condimento) : m_component(_condimento) {}

    void decorar() override {
        m_component->prepararCafe();
        cout << "Café con azúcar" << endl;
    }

private:
    Cafeteria* m_component;
};
