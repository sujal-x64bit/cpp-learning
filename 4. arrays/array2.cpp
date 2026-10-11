#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[5] = {23, 45, 87, 98, 45};

    //M-1
    cout << "sizeof(arr) : " << sizeof(arr) << endl;
    cout << "sizeof(arr[3]) : " << sizeof(arr[3]) << endl;
    
    int count {sizeof(arr) / sizeof(arr[3])}; // o/p -> array size
    
    for(size_t i=0; i<count; i++){
        cout << "arr [" << i << "] = " << arr[i] << endl;
    }



    cout << "=========================" << endl;
    //M-2
    for(size_t i=0; i<size(arr); i++){
        cout << "arr [" << i << "] = " << arr[i] << endl;
    }

    cout << "=========================" << endl;
    //M-3
    for(auto i : arr){
        cout << "arr = " << i << endl;
    }

    return 0;
}