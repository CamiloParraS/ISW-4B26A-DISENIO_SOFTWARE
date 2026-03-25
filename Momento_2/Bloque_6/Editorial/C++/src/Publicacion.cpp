#include "Publicacion.h"

Publicacion::Publicacion() : titulo(""), autor("") {}
Publicacion::Publicacion(const std::string &titulo, const std::string &autor) : titulo(titulo), autor(autor) {}

std::string Publicacion::mostrar() const
{
    return "Publicacion =[" + titulo + ", " + autor + "]";
}

std::ostream &operator<<(std::ostream &os, const Publicacion &publicacion)
{
    os << publicacion.mostrar();
    return os;
}