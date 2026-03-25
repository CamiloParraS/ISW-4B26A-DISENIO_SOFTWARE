#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <ostream>

class Publicacion
{
private:
    std::string titulo;
    std::string autor;

public:
    Publicacion();
    Publicacion(const std::string &titulo, const std::string &autor);

    virtual std::string mostrar() const;
};

std::ostream &operator<<(std::ostream &os, const Publicacion &publicacion);

#endif // PUBLICACION_H