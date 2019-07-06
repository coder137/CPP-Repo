#include <iostream>
#include "player.h"
#include "hero.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Player player("coder137", 23);
    player.printInfo();
    cout << "------------" << endl;

    Hero hero(100, 57);
    hero.printInfo();
    // Invoking the super class method
    hero.Player::printInfo();

    // Protected Qualifier (Pg 884)

    // Operators and Copy constructors in derived classes

    return 0;
}
