// Exercise9Count Frequncy Digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int CountDigitFrequency(short DigitToCheck, int Number) {
    int FreqCount = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}
void PrintAllDigitReqancy(int Number) {

    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << "Frequncy is " << DigitFrequency << "Time(s)\n";

        }
    }
}

int main()
{
    PrintAllDigitReqancy(ReadPositiveNumber("enter number "));
}