#include <iostream>
#include "../include/CuentaBancaria.h"
#include <string>

CuentaBancaria::CuentaBancaria() : saldo(0.0), titular(" ") {}
CuentaBancaria::CuentaBancaria(double saldoInicial, const std::string& titular)
    : saldo(saldoInicial), titular(titular) {}

double CuentaBancaria::getSaldo() const {
    return saldo;
}

void CuentaBancaria::setSaldo(double saldo) {
    this->saldo = saldo;
}

std::string CuentaBancaria::getTitular() const {
    std::string masked = "";
    
    for (int i = 0; i < titular.length(); ++i) {
        if (i == 0 || titular[i - 1] == ' ') {
            masked += titular[i];
        } 
        else if (titular[i] == ' ') {
            masked += ' ';
        } 
        else {
            masked += '*';
        }
    }
    
    return masked;
}

void CuentaBancaria::setTitular(const std::string& titular) {
    this->titular = titular;
}

void CuentaBancaria::depositar(double cantidad) {
    saldo += cantidad;
}

bool CuentaBancaria::retirar(double cantidad) {
    if (cantidad > saldo) {
        std::cout << "Fondos insuficientes para retirar " << cantidad << ". Saldo actual: " << saldo << std::endl;
        return false; 
    }
    saldo -= cantidad;
    return true; 
}

std::ostream& operator<<(std::ostream& os, const CuentaBancaria& cuenta) {
    os << "CuentaBancaria[titular: " << cuenta.getTitular() << ", saldo: " << cuenta.getSaldo() << "]";
    return os;
}