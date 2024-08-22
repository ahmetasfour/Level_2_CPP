// Exercise 24 Fin Max Random Number in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void ReadArray(int Array[100], int& ArrayLength) {
	int i;
	cout << "Array Size: " << endl;
	cin >> ArrayLength;
	;
	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1, 100);

	}

}

void display_array(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\Random File Array : \n";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}
void FindMaxRandomNumberinArray(int Array[100], int ArrayLength) {
	cout << "The max element in Array is : \n";
	int i = 0;
	for (i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		if (Array[i]< Array[i+1])
		{
			Array[i] = Array[i + 1];
		}
		else
			Array[i + 1] = Array[i];
	}
	cout << Array[i] << endl;

}

int main()
{
	int ArrayLength;
	int Array[100];
	srand((unsigned)time(NULL));
	ReadArray(Array, ArrayLength);
	display_array(Array, ArrayLength);
	FindMaxRandomNumberinArray(Array, ArrayLength);
}