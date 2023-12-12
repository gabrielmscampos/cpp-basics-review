#include <iostream>

int main(){

    // Declaring array with values
    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // Acessing each value by index
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    // Changing value in a given index
    cars[0] = "Camaro";
    std::cout << cars[0] << std::endl;

    // When declaring an empty array you need to set the size
    double prices[4];
    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;
    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}
