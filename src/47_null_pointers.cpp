#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned" << std::endl;
    }else{
        std::cout << "address was assigned" << std::endl;
        std::cout << *pointer << std::endl;
    }

    return 0;
}
