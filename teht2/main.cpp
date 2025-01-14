#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNum;

    cout << "Tervetuloa arvauspeliin! Anna suurin arvottava luku: " << endl;
    cin >> maxNum;

    Game P(maxNum);
    P.play();

    return 0;
}
