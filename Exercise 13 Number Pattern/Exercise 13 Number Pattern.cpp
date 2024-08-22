// Exercise 13 Number Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int j = 1;
    while (j <= Number)
    {
        for (int i = 0; i < j; i++)
        {
            cout << j;

        }
        cout << "\n";
        j++;
    }

}

int main()
{
    InvertedPattern(ReadPositiveNumber("Enter Pozitif Number"));
}
