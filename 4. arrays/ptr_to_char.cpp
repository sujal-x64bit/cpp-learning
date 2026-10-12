#include <bits/stdc++.h>

using namespace std;

int main(){

    char *var {nullptr};
    char c_var{'A'};
    
    var = &c_var;

    cout << "Value stored in var is : " << *var << endl;   // A

    char var1 {'C'};

    var = &var1;

    cout << "updated Value stored in var : " << *var << endl; // C

    cout << "====================================" << endl;
    char *message{"Hello World!"};
    
    cout << message << endl;  // Hello World!
    cout << *message << endl; // H

    return 0;
}