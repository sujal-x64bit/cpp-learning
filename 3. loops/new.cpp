// pillars of any loop
// 1. iterator
// 2. starting point
// 3. test (controls when loop stops)
// 4. increment / decrement
// 5. loop body

#include <bits/stdc++.h>

using namespace std;
int main(){

    // unsigned & size_t -> only positive values or zero value(no negatives)
    // size of size_t -> 8 bytes
    for(unsigned i=0; i<10; i++){
        cout << "This is first for-loop" << endl;
    }

    cout << "=====================" << endl;

    for(size_t i = 1; i<=10; i++){
        cout << i << " This is second for-loop" << endl;
    }

    cout << "=====================" << endl;

    // while loop
    size_t n1 = 0;  // iterator declaration/ initialization
    const size_t count = 10;
    while(n1 < count){
        cout << "This is while-loop" << endl;;
        n1++;  // incrementation
    }

    cout << "=====================" << endl;

    // do-while loop
    size_t n2 = 0;
    do{
        cout << "This is do-while loop " << endl;
        n2++;
    } while(n2 < count);

    return 0;
}