#include "game.h"

Game::Game(int maxNum):maxNumber(maxNum), playerGuess(0), numOfGuesses(0){
    std::srand(time(NULL));
    randomNumber = std::rand() % maxNumber + 1;
    cout<<"GAME CONSTRUCTOR: Arvottiin luku: "<<randomNumber<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    cout << "Tietokone arpoi luvun valilta 1-" << maxNumber << endl;

    while(true){
        cout << "Anna arvaus: " << endl;
        cin >> playerGuess;

        numOfGuesses++;

        if(playerGuess > randomNumber){
            cout << "Luku on pienempi." << endl;
        }
        else if(playerGuess < randomNumber){
            cout << "Luku on suurempi." << endl;
        }
        else if(playerGuess == randomNumber){
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()
{
    cout<<"Peli paattyi! Arvasit oikein luvun: "<<randomNumber<<" ja kaytit arvauksia "<<numOfGuesses<<endl;
}



