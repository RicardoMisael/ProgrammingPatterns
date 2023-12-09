#include "Prerequisites.h"
#include "Singleton.h"
#include "ActivityRegister.h"
#include "Factory.h"
#include "AbstractFactory.h"
#include "Builder.h"
#include "Pizza.h"
#include "Adapter.h"
#include "Círculo.h"
#include "Prototype.h"
#include "Decorator.h"
#include "Cafeteria.h"
#include "Composite.h"
#include "Archivo.h"

int main() {
	// Singleton
	/*
	Singleton* SingleMan = Singleton::getInstance();
	SingleMan->setValue(27);
	Singleton* SingleMan2 = Singleton::getInstance();
	std::cout << "Value: " << SingleMan2->getValue() << std::endl;
	*/

	// Singleton Register
	/*
	RegistroActividad* Registro = RegistroActividad::getInstance();
	RegistroActividad* Registro2 = RegistroActividad::getInstance();
	Registro->addActivity("Primer actividad");
	Registro->addActivity("Segunda actividad");
	Registro->addActivity("Tercea actividad");
	Registro->addActivity("Cuarta actividad");
	Registro2->showActivities();
	*/

	// Factory
	/*
	Factory* factory = new ConcreteFactory();
	Product* product = factory->crearProducto();
	product->operacion();
	delete factory;
	delete product;
	*/

	// Factory Vehículos
	/*
	FactoryVehiculos* factoryV = new ConcreteFactoryCoche();
	Vehiculo* vehiculo = factoryV->crearVehiculo();
	vehiculo->descripcion();
	delete factoryV;
	delete vehiculo;
	*/

	// Abstract Factory
	/*
	AbstractFactory* AFactory = new ConcreteAbsFactory();
	ProductA* productA = AFactory->crearProductoA();
	ProductB* productB = AFactory->crearProductoB();
	productA->operationA();
	productB->operationB();
	delete AFactory;
	delete productA;
	delete productB;
	*/

	// Builder
	/*
	Builder* constructor = new BuilderConcreto();
	Director director(constructor);
	director.build();
	bProduct* producto = constructor->obtenerProducto();
	producto->print();
	delete constructor;
	delete producto;
	*/

	// Pizza Builder
	/*
	Oven* construct = new HawaianPizza();
	Oven* construct1 = new VeggiePizza();
	Chef chef(construct);
	Chef chef(construct1);
	chef.build();
	Pizza* pizza = construct->getProduct();
	pizza->print();
	Pizza* pizza1 = construct1->getProduct();
	pizza1->print();
	delete construct;
	delete pizza;
	*/

	// Adapter
	/*
	InterfazVieja* objViejo = new InterfazVieja();
	InterfazNueva* objNuevo = new Adapter(objViejo);
	objNuevo->newMethod();
	delete objViejo;
	delete objNuevo;
	*/

	// Adapter de Círculo
	/*
	Circulo* circle = new Circulo();
	Cuadrado* square = new Cuadrado();
	Dibujable* AdCircle = new CirculoAdapter(circle);
	Dibujable* AdSquare = new CuadradoAdapter(square);
	AdCircle->dibujar();
	AdSquare->dibujar();
	delete circle;
	delete square;
	delete AdCircle;
	delete AdSquare;
	*/

	// Prototype
	/*
	Prototype* prototype = new PrototipocConcreto();
	prototype->configurar("Ejemplo");
	Prototype* copia = prototype->clonar();
	prototype->print();
	copia->print();
	delete prototype;
	delete copia;
	*/

	// Decorator
	/*
	ConcreteComponent* objeto = new ConcreteComponent();
	ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(objeto);
	ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(decoratorA);
	objeto->operacion();
	decoratorA->operacion();
	decoratorB->operacion();
	delete objeto;
	delete decoratorA;
	delete decoratorB;
	*/

	// Cafetería Decorator
	/*
	Cafeteria* cafeteria = new Cafeteria();
	Leche* cafeLeche = new Leche(cafeteria);
	Azucar* cafeAzucar = new Azucar(cafeteria);
	cafeteria->prepararCafe();
	cafeLeche->decorar();
	cafeAzucar->decorar();
	delete cafeteria;
	delete cafeAzucar;
	delete cafeLeche;
	*/

	// Composite
	/*
	leaf* hoja1 = new leaf();
	leaf* hoja2 = new leaf();
	Composite* composite = new Composite();
	composite->addLeaf(hoja1);
	composite->addLeaf(hoja2);
	composite->operacion();
	delete hoja1;
	delete hoja2;
	delete composite;
	*/

	// Archivo Composite
	/*
	SistemaArchivo* archivo1 = new SistemaArchivo();
	SistemaArchivo* archivo2 = new SistemaArchivo();
	SistemaCarpeta* carpeta = new SistemaCarpeta();
	carpeta->agregarSistema(archivo1);
	carpeta->agregarSistema(archivo2);
	carpeta->mostrarInfo();
	delete archivo1;
	delete archivo2;
	delete carpeta;
	*/

	return 0;
}

