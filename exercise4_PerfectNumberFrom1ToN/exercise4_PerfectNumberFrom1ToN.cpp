// exercise4_PerfectNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            sum += i;
        }
    }
    return sum == Number;
}

void PrintResultNumberFrom1ToN(int Number) {

    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i)) {
            cout << i << endl;
        }
        
    }



}
int main() {
    PrintResultNumberFrom1ToN(ReadN("Enter The Number"));

}
