#include <iostream>

int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    int numberOfStudents = sizeof(students)/sizeof(std::string);

    for(int i = 0; i < numberOfStudents; i++){
        std::cout << students[i] << std::endl;
    }

    return 0;
}
