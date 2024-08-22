// Exercise8DigitFrequancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int DigitFrequancy(int Number , int Digit) {
    int Remainder = 0;
    int DigitFrequancy = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;  //like 235456 = 6
        Number = (Number - Remainder) / 10;//(235456-6)/10 = 6
        if (Digit== Remainder)
        {
            DigitFrequancy++;
        }
    }
    return DigitFrequancy;
}

int main()
{
    int x = ReadPositiveNumber("enter number ");
    int y = ReadPositiveNumber("enter number digit for find frequncy");
    cout << DigitFrequancy(x ,y);
}