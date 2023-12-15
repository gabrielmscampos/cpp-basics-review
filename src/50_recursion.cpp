#include <iostream>

void walk_it(int steps);

void walk_re(int steps);

int factorial_it(int num);

int factorial_re(int num);

int main(){

    std::cout << "Walking iteractively:" << std::endl;
    walk_it(5);

    std::cout << "Walking recursively:" << std::endl;
    walk_re(5);

    std::cout << "Factorial iteractively: " << factorial_it(10) << std::endl;
    std::cout << "Factorial recursively: " << factorial_re(10) << std::endl;

    return 0;
}

void walk_it(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!" << std::endl;
    }
}

void walk_re(int steps){
    if(steps > 0){
        std::cout << "You take a step!" << std::endl;
        walk_re(steps-1);
    }
}

int factorial_it(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result*i;
    }
    return result;
}

int factorial_re(int num){
    if(num > 1){
        return num*factorial_re(num-1);
    }else{
        return 1;
    }
}
