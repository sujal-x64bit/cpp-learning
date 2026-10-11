#include <iostream>

int main(){

    // Compile time error -> error befor converting .cpp file to .exe file(wrong syntax)
    std::cout << "Hello" << std::endl;

    // Runtime error -> error after running the code (.exe file is converted)
    int val = 9/0;
    std::cout << "Value: " << val << std::endl;
    return 0;
}