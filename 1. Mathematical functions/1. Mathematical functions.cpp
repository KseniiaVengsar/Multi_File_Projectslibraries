// 1. Mathematical functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Введите первое число:" << std::endl;
    double pole;
    std::cin >> pole;
    std::cout << "Введите второе число:" << std::endl;
    double pole_2;
    std::cin >> pole_2;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):";
    int command;
    std::cin >> command;
    if (command == 1)
    {
        pluse(pole, pole_2);
    }
    else if (command == 2)
    {
        minus(pole, pole_2);
    }
    else if (command == 3)
    {
        mult(pole, pole_2);
    }

    else if (command == 4) {
        division(pole, pole_2);
    }
    else if (command == 5) {
        expon(pole, pole_2);
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
