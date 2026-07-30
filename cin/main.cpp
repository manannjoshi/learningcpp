#include <iostream>

int main(){

    std::string username;
    std::string password;

    std::cout << "Enter username >>> ";
    std::getline(std::cin >> std::ws, username);

    std::cout << "Enter password >>> ";
    std::getline(std::cin >> std::ws,password);

    std::cout << "Logged in with" << " " << username << "\n";
    std::cout << "Current password ->" << " " << password;

    std::cin.ignore();

    return 0;
}