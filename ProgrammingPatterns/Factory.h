﻿#pragma once
#include "Prerequisites.h"

// Esta clase está encargada de ser el objeto base de los productos que se crearán
class Product {
public:
    virtual void operacion() = 0;
};

// Esta clase es el objeto base que sirve para crear las instancias de cada producto con la función "crearProducto()"
class Factory {
public:
    virtual Product* crearProducto() = 0;
};

// Esta clase se usa para realizar las operaciones tras recibir el producto
class ConcreteProduct : public Product {
public:
    void operacion() override {
        cout << "realiza una operación" << endl;
    }
};

// Se usa para crear nuevos productos
class ConcreteFactory : public Factory {
public:
    Product* crearProducto() override {
        return new ConcreteProduct();
    }
};

// Ejemplo del patrón Factory

// Clase encargada de ser el objeto base de los vehículos que se crearán
class Vehiculo {
public:
    virtual void descripcion() {
        cout << "soy un vehículo" << endl;
    }
};

// Esta clase se usa para realizar las operaciones de coche tras recibir un vehículo
class ConcreteCoche : public Vehiculo {
public:
    void descripcion() override {
        cout << "soy un coche" << endl;
    }
};

// Esta clase se usa para realizar las operaciones de bicicleta tras recibir el vehículo
class ConcreteBicicleta : public Vehiculo {
public:
    void descripcion() override {
        cout << "soy una bicicleta" << endl;
    }
};

// Esta clase es el objeto base que sirve para crear las instancias de cada vehículo con la función "crearVehiculo()"
class FactoryVehiculos {
public:
    virtual Vehiculo* crearVehiculo() = 0;
};

// Esta clase crea nuevos vehículos de tipo coche
class ConcreteFactoryCoche : public FactoryVehiculos {
public:
    Vehiculo* crearVehiculo() override {
        return new ConcreteCoche();
    }
};

// Esta clase crea nuevos vehículos de tipo bicicleta
class ConcreteFactoryBicicleta : public FactoryVehiculos {
public:
    Vehiculo* crearVehiculo() override {
        return new ConcreteBicicleta();
    }
};
