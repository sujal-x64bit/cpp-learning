#include <iostream>
#include <string>

int main(){

    int age = 18;
    std::string name;
    std::string full_name;

    std::cout << "Your age is " << age << std::endl;   
    // Data flows from statements to std::cout
    // << (insertion) operator pushes data out to the console

    
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    // >> (extraction) operator pulls data from the console into your variable

    
    std::cout << "Enter your name and age: " << std::endl;
    std::cin >> name >> age;
    std::cout << "Hello " << name << ", You are " << age << " old" << std::endl;

    
    // for input data including white spaces
    // Note: Always clear the buffer if switching from 'cin >>' to 'getline'
    std::cin.ignore(); 

    std::cout << "Enter your full name and age: " << std::endl;
    std::getline(std::cin, full_name); 

    std::cin >> age;
    std::cout << "Hello " << full_name << " your age is " << age << std::endl;

    return 0;
}