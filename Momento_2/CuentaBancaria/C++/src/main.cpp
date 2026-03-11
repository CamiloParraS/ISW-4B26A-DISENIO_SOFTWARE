#include <iostream>
#include "../include/CuentaBancaria.h"

int main() {
    CuentaBancaria cuenta1; // Default constructor
    CuentaBancaria cuenta2(1000.0, "Alice"); // Constructor with parameters

    cuenta1.depositar(500.0);
    cuenta1.setTitular("Bob Miranda");
    std::cout << cuenta1 << std::endl;

    cuenta1.retirar(600.0);
    std::cout << cuenta1 << std::endl;


    std::cout << cuenta2 << std::endl;
}