// Exercise 30 Sum Of Two Array To A Third One.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void FillArrayWithRsndomNumber(int Array[100], int ArrayLength) {
	int i;

	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1, 100);

	}

}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\Random File Array : \n";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "] :" << Array[i] << "\n";
	}
	cout << endl;
}

void SumOfTwoArrayToAThirdOne(int arrOne[100], int arrTwo[100],int SumReasultArray3[100], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		SumReasultArray3[i] = arrOne[i] + arrTwo[i];
	}
}

int main()
{
	int ArrayLength = ReadPositiveNumber("Please Enter Array Size");
	int Array[100];
	int Array2[100];
	int Array3[100];

	

	srand((unsigned)time(NULL));
	FillArrayWithRsndomNumber(Array, ArrayLength);

	FillArrayWithRsndomNumber(Array2, ArrayLength);

	SumOfTwoArrayToAThirdOne(Array, Array2, Array3, ArrayLength);

	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);

	cout << "\nArray 2 Element:\n";
	PrintArray(Array2, ArrayLength);

	cout << "\n 	Sum Of Two Array To A Third One The Third Array : ";

	PrintArray(Array3, ArrayLength);
}