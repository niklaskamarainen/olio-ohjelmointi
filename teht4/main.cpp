#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas asiakas1("Matti Meikalainen", 2000);
    Asiakas asiakas2("Maija Meikalainen", 500);

    asiakas1.showSaldo();
    asiakas2.showSaldo();

    asiakas1.talletus(200);
    asiakas1.showSaldo();

    asiakas1.tiliSiirto(200, asiakas2);

    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}
