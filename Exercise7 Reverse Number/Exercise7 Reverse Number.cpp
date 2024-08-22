// Exercise7 Reverse Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{ int Number = 0; 
do { 
    cout << Message << endl;
    cin >> Number; 
}
while (Number <= 0);

return Number; 
}

int ReverseNumber(int Number) {
    int Remainder = 0;
    int Number2 = 0;

    while (Number>0)
    {
        Remainder = Number % 10;  //like 235456 = 6
        Number = (Number - Remainder) / 10;//(235456-6)/10 = 6
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

int main()
{
    cout << ReverseNumber(ReadPositiveNumber("enter number for reverse digit order"));
}