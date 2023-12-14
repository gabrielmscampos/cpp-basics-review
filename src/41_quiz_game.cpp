#include <iostream>

int main(){

    std::string questions[] = {
        "1. What year was C++ created? ",
        "2. Who invented C++? ",
        "3. What is the predecessor of C++? ",
        "4. is the Earth flat? "
    };

    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Jhon Carmack", "D. Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. yes", "B. no", "C. sometimes", "D. whats's Earth?"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "****************************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "****************************" << std::endl;

        int optionsSize = sizeof(options[i])/sizeof(options[i][0]);
        for(int j = 0; j < optionsSize; j++){
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT!" << std::endl;
            score++;
        }else{
            std::cout << "WRONG!" << std::endl;
            std::cout << "Answer: " << answerKey[i] << std::endl;
        }
    }

    std::cout << "****************************" << std::endl;
    std::cout << "         RESULTS            " << std::endl;
    std::cout << "****************************" << std::endl;
    std::cout << "CORRECT GUESSES: " << score << std::endl;
    std::cout << "# of questions: " << size << std::endl;
    std::cout << "SCORE: " << (score/(double)size)*100 << "%" << std::endl;

    return 0;
}
