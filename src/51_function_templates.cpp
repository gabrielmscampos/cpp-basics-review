#include <iostream>

int max(int x, int y){
    return (x > y) ? x : y;
}

double max(double x, double y){
    return (x > y) ? x : y;
}

char max(char x, char y){
    return (x > y) ? x : y;
}

// Instead of defining three overloaded functions, lets create a template
template <typename T, typename U>

// can receive up to two different data types T,U
// using auto the compiler will deduce the data type
auto new_max(T x, U y){
    return (x > y) ? x : y;
}

int main(){

    // describe what a function looks like
    // can be used to generate as many overloaded functions
    // as needed, each using different data types

    std::cout << max(1, 2) << std::endl;
    std::cout << max(1.1, 2.1) << std::endl;
    std::cout << max('1', '2') << std::endl;

    std::cout << new_max(1, 2) << std::endl;
    std::cout << new_max(1.1, 2.1) << std::endl;
    std::cout << new_max('1', '2') << std::endl;

    std::cout << new_max(1, 2.1) << std::endl;

    return 0;
}
