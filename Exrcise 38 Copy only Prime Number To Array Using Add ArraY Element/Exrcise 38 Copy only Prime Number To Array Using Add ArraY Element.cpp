// Exrcise 38 Copy only Prime Number To Array Using Add ArraY Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum PrimeNotPrime
{
	prime = 1, NotPrime = 2
};

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

void FillArrayWithRsndomNumber(int Array[1000], int& ArrayLength) {
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
void AddArrayElement(int Number, int Array[100], int& ArrayLength) {

	ArrayLength++;

	Array[ArrayLength - 1] = Number;

}

void CopyArrayUsingAddArrayElement(int ArraySource[100], int ArrayDistanaion[100], int ArrayLength, int& arrDestinationLength) {

	for (int i = 0; i < ArrayLength; i++) {
		AddArrayElement(ArraySource[i], ArrayDistanaion, arrDestinationLength);

	}

}

void CopyOnlyPrimeNumberToArrayUsingAddArraYElement(int arrSource[1000], int arrDestination[100], int ArrayLength, int& ArrayLength2) {
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
				AddArrayElement(arrSource[i], arrDestination, ArrayLength2);
			}

		}


	}

}

int main()
{
	int ArrayLength=0, ArrayLength2=0;
	int Array[1000];
	int Array2[1000];

	srand((unsigned)time(NULL));
	FillArrayWithRsndomNumber(Array, ArrayLength);
	PrintArray(Array, ArrayLength);

	CopyOnlyPrimeNumberToArrayUsingAddArraYElement(Array, Array2, ArrayLength, ArrayLength2);

	/*
	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);
	*/
	cout << "\nArray 2 Only Prim elements after copy:\n";
	PrintArray(Array2, ArrayLength2);

}
