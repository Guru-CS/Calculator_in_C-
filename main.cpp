#include <iostream>
#include <cmath>
using namespace std;
/*
* Name: Gurusaran Sathish
* Program Name: Calculator
* Date: 9/9/2025
* Extra: Found a way to mod floats, (Changed to doubles so fmod() would accept the parameters).
*/

int main(){
    float inp1;
    float inp2;
cout << "im coding"<< endl;
cout << "Input1: ";
cin >> inp1 ;
cout << endl << "Input2: ";
cin >> inp2;

cout << endl << "Result of Addition: " << inp1+inp2;
cout << endl << "Result of Subtraction: " << inp1-inp2;
cout << endl << "Result of Multiplication: " << inp1*inp2;
cout << endl << "Result of Division: " << inp1/inp2;
double inp1d = double(inp1);
double inp2d = double(inp1);
cout << endl << "Result of Modulus: " << fmod(inp1d,inp2d);
cout << endl << "Result of Increment Inp1: " << ++inp1;
--inp1;
cout << endl << "Result of Decrement Inp2: " << --inp2;
++inp2;
cout << endl << "Result of Rounding Inp1: " << round(inp1);
cout << endl << "Result of Rounding Inp2: " << round(inp2);

    return 0;
}