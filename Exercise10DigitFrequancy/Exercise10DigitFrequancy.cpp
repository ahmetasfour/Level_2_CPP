// Exercise10DigitFrequancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int ReverseNumber(int Number) {
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;  //like 235456 = 6
        Number = Number / 10;//(235456-6)/10 = 6
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}
void PrintDigitOnOrder(int Number) {
    int Reminder = 0;
    while(Number>0){
    Reminder = Number % 10;
    Number /= 10;
    cout << Reminder << endl;
    }
}

int main()
{
    int x = ReadPositiveNumber("enter number ");
    PrintDigitOnOrder(ReverseNumber(x));
}