#include <iostream>
#include <ctime>

int main(){

    int randomNum;

    srand(time(NULL));

    randomNum = rand() % 11;

    std::cout << randomNum;

    return 0;
} 