#include <iostream>

void printInfo(const std::string name, const int age);

int main(){

    // parameter that is effectively read-only code is more secure
    // & conveys intent useful for references and pointers

    std::string name = "Gabriel";
    int age = 25;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){

    // throw an error
    // cannot update the value of the copy/reference
    // name = " ";
    // age = 0;
    
    std::cout << name << std::endl;
    std::cout << age << std::endl;

}