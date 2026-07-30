#include <iostream>
#include <cmath>

int main(){

    double AB;
    double BC;
    double AC;

    std::cout << "Enter adjacent sides of hypotenuse" << "\n";
    std::cout << "Enter side AB : ";
    std::cin >> AB;

    std::cout << "Enter side BC : ";
    std::cin >> BC;

    AC = sqrt(pow(AB,2) + pow(BC,2));
    std::cout << "Length of hypotenuse is : " << AC << "\n";

    return 0;
}