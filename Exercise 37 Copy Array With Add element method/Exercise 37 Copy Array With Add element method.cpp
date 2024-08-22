// Exercise 37 Copy Array With Add element method.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


void AddArrayElement(int Number, int Array[100], int& ArrayLength) {

	ArrayLength++;

	Array[ArrayLength - 1] = Number;

}

void CopyArrayUsingAddArrayElement(int ArraySource[100], int ArrayDistanaion[100], int ArrayLength , int& arrDestinationLength) {

	for (int i = 0; i < ArrayLength; i++) {
		AddArrayElement(ArraySource[i], ArrayDistanaion , arrDestinationLength);
		
	}

}

int main()
{
	int ArrayLength=0 , ArrayLength2=0;
	int Array[100];
	int Array2[100];

	srand((unsigned)time(NULL));
	FillArrayWithRsndomNumber(Array, ArrayLength);
	PrintArray(Array, ArrayLength);

	CopyArrayUsingAddArrayElement(Array, Array2, ArrayLength, ArrayLength2);

	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(Array2, ArrayLength2);

}