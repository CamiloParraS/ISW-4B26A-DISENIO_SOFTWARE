#include <iostream>

#include "../include/Publicacion.h"

int main()
{
    // Publicacion por defecto
    Publicacion publicacion1;
    std::cout << publicacion1 << std::endl;
    // Publicacion con datos
    Publicacion publicacion2("El Quijote", "Miguel de Cervantes");
    std::cout << publicacion2 << std::endl;

    return 0;
}