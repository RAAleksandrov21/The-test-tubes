#include <iostream>
#include <iomanip>
#include "functions.h"
#include <string>

using namespace std;

int airQuality = 0;
int waterQuality = 0;
int speciesCount = 0;

int main()
{
    char playAgain;
    bool failed = false;
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

        if (choice == 1 || choice == 2 || choice == 3)
        {
            greet();

            cout << "Welcome to Eco-Conservation Challenge!" << endl;
            cout << "You are responsible for the health of a virtual ecosystem." << endl;

            while (true) {
                displayStatus(airQuality, waterQuality, speciesCount);
                int result1 = random1();
                int result2 = random2(result1);
                int result3 = random3(result1, result2);
                generateQuestion(result1);
                cout << "Enter your decision (1-3): ";
                int decision;
                cin >> decision;

                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(airQuality, waterQuality, speciesCount, decision, result1);

                generateQuestion(result2);

                cout << "Enter your decision (1-3): ";
                cin >> decision;

                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(airQuality, waterQuality, speciesCount, decision, result2);

                generateQuestion(result3);

                cout << "Enter your decision (1-3): ";
                cin >> decision;

                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(airQuality, waterQuality, speciesCount, decision, result3);


                if (isEcoSystemBalanced(airQuality, waterQuality, speciesCount, choice)) {
                    cout << "Congratulations! You've successfully conserved the ecosystem." << endl;
                    break;
                }
                else
                {
                    cout << "You couldn't conserve the ecosystem :(" << endl;
                    failed = true;
                    break;
                }
            }
        }
        displayStatus(airQuality, waterQuality, speciesCount);

        cout << endl;
        cout << setw(108) << "Play again? (Y/N)";
        cin >> playAgain;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (playAgain == 'y' || playAgain == 'Y');
}