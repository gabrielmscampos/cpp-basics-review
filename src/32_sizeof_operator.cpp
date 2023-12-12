#include <iostream>

int main(){

    //sizeof = determine the size in bytes of a variable, data type, class, objects, etc.

    double gpa = 2.5;
    std::string name = "Gabriel";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << "Sizeof gpa is: " << sizeof(gpa) << " bytes" << std::endl;
    std::cout << "Sizeof name is: " << sizeof(name) << " bytes" << std::endl;
    std::cout << "Sizeof grade is: " << sizeof(grade) << " bytes" << std::endl;
    std::cout << "Sizeof student is: " << sizeof(student) << " bytes" << std::endl;
    std::cout << "Sizeof grades is: " << sizeof(grades) << " bytes" << std::endl;
    std::cout << "Grades array has " << sizeof(grades)/sizeof(char) << " elements" << std::endl;
    std::cout << "Students array has " << sizeof(students)/sizeof(std::string) << " elements" << std::endl;

    return 0;
}
