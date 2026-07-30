#include <iostream>
#include <string>

int main(){

    std::string name;
    std::string email;
    std::string username;
    std::cout << "Enter your name >>> ";
    std::getline(std::cin,name);

    if(name.length()>20){
        std::cout << "Name cannot be that long.";
    }

    else if(name.length()>0 && name.length()<=20){

        std::cout << "Hello " << name << "\n";
        email = name;
        username = name;
        email.append("@gmail.com");
        username.insert(0, "@");
        std::cout << "Your username is " << username << "\n";
        std::cout << "Your new email is " << email << "\n";
    }

    else if(name.empty()){
        std::cout << "You did not enter your name.";
    }

    //std::cout << name.at(pos) pos is from 0 to the total len of the str
    //name.clear();
    //name.find(' ');
    //name.erase(0, 3);



    return 0;
}