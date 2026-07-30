#include <iostream>
#include <cmath>

int main(){

    int randomNum;

    std::cout << "====================" << "\n";
    std::cout << "Random game selector" << "\n";
    std::cout << "====================" << "\n";
    
    srand(time(NULL));
    randomNum = (rand() % 5)+1;

    switch(randomNum){
        case 1: std::cout << "Red Dead Redemption 2 - SELECTED" << "\n";
                break;
        case 2: std::cout << "Subnautica - SELECTED" << "\n";
                break;
        case 3:
                std::cout << "Phasmophobia - SELECTED" << "\n";
                break;
        case 4:
                std::cout << "Grand Theft Auto V  - SELECTED" << "\n";
                break;
        case 5:
                std::cout << "Dying Light - SELECTED" << "\n";
                break;
    }

    return 0;
}