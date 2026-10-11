#include <bits/stdc++.h>

using namespace std;
int main(){

    int scores1[10];  // array with junk data
    int scores2[10];

    for(size_t i=0; i<10; i++){
        scores2[i] = i*5;
    }

    for(size_t i=0; i<10; i++){
        cout << "scores2 [" << i << "]" << scores2[i] << endl;
    }

    cout << "===============================================================" << endl;
    const int arr[10] = {23, 12, 54, 34, 56, 78, 67, 89}; // constant arrays, array elemnt cannot be modified

    int scores[10] = {23, 12, 54, 67, 98, 90};

    cout << endl;
    cout << "Reading out score values: " << endl;
    cout << "1. " << scores[0] << endl; 
    cout << "2. " << scores[1] << endl; 
    cout << "3. " << scores[2] << endl; 
    cout << "4. " << scores[3] << endl; 
    cout << "5. " << scores[4] << endl; 
    cout << "6. " << scores[5] << endl; 

    cout << endl;

    for(size_t i=0; i<6; i++){
        cout << "scores [" << i << "] = " <<  scores[i] << endl;
    }

    cout << "===============================================================" << endl; 

    // sum of array
    cout << "Sum of array : ";
    int sum = 0;

    for(int element : scores){
        sum += element;
    }

    cout << sum << endl;
    return 0;
}