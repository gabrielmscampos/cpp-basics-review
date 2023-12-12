#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    std::cout << '$' << total;

    return 0;
}

// When we pass the array to function it decays into a pointer to where
// the array starts in memory so it cannot know how big the array is
// thats why we also pass the array size as a function parameter
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
