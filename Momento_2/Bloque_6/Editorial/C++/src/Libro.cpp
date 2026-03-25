#include "../include/Libro.h"

Libro::Libro() : Publicacion(), numeroPaginas(0), anioPublicacion(0) {}
Libro::Libro(const std::string &titulo, const std::string &autor, int numeroPaginas, int anioPublicacion)
    : Publicacion(titulo, autor), numeroPaginas(numeroPaginas), anioPublicacion(anioPublicacion) {}

std::string Libro::mostrar() const
{
    return "Libro =[" + Publicacion::mostrar() + ", " + std::to_string(numeroPaginas) + " paginas, " + std::to_string(anioPublicacion) + "]";
}

std::ostream &operator<<(std::ostream &os, const Libro &libro)
{
    os << libro.mostrar();
    return os;
}