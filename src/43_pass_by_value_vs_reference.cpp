#include <iostream>

void swap(std::string x, std::string y);
void swap_(std::string &x, std::string &y);

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::cout << "Address x: " << &x << std::endl;
    std::cout << "Address y: " << &y << std::endl;

    swap(x, y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    swap_(x, y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}

// When passing x, y variables to this function
// we are creating copies of the original values
// then the modified values do not modify the original variables
void swap(std::string x, std::string y){
    std::cout << "Address x in swap: " << &x << std::endl;
    std::cout << "Address y in swap: " << &y << std::endl;

    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

// Now we are passing the variables as references,
// the function receives the memory addresses of the variables
// thus modifing a variable will modify the address directly not a copy
void swap_(std::string &x, std::string &y){
    std::cout << "Address x in swap_: " << &x << std::endl;
    std::cout << "Address y in swap_: " << &y << std::endl;

    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
