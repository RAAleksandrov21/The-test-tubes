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
