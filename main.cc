#include <iostream>

void calculator()
{
    char op;
    float num1, num2;

    std::cout << "Enter Operation: ";
    std::cin >> op;

    std::cout << "Enter #s: ";
    std::cin >> num1 >> num2;

    switch(op)
    {
        case '+':
        {
            std::cout << num1 + num2 << "\n";
            break;
        }
        case '-':
        {
            std::cout << num1 - num2 << "\n";
            break;
        }
        case '*':
        {
            std::cout << num1 * num2 << "\n";
            break;
        }
        case '/':
        {
            std::cout << num1 / num2 << "\n";
            break;
        }
        default:
        {
            std::cout << "No operator was chosen" << "\n";
            break;
        }
    }
}

int main()
{
    for (;;) {
        calculator();
    }
}