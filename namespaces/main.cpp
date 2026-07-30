#include <iostream>

namespace test{
    int x = 3;
}

int main(){

    int x = 1;

    using namespace test;

    std::cout << x << " " << x;

    return 0;
}