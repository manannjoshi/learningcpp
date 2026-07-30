#include <iostream>
#include <cmath>
#include <string>

int main(){

    int inputNum;
    srand(time(NULL));
    int randNum = (rand()%10)+1;
    bool endLoop = false;
    int guess  = 0;
    std::string quitProgram;

    std::cout << "===========================" << "\n";
    std::cout << "Number Guessing Game in C++" << "\n";

    while(endLoop==false){
        std::cout << "===========================" << "\n";
        std::cout << "Enter your number [1-10] >>> ";
        std::cin >> inputNum;
        if(std::cin.fail()){
            std::cout << "===========================" << "\n";
            std::cout << "Input is not a number!" << "\n";
            std::cin.clear();
            std::cin.ignore(1000000,'\n');
        }

        else if(inputNum == 777){
            std::cout << "===========================" << "\n";
            std::cout << "ADMIN CHEAT ACTIVATED!" << '\n';
            std::cout << "shhh... the number is... " << randNum << '\n'; 
        }

        else if(inputNum>10){
            std::cout << "===========================" << "\n";
            std::cout << "Input cannot be greater than 10!" << "\n";
        }
        else if(inputNum<=0){
            std::cout << "===========================" << "\n";
            std::cout << "Input cannot be lesser than 1!" << "\n";
        }
        else if(inputNum>=1 && inputNum<=10){
            if(inputNum == randNum){
                if(guess==0){
                    std::cout << "===========================" << "\n";
                    std::cout << "PERFECT GUESS FIRST TRY! JACKPOT! \n";
                    std::cout << "THE NUMBER WAS " << randNum << '\n';
                    std::cout << "===========================" << "\n";
                    endLoop = true;
                    std::cout << "\n";
                    std::cin.clear();
                    std::cin.ignore(1000000,'\n');
                    std::cout << "PRESS ENTER TO EXIT";
                    std::getline(std::cin,quitProgram);
                }
                else if(guess>0 && guess<=5){
                    std::cout << "===========================" << "\n";
                    std::cout << "CORRECT! THE NUMBER WAS " << randNum << '\n';
                    std::cout << "IN " << guess << " GUESSES";
                    std::cout << "===========================" << "\n";
                    endLoop = true;
                    std::cout << "\n";
                    std::cin.clear();
                    std::cin.ignore(1000000,'\n');
                    std::cout << "PRESS ENTER TO EXIT";
                    std::getline(std::cin,quitProgram);
                }
                else if(guess>5){
                    std::cout << "===========================" << "\n";
                    std::cout << "bro.. pack it up it took you " << guess << " guesses..." << '\n';
                    std::cout << "the number was... " << randNum << '\n';
                    std::cout << "===========================" << "\n";
                    endLoop = true;
                    std::cout << "\n";
                    std::cin.clear();
                    std::cin.ignore(1000000,'\n');
                    std::cout << "PRESS ENTER TO EXIT";
                    std::getline(std::cin,quitProgram);
                }
            }
            else if(inputNum != randNum){
                guess = guess + 1;
                std::cout << "WRONG GUESS, USED GUESSES: " << guess << "\n";
            }
        }

    }

    return 0;

}