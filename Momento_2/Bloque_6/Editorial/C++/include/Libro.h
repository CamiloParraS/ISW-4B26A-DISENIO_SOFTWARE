#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"

class Libro : public Publicacion
{
private:
    int numeroPaginas;
    int anioPublicacion;

public:
    Libro();
    Libro(const std::string &titulo, const std::string &autor, int numeroPaginas, int anioPublicacion);

    virtual std::string mostrar() const override;
};

std::ostream &operator<<(std::ostream &os, const Libro &libro);

#endif // LIBRO_H