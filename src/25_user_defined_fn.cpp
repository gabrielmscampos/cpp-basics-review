#include <iostream>

void happyBirthday(std::string name, int age);

int main(){

    std::string name = "Gabriel";
    int age = 25;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl;
}
