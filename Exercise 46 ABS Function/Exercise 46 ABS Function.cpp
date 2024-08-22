// Exercise 46 ABS Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;


    return Number;
}
int MyAbs(int Number) {
    const int ABS = -1;

    if (Number<0)
    {
        Number = Number * ABS;
        return Number;
    }
    return Number;

}



int main() {
    int Number = ReadPositiveNumber("Plase Enter Number For Make ABS ");
    cout<< MyAbs(Number)<<endl;
    cout << abs(Number);
}