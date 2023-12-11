#include <iostream>

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue; // Skipping current iteration
        }
        if(i == 19){
            break; // Stop loop
        }
        std::cout << i << std::endl;
    }

    return 0;
}
