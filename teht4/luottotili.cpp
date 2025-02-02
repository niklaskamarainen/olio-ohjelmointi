#include "luottotili.h"
#include <iostream>

Luottotili::Luottotili(string omistaja, double raja) : Pankkitili(omistaja),  luottoRaja(raja)
{
    saldo = luottoRaja;
}

Luottotili::~Luottotili()
{

}

bool Luottotili::deposit(double amount)
{
    if(amount > 0){
        saldo += amount;
        if(saldo > 0){
            saldo = 0; //Kaikki ylimääräinen menee velanmaksuun
        }
        return true;
    }
    else return false;
}

bool Luottotili::withdraw(double amount)
{
    if(amount > 0 && (saldo - amount) >= luottoRaja){
        saldo -= amount;
        return true;
    }
    else return false;
}
