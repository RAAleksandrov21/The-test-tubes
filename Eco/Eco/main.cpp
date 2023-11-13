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
        system("cls");  // Clear the console screen
        greet();  // Display game title and slogan
        airQuality = 0;  // Reset initial values
        waterQuality = 0;
        speciesCount = 0;
        int choice;
        menu();  // Display game mode menu
        cin >> choice;
        if (choice == 4)
        {
            system("cls");
            exit(0);  // Exit the program if the user chooses to quit
        }
        system("cls");  // Clear the console screen

        if (choice == 1 || choice == 2 || choice == 3)
        {
            greet();  // Display game title and slogan again

            cout << "Welcome to Eco-Conservation Challenge!" << endl;
            cout << "You are responsible for the health of a virtual ecosystem." << endl;

            while (true) {
                displayStatus(airQuality, waterQuality, speciesCount);
                int result1 = random1();  // Generate random scenarios
                int result2 = random2(result1);
                int result3 = random3(result1, result2);
                cout << endl;
                generateQuestion(result1);  // Display questions based on scenarios
                cout << endl;
                generatePicture(result1);  // Display pictures based on scenarios
                cout << endl;
                cout << "Enter your decision (1-3): " << endl;
                int decision;
                cin >> decision;
                cout << endl;
                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(airQuality, waterQuality, speciesCount, decision, result1);
                cout << endl;
                generateQuestion(result2);
                cout << endl;
                generatePicture(result2);
                cout << endl;
                cout << "Enter your decision (1-3): " << endl;
                cin >> decision;
                cout << endl;
                if (decision < 1 || decision > 3) {
                    cout << "Invalid decision! Please enter a valid choice." << endl;
                    continue;
                }

                applyDecision(airQuality, waterQuality, speciesCount, decision, result2);
                cout << endl;

                generateQuestion(result3);
                cout << endl;
                generatePicture(result3);
                cout << endl;
                cout << "Enter your decision (1-3): " << endl;
                cin >> decision;
                cout << endl;
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