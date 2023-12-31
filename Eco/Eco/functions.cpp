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
    cout << setw(121) << "|           Easy           |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|          Normal          |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|           Hard           |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "|           Quit           |" << endl;
    cout << setw(121) << "============================" << endl;
    cout << endl;
    cout << setw(140) << "1. Easy - you have to score more than five points in every category" << endl;
    cout << setw(141) << "2. Normal - you have to score more than ten points in every category" << endl;
    cout << setw(143) << "3. Hard - you have to score more than fifteen points in every category" << endl;
    cout << setw(80) << "4. Quit" << endl;
    cout << endl;
    cout << setw(113) << "Enter your choice: ";
}


void seedRandomGenerator() { 
    static bool seeded = false;
    if (!seeded) {
        srand(time(NULL));
        seeded = true;
    }
}

int generateDifferentRandom(int previousResult1, int previousResult2) {
    int newResult;
    do {
        newResult = rand() % 9 + 1;
    } while (newResult == previousResult1 || newResult == previousResult2);
    return newResult;
}

int random1() {
    seedRandomGenerator();
    return generateDifferentRandom(0, 0);
}

int random2(int previousResult1) {
    seedRandomGenerator();
    return generateDifferentRandom(previousResult1, 0);
}

int random3(int previousResult1, int previousResult2) {
    seedRandomGenerator();
    return generateDifferentRandom(previousResult1, previousResult2);
}


void generatePicture(int picture)
{
    switch (picture)
    {
    case 1:
        cout << "        /\\                                 /\\ " << endl;
        cout << "       /  \\                               /  \\ " << endl;
        cout << "      /    \\             /\\              /    \\   " << endl;
        cout << "     /      \\           /  \\            /      \\     " << endl;
        cout << "    /        \\         /    \\          /        \\       " << endl;
        cout << "   /          \\       /      \\        /          \\         " << endl;
        cout << "  /            \\     /        \\      /            \\            " << endl;
        cout << " /______________\\   /__________\\    /______________\\             " << endl;
        cout << "       |||||            |||||             |||||" << endl;
        cout << "       |||||            |||||             |||||" << endl;
        cout << "       |||||            |||||             |||||" << endl;
        break;
    case 2:
        cout << "                 |-_'-,              " << endl;
        cout << "                 |-_'-'                " << endl;
        cout << "        _        |-_'/        " << endl;
        cout << "       /;-,_     |-_'       " << endl;
        cout << "      /-.-;,-,___|'          " << endl;
        cout << "     /;-;-;-;_;_/|\\_ _ _ _ _   " << endl;
        cout << "        x_( __`|_P_|`-;-;-;,|       " << endl;
        cout << "        |\\ \\    _||   `-;-;-' " << endl;
        cout << "        | \\`   -_|.      '-' " << endl;
        cout << "        | /   /-_| ` " << endl;
        cout << "        |/   ,'-_|  \\" << endl;
        cout << "        /____|'-_|___\\" << endl;
        cout << "  ___]__|_\\-_'|_[___" << endl;
        break;
    case 3:
        cout << "              /\\ " << endl;
        cout << "             /\\/\\ " << endl;
        cout << "            _|/\\|_ " << endl;
        cout << "           |______| " << endl;
        cout << "            |\\/\\/| " << endl;
        cout << "           \\|/\\/\\|   .''`/: " << endl;
        cout << "   :\\'\\'.    \\`\\'. |  ||  /  : " << endl;
        cout << "   : \\ ||   |\\ |||  || /    o " << endl;
        cout << "   j _\\||__/__\\||_\\_||/___ " << endl;
        cout << "     |___________________| " << endl;
        cout << "      |  |   |   |   |  | " << endl;
        cout << "~~~~~~|~~|~~~|~~~|~~~|~~|~~~~~~" << endl;
        break;
    case 4:
        cout << "        _________________" << endl;
        cout << "      ._)               (_." << endl;
        cout << "      |    'F  ,-. 'C     |" << endl;
        cout << "      |        | |___ 40  |" << endl;
        cout << "      | 100 ---|#|        |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |  90 '''|#|___ 30  |" << endl;
        cout << "      |  80 ___|#|        |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |  70 ---|#|___ 20  |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |  60 '''|#|        |" << endl;
        cout << "      |  50 ___|#|___ 10  |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |  40 ---|#|        |" << endl;
        cout << "      |        |#|___ 0   |" << endl;
        cout << "      |  30 '''|#|        |" << endl;
        cout << "      |  20 ___|#|        |" << endl;
        cout << "      |        |#|___-10  |" << endl;
        cout << "      |  10 ---|#|        |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |   0 '''|#|___-20  |" << endl;
        cout << "      | -10 ___|#|        |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      | -20 ---|#|___-30  |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      | -30 '''|#|        |" << endl;
        cout << "      | -40 ___|#|___-40  |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |        |#|        |" << endl;
        cout << "      |       (###)       |" << endl;
        cout << "      |_       `-'       _|" << endl;
        cout << "      ' )_______________( '" << endl;
        break;
    case 5:
        cout << "             ,-._" << endl;
        cout << "           _.-'  '--." << endl;
        cout << "         .'      _  -\\_" << endl;
        cout << "        / .----.`_.'----'" << endl;
        cout << "        ;/     `" << endl;
        cout << "       /_;" << endl;
        cout << endl;
        break;
    case 6:
        cout << "               .--." << endl;
        cout << "             _/__  )  " << endl;
        cout << "              0)0`>|_  " << endl;
        cout << "        /V\\   \\-_.-_ `; " << endl;
        cout << "       /'_/\\_ /_.   './ " << endl;
        cout << "      ;._ `/ ``      |  " << endl;
        cout << "      |^ '-;._   _.' |  " << endl;
        cout << "      |^ ^  ||```    |  " << endl;
        cout << "    .'| ^  ^||       |   " << endl;
        cout << "   `'`|^ ^ ^|\\__,.--;'  " << endl;
        cout << "      | ^ ^ | |     |" << endl;
        cout << "      ;^ ^ ^; |     /" << endl;
        cout << "       \\^ ^/\\)|    |" << endl;
        cout << "        | ^|  |    |" << endl;
        cout << "       /'-\\  \\_   |" << endl;
        cout << "      / ..  |  |'- |" << endl;
        cout << "      |/  `\\|  |   |" << endl;
        cout << "               |   |" << endl;
        cout << "              _|,__|" << endl;
        cout << "             (_/  .'" << endl;
        cout << "              (_.'" << endl;
        break;
    case 7:
        cout << "           /\\ " << endl;
        cout << "         /**\\ " << endl;
        cout << "        /****\\   /\\ " << endl;
        cout << "       /      \\ /**\\ " << endl;
        cout << "      /  /\\    /    \\        /\\    /\\  /\\      /\\            /\\/\\/\\  /\\ " << endl;
        cout << "     /  /  \\  /      \\      /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ / /  \\/  \\" << endl;
        cout << "    /  /    \\/ /\\     \\    /    \\ \\  /    \\/ /   /  \\/  \\/  \\  /    \\   \\" << endl;
        cout << "   /  /      \\/  \\/\\   \\  /      \\    /   /    \\" << endl;
        cout << "__/__/_______/___/__\\___\\__________________________________________________" << endl;
        break;
    case 8:
        cout << "       ________________   ___/-\\___     ___/-\\___     ___/-\\___" << endl;
        cout << "     / /             ||  |---------|   |---------|   |---------|" << endl;
        cout << "    / /              ||   |       |     | | | | |     |   |   |" << endl;
        cout << "   / /             __||   |       |     | | | | |     | | | | |" << endl;
        cout << "  / /   \\\\        I  ||   |       |     | | | | |     | | | | |" << endl;
        cout << " (-------------------||   | | | | |     | | | | |     | | | | |" << endl;
        cout << " ||               == ||   |_______|     |_______|     |_______|" << endl;
        cout << " ||                 | =============================================" << endl;
        cout << " ||          ____    |                                ____      |" << endl;
        cout << "( | o      / ____ \\                                 / ____ \\    |)" << endl;
        cout << " ||      / / . . \\ \\                              / / . . \\ \\   |" << endl;
        cout << "[ |_____| | .   . | |____________________________| | .   . | |__]" << endl;
        cout << "          | .   . |                                | .   . |" << endl;
        cout << "           \\_____/                                 \\_____/ " << endl;
        break;
    case 9:
        cout << "                    _,,......_             " << endl;
        cout << "                 ,-'          `'--.        " << endl;
        cout << "              ,-'  _              '-.      " << endl;
        cout << "     (`.    ,'   ,  `-.              `.   " << endl;
        cout << "      \\ \\  -    / )    \\               \\  " << endl;
        cout << "       `\\`-^^^, )/      |     /         : " << endl;
        cout << "         )^ ^ ^V/            /          '. " << endl;
        cout << "         |      )            |           `. " << endl;
        cout << "         9   9 /,--,\\    |._:`         .._`. " << endl;
        cout << "         |    /   /  `.  \\    `.      (   `.`. " << endl;
        cout << "         |   / \\  \\    \\  \\     `--\\   )    `.`.___ " << endl;
        cout << "       .;;./  '   )   '   )       ///'       `-\"' " << endl;
        cout << "        `--'   7//\\    ///\\" << endl;
        break;
    }
}



void generateQuestion(int question)
{
    switch (question)
    {
    case 1:
        cout << "Deforestation" << endl;
        cout << "1.Planting trees to restore and expand forested areas." << endl;
        cout << "2.Implementing responsible logging (Targeting only specific trees for harvest rather than clear-cutting entire areas) practices to minimize environmental impact." << endl;
        cout << "3.Encouraging responsible sourcing of wood and other forest products by companies." << endl;
        break;
    case 2:
        cout << "Air Pollution" << endl;
        cout << "1.Shifting to renewable energy sources such as solar and wind power." << endl;
        cout << "2.Enforcing regulations on industries to reduce emissions." << endl;
        cout << "3.Encouraging the use of public transport to reduce vehicle emissions." << endl;
        break;
    case 3:
        cout << "Water Pollution" << endl;
        cout << "1.Implementing effective wastewater treatment processes." << endl;
        cout << "2.Encouraging the use of reusable products and reducing single-use plastics." << endl;
        cout << "3.Enforcing regulations on industries to prevent water pollution." << endl;
        break;
    case 4:
        cout << "Climate Change" << endl;
        cout << "1.Increasing the use of renewable energy sources to reduce carbon emissions." << endl;
        cout << "2.Implementing energy-efficient technologies and practices." << endl;
        cout << "3.Participating in global efforts to address climate change, such as the Paris Agreement." << endl;
        break;
    case 5:
        cout << "Loss of Biodiversity" << endl;
        cout << "1.Protecting and preserving natural habitats." << endl;
        cout << "2.Implementing sustainable agriculture and fishing methods." << endl;
        cout << "3.Supporting initiatives that focus on the protection of endangered species." << endl;
        break;
    case 6:
        cout << "Overfishing" << endl;
        cout << "1.Implementing and enforcing fishing quotas to ensure sustainable harvesting." << endl;
        cout << "2.Establishing protected zones to allow fish populations to recover." << endl;
        cout << "3.Encouraging consumers to choose sustainably sourced seafood." << endl;
        break;
    case 7:
        cout << "Soil Erosion" << endl;
        cout << "1.Implementing practices that maintain soil health, such as minimal tillage." << endl;
        cout << "2.Planting trees to prevent soil erosion and enhance soil structure." << endl;
        cout << "3.Creating grassed waterways in agricultural areas to channel water flow." << endl;
        break;
    case 8:
        cout << "Waste Management" << endl;
        cout << "1.Promoting recycling and responsible waste disposal." << endl;
        cout << "2.Encouraging the use of reusable items to minimize plastic waste." << endl;
        cout << "3.Utilize waste-to-energy technologies to convert non-recyclable waste into energy." << endl;
        break;
    case 9:
        cout << "Invasive Species" << endl;
        cout << "1.Monitoring and addressing the presence of invasive species." << endl;
        cout << "2.Implementing measures to prevent the introduction of invasive species." << endl;
        cout << "3.Use physical methods such as cutting, mowing, or pulling to control invasive plants. Install barriers or screens to prevent the movement of invasive animals." << endl;
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
        }break;
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
        }break;
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
        }break;
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
        }break;
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
        }break;
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
        }break;
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
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        }break;
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
            airQuality += 5;
            waterQuality += 5;
            speciesCount += 5;
            break;
        }break;
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
            airQuality += 0;
            waterQuality += 5;
            speciesCount += 5;
            break;
        }break;
    }
}

bool isEcoSystemBalanced(int airQuality, int waterQuality, int speciesCount, int difficulty) {
    if (difficulty == 1)
    {
        return (airQuality > 5 && waterQuality > 5 && speciesCount > 5);
    }
    if (difficulty == 2)
    {
        return (airQuality > 10 && waterQuality > 10 && speciesCount > 10);
    }
    if (difficulty == 3)
    {
        return (airQuality > 15 && waterQuality > 15 && speciesCount > 15);
    }
}