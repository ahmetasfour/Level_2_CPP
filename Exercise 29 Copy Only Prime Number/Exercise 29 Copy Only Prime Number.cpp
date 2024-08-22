// Exercise 29 Copy Only Prime Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Array Size:
input : 43

output: 
Random File Array : 67  79      22      15      53      52      24      53      43      45      55      55      51     87       82      98      45      18      72      75      95      79      60      28      90      25      20      76     73       2       88      37      76      49      100     26      4       45      72      85      21      41      40

The ELement of Prime Array : 10

Array 2 Only Prim elements after copy:
Random File Array : 67  79      53      53      43      79      73      2       37      4*/



#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum PrimeNotPrime
{prime = 1, NotPrime = 2};

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}
PrimeNotPrime CeckPrime(int num) {
	int M = round(num / 2);
	for (int i = 2; i < M; i++)
	{
		if (num % i == 0)
		{
			return PrimeNotPrime::NotPrime;
		}

	}
	return PrimeNotPrime::prime;


}

void FillArrayWithRsndomNumber(int Array[1000], int& ArrayLength ) {
	int i;
	cout << "Array Size: " << endl;
	cin >> ArrayLength;
	
	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1, 100);

	}

}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "Random File Array : ";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << Array[i] << "\t";
	}
	cout << endl;
}

void CopyOnlyPrimeNumberToArray(int arrSource[1000], int arrDestination[100], int ArrayLength , int& ArrayLength2) {
	int count = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (CeckPrime(arrSource[i]) == PrimeNotPrime::prime)
		{
			if (arrSource[i] == 1)
			{
				PrimeNotPrime::NotPrime;
			}
			else {
				arrDestination[count] = arrSource[i];
				count++;
			}
				
		}


	}
	ArrayLength2 = --count;
	cout <<"\nThe ELement of Prime Array : " << count<< "\n";
}

int main()
{
	int ArrayLength ,ArrayLength2;
	int Array[1000];
	int Array2[1000];

	srand((unsigned)time(NULL));
	FillArrayWithRsndomNumber(Array, ArrayLength);
	PrintArray(Array, ArrayLength);

	CopyOnlyPrimeNumberToArray(Array, Array2, ArrayLength , ArrayLength2);

	/*
	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);
	*/
	cout << "\nArray 2 Only Prim elements after copy:\n";
	PrintArray(Array2, ArrayLength2);
	
}











