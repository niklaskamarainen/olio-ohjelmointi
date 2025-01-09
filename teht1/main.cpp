#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnum;

    std::cout << "Anna korkein etsittävä luku: " << std::endl;
    std::cin >> maxnum;

    int arvausten_maara = game(maxnum);

    std::cout << "Arvauksia tarvittiin: " << arvausten_maara << std::endl;

    return 0;
}


int game(int maxnum){
    srand(static_cast<unsigned int>(time(0)));// tämä by ChatGPT

    int satunnaisluku = rand() % maxnum + 1;
    int arvaus = 0;
    int arvausten_maara = 0;

    std::cout << "Tietokone arpoi luvun väliltä 1-" << maxnum << std::endl;

    while(true){
        std::cout << "Anna arvaus: " << std::endl;
        std::cin >> arvaus;

        arvausten_maara++;

        if(arvaus > satunnaisluku){
            std::cout << "Luku on pienempi." << std::endl;
        }
        else if(arvaus < satunnaisluku){
            std::cout << "Luku on suurempi." << std::endl;
        }
        else if(arvaus == satunnaisluku){
            std::cout << "Oikein!" << std::endl;
            break;
        }
    }

    return arvausten_maara;
}
