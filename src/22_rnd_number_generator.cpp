#include <iostream>
#include <ctime>

int main(){

    // initialize seed with current time
    srand(time(NULL));

    // pseudo-random number from 1 to 6
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}
