#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    // Constructor
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // If we change the parameter name to be different from the attribute name
    // we don't need 'this' keyword
    // Student(std::string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
};

int main()
{

    // special method that is automatically called when an object is instantiated
    // useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;

    std::cout << student3.name << std::endl;
    std::cout << student3.age << std::endl;
    std::cout << student3.gpa << std::endl;

    return 0;
}
