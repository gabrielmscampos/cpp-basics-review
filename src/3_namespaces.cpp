#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace third{
    int y = 3;
}

int main(){
    /*
    Provides a solution for preventing name conflicts
    in large projects. Each entity needs a unique name.
    A namespace allows for identically named entities
    as long as the namespaces are different.
    */

   int x = 0;
   // int x = 1; // error: redeclaration of ‘int x’

   std::cout << x << std::endl;
   std::cout << first::x << std::endl;
   std::cout << second::x << std::endl;

   using namespace third;
   std::cout << y << std::endl;

   return 0;
}
