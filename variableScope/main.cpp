#include <iostream>

int myNum = 1; //GLOBAL VARIABLE

void printNum();
void printNum2();

int main(){

    int myNum = 2;
    std::cout << myNum;
    printNum();
    printNum2();
    return 0;
} 

void printNum( ){
    int myNum = 3;
    std::cout << myNum;
}

void printNum2(){
    std::cout << myNum;
}