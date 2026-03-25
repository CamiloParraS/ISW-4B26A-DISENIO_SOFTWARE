#include <iostream>

#include "../include/Publicacion.h"
#include "../include/Libro.h"
#include "../include/Disco.h"

int main()
{
    std::cout << "=== Publicacion por defecto ===" << std::endl;
    // Publicacion por defecto
    Publicacion publicacion1;
    std::cout << publicacion1 << std::endl;
    // Publicacion con datos
    Publicacion publicacion2("El Quijote", "Miguel de Cervantes");
    std::cout << publicacion2 << std::endl;

    std::cout << "\n=== Libro ===" << std::endl;
    // Libro por defecto
    Libro libro1;
    std::cout << libro1 << std::endl;
    // Libro con datos
    Libro libro2("Cien Años de Soledad", "Gabriel García Márquez", 417, 1967);
    std::cout << libro2 << std::endl;

    std::cout << "\n=== Disco ===" << std::endl;
    // Disco por defecto
    Disco disco1;
    std::cout << disco1 << std::endl;
    // Disco con datos
    Disco disco2("Thriller", "Michael Jackson", 42.19f, 15);
    std::cout << disco2 << std::endl;

    return 0;
}