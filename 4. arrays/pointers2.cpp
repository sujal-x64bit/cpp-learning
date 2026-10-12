#include <bits/stdc++.h>

using namespace std;

int main(){

    int var = 76;
    int *p{&var};   // the address of operator (&)

    cout << "Integer : " << var << endl;
    cout << "var (Address in memory) : " << p << endl;

    // changing address stored in pointer
    int var1 = 43;
    p = (&var1);

    cout << "var1 (Updated Address in memory) : " << p << endl;
    cout << "value : " << *p << endl; // Dereferencing a pointer

    // Can't cross assign btw pointrs of diff types
    int *p_int{nullptr};
    double double_var{33};

    // p_int = &double_var;  // compiler err
    return 0;
}