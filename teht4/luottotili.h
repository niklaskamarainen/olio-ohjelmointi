#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "pankkitili.h"

using namespace std;

class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    ~Luottotili();
    bool deposit(double) override;
    bool withdraw(double) override;

protected:
    double luottoRaja = 0;

};

#endif // LUOTTOTILI_H
