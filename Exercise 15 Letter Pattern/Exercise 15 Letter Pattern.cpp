// Exercise 15 Letter Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void InvertedLetterPattern(int Number) {

    for (int i = 65; i < 65 + Number; i++)//for (int i = 65; i <= 65 + Number-1; i++)
    {
        for (int j=65; j <= i ; j++)//for (int j=1; j <= i-65+1 ; j++)
        {
            cout << char(i);

        }
        cout << "\n";
        
    }


}

int main()
{
    InvertedLetterPattern(ReadPositiveNumber("Enter Pozitif Number"));
}
