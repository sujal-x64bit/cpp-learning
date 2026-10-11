// a pointer is a specuial kind of variable that stores the adresses of that variables
// all pointers have the same size as they are only storing addresses

#include <bits/stdc++.h>

int main(){

    int * p_num{}; // stores address of a variable of type int
    double * p_fract{};  // stores address of a variable of type double

    //Explicitely initialize to nullptr
    int * p_num1{nullptr};   //mess -> don't use ptr which contain value nullptr 
    double * p_fract1{nullptr};


    int *ptr1, ptr2; // ptr1 = valid pointer, ptr2 = not pointer/ int value

    return 0;
}