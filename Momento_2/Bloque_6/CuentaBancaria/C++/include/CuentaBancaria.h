#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H
#include <iostream>
#include <string>

class CuentaBancaria
{
private:
    double saldo;
    std::string titular;
public:
    CuentaBancaria();
    CuentaBancaria(double saldoInicial, const std::string& titular);
    double getSaldo() const;
    std::string getTitular() const;
    void setTitular(const std::string& titular);
    void setSaldo(double saldo);
    void depositar(double cantidad);
    bool retirar(double cantidad);
};

std::ostream& operator<<(std::ostream& os, const CuentaBancaria& cuenta);

#endif // CUENTABANCARIA_H