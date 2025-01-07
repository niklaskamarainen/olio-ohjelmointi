#include <iostream>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));// tämä by ChatGPT

    int satunnaisluku = rand() % 20 + 1;
    int arvaus = 0;

    std::cout << "Tietokone arpoi luvun 1-20." << std::endl;

    while(true){
        std::cout << "Anna arvaus: " << std::endl;
        std::cin >> arvaus;

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

    return 0;
}
