// integer contain 4 bytes of memeory(32 bits)

#include <iostream>

int main(){

    int num1; // garbage value
    int num2 = 0; // initializes with 0
    int num3 = 10; // initialize with 10
    int num4 = 34; // initialize with 34

    int sum = num3 + num4; // expressions as initializer

    // int narrowing_conversion{2.9}; // complier err
    // int new_num{undefined} // compiler err

    // Check the size with sizeof
    std::cout << "size of int: " << sizeof(int) << std::endl; // 4
    std::cout << "sizeof sum var: " << sizeof(sum) << std::endl; // 4
    return 0;
}