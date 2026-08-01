#include <iostream>
#include <string>

double calc(double num1, double num2);
double getValidNum(std::string prompt);

int main(){
    std::string prompt;
    bool closeLoop = false;
    double num1;
    double num2;

    while(closeLoop==false){
        double num1 = getValidNum("Enter first number >>> ");
        double num2 = getValidNum("Enter second number >>> ");

        double result = calc(num1,num2);
        std::cout << "Sum of " << num1 << " and " << num2 << " is " << result << '\n';
        closeLoop = true;
    }

    return 0;
}

double getValidNum(std::string prompt){
    while(true){
            std::cout << prompt;
            double number;
            std::cin >> number;
            if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(1000000,'\n');
            std::cout << "Input should be a NUMBER!" << '\n';
            }
            else{
                return number;
            }
    }

}

double calc(double num1, double num2){
    double sumResult = num1+num2;
    return sumResult;
}