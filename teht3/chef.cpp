#include "chef.h"

Chef::Chef(string n)
{
    chefName = n;
    cout<<"Chef "<<chefName<<" constructor"<<endl;
}



Chef::~Chef()
{
    cout<<"Chef destructor"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    cout<<"Chef "<<getName()<<" makes "<<portions<<" portions salad."<<endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    cout<<"Chef "<<getName()<<" makes "<<portions<<" portions soup."<<endl;
    return portions;
}
