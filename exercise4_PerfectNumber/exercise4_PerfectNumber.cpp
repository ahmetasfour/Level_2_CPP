// exercise4_PerfectNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;


int ReadN(string Message) {
    int N;
    cout << Message << endl;

    cin >> N;
    return N;


}

bool IsPerfectNumber(int Number) {
    int sum=0;
    for (int i = 1; i < Number; i++)
    {
        if (Number%i==0)
        {
            sum += i;
        }
    }
    return sum == Number;
    }

void PrintResultNumber(int Number) {

    if (IsPerfectNumber(Number)) {
        cout << Number << " :The Number is perfect :\n";

    }
    else {
        cout << Number << " :The Number is Not perfect :\n";



    }
}
int main() {
    PrintResultNumber(ReadN("Enter The Number"));

}
