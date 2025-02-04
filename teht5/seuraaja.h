#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>

using namespace std;

class Seuraaja
{
private:
    string nimi;
public:
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
    Seuraaja* next = nullptr;
};

#endif // SEURAAJA_H
