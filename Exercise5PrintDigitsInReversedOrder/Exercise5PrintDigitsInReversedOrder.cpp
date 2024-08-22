// Exercise5PrintDigitsInReversedOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    } while (Number>=1);
    return counter;
}
void ReversDigitOrder(int Number) {
    int LastDigit = 0; //last digit is ones digit like 235456 = 6 
    int x = DigitNumber(Number); //Digit number ex 12564=5 digit.
    for (int i = 0; i < x ; i++)
    {
        LastDigit = Number % 10;  //like 235456 = 6
        Number = Number / 10;//(235456-6)/10 = 6
        cout << LastDigit;
    }

}

int main()
{
    ReversDigitOrder(ReadN("enter number for reverse digit order"));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
