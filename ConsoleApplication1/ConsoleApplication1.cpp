#include <iostream>

int main()
{
    int x;
    int y;
    char operand;
    std::cout << "введите число x: ";

    if (!(std::cin >> x)) {
        std::cout << "введите ЧИСЛО x: ";
    }
    else {
        std::cout << "введите число y: ";
        if (!(std::cin >> y)) {
            std::cout << "введите ЧИСЛО y: ";
        }
        else
        {
            std::cout << "введите операнд: ";
            if (!(std::cin >> operand) 
                && (operand != "-")
                && (operand != "+")
                && (operand != "*")
                && (operand != "/")) {
                std::cout << "введите ОПЕРАНД: ";
            }
            else {
                std::cout << "Вы ввели: " << x << operand << y << std::endl;
            }
        }
    }
}
