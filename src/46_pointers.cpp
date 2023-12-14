#include <iostream>

int main(){

    // variable that stores a memory address of another variable
    // sometimes it's easier to work with an address

    // & address of operator
    // * dereference operator

    std::string name = "Gabriel";
    int age = 25;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << std::endl;
    std::cout << *pName << std::endl;

    std::cout << pAge << std::endl;
    std::cout << *pAge << std::endl;

    std::cout << freePizzas << std::endl;
    std::cout << *freePizzas << std::endl;

    return 0;
}
