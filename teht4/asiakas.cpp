#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(string nimi, double luottoRaja) : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoRaja)
{

}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"Asiakas: "<< nimi <<endl;
    cout<<"Kayttotilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double amount)
{
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount)
{
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount)
{
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount)
{
    return luottotili.withdraw(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas &vastaanottaja)
{
    if(amount <= 0){
        cout<<"Tapahtui virhe. Siirron summa ei voi olla negatiivinen tai nolla."<<endl;
        return false;
    }
    if(kayttotili.withdraw(amount)){
        vastaanottaja.kayttotili.deposit(amount);
        cout<<"Siirretty "<<amount<<" euroa asiakkaalta "<<nimi
             <<" asiakkaalle "<<vastaanottaja.getNimi()<<"."<<endl;
        return true;
    }
    else{
        cout<<"Tapahtui virhe. Tililla ei tarpeeksi varoja"<<endl;
        return false;
    }
}
