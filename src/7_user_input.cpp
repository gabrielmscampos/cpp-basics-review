#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    std::string fullName;
    int age;

    std::cout << "What's your name?: ";
    std::cin >> name;
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, fullName);

    // std::getline(std::cin, variable)
    // will read the input considering white spaces
    // we need to add >> std::ws to flush the buffer before using getline
    // because getline accepts the whitespace stored in the buffer
    // this happens when there is user input before

    std::cout << "Hello " << name << std::endl;
    std::cout << "Your are " << age << " years old" << std::endl;
    std::cout << "Hello " << fullName << std::endl;

    return 0;
}
