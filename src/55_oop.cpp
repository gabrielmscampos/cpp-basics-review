#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
        bool alive = true; // default value

        void eat(){
            std::cout << "This person is eating" << std::endl;
        }

        void drink(){
            std::cout << "This person is drinking" << std::endl;
        }

        void sleep(){
            std::cout << "This person is sleeping" << std::endl;
        }
};

int main(){

    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    Human human2;
    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;
    std::cout << human1.alive << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << human2.name << std::endl;
    std::cout << human2.occupation << std::endl;
    std::cout << human2.age << std::endl;
    std::cout << human1.alive << std::endl;

    return 0;
}
