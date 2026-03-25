#include "../include/Disco.h"

Disco::Disco() : Publicacion(), duracion(0.0f), precio(0) {}
Disco::Disco(const std::string &titulo, const std::string &autor, float duracion, int precio)
    : Publicacion(titulo, autor), duracion(duracion), precio(precio) {}

std::string Disco::mostrar() const
{
    return "Disco =[" + Publicacion::mostrar() + ", " + std::to_string(duracion) + " minutos, $" + std::to_string(precio) + "]";
}

std::ostream &operator<<(std::ostream &os, const Disco &disco)
{
    os << disco.mostrar();
    return os;
}
