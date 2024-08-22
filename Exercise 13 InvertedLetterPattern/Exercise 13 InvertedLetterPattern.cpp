// Exercise 13 InvertedLetterPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//char(i)

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

void InvertedPattern(int Number) {
    int CharNumber = 65 + Number;
    while (CharNumber >= 65)
    {
        for (int i = 65; i <= CharNumber; i++)
        {
            cout << char(CharNumber);

        }
        cout << "\n";
        CharNumber--;
    }

}

int main()
{
    InvertedPattern(ReadPositiveNumber("Enter Pozitif Number"));
}
