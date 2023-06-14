#include <iostream>

int main()
{
    int diceFaces = 100;

    while(true){
    std::cout << "********** Roll the Dice **********" << '\n';
    std::cout << "Enter the number of faces of your dice (4, 6, 20 or 100): ";
    std::cin >> diceFaces;

    switch (diceFaces)
    {
    case 4:
        std::cout << (rand() % 4) + 1 << '\n' << '\n';
        break;

    case 6:
        std::cout << (rand() % 6) + 1 << '\n' << '\n';
        break;

    case 20:
        std::cout << (rand() % 20) + 1 << '\n' << '\n';
        break;

    case 100:
        std::cout << (rand() % 100) + 1 << '\n' << '\n';
        break;

    default:
        std::cout << "This is not a valid number" << '\n' << '\n';
        continue;
    };
    }

    return 0;

}