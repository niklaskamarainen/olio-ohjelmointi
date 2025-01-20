#include "italianchef.h"


ItalianChef::ItalianChef(string n):Chef(n)
{
    chefName = n;
    cout<<"ItalianChef "<<chefName<<" constructor"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef destructor"<<endl;
}

bool ItalianChef::askSecret(string guess, int f, int w)
{
    cout<<"Asking secret"<<endl;
    if(guess == password){
        cout<<"Password OK!"<<endl;
        flour = f;
        water = w;
        makepizza(f, w);
        return true;
    }
    else{

        return false;
    }


}

int ItalianChef::makepizza(int f, int w)
{
    int pizzas = min(f/5, w/5);

    if(pizzas == 1){
        cout<<"Chef "<<getName()<<" makes "<<pizzas<<" pizza."<<endl;
    }
    else{
        cout<<"Chef "<<getName()<<" makes "<<pizzas<<" pizzas."<<endl;
    }

    return pizzas;
}
