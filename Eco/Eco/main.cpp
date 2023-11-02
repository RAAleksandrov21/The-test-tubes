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


        cout << endl;
        cout << setw(108) << "Play again? (Y/N)";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}