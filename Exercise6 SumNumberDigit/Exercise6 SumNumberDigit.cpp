// Exercise6 SumNumberDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int ReadN(string Message) {
    int N;
    cout << Message << endl;

    cin >> N;
    return N;
}
int DigitNumber(int Number) {
    int counter = 0;
    do
    {
        Number /= 10;
        counter++;

    } while (Number >= 1);
    return counter;
}
void SumOfDigit(int Number) {
    int LastDigit = 0; //last digit is ones digit like 235456 = 6 
    int SumDigit = 0;
    int x = DigitNumber(Number); //Digit number ex 12564=5 digit.
    for (int i = 0; i < x; i++)
    {
        LastDigit = Number % 10;  //like 235456 = 6
        Number = (Number - LastDigit) / 10;//(235456-6)/10 = 6
        SumDigit += LastDigit;
    }
    cout << SumDigit;

}

int main()
{
    SumOfDigit(ReadN("enter number for reverse digit order"));
}
