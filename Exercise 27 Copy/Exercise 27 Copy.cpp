// Exercise 27 Copy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void FillArrayWithRsndomNumber(int Array[100], int& ArrayLength) {
	int i;
	cout << "Array Size: " << endl;
	cin >> ArrayLength;
	;
	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1, 100);

	}

}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\Random File Array : \n";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}

void CopyArray(int arrSource[100], int arrDestination[100], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		arrDestination[i] = arrSource[i];
	}
}

int main()
{
	int ArrayLength;
	int Array[100];
	int Array2[100];

	srand((unsigned)time(NULL));
	FillArrayWithRsndomNumber(Array, ArrayLength);
	PrintArray(Array, ArrayLength);

	CopyArray(Array, Array2, ArrayLength);

	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);

	cout << "\nArray 2 elements after copy:\n";     
	PrintArray(Array2, ArrayLength);

}