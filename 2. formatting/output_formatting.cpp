#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    //1. endl -> new line character
    cout << "Hello" << endl;
    cout << "Hello\n";
    cout << "World\n";

    //2. flush -> immediate sending of data to the device connected to stream

    cout << "======================" << endl;

    //3. setw()
    cout << endl;
    cout << left; 
    cout << setfill('-');  // the fill character
    cout << "Formatted table: " << endl;
    cout << setw(10) << "Lastname" << setw(10) << "Firstname" << setw(5) << "Age" << endl;
    cout << setw(10) << "Daniel" << setw(10) << "Gray" << setw(5) << "35" << endl;
    cout << setw(10) << "Stanley" << setw(10) << "Woods" << setw(5) << "33" << endl;
    cout << setw(10) << "Jordan" << setw(10) << "Parker" << setw(5) << "45" << endl;
    cout << setw(10) << "Joe" << setw(10) << "Ball" << setw(5) << "21" << endl;
    cout << setw(10) << "Josh" << setw(10) << "Carr" << setw(5) << "27" << endl;
    cout << setw(10) << "Izaish" << setw(10) << "Robinson" << setw(5) << "29" << endl;
   
    cout << "======================" << endl;
    //4. boolalpha
    cout << endl;
    bool a = true;
    bool b = false;

    cout << a << " " << b << endl; // o/p -> 1/0

    cout << boolalpha;
    cout << a << " " << b << endl; // o/p -> true/false

    cout << "======================" << endl;
    //5. showpos 
    cout << endl;

    int a1 = 12;
    int a2 = -21;
    cout << showpos;
    cout << "a1: " << a1 << endl;
    cout << "a2: " << a2 << endl;

    cout << noshowpos;
    cout << "a1: " << a1 << endl;
    cout << "a2: " << a2 << endl;

    cout << "======================" << endl;
    //6. dec, oct, hex 

    int b1 = 7171717;
    int b2 = -34521;
    double b3 = 498.32;

    cout << endl;
    cout << showbase;  // showbase & noshowbase -> show the base for integral types
    cout << uppercase; // transforms all the alphabet part in uppercase
    cout << "b1 in different bases: " << endl;
    cout << "1. dec: " << dec << b1 << endl;
    cout << "2. oct: " << oct << b1 << endl;
    cout << "3. hex: " << hex << b1 << endl;

    cout << endl;
    cout << "b3 in different bases: " << endl;
    cout << "1. dec: " << dec << b3 << endl;
    cout << "2. oct: " << oct << b3 << endl;
    cout << "3. hex: " << hex << b3 << endl;

    cout << "======================" << endl;
    //7. scientific & fixed
    
    double c1 = 3.1234543317866536500;
    double c2 = 2006.0;
    double c3 = 1.34e-10;

    cout << endl;
    cout << fixed;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    cout << endl;
    cout << "double values(scientific)" << endl;
    cout << scientific;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    cout << endl;
    cout << "double values(back to default)" << endl;
    cout.unsetf(ios::scientific | ios::fixed);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    cout << "======================" << endl;
    //8. setprecision -> no. of digits printed out for  floating point(default is 6)

    double d1 = 3.14159265343434767989989889888653;

    cout << endl;
    cout << "d1 (default precision(6)): " << d1 << endl;
    cout << setprecision(10);
    cout << "d1 (precision(10)): " << d1 << endl;
    cout << setprecision(20);
    cout << "d1 (precision(20)): " << d1 << endl;
    cout << setprecision(50);
    cout << "d1 (precision(50)): " << d1 << endl;

    // reset precision to 6
    cout << setprecision(6) << endl;

    cout << "======================" << endl;
    //9. showpoint -> show trailing zeroes if necessary

    
    return 0;
}