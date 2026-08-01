#include <iostream>
#include <string>

void orderPTSubway(std::string chutney, std::string veggies);

int main(){

    std::string chutney;
    std::string veggies;

    std::cout << "Enter chutney >>> ";
    std::getline(std::cin,chutney);

    std::cout << "Enter veggie >>> ";
    std::getline(std::cin, veggies);

    orderPTSubway(chutney,veggies);

    return 0;
}

void orderPTSubway(std::string chutney, std::string veggies){
    if(chutney == "southwest chipotle" || veggies == "onion"|| veggies == "tomato"|| veggies == "lettuce"|| veggies == "salt and pepper"){
        std::cout << "Here is your paneer tikka subway with " << chutney << " and " << veggies;
    }
    else{
        std::cout << "veggie or chutney is not recognised!";
    }
}