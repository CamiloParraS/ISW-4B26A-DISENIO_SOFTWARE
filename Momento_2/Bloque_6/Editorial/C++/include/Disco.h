#ifndef DISCO_H
#define DISCO_H

#include "Publicacion.h"

class Disco : public Publicacion
{
private:
    float duracion;
    int precio;

public:
    Disco();
    Disco(const std::string &titulo, const std::string &autor, float duracion, int precio);

    virtual std::string mostrar() const;
};

std::ostream &operator<<(std::ostream &os, const Disco &disco);

#endif // DISCO_H