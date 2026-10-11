#include <iostream>

int addNumbers(int a, int b){  // a, b -> parameters

    return a+b;
}
int multiply(int a, int b){  // a, b -> parameters

    return a*b;
}


int main(){

    int a {9};
    int b {7};

    std::cout <<"Sum is: " << addNumbers(a, b) << std::endl;
    std::cout <<"Sum is: " << addNumbers(32, 12) << std::endl;
    std::cout <<"Sum is: " << addNumbers(34, 89) << std::endl;

    std::cout <<"Multiply is: " << multiply(4, 9) << std::endl;
    std::cout <<"Multiply is: " << multiply(3, 8) << std::endl;

    return 0;
}