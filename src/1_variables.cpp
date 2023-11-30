#include <iostream>

int main(){
    int x; // declaration
    x = 5; // assignment

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Username";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << x << std::endl;
    std::cout << price << std::endl;
    std::cout << initial << std::endl;
    std::cout << power << std::endl;
    std::cout << name << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}
