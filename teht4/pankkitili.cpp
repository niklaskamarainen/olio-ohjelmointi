#include "pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(string omistaja) : omistaja(omistaja), saldo(0)
{

}

Pankkitili::~Pankkitili()
{

}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double amount)
{
    if(saldo >= 0){
        saldo += amount;
        return true;
    }
    else return false;
}

bool Pankkitili::withdraw(double amount)
{
    if(saldo >= 0 && saldo >= amount){
        saldo -= amount;
        return true;
    }
    else return false;
}
