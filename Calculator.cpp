// Copyright (c) 2025 DevKid2001
// MIT License

#include <iostream>
#include <string>
#include <limits>

void Calculator() {

    while (true) {
        std::cout << "1. Addition" << "\n";
        std::cout << "2. Subtraction" << "\n";
        std::cout << "3. Multiplication" << "\n";
        std::cout << "4. Division" << "\n";

        std::string operation;

        while (true) {
            std::cout << "Enter what operation do you want to perform: ";
            std::getline(std::cin, operation);

            if (operation.empty()) {
                std::cout << "[+]Error: Cannot Be Empty." << "\n";
            } else {
                break;
            }
        }


        if (operation == "1" || operation == "2" || operation == "3" || operation == "4") {
            int num1 = 0;

            while (true) {
                std::cout << "Enter first number: ";
                std::cin >> num1;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "[+]Error: Input is possible not a number." << "\n";
                } else {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    break;
                }
            }

            int num2 = 0;

            while (true) {
                std::cout << "Enter second number: ";
                std::cin >> num2;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>:: max(), '\n');
                    std::cout << "[+]Error: Input is possible not a number." << "\n";
                } else {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    break;
                }
            }

            if (operation == "1") {
                int add = num1 + num2;
                std::cout << "Result: " << add << "\n";
            } else if (operation == "2") {
                int minus = num1 - num2;
                std::cout << "Result: " << minus << "\n";
            } else if (operation == "3") {
                int times = num1 * num2;
                std::cout << "Result: " << times << "\n";
            } else if (operation == "4") {
                if (num2 == 0) {
                    std::cout << num1 << " cannot be divided by 0" << "\n";
                } else {
                    int divide = num1 / num2;
                    std::cout << "Result: " << divide << "\n";
                }
            }
        }
    }

}

int main() {

    Calculator();

    return 0;
}