#include <iostream>

int main(){
    /*
    The const keyword specifies that a variable's value is constant
    tells the compiler to prevent anything from modifying it
    (read-only)
    */

   const double PI = 3.14159;
   double radius = 10;
   double circumference = 2*PI*radius;

   // PI = 420.69; // error: assignment of read-only variable ‘PI’

   std::cout << circumference << "cm" << std::endl;

   return 0;
}
