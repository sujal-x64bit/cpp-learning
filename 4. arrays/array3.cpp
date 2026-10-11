#include <bits\stdc++.h>

using namespace std;

int main(){

    char arr[5] = {'h', 'e', 'l', 'l', 'o'};  // declare array

    for(auto c : arr){
        cout << c;
    }

    cout << endl;
    cout << "size : " << size(arr) << endl;

    // modify the elemnts in char array
    arr[3] = 's';

    cout << "Modified arr : ";
    for(size_t i=0; i<size(arr); i++){
        cout << arr[i];
    }
    cout << endl;

    // Direct print out
    char arr1[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // '\0' -> null termination (prevents extra printing of characters after an aray is ended)
    cout << "Message1 : " << arr1 << endl;   // o/p -> World      //  if a character array is null terminated, its called c-string
    cout << "Size : " << size(arr1);         // 6

    cout << endl;
    // Auto filled in null characters
    char arr2[6] = {'W', 'o', 'r', 'l', 'd'}; // arr2 size declared +1 will print the message after the array without printing garbage value and is completed without need of \0
    cout << "Message2 : " << arr2 << endl;    // World
    cout << "Size : " << size(arr2);          // 6

    cout << endl;
    char arr3[] = {'W', 'o', 'r', 'l', 'd'};  // will print some garbage after our world message
    cout << "Message3 : " << arr3 << endl;    // WorldWorld
    cout << "Size : " << size(arr3);          // 5

    // Literal C-string
    cout << endl;
    char arr4[] = {"Hello World"};           // Hello World
    cout << "Message4 : " << arr4 << endl;   // 12
    cout << "Size : " << size(arr4) << endl; // size increase by +1 as null terminator
    cout << "arr4[6] : " << arr4[6] << endl;
    
    return 0;
}