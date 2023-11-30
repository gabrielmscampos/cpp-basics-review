#include <iostream>

int main(){

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // String size
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters." << std::endl;
    }else{
        std::cout << "Welcome " << name << std::endl;
    }

    // Is string empty?
    if(name.empty()){
        std::cout << "You didn't enter your name." << std::endl;
    }else{
        std::cout << "Hello " << name << std::endl;
    }

    // Append string to another strnig
    name.append("@gmail.com");
    std::cout << "Your username is now " << name << std::endl;

    // Retrieve character at any given index of string (array of chars)
    std::cout << "Character at index 0: " << name.at(0) << std::endl;

    // Insert a characet at a given osition
    name.insert(0, "T");
    std::cout << "Inserting T at index 0: " << name << std::endl;

    // Find index which character appears
    std::cout << "Position of letter e: " << name.find('e') << std::endl;

    // Erase a portion of string
    name.erase(0, 3); // Second index in not inclusive
    std::cout << "Erasing the first 3 digits: " << name << std::endl;

    // Clear the value stored in the string
    name.clear();
    std::cout << "Hello " << name << std::endl;

    return 0;
}
