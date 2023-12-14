#include <iostream>

int main(){
    /*
    return the result of a specific arithmetic operation (+ - * /)
    */

    int students = 20;
    std::cout << students << std::endl;

    // Addition
    students = students + 1;
    std::cout << students << std::endl;

    students += 1;
    std::cout << students << std::endl;

    students ++; // Incremental operator (always add 1)
    std::cout << students << std::endl;

    // Subtraction
    students = students - 1;
    std::cout << students << std::endl;

    students -= 1;
    std::cout << students << std::endl;

    students --; // Decremental operator (always subtract 1)
    std::cout << students << std::endl;

    // Multiplication
    students = students * 2;
    std::cout << students << std::endl;

    students *= 2;
    std::cout << students << std::endl;

    // Division
    students = students / 2;
    std::cout << students << std::endl;

    students /= 2;
    std::cout << students << std::endl;

    // Decimal part is truncated if declared variable is not a double
    int price1 = 13.99;
    price1 = price1/3;
    std::cout << price1 << std::endl;

    double price2 = 13.99;
    price2 = price2/3;
    std::cout << price2 << std::endl;

    // Modulus
    int remainder = students % 2;
    std::cout << remainder << std::endl;

    remainder = students % 3;
    std::cout << remainder << std::endl;

    // Operations precedence
    // Parenthesis
    // Multiplication & division
    // Addition & subtraction
    int formula1 = 6 - (5 + 4) * 3 / 2;
    std::cout << formula1 << std::endl;

    return 0;
}
