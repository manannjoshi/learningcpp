#include <iostream>

int myNum = 2;

void printNum();

int main(){

    int myNum = 1;
    std::cout << myNum;
    printNum();

    return 0;
} 

void printNum( ){
    int myNum = 3;
    std::cout << myNum;
}