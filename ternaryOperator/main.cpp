#include <iostream>

int main(){

    int a = 5;

    a >= 3 ? std::cout << "You are gay \n" : std::cout << "You are not gay \n";
    a % 2 == 0 ? std::cout << "Even \n" : std::cout << "Odd \n";

    bool hungry = true;

    std::cout << (hungry ? "You are hungry" : "You are not hungry");

    return 0;
}