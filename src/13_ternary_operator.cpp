#include <iostream>

int main(){

    // If-else version
    int grade = 75;
    if (grade >= 60){
        std::cout << "You pass!" << std::endl;
    } else {
        std::cout << "Your fail!" << std::endl;
    }

    // Ternary operator version
    grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "Your fail!" << std::endl;

    // Checking if a number is even or odd
    int number = 9;
    bool isEven = number % 2 ? true : false;
    std::cout << (isEven ? "EVEN" : "ODD") << std::endl;

    return 0;
}
