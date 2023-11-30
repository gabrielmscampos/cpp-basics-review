#include <iostream>

int main(){
    /*
    do some block of code first,
    THEN repeat again if condition is true
    */

    // While version
    int number; // Defaults to 0
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    while(number < 0){
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }
    std::cout << "The number is " << number << std::endl;

    // Do while version
    number = 0;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;    
    } while(number < 0);
    std::cout << "The number is " << number << std::endl;

    return 0;
}
