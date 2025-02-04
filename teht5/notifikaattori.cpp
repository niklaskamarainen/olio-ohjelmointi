#include "notifikaattori.h"

Notifikaattori::Notifikaattori() : seuraajat(nullptr)
{
    cout<<"Luodaan notifikaattori "<<endl;
}

void Notifikaattori::lisaa(Seuraaja * uusi)
{
    cout<<"Notifikaattori lisasi seuraajan: "<<uusi->getNimi()<<endl;
    uusi->next = seuraajat;
    seuraajat = uusi;
}

void Notifikaattori::poista(Seuraaja * poistettava)
{
    if(!seuraajat){
        return;
    }

    cout<<"Notifikaattori poistaa seuraajan: "<<poistettava->getNimi()<<endl;

    if(seuraajat == poistettava){
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* nykyinen = seuraajat;
    while(nykyinen->next && nykyinen->next != poistettava){
        nykyinen = nykyinen->next;
    }

    if(nykyinen->next){
        nykyinen->next = poistettava->next;
    }

}

void Notifikaattori::tulosta()
{
    cout<<"Notifikaattorin seuraajat: "<<endl;
    Seuraaja* o = seuraajat;
    while(o != nullptr){
        cout<<"Seuraaja "<<o->getNimi()<<endl;
        o = o->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout<<"Notifikaattori postaa viestin: "<<viesti<<endl;
    Seuraaja* o = seuraajat;
    while(o != nullptr){
        o->paivitys(viesti);
        o = o->next;
    }
}
