#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using double_t = double;

int main(){
    /*
    -- typedef
    Reserved keyword used to create and additional name
    (alias) for another data type.
    New identifier for an existing type
    Helps with readability and reduces typos
    Use when there is a clear benefit
    Replaced with 'using' (work better w/ templates)
    */

   // std::vector<std::pair<std::string, int>> pairlist1;
   // pairlist_t pairlist2;

   std::string firstName = "Linus";
   text_t secondName = "Torvalds";
   number_t age = 50;
   double_t price = 30.1;

   std::cout << firstName << " " << secondName << std::endl;
   std::cout << age << std::endl;
   std::cout << price << std::endl;

   return 0;
}
