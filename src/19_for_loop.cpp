#include <iostream>

int main(){

    // Index; Stop condition; Increment/Decrement condition
    // for(index, stop, inc/dec)

    // Counting to
    for(int i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }
    std::cout << "HAPPY NEW YEAR!" << std::endl;

    // Countdown to
    for(int i = 10; i >= 0; i--){
        std::cout << i << std::endl;
    }
    std::cout << "HAPPY NEW YEAR!" << std::endl;

    return 0;
}
