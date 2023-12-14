#include <iostream>

int main(){
    /*
    Conversion a value of one data type to another
    Implicit = automatic
    Explicit = Precede value with new data type
    */

    // Implicit converting double to int
    int x = 3.14;
    std::cout << x << std::endl;

    // Explicit converting double to int
    double y = (int) 3.14;
    std::cout << y << std::endl;

    // Implicit cast number to character (using ascii table)
    char z = 100;
    std::cout << z << std::endl;

    // Explicit cast number as character
    std::cout << (char) 100 << std::endl;

    // How is this useful?
    int correct = 8;
    int questions = 10;
    double score = (correct/(double) questions)*100;
    std::cout << score << "%" << std::endl;

    // If we do not cast questions as double we are doing an
    // integer division, so the division will truncate the decimal
    // our result would be 0%

    return 0;
}
