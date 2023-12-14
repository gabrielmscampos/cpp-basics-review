#include <iostream>
#include <cmath>

int main(){
    double l = 2.99;
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << std::endl;

    z = std::min(x, y);
    std::cout << z << std::endl;

    z = pow(x, y);
    std::cout << z << std::endl;

    z = sqrt(y);
    std::cout << z << std::endl;

    z = abs(-2);
    std::cout << z << std::endl;

    z = round(l);
    std::cout << z << std::endl;

    z = ceil(l);
    std::cout << z << std::endl;

    z = floor(l);
    std::cout << z << std::endl;

    return 0;
}
