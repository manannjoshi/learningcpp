//  && checks for both conditions
// || checks for only one condition
// ! reverses the state of bool

#include <iostream>
#include <cmath>

int main(){

    double temp;
    bool sunny =true;
    
    std::cout << "Enter a valid temperature >>> ";
    std::cin >> temp;

    if(std::cin.fail()){
        std::cout << "Enter a valid temperature.";
        return 0;
    }

    //else if(temp>0 && temp<30){
    else if(temp<0 || temp>30){
        std::cout << "Temperature is bad\n";
    }

    else{
        std::cout << "Temperature is good\n";
    }

    if(sunny){
        std::cout << "It is sunny outside";
    }

    else{
        std::cout << "It is cloudy outside";
    }

    return 0;
}