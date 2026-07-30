#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    if(std::cin.fail()) {
        std::cout << "You are gay";
    }
    else if(age>=18){
        std::cout << "Allowed";
    }

    else if(age<18){
        std::cout << "Not Allowed";
    }
}