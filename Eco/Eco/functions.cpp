#include <iostream>
#include <iomanip>
#include "functions.h"
#include <string>

using namespace std;

void greet()  //Prints the name of the game and a slogan
{
    cout << setw(129) << "    ______           ____                  __ " << endl;
    cout << setw(129) << "   / ____/________  / __ \\__  _____  _____/ /_" << endl;
    cout << setw(129) << "  / __/ / ___/ __ \\/ / / / / / / _ \\/ ___/ __/" << endl;
    cout << setw(129) << " / /___/ /__/ /_/ / /_/ / /_/ /  __(__  ) /_  " << endl;
    cout << setw(129) << "/_____/\\___/\\____/\\___\\_\\__,_/\\___/____/\\__/  " << endl;
    cout << endl;
    cout << setw(115) << "ELEMENTS UNLEASHED" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << endl;
    }
}


void menu()  // Main Menu
{
    cout << setw(116) << "Choose a gamemode:" << endl;
    cout << endl;

    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|          Ecology         |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|          Biology         |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|         Chemistry        |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|           Quit           |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << endl;
    cout << setw(119) << "1. Ecology - instructions" << endl;
    cout << setw(119) << "2. Biology - instructions" << endl;
    cout << setw(121) << "3. Chemistry - instructions" << endl;
    cout << setw(101) << "4. Quit" << endl;
    cout << endl;
    cout << setw(113) << "Enter your choice: ";
}




struct EcoSystem {
    int forestHealth;
    int waterQuality;
    int speciesCount;
};

void displayStatus(int forestHealth, int waterQuality, int speciesCount) {
    cout << "Ecosystem Status:" << endl;
    cout << "Forest Health: " << forestHealth << endl;
    cout << "Water Quality: " << waterQuality << endl;
    cout << "Species Count: " << speciesCount << endl;
}

void applyDecision(int& forestHealth, int& waterQuality, int& speciesCount, int decision) {
    switch (decision) {
    case 1: // Decision 1: Address deforestation
        forestHealth += 10;
        waterQuality -= 5;
        speciesCount -= 10;
        break;
    case 2: // Decision 2: Tackle pollution
        forestHealth -= 5;
        waterQuality += 10;
        speciesCount -= 5;
        break;
    case 3: // Decision 3: Protect endangered species
        forestHealth -= 10;
        waterQuality -= 10;
        speciesCount += 20;
        break;
        // Add more decisions and their effects
    }
}

