#include <iostream>

using namespace std;

int main()
{
    int a, b, c , p , s ;
    cout << "This program is very basic addition and multiplication of two numbers" << endl;
    cout << "Please Enter first number" << endl;
    cin >> a  ;
    cout << "Enter second number" << endl;
    cin>> b;

    //Addition of two numbers
    c = a + b;
    //Multiplication of two numbers
    p = a * b;
    //Subtraction of two numbers
    s = a - b;
    // Printing Sum
    cout << " Sum of "  << a <<  " & "  <<  b << " = " << c << endl;
    // Printing product
    cout << " Product of "  << a <<  " & "  <<  b << " = " << p << endl;
    // Printing Subtraction
    cout << " subtraction of "  << a <<  " & "  <<  b << " = " << s << endl;
    return 0;
}
