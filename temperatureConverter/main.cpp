#include <iostream>

int main(){

    double iTemp;
    char unit;
    double oTemp;
    std::string exitCin;

    std::cout << "Enter unit of your temperature, either [F or C] >>> ";
    std::cin >> unit;

    std::cout << "Enter value of the temperature >>> ";
    std::cin >> iTemp;

    if(std::cin.fail()){
        std::cout << "Enter a valid unit!";
        return 0;
    }

    else if(unit == 'F' || unit == 'f'){
        std::cout << "The values entered is " << iTemp << unit << "\n";
        oTemp = (iTemp-32)/1.8;
        std::cout << iTemp << unit << "---> " << oTemp << "C\n";
    }

    else if(unit == 'C' || unit == 'c'){
        std::cout << "The values entered is " << iTemp << unit << "\n";
        oTemp = (iTemp*1.8)+32;
        std::cout << iTemp << unit << "---> " << oTemp << "F\n";
    }

    else{
        std::cout << "Enter a valid unit!";
        return 0;
    }

    std::cin.ignore(40000,'\n');


    std::cout << "PRESS ENTER TO EXIT";
    std::getline(std::cin, exitCin);
    return 0;
}