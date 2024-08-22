// Exercise3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1 to N prime number



#include <iostream>
using namespace std;


int ReadN() {
    int N;
    cout << "enter N number for list prime number 1 to N" << endl;

        cin >> N;
        return N;


    }

bool IsPrime(int N) {

    if (N <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= N / 2; i++) {
        if (N% i == 0) {
            return false;
        }
    }
    return true;

}
void PrintPrime(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (IsPrime(i)) {
            cout << i << endl;
            sum += i;
        }

    }
    cout << sum << endl;
     
}
    int main() 
    {

        int x = ReadN();
        PrintPrime(x);
    }


    /*
#include <iostream>
using namespace std;

enum PrimeNotPrime
{prime=1 , NotPrime=2};

float ReadPositiveNumber(string Message){
    int num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num < 0);
    return num;
}
PrimeNotPrime CeckPrime(int num) {
    int M = round(num / 2);
    for (int i = 2; i < M; i++)
    {
        if (num%i==0)
        {
            return PrimeNotPrime::NotPrime;
        }

    }
    return PrimeNotPrime::prime;


}
void PrintNumberType(int num) {

    for (int i = 1; i <= num; i++)
    {
        if (CeckPrime(num)==PrimeNotPrime::prime) {
            cout << i << endl;
            sum += i;
        }

    }
 }
int main()
{
    PrintNumberType(ReadPositiveNumber("Enter The Number: "));
    return 0;
}*/