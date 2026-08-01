#include <iostream>
#include <string>

void happybirthday(std::string name, int age);

int main(){

    std::string name = "Manan";
    int age = 17;

    happybirthday(name,age);
    return 0;
}

void happybirthday(std::string name, int age){
    std::cout << "Happy birthday to you" << "\n";
    std::cout << "Happy birthday, " << name << "\n";
    std::cout << "You are " << age << " years old!" << "\n";
}