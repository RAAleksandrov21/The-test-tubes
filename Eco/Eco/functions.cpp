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


int random()
{
    srand(time(NULL));
    int a = rand() % 9 + 1;
    cout << a;
}


void generateQuestion(int question)
{
    switch (question)
    {
        case 1:
            cout << "Deforestation";
            break;
        case 2:
            cout << "Air Pollution";
            break;
        case 3:
            cout << "Water Pollution";
            break;
        case 4:
            cout << "Climate Change";
            break;
        case 5:
            cout << "Habitat Conservation";
            break;
        case 6:
            cout << "Fishing Quotas";
            break;
        case 7:
            cout << "Soil Erosion";
            break;
        case 8:
            cout << "Waste Management";
            break;
        case 9:
            cout << "Invasive Species";
            break;
    }
}


struct EcoSystem {
    int airQuality;
    int waterQuality;
    int speciesCount;
};

void displayStatus(int airQuality, int waterQuality, int speciesCount) {
    cout << "Ecosystem Status:" << endl;
    cout << "Air Quality: " << airQuality << endl;
    cout << "Water Quality: " << waterQuality << endl;
    cout << "Species Count: " << speciesCount << endl;
}

void applyDecision(int& airQuality, int& waterQuality, int& speciesCount, int decision, int answer) {
    switch (answer) {
    case 1:
        switch (decision) {
        case 1:
            airQuality += 10;
            waterQuality += 0;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 5;
            waterQuality += 0;
            speciesCount += 0;
            break;
        case 3:
            airQuality += 5;
            waterQuality += 0;
            speciesCount += 0;
            break;
        }
    case 2:
        switch (decision) {
        case 1:
            airQuality += 10;
            waterQuality += 5;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 0;
            break;
        case 3:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 2;
            break;
        }
    case 3:
        switch (decision) {
        case 1:
            airQuality += 0;
            waterQuality += 10;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 0;
            waterQuality += 5;
            speciesCount += 10;
            break;
        case 3:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        }
    case 4:
        switch (decision) {
        case 1:
            airQuality += 10;
            waterQuality += 5;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 5;
            waterQuality += 2;
            speciesCount += 2;
            break;
        case 3:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        }
    case 5:
        switch (decision) {
        case 1:
            airQuality += 0;
            waterQuality += 5;
            speciesCount += 10;
            break;
        case 2:
            airQuality += 0;
            waterQuality += 0;
            speciesCount += 10;
            break;
        case 3:
            airQuality += 0;
            waterQuality += 0;
            speciesCount += 10;
            break;
        }
    case 6:
        switch (decision) {
        case 1:
            airQuality += 0;
            waterQuality += 0;
            speciesCount += 10;
            break;
        case 2:
            airQuality += 0;
            waterQuality += 5;
            speciesCount += 10;
            break;
        case 3:
            airQuality += 0;
            waterQuality += 0;
            speciesCount += 5;
            break;
        }
    case 7:
        switch (decision) {
        case 1:
            airQuality += 5;
            waterQuality += 0;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 5;
            waterQuality += 0;
            speciesCount += 5;
            break;
        case 3:
            airQuality += 10;
            waterQuality += 10;
            speciesCount += 20;
            break;
        }
    case 8:
        switch (decision) {
        case 1:
            airQuality += 10;
            waterQuality += 10;
            speciesCount += 10;
            break;
        case 2:
            airQuality += 10;
            waterQuality += 10;
            speciesCount += 10;
            break;
        case 3:
            airQuality += 10;
            waterQuality += 10;
            speciesCount += 20;
            break;
        }
    case 9:
        switch (decision) {
        case 1:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        case 2:
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        case 3:
            airQuality += 10;
            waterQuality += 10;
            speciesCount += 20;
            break;
        }
    }
}

bool isEcoSystemBalanced(int airQuality, int waterQuality, int speciesCount) {
    return (airQuality > 50 && waterQuality > 50 && speciesCount > 50);
}