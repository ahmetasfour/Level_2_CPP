// Exercise 31 Shufle Array Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Swap(int& A, int& B) {

	int Temp = A;
	A = B;
	B = Temp;


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

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void FillArrayFrom1ToN(int Array[100], int ArrayLength) {

	int Number=0;
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = ++Number;
	}

}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\nRandom File Array : ";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << Array[i] << "  ";
	}
}

void ShuffleArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements

	for (int i = 0; i < ArrayLength; i++)
	{
		Swap(Array[RandomNumbers(1, ArrayLength) - 1], Array[RandomNumbers(1, ArrayLength) - 1]);
	}
}

int main()
{
	int ArrayLength = ReadPositiveNumber("Please Enter Array Size");
	int Array[100];

	srand((unsigned)time(NULL));
	FillArrayFrom1ToN(Array, ArrayLength);
	PrintArray(Array, ArrayLength);
	ShuffleArray(Array, ArrayLength);
	PrintArray(Array, ArrayLength);

}