#include <iostream>
#include <iomanip>
#include "functions.h"
#include <string>

using namespace std;

int main()
{
    char playAgain;
    do {
        system("cls");
        greet();
        int choice;
        menu();
        cin >> choice;
        if (choice == 4)
        {
            system("cls");
            exit(0);
        }
        system("cls");

        if (choice == 1)
        {
            greet();
            int forestHealth = 100;
            int waterQuality = 100;
            int speciesCount = 100;

            cout << "Welcome to Eco-Conservation Challenge!" << endl;
            cout << "You are responsible for the health of a virtual ecosystem." << endl;

            while (true) {
                displayStatus(forestHealth, waterQuality, speciesCount);

                cout << "Make a decision to conserve the ecosystem:" << endl;
                cout << "1. Address deforestation" << endl;
                cout << "2. Tackle pollution" << endl;
                cout << "3. Protect endangered species" << endl;
                // Add more decision options

                cout << "Enter your decision (1-3): ";
                int decision;
                cin >> decision;

                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(forestHealth, waterQuality, speciesCount, decision);

                if (isEcoSystemBalanced(forestHealth, waterQuality, speciesCount)) {
                    cout << "Congratulations! You've successfully conserved the ecosystem." << endl;
                    break;
                }
            }
        }


        cout << endl;
        cout << setw(108) << "Play again? (Y/N)";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}