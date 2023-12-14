#include <iostream>

int main(){

    // [nrows][ncolumns]
    // if initilizating right away you need to set at least the column size
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    // To acces you need to specify two indexes
    std::cout << cars[0][0] << " " << cars[0][1] << " " << cars[0][2] << std::endl;
    std::cout << cars[1][0] << " " << cars[1][1] << " " << cars[1][2] << std::endl;
    std::cout << cars[2][0] << " " << cars[2][1] << " " << cars[2][2] << std::endl;

    // Iterating over multidimensional array
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
