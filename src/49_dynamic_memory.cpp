#include <iostream>

int main(){

    // memory that is allocated after the program
    // is already running & compiled
    // use the 'new' operator to allocate
    // memory in the heap rather than the stack

    // memory = [heap, stack, global/static, text (code)]

    // useful when we don't know how much memory
    // we will need. makes our program more flexible,
    // especially when accepting user input.

    int *pNum = NULL;
    
    // Dynamic allocating the size of an integer in the memory
    pNum = new int;

    *pNum = 21;
    std::cout << "address: " << pNum << std::endl;
    std::cout << "value: " << *pNum << std::endl;

    // Delete the pointer when the variable isn't needed anymore
    // avoids memory leaking
    delete pNum;

    // Example dinamically creating an array
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete pGrades;

    return 0;
}
