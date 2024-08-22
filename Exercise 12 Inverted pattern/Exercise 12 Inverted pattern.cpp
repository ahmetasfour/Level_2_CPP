// Exercise 12 Inverted pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void InvertedPattern(int Number) {
    while (Number>0)
    {
        for (int i = 0; i < Number; i++)
        {
            cout << Number;

        }
        cout << "\n";
        Number--;
    }

}

int main()
{
    InvertedPattern(ReadPositiveNumber("Enter Pozitif Number"));
}
