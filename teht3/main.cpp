#include <iostream>
#include "italianchef.h"
#include "chef.h"

using namespace std;

int main()
{
    Chef chef("Gordon");
    chef.makeSalad(11);
    chef.makeSoup(14);

    ItalianChef italianchef("Mario");
    italianchef.makeSalad(9);
    italianchef.askSecret("pizza", 12, 12);


    return 0;
}
