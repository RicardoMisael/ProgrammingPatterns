#pragma once

class Singleton
{
public:
    // Método estático para obtener la instancia única del Singleton
    static Singleton& getInstance() {
        static Singleton instance; // Inicialización estática local garantiza una única instancia
        return instance;
    }

    // Destructor por defecto
    ~Singleton() = default;

    // Establece el valor de la variable m_value
    void setValue(int _v) {
        m_value = _v;
    }

    // Obtiene el valor de la variable m_value
    int getValue() const {
        return m_value;
    }

private:
    // Constructor privado para evitar instanciación directa desde fuera de la clase
    Singleton() : m_value(0) {}

    int m_value; // Variable de instancia para almacenar un valor
};

