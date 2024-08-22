// Exercise 42 Polindrom Number in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void FillArray(int Array[100], int& ArrayLength) {

	Array[0] = 10;
	Array[1] = 10;
	Array[2] = 80;
	Array[3] = 30;
	Array[4] = 0;

}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements

	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}

bool ChackPolindromArray(int arr[100], int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] != arr[ArrayLength -i - 1 ])
		{
			return false;

		}
	}
	return true;

}

int main() {
	int arr[100], Length = 5;     
	FillArray(arr, Length);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, Length);

	if (ChackPolindromArray(arr, Length))
	{
		cout << "Yes , The Array is Polindrom";
	}
	else
		cout << "No , The Array is Not Polindrom";




}








