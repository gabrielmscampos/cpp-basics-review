#include <iostream>

int myNum = 3; // Global variable

void printNum();

int main(){

    int myNum = 1; // Local variable
    std::cout << myNum << std::endl;
    std::cout << ::myNum << std::endl; // Using the scope resolution operator
    printNum();

    return 0;
}

void printNum(){
    std::cout << myNum << std::endl; // Reading myNum from global scope
}
